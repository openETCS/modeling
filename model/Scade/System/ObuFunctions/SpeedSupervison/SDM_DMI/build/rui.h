/*
 * ProbeSDM_EnvSim.h
 *
 *  Created on: 06.02.2016
 *      Author: thorsten
 */

#ifndef RAW_UDP_IN_H_
#define RAW_UDP_IN_H_

#ifndef WINDOWS
#ifdef BUILD_DLL
#define WINDOWS
#endif
#endif

#define _DEFAULT_SOURCE

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <errno.h>

#ifdef WINDOWS
#undef  _WIN32_WINNT
#define _WIN32_WINNT 0x0600

#include <unistd.h>
#include <Winsock2.h>
#include <Ws2tcpip.h>
#include <sys/time.h>
#include <time.h>

struct ip_addr {
	uint32_t addr;
};

#elif defined(_RM57Lx_)

#include "utils/lwiplib.h"
#include "lwip/inet.h"

typedef int ssize_t;
extern void RUI_trigger();

#else
struct ip_addr {
	uint32_t addr;
};

#include <unistd.h>
#include <sys/time.h>
#include <sys/select.h>
#include <arpa/inet.h>

#endif

#ifndef MSG_CONFIRM
#define MSG_CONFIRM 0
#endif

typedef void (*rui_timeout)(void);
typedef void (*rui_puts)(char *);

typedef struct rawUdpIn {
	struct ip_addr saddr;
	uint16_t       sport;  /*host-order */
	uint16_t  initiative;  /*host-order */
	int rxCnt;

#if defined(_RM57Lx_)
	struct udp_pcb *fd;
	struct pbuf   *p;
	struct ip_addr paddr;  /*host-order */
	uint16_t       pport;  /*host-order */
#else
	int fd;
#endif
} rawUdpIn;

void RUI_error(char *msg);
int64_t RUI_getCurrentMask();
bool RUI_init(rawUdpIn *rui, const uint16_t *lport, const uint16_t *dport, int ruis, bool localhost, bool sparsePing, int failureCredits, int timeout, bool status, rui_timeout notify, rui_puts dputs);
void RUI_fill(int i, bool push, void *buf, ssize_t len);
bool RUI_isReadable(int i);
bool RUI_wasReadable();
ssize_t RUI_get(int i, void *buf, ssize_t len);
bool RUI_isRunnable();
bool RUI_isKnown(int i);
bool RUI_poll();

void RUI_close();
void rui_send(int i, void *buf, ssize_t len);
void RUI_status();

#endif /* RAW_UDP_IN_H_ */
