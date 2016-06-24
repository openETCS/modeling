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
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <sys/time.h>
#include <errno.h>

#ifdef WINDOWS
#undef  _WIN32_WINNT
#define _WIN32_WINNT 0x0600

#include <Winsock2.h>
#include <Ws2tcpip.h>
#include <time.h>
typedef int socklen_t;
typedef uint16_t in_port_t;

#elif defined(_RM57Lx_)

#include "utils/lwiplib.h"

#else
	
#include <sys/select.h>
#include <arpa/inet.h>

#endif

#ifndef MSG_CONFIRM
#define MSG_CONFIRM 0
#endif

#define BUFSIZE 1536           // generally smthg larger than what is expected

typedef void (*rui_timeout)(void);
typedef void (*rui_puts)(char *);

typedef struct rawUdpIn {
	struct sockaddr_in addr;
	int fd;
	in_port_t initiative;
	int rxCnt;
	ssize_t length;
	uint8_t buf[BUFSIZE];
} rawUdpIn;

void RUI_error(char *msg);
int64_t RUI_getCurrentMask();
bool RUI_init(rawUdpIn *rui, const uint16_t *lport, const uint16_t *dport, int ruis, bool localhost, bool sparsePing, int failureCredits, int timeout, bool status, rui_timeout notify, rui_puts dputs);
void RUI_invalidate(int i);
void RUI_fill(int i, bool push, void *buf, ssize_t len);
void RUI_fake(int i, void *buf, ssize_t len, uint16_t port);
bool RUI_isReadable(int i);
ssize_t RUI_get(int i, void *buf, ssize_t len);
bool RUI_isRunnable();
bool RUI_isKnown(int i);
bool RUI_poll();

void RUI_close();
int64_t RUI_read(char *verbose, ssize_t len);
bool RUI_send();
void RUI_status();

#endif /* RAW_UDP_IN_H_ */
