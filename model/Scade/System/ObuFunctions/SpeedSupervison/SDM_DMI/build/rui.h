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

#ifdef WINDOWS
#undef  _WIN32_WINNT
#define _WIN32_WINNT 0x0600

#include <Winsock2.h>
#include <Ws2tcpip.h>
#include <time.h>
typedef ULONG nfds_t;
typedef WSAPOLLFD pollfd_t;
typedef int socklen_t;
#define MSG_CONFIRM 0

#else
	
#include <poll.h>
#include <arpa/inet.h>
typedef struct pollfd pollfd_t;

#endif

#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#define BUFSIZE 1536           // generally smthg larger than what is expected

typedef void (*rui_timeout)(void);

typedef struct rawUdpIn {
	struct sockaddr_in addr;
	size_t  rxCnt;
	ssize_t length;
	uint8_t buf[BUFSIZE];
} rawUdpIn;

void RUI_error(char *msg);
int64_t RUI_getCurrentMask();
bool RUI_init(pollfd_t *sockets, rawUdpIn *rui, const uint16_t *lport, nfds_t ruis, bool localhost, int failureCredits, int timeout, bool status, rui_timeout notify);
void RUI_invalidate(int i);
void RUI_fill(int i, bool send, void *buf, size_t len);
void RUI_fake(int i, void *buf, size_t len, uint16_t port);
bool RUI_isReadable(int i);
size_t RUI_get(int i, void *buf, size_t len);
bool RUI_isRunnable();
bool RUI_isKnown(int i);
bool RUI_poll();

void RUI_close();
int64_t RUI_read(char *verbose, int len);
bool RUI_send();
void RUI_status();

#endif /* RAW_UDP_IN_H_ */
