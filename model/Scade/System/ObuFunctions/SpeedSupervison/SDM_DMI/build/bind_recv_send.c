#include "kcg_types.h"
#include "kcg_consts.h"

#ifndef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE
#endif

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <errno.h>
#include <time.h>

#if defined(__WIN32__) && !defined(WINDOWS)
#define WINDOWS
#endif

#ifdef _RM57Lx_
#include "utils/lwiplib.h"
#include "lwip/inet.h"


#include "lwip/sys.h"

#ifndef _SSIZE_T
#define _SSIZE_T
typedef int ssize_t;
#endif

#define MAX_PACKS 16

typedef struct pitem {
	struct pbuf *p;
	u16_t pport;
	IpAddress_udp paddr;
} pitem;

typedef struct plist {
	pitem pi[MAX_PACKS];
	int wr;
	int rd;
	SYS_ARCH_DECL_PROTECT(lvl);
} plist;

plist pl;

void capture(void *arg, struct udp_pcb *pcb, struct pbuf *p, ip_addr_t *addr, u16_t port) {

	struct pbuf *plast = 0;
    SYS_ARCH_PROTECT(pl.lvl);
    	int next = pl.wr+1;
    	next %= MAX_PACKS;

    	plast = pl.pi[pl.wr].p; /* old buffers will be overwritten */
		pl.pi[pl.wr].p = p;
		pl.pi[pl.wr].pport = port;
		pl.pi[pl.wr].paddr.addr = addr->addr;
		pl.wr = next;

    SYS_ARCH_UNPROTECT(pl.lvl);
	if (plast) pbuf_free(plast);
}

#else
#include <sys/time.h>
#include <unistd.h>

#ifdef WINDOWS
#undef  _WIN32_WINNT
#define _WIN32_WINNT 0x0600

#include <Winsock2.h>
#include <Ws2tcpip.h>

#define SOCK_NONBLOCK 0
#else
#include <arpa/inet.h>
#endif

#endif

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)>(b))?(b):(a))

kcg_bool close_udp(/* udp::close::fd */ kcg_int fd) {
#ifdef _RM57Lx_
	if (fd != 0 && fd != -1) {
		udp_remove((struct udp_pcb *)fd);

		SYS_ARCH_PROTECT(pl.lvl);
		while (pl.wr != pl.rd) {
			struct pbuf *p = pl.pi[pl.rd].p;
			pl.pi[pl.rd].p = 0;
			pl.rd++;
			pl.rd %= MAX_PACKS;
			pbuf_free(p);
		}
	    SYS_ARCH_UNPROTECT(pl.lvl);

	}
#else
	close(fd);
#endif
	return kcg_false;
}
void bind_udp(
	/* udp::bind::ipAddress */ IpAddress_udp *ipAddress,
	/* udp::bind::udpPort */ kcg_int udpPort,
	/* udp::bind::goOn */ kcg_bool *goOn,
	/* udp::bind::fd */ kcg_int *fd) {

    *goOn = kcg_false;
#ifdef _RM57Lx_
    struct udp_pcb *up = udp_new();
	if (up) {
		udp_recv(up, capture, NULL);
		udp_bind(up, (ip_addr_t*)&ipAddress->addr, udpPort);
		*goOn = kcg_true;
		*fd = (_2_int)up;
	} else {
		*goOn = kcg_false;
		*fd = -1;
	}
#else
#ifdef WINDOWS
	// Initialize Winsock
	WSADATA wsaData;
	int iResult = WSAStartup(WINSOCK_VERSION, &wsaData);
	if (iResult != 0) return;
#endif
	fd[0] = socket(AF_INET, SOCK_DGRAM | SOCK_NONBLOCK, 0);
	if (*fd < 0) return;
	int optval = 1;
#ifdef WINDOWS
	unsigned long cmd = 1;
	if (ioctlsocket(fd[0], FIONBIO, &cmd) < 0) return; /* set non-blocking, so select is not needed */
#endif
	setsockopt(*fd, SOL_SOCKET, SO_REUSEADDR, (const void *)&optval , sizeof(int));
	setsockopt(*fd, SOL_SOCKET, SO_BROADCAST, (const void *)&optval , sizeof(int));
	struct sockaddr_in InAddr = {
		.sin_family = AF_INET,
		.sin_port = htons(udpPort),
		.sin_addr = { .s_addr = htonl(ipAddress->addr) }
	};
	if (bind(fd[0], (struct sockaddr *) &InAddr, sizeof(struct sockaddr_in)) < 0) {
		*fd = -1;
	} else {
		*goOn = kcg_true;
	}
#endif
}

