/*
 * rui.c
 *
 *  Created on: 17.06.2016
 *      Author: thorsten
 */

#include "rui.h"

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)>(b))?(b):(a))

#ifdef _RM57Lx_

#include "lwip/sys.h"

#define close(fd) udp_remove(fd)
void RUI_capture(void *arg, struct udp_pcb *pcb, struct pbuf *p, ip_addr_t *addr, u16_t port);

#endif

typedef struct rui_context {
	rawUdpIn *rui;
	int ruis;
	int defaultFailureCredits;
	int failureCredits;
	int64_t readMask;
	int64_t answMask;
	long timeoutMS;
	int idleInterval;
	rui_timeout notify;
	rui_puts puts;
	bool sparsePing;
#ifdef WINDOWS
	LARGE_INTEGER lastTime;
#elif defined(_RM57Lx_)
	bool triggered;
#else
	struct timeval lastTime;
#endif
} rui_context;


static rui_context rctx; /* singleton paradigm */

/*
 * error - wrapper for perror
 */
void RUI_error(char *msg) {
	char s[256];
	snprintf(s, sizeof(s), "%s (errors left: %d/%d)", msg, --rctx.failureCredits, rctx.defaultFailureCredits);
	if (rctx.puts) rctx.puts(s);
#ifndef _RM57Lx_
	else perror(s);
#endif
}

int64_t RUI_getCurrentMask() {
	return rctx.readMask;
}

bool RUI_init(rawUdpIn *rui, const uint16_t *lport, const uint16_t *dport, int ruis, bool localhost, bool sparsePing, int failureCredits, int timeout, bool status, rui_timeout notify, rui_puts dputs) {
	rctx.defaultFailureCredits = failureCredits;
	rctx.failureCredits = rctx.defaultFailureCredits;
	rctx.readMask = 0;
	rctx.answMask = 0;
	rctx.rui = rui;
	rctx.ruis = ruis;
	rctx.timeoutMS = timeout;
	if (status) {
		rctx.idleInterval = 8; //2 <- 100
		while (timeout && rctx.idleInterval) { timeout >>= 1; rctx.idleInterval--; }
	} else
		rctx.idleInterval = -1;
	rctx.notify = notify;
	rctx.sparsePing = sparsePing;
	rctx.puts = dputs;

	if (!rctx.failureCredits || !rui || !ruis || !lport) { rctx.ruis = 0; return false; }
#ifdef WINDOWS
	QueryPerformanceCounter(&rctx.lastTime);

	// Initialize Winsock
	WSADATA wsaData;
	int iResult = WSAStartup(WINSOCK_VERSION, &wsaData);
	if (iResult != 0) {
	    RUI_error("WSAStartup failed: %d\n");
	    return false;
	}
#elif defined(_RM57Lx_)

#else
	if (gettimeofday(&rctx.lastTime, NULL)) { rctx.ruis = 0; return false; }
#endif
	memset(rui, 0, sizeof(rawUdpIn)*ruis);
	char em[32] = "(00) ";
	for (int i=0; (i<rctx.ruis)&&rctx.failureCredits; i++) {

		rctx.rui[i].initiative = dport[i];

#ifdef _RM57Lx_
#if IP_SOF_BROADCAST || SO_REUSE
#error setting options BROADCAST and REUSE is not implemented
#endif
		rctx.rui[i].fd = udp_new();
	    udp_recv(rctx.rui[i].fd, RUI_capture, (void *)i);
	    udp_bind(rctx.rui[i].fd, IP_ADDR_ANY, lport[i]);

#else
		rctx.rui[i].fd = socket(AF_INET, SOCK_DGRAM, 0);
		if (rctx.rui[i].fd < 0) strcpy(em+4, "ERROR opening socket"),RUI_error(em);
		int optval = 1;
		setsockopt(rctx.rui[i].fd, SOL_SOCKET, SO_REUSEADDR, (const void *)&optval , sizeof(int));
		if (rctx.rui[i].initiative)
			setsockopt(rctx.rui[i].fd, SOL_SOCKET, SO_BROADCAST, (const void *)&optval , sizeof(int));
		struct sockaddr_in InAddr = {
				.sin_family = AF_INET,
				.sin_port = htons(lport[i]),
				.sin_addr = { .s_addr = localhost ? htonl(INADDR_LOOPBACK) :  htonl(INADDR_ANY) }
		};
		if (bind(rctx.rui[i].fd, (struct sockaddr *) &InAddr, sizeof(struct sockaddr_in)) < 0) strcpy(em+5, "binding Listener"),RUI_error(em);
#endif
		if (++em[2] == ('0'+10)) em[1]++, em[2]-=10;
	}
	return true;
}

