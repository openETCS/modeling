//     Project: openETCS libenvsim
//      Module: stcp.h
// Description: Synchronous (blocking) TCP-based messaging
//
// History:
// - 14.10.15, J. Kastner: initial version

#ifndef LIBENVSIM_STCP_H
#define LIBENVSIM_STCP_H

#include <stdbool.h>
#include "utils.h"
#include "tcp.h"

typedef struct {
  char *addr;
  int port;
  bool isServer;
  SOCKET socket;
} es_STCPStream;

es_Status es_stcp_connect(char *addr, int port, es_STCPStream **stream);

es_Status es_stcp_listen(int port, es_STCPStream **stream);

es_Status es_stcp_read(es_STCPStream *stream, es_TCPMessage **msg);

es_Status es_stcp_send(es_STCPStream *stream, es_MSGID id, const char *data, int len);
#endif //LIBENVSIM_STCP_H
