/*
 * rui.c
 *
 *  Created on: 17.06.2016
 *      Author: thorsten
 */

#include "rui.h"

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)>(b))?(b):(a))

typedef struct rui_context {
	rawUdpIn *rui;
	int ruis;
	int defaultFailureCredits;
	int failureCredits;
	int64_t readMask;
	long timeoutMS;
	int idleInterval;
	rui_timeout notify;
	rui_puts puts;
	bool sparsePing;
#ifdef WINDOWS
	LARGE_INTEGER lastTime;
#elif defined(_RM57Lx_)

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
	char em[32] = "(0) ";
	for (int i=0; (i<rctx.ruis)&&rctx.failureCredits; i++) {

		rctx.rui[i].addr.sin_family = AF_INET;
		rctx.rui[i].fd = socket(rctx.rui[i].addr.sin_family, SOCK_DGRAM, 0);
		if (rctx.rui[i].fd < 0) strcpy(em+4, "ERROR opening socket"),RUI_error(em);
		rctx.rui[i].initiative = htons(dport[i]);
		int optval = 1;
		setsockopt(rctx.rui[i].fd, SOL_SOCKET, SO_REUSEADDR, (const void *)&optval , sizeof(int));
		if (rctx.rui[i].initiative)
			setsockopt(rctx.rui[i].fd, SOL_SOCKET, SO_BROADCAST, (const void *)&optval , sizeof(int));

		struct sockaddr_in InAddr = {
				.sin_family = rctx.rui[i].addr.sin_family,
				.sin_port = htons(lport[i]),
				.sin_addr = { .s_addr = localhost ? htonl(INADDR_LOOPBACK) :  htonl(INADDR_ANY) }
		};
		if (bind(rctx.rui[i].fd, (struct sockaddr *) &InAddr, sizeof(struct sockaddr_in)) < 0) strcpy(em+4, "binding Listener"),RUI_error(em);
		RUI_invalidate(i);
		em[1]++;
	}
	return true;
}

void RUI_invalidate(int i) {
	if (i < rctx.ruis) rctx.rui[i].length = -1;
}

void RUI_fill(int i, bool push, void *buf, ssize_t len) {
	if (i < rctx.ruis) {
		if ((push || RUI_isReadable(i)) && (RUI_isKnown(i) || rctx.rui[i].initiative)) {
			if (!RUI_isKnown(i) && rctx.sparsePing) len = 0;
			rctx.rui[i].length = MIN(sizeof(rctx.rui[i].buf),len);
			if (rctx.rui[i].length > 0) {
				if (buf) memcpy(rctx.rui[i].buf, buf, rctx.rui[i].length);
				else RUI_invalidate(i);
			}
		} else RUI_invalidate(i);
	}
}

void RUI_fake(int i, void *buf, ssize_t len, uint16_t port) {
	if (i < rctx.ruis) {
		rctx.rui[i].addr.sin_port = htons(port);
		rctx.rui[i].addr.sin_addr.s_addr = htonl(INADDR_BROADCAST);
		rctx.readMask |= (1 << i);
		RUI_fill(i, true, buf, len);
	}
}

bool RUI_isReadable(int i) {
	return (i < rctx.ruis && (rctx.readMask & (1 << i)));
}

ssize_t RUI_get(int i, void *buf, ssize_t len) {
	size_t l = -1;
	if (RUI_isReadable(i) && len >= 0) {
		l = MIN(rctx.rui[i].length, len);
		memcpy(buf, rctx.rui[i].buf, l);
	}
	return l;
}

bool RUI_isRunnable() {
	bool ret = (rctx.ruis && rctx.failureCredits > 0);
	if (!ret) RUI_close();
	return ret;
}

bool RUI_isKnown(int i) {
	return (i < rctx.ruis) && (!!rctx.rui[i].addr.sin_addr.s_addr);
}

void RUI_close() {
	for (int i=0; i<rctx.ruis; i++)
		if (rctx.rui[i].fd >= 0)
			close(rctx.rui[i].fd);
	rctx.ruis = 0;
}

int64_t RUI_read(char *verbose, ssize_t len) {
	for(int r=0; r<rctx.ruis; r++) if (rctx.readMask & (1 << r)) {
		rawUdpIn ruil;
		socklen_t lAddr = sizeof(struct sockaddr_in);
		ruil.length = recvfrom(rctx.rui[r].fd, (void *)ruil.buf, sizeof(ruil.buf), 0, (struct sockaddr *)&ruil.addr, &lAddr);
		if (ruil.length >= 0) {
			rctx.rui[r].rxCnt++;
			char ipStr[INET6_ADDRSTRLEN];
			if (ipStr != inet_ntop(ruil.addr.sin_family, &ruil.addr.sin_addr, ipStr, sizeof(ipStr))) RUI_error("inet_ntop");

			rctx.rui[r].addr = ruil.addr;
			rctx.rui[r].length = ruil.length;
			memcpy(rctx.rui[r].buf, ruil.buf, ruil.length);

			if (verbose && len)
				snprintf(verbose, len, "readRaw(%ld) from %s:%d to [%d/%d]", ruil.length, ipStr, ntohs(ruil.addr.sin_port), r, rctx.ruis);

		} else {
			rctx.readMask &= ~(1 << r);
			RUI_error("recv short message");
		}
	}
	return rctx.readMask;
}