void RUI_fill(int i, bool push, void *buf, ssize_t len) {
	if (i < rctx.ruis) {
		if ((push || RUI_wasReadable(i)) && (RUI_isKnown(i) || rctx.rui[i].initiative)) {
			if ((!buf && len > 0) || (!RUI_isKnown(i) && rctx.sparsePing)) len = 0;
			rui_send(i, buf, len);
		}
	}
}

bool RUI_isReadable(int i) {
	return (i < rctx.ruis && (rctx.readMask & (1 << i)));
}

bool RUI_wasReadable(int i) {
	return (i < rctx.ruis && (rctx.answMask & (1 << i)));
}

ssize_t RUI_get(int i, void *buf, ssize_t len) {
	ssize_t l = -1;
	if (RUI_isReadable(i) && len >= 0) {

#ifdef _RM57Lx_
	    SYS_ARCH_DECL_PROTECT(old_level);
	    SYS_ARCH_PROTECT(old_level);

		if (rctx.rui[i].p) {
			struct pbuf *p = rctx.rui[i].p;
			rctx.rui[i].p = 0;
			rctx.rui[i].sport = rctx.rui[i].pport;
			rctx.rui[i].saddr = rctx.rui[i].paddr;
		    SYS_ARCH_UNPROTECT(old_level);

			l = MIN(p->tot_len, len);
			pbuf_copy_partial(p, buf, l, 0);

			pbuf_free(p);
		} else
		    SYS_ARCH_UNPROTECT(old_level);

#else

		struct sockaddr_in s_in;
		uint32_t lAddr = sizeof(s_in);
		l = recvfrom(rctx.rui[i].fd, buf, len, 0, (struct sockaddr *)&s_in, &lAddr);
		if (l >= 0) {
			rctx.rui[i].saddr.addr = ntohl(s_in.sin_addr.s_addr);
			rctx.rui[i].sport = ntohs(s_in.sin_port);

/*			if (verbose && slen) {
				char ipStr[INET6_ADDRSTRLEN];
				if (ipStr != inet_ntop(AF_INET, &s_in.sin_addr, ipStr, sizeof(ipStr))) RUI_error("inet_ntop");
				snprintf(verbose, slen, "readRaw(%ld) from %s:%d to [%d/%d]", l, ipStr, rctx.rui[r].sport, r, rctx.ruis);
			}
*/
		} else
			RUI_error("recv short message");

#endif
		rctx.readMask &= ~(1 << i);

	}
	return l;
}

bool RUI_isRunnable() {
	bool ret = (rctx.ruis && rctx.failureCredits > 0);
	if (!ret) RUI_close();
	return ret;
}

bool RUI_isKnown(int i) {
	return (i < rctx.ruis) && rctx.rui[i].saddr.addr;
}

void RUI_close() {
	for (int i=0; i<rctx.ruis; i++)
		if (rctx.rui[i].fd >= 0)
			close(rctx.rui[i].fd);
	rctx.ruis = 0;
}

#ifdef _RM57Lx_
void RUI_capture(void *arg, struct udp_pcb *pcb, struct pbuf *p, ip_addr_t *addr, u16_t port) {
	int r = (int)arg;

	SYS_ARCH_DECL_PROTECT(old_level);
    SYS_ARCH_PROTECT(old_level);
		struct pbuf *old = rctx.rui[r].p;
		rctx.rui[r].p = p;
		rctx.rui[r].pport = port;
		rctx.rui[r].paddr.addr = addr->addr;
		rctx.rui[r].rxCnt++;
		rctx.readMask |= 1 << r;
    SYS_ARCH_UNPROTECT(old_level);
	if (old) pbuf_free(old);
}
#endif

void rui_send(int i, void *buf, ssize_t len) {
	if (len >= 0) {
#ifdef _RM57Lx_
		struct pbuf *p = pbuf_alloc(PBUF_TRANSPORT, len, PBUF_RAM);
		if (!p) return;
		if (buf) memcpy(p->payload, buf, len);
		if (!rctx.rui[i].saddr.addr && rctx.rui[i].initiative) {
			ip_addr_t bca = { .addr = INADDR_BROADCAST };
			udp_sendto(rctx.rui[i].fd, p, &bca, rctx.rui[i].initiative);
		} else
			udp_sendto(rctx.rui[i].fd, p, &rctx.rui[i].saddr, rctx.rui[i].sport);
		pbuf_free(p); // release from user-space

#else
		int flags = 0;
		struct sockaddr_in s_in = { .sin_family = AF_INET };
		if (!rctx.rui[i].saddr.addr && rctx.rui[i].initiative) {
			s_in.sin_addr.s_addr = htonl(INADDR_BROADCAST);
			s_in.sin_port =        htons(rctx.rui[i].initiative);
		} else {
			s_in.sin_addr.s_addr = htonl(rctx.rui[i].saddr.addr);
			s_in.sin_port =        htons(rctx.rui[i].sport);
			flags = MSG_CONFIRM;
		}

		if (s_in.sin_addr.s_addr)
			if (sendto(rctx.rui[i].fd, buf, len, flags, (struct sockaddr *) &s_in, sizeof(s_in)) < 0)
				RUI_error("sendto failed on sendRaw");
#endif
	}
}

