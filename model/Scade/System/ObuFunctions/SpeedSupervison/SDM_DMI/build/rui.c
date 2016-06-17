/*
 * rui.c
 *
 *  Created on: 17.06.2016
 *      Author: thorsten
 */

#include "rui.h"

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)>(b))?(b):(a))
#if defined (WIN32)
static inline int poll( struct pollfd *pfd, int nfds, int timeout) { return WSAPoll ( pfd, nfds, timeout ); }
#endif

typedef struct rui_context {
	struct pollfd *sockets;
	rawUdpIn *rui;
	nfds_t ruis;
	int defaultFailureCredits;
	int failureCredits;
	int64_t readMask;
	long timeoutMS;
	int idleInterval;
	rui_timeout notify;
} rui_context;


static rui_context rctx; /* singleton paradigm */

/*
 * error - wrapper for perror
 */
void RUI_error(char *msg) {
	char s[256];
	snprintf(s, sizeof(s), "%s (errors left: %d/%d)", msg, --rctx.failureCredits, rctx.defaultFailureCredits);
	perror(s);
}

int64_t RUI_getCurrentMask() {
	return rctx.readMask;
}

bool RUI_init(pollfd_t *sockets, rawUdpIn *rui, const uint16_t *lport, nfds_t ruis, bool localhost, int failureCredits, int timeout, bool status, rui_timeout notify) {
	rctx.defaultFailureCredits = failureCredits;
	rctx.failureCredits = rctx.defaultFailureCredits;
	rctx.readMask = 0;
	rctx.rui = rui;
	rctx.ruis = ruis;
	rctx.sockets = sockets;
	rctx.timeoutMS = timeout;
	if (status) {
		rctx.idleInterval = 8; //2 <- 100
		while (timeout && rctx.idleInterval) { timeout >>= 1; rctx.idleInterval--; }
	} else
		rctx.idleInterval = -1;
	rctx.notify = notify;

	if (!rctx.failureCredits || !rui || !sockets || !ruis || !lport) { rctx.ruis = 0; return false; }
#ifdef WINDOWS
	// Initialize Winsock
	WSADATA wsaData;
	int iResult = WSAStartup(WINSOCK_VERSION, &wsaData);
	if (iResult != 0) {
	    RUI_error("WSAStartup failed: %d\n");
	    return false;
	}
#endif
	memset(rui, 0, sizeof(rawUdpIn)*ruis);
	char em[32] = "(0) ";
	for (nfds_t i=0; (i<rctx.ruis)&&rctx.failureCredits; i++) {

		rctx.rui[i].addr.sin_family = AF_INET;
		rctx.sockets[i].fd = socket(rctx.rui[i].addr.sin_family, SOCK_DGRAM, 0);
		if (rctx.sockets[i].fd < 0) strcpy(em+4, "ERROR opening socket"),RUI_error(em);
		int optval = 1;
		setsockopt(rctx.sockets[i].fd, SOL_SOCKET, SO_REUSEADDR, (const void *)&optval , sizeof(int));
		setsockopt(rctx.sockets[i].fd, SOL_SOCKET, SO_BROADCAST, (const void *)&optval , sizeof(int));

		struct sockaddr_in InAddr = {
				.sin_family = rctx.rui[i].addr.sin_family,
				.sin_port = htons(lport[i]),
				.sin_addr = { .s_addr = localhost ? htonl(INADDR_LOOPBACK) :  htonl(INADDR_ANY) }
		};
		if (bind(rctx.sockets[i].fd, (struct sockaddr *) &InAddr, sizeof(struct sockaddr_in)) < 0) strcpy(em+4, "binding Listener"),RUI_error(em);
		RUI_invalidate(i);
		em[1]++;
	}
	return true;
}

void RUI_invalidate(int i) {
	if (i < rctx.ruis) rctx.rui[i].length = -1;
}

void RUI_fill(int i, bool send, void *buf, size_t len) {
	if (i < rctx.ruis) {
		if (send) {
			rctx.rui[i].length = MIN(sizeof(rctx.rui[i].buf),len);
			if (rctx.rui[i].length > 0) {
				if (buf) memcpy(rctx.rui[i].buf, buf, rctx.rui[i].length);
				else RUI_invalidate(i);
			}
		} else RUI_invalidate(i);
	}
}