bool RUI_send() {
	for (int n=0; n<rctx.ruis; n++)
		if (rctx.rui[n].length >= 0) {
			int flags = 0;
			if (!rctx.rui[n].addr.sin_addr.s_addr && rctx.rui[n].initiative) {
				rctx.rui[n].addr.sin_addr.s_addr = htonl(INADDR_BROADCAST);
				rctx.rui[n].addr.sin_port = rctx.rui[n].initiative;
			}
			else flags = MSG_CONFIRM;

			int l=0;
			if (rctx.rui[n].addr.sin_addr.s_addr) {
				l = sendto(rctx.rui[n].fd, (void *)rctx.rui[n].buf, rctx.rui[n].length, flags, (struct sockaddr *) &rctx.rui[n].addr, sizeof(rctx.rui[n].addr));
				if (rctx.rui[n].addr.sin_addr.s_addr == htonl(INADDR_BROADCAST)) rctx.rui[n].addr.sin_addr.s_addr = 0;
			}

			rctx.rui[n].length = -1; // make same buffer unsendable
			if (l < 0) {
				RUI_error("sendto failed on sendRaw");
				return false;
			}
		}
	return true;
}

void RUI_status() {
	if (rctx.idleInterval < 0) return;
	static const char rotc[] = {'-','\\','|','/'};
	static int tick = 0;
	tick++;
	char out[rctx.ruis*2+1+3];
	memset(out, '\'', sizeof(out));
	out[sizeof(out)-2] = '\r';
	out[sizeof(out)-1] = 0;
	memcpy(out, (tick & (1<<rctx.idleInterval))?"*  ":" * ", 3);
	for(int i=0;i<rctx.ruis; i++) out[3+i*2] = rotc[rctx.rui[i].rxCnt&3];

	if (rctx.puts) {
		rctx.puts(out);
	} else {
#ifndef _RM57Lx_
		fputs(out, stdout);
		fflush(stdout);
#endif
	}
}

bool RUI_poll() {
	static int pollret = 0;
	RUI_send();
	RUI_status();

	fd_set rfds;
	int nfds = 0;
	FD_ZERO(&rfds);
	long tdiff = 0;

#ifdef WINDOWS
	tdiff = -rctx.lastTime.QuadPart;
	QueryPerformanceCounter(&rctx.lastTime);
	tdiff += rctx.lastTime.QuadPart;
	LARGE_INTEGER Frequency;
	QueryPerformanceFrequency(&Frequency);
	tdiff *= 1000000;
	tdiff /= Frequency.QuadPart;
	tdiff = 1000*rctx.timeoutMS - tdiff;
	if (tdiff > 0) {
		usleep(tdiff);
		rctx.lastTime.QuadPart += tdiff;
//		QueryPerformanceCounter(&rctx.lastTime);
	}
#elif defined (_RM57Lx_)

#else

	tdiff = -(rctx.lastTime.tv_sec*1000000L+rctx.lastTime.tv_usec);
	gettimeofday(&rctx.lastTime, NULL);
	tdiff += (rctx.lastTime.tv_sec*1000000L+rctx.lastTime.tv_usec);
	tdiff = 1000*rctx.timeoutMS - tdiff;
	if (tdiff > 0) {
		usleep(tdiff);
		rctx.lastTime.tv_usec += tdiff;
//		gettimeofday(&rctx.lastTime, NULL);
	}
#endif

	for (int i=0; i<rctx.ruis; i++) {
		FD_SET(rctx.rui[i].fd, &rfds);
		if (rctx.rui[i].fd > nfds) nfds = rctx.rui[i].fd+1;
	}

	errno = 0;
	struct timeval tv = {0, 0};
	rctx.readMask = 0;
	pollret = select(nfds, &rfds, NULL, NULL, &tv);  // check all sockets
	switch (pollret) {
		case -1:
			if ((errno != EINTR) || (errno != EAGAIN)) {
				RUI_error("select failed");
				return false;
			} else
				break;
		case 0: /* that's a timeout */
			if (rctx.notify) rctx.notify();
			break;
		default:
			for (int i=0; i<rctx.ruis; i++) if (FD_ISSET(rctx.rui[i].fd, &rfds)) rctx.readMask |= 1 << i;
			if (!RUI_read(0/*str*/, 0 /*sizeof(str)*/))
				RUI_error("nothing read. Probably an OUT-socket died");
			else
				rctx.failureCredits = rctx.defaultFailureCredits;
			break;
	}
	return true;

}