void recvfrom_udp(
	/* udp::recvfrom::fd */ kcg_int fd,
	/* udp::recvfrom::goOn */ kcg_bool *goOn,
	/* udp::recvfrom::length */ kcg_int *length,
	/* udp::recvfrom::data */ recv_t_udp *data,
	/* udp::recvfrom::ipAddress */ IpAddress_udp *ipAddress,
	/* udp::recvfrom::udpPort */ kcg_int *udpPort) {
	
	if (fd != -1) {
#ifdef _RM57Lx_
		*goOn = kcg_true;

	    SYS_ARCH_PROTECT(pl.lvl);

		if (pl.wr != pl.rd) {
			struct pbuf *p = pl.pi[pl.rd].p;
			pl.pi[pl.rd].p = 0;
			*udpPort = pl.pi[pl.rd].pport;
			*ipAddress = pl.pi[pl.rd].paddr;
			pl.rd++;
			pl.rd %= MAX_PACKS;

		    SYS_ARCH_UNPROTECT(pl.lvl);

			*length = MIN(p->tot_len, sizeof(recv_t_udp)*recvLength_udp);
			pbuf_copy_partial(p, data, *length, 0);
			*length /= sizeof(recv_t_udp);

			pbuf_free(p);
		} else {
		    SYS_ARCH_UNPROTECT(pl.lvl);
			ipAddress->addr = 0;
			*udpPort = 0;
			*length = -1;
		}

#else
		struct sockaddr_in s_in;
#ifdef WINDOWS
		int lAddr;
#else
		socklen_t lAddr;
#endif
		lAddr = sizeof(s_in);
		errno = 0;
		*length = recvfrom(fd, (void *)data, sizeof(recv_t_udp)*recvLength_udp, 0, (struct sockaddr *)&s_in, &lAddr);
		if (*length >= 0) {
			ipAddress->addr = ntohl(s_in.sin_addr.s_addr);
			*udpPort = ntohs(s_in.sin_port);
			*goOn = kcg_true; /* only false on non-recoverable problems */
			*length /= sizeof(recv_t_udp);
		} else {
			ipAddress->addr = 0;
			*udpPort = 0;
#ifdef WINDOWS
			int nErr = WSAGetLastError();
			*goOn = (!nErr  || nErr==WSAEWOULDBLOCK                   ) ? kcg_true : kcg_false;
#else
			*goOn = (!errno || errno == EWOULDBLOCK || errno == EAGAIN) ? kcg_true : kcg_false;
#endif
		}
#endif
	} else {
		ipAddress->addr = 0;
		*udpPort = 0;
		*goOn = kcg_false;
		*length = -1;
	}
}

kcg_bool sendto_udp(
	/* udp::sendto::length */ kcg_int length,
	/* udp::sendto::data */ send_t_udp *data,
	/* udp::sendto::ipAddress */ IpAddress_udp *ipAddress,
	/* udp::sendto::udpPort */ kcg_int udpPort,
	/* udp::sendto::fd */ kcg_int fd) {

	
	if (length < 0) return kcg_true;
	if (fd == -1 || !udpPort) return kcg_false;
	if (!ipAddress->addr)  ipAddress->addr = -1;
#ifdef _RM57Lx_
	struct pbuf *p = pbuf_alloc(PBUF_TRANSPORT, length*sizeof(send_t_udp), PBUF_RAM);
	if (!p) return kcg_false;
	memcpy(p->payload, data, length*sizeof(send_t_udp));
	err_t ret = udp_sendto((struct udp_pcb *)fd, p, (ip_addr_t *)ipAddress, udpPort);
	pbuf_free(p); // release from user-space
	return ret == ERR_OK ? kcg_true : kcg_false;
#else
	struct sockaddr_in s_in = { .sin_family = AF_INET };
	s_in.sin_addr.s_addr = htonl(ipAddress->addr);
	s_in.sin_port =        htons(udpPort);
	return (sendto(fd, (void *)data, length*sizeof(send_t_udp), 0, (struct sockaddr *) &s_in, sizeof(s_in))>=0) ? kcg_true : kcg_false;
#endif
}