void RUI_status() {
	if (rctx.idleInterval < 0) return;
	static const char rotc[] = {'-','\\','|','/'};
	static int tick = 0;
	tick++;
	char out[16*2+1+3];
	memset(out, '\'', sizeof(out));
	out[rctx.ruis*2+2] = '\r';
	out[rctx.ruis*2+3] = 0;
	memcpy(out, (tick & (1<<rctx.idleInterval))?"*  ":" * ", 3);
	for(int i=0;i<MIN(rctx.ruis,16); i++) out[3+i*2] = rotc[rctx.rui[i].rxCnt&3];

	if (rctx.puts) {
		rctx.puts(out);
	} else {
#ifndef _RM57Lx_
		fputs(out, stdout);
		fflush(stdout);
#endif
	}
}

#ifdef _RM57Lx_

void RUI_trigger() {
	SYS_ARCH_DECL_PROTECT(old_level);
	SYS_ARCH_PROTECT(old_level);

	rctx.triggered = true;
	SYS_ARCH_UNPROTECT(old_level);

}

bool RUI_poll() {
	SYS_ARCH_DECL_PROTECT(old_level);
	SYS_ARCH_PROTECT(old_level);

	if (rctx.triggered) {
		rctx.triggered = false;
		rctx.answMask = rctx.readMask;
		if (!rctx.readMask) {
			SYS_ARCH_UNPROTECT(old_level);
			if (rctx.notify) rctx.notify();
		} else {
			SYS_ARCH_UNPROTECT(old_level);
			rctx.failureCredits = rctx.defaultFailureCredits;
		}

		// MODEL_run();

		RUI_status();
		return true;
	} else {
		SYS_ARCH_UNPROTECT(old_level);
		return false;
	}
}

#else

void RUI_delay(int tMS) {
#ifdef WINDOWS
	long tdiff = 0-rctx.lastTime.QuadPart;
	QueryPerformanceCounter(&rctx.lastTime);
	tdiff += rctx.lastTime.QuadPart;
	LARGE_INTEGER Frequency;
	QueryPerformanceFrequency(&Frequency);
	tdiff *= 1000000;
	tdiff /= Frequency.QuadPart;
	tdiff = 1000*tMS - tdiff;
	if (tdiff > 0) {
		usleep(tdiff);
		rctx.lastTime.QuadPart += tdiff;
//		QueryPerformanceCounter(&rctx.lastTime);
	}

#else

	long tdiff = 0-(rctx.lastTime.tv_sec*1000000L+rctx.lastTime.tv_usec);
	gettimeofday(&rctx.lastTime, NULL);
	tdiff += (rctx.lastTime.tv_sec*1000000L+rctx.lastTime.tv_usec);
	tdiff = 1000*tMS - tdiff;
	if (tdiff > 0) {
		usleep(tdiff);
		rctx.lastTime.tv_usec += tdiff;
//		gettimeofday(&rctx.lastTime, NULL);
	}
#endif
}

bool RUI_poll() {

	RUI_delay(rctx.timeoutMS);

	fd_set rfds;
	int nfds = 0;
	FD_ZERO(&rfds);

	for (int i=0; i<rctx.ruis; i++) {
		FD_SET(rctx.rui[i].fd, &rfds);
		if (rctx.rui[i].fd > nfds) nfds = rctx.rui[i].fd+1;
	}

	rctx.readMask = 0;
	errno = 0;
	struct timeval tv = {0, 0};
	if (select(nfds, &rfds, NULL, NULL, &tv) < 0) {
		if ((errno != EINTR) || (errno != EAGAIN)) {
			RUI_error("select failed");
			return false;
		}
	} else {
		for (int i=0; i<rctx.ruis; i++) if (FD_ISSET(rctx.rui[i].fd, &rfds)) {
			rctx.readMask |= 1 << i;
			rctx.rui[i].rxCnt++;
		}
		rctx.answMask = rctx.readMask;
		if (!rctx.readMask) {
			if (rctx.notify) rctx.notify();
		} else
			rctx.failureCredits = rctx.defaultFailureCredits;
	}
	RUI_status();
	return true;

}
#endif