void RUI_fake(int i, void *buf, size_t len, uint16_t port) {
	if (i < rctx.ruis) {
		rctx.rui[i].addr.sin_port = htons(port);
		RUI_fill(i, true, buf, len);
		rctx.readMask |= (1 << i);
	}
}

bool RUI_isReadable(int i) {
	return (i < rctx.ruis && (rctx.readMask & (1 << i)));
}

size_t RUI_get(int i, void *buf, size_t len) {
	size_t l = 0;
	if (RUI_isReadable(i)) {
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
	for (nfds_t i=0; i<rctx.ruis; i++)
		if (rctx.sockets[i].fd >= 0)
			close(rctx.sockets[i].fd);
	rctx.ruis = 0;
}

int64_t RUI_read(char *verbose, int len) {
	int64_t ret = 0;
	for(int r=0; r<rctx.ruis; r++) if (rctx.sockets[r].revents & POLLIN) {
		rawUdpIn ruil;
		socklen_t lAddr = sizeof(struct sockaddr_in);
		ruil.length = recvfrom(rctx.sockets[r].fd, (void *)ruil.buf, sizeof(ruil.buf), 0, (struct sockaddr *)&ruil.addr, &lAddr);
		if (ruil.length >= 0) {
			rctx.rui[r].rxCnt++;
			char ipStr[INET6_ADDRSTRLEN];
			if (ipStr != inet_ntop(ruil.addr.sin_family, &ruil.addr.sin_addr, ipStr, sizeof(ipStr))) RUI_error("inet_ntop");

			rctx.rui[r].addr = ruil.addr;
			rctx.rui[r].length = ruil.length;
			memcpy(rctx.rui[r].buf, ruil.buf, ruil.length);

			if (verbose && len)
				snprintf(verbose, len, "readRaw(%ld) from %s:%d to [%d/%ld]", ruil.length, ipStr, ntohs(ruil.addr.sin_port), r, rctx.ruis);

			ret |= 1 << r;

		} else {
			RUI_error("recv short message");
		}
	}
	rctx.readMask = ret;
	return ret;
}

bool RUI_send() {
	for (int n=0; n<rctx.ruis; n++)
		if ((rctx.rui[n].length >= 0) && rctx.rui[n].addr.sin_port) {
			if (!rctx.rui[n].addr.sin_addr.s_addr) rctx.rui[n].addr.sin_addr.s_addr = htonl(INADDR_BROADCAST);

			int l = sendto(rctx.sockets[n].fd, (void *)rctx.rui[n].buf, rctx.rui[n].length, MSG_CONFIRM, (struct sockaddr *) &rctx.rui[n].addr, sizeof(rctx.rui[n].addr));

			if (rctx.rui[n].addr.sin_addr.s_addr == htonl(INADDR_BROADCAST)) rctx.rui[n].addr.sin_addr.s_addr = 0;

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
	char out[rctx.ruis*2+1];
	memset(out, '\'', sizeof(out));
	out[sizeof(out)-2] = '\r';
	out[sizeof(out)-1] = 0;
	for(int i=0;i<rctx.ruis; i++) out[i*2] = rotc[rctx.rui[i].rxCnt&3];
	fputs((tick & (1<<rctx.idleInterval))?"*  ":" * ", stdout);
	fputs(out, stdout);
	fflush(stdout);

}

bool RUI_poll() {
	RUI_send();
	RUI_status();

	for (nfds_t i=0; i<rctx.ruis; i++) rctx.sockets[i].events = 0;
	int pollret = poll(rctx.sockets, rctx.ruis, rctx.timeoutMS); // just wait, unless there is an error

	for (nfds_t i=0; i<rctx.ruis; i++) rctx.sockets[i].events = POLLIN;
	if (!pollret) pollret = poll(rctx.sockets, rctx.ruis, 0);  // check all sockets
	rctx.readMask = 0;
	switch (pollret) {
		case -1:
			RUI_error("ppoll failed");
			return false;
		case 0: /* that's a timeout */
			if (rctx.notify) rctx.notify();
			break;
		default:
			if (!RUI_read(0/*str*/, 0 /*sizeof(str)*/))
				RUI_error("nothing read. Probably an OUT-socket died");
			else
				rctx.failureCredits = rctx.defaultFailureCredits;
			break;
	}
	return true;

}
