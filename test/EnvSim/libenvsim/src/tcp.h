//     Project: openETCS libenvsim
//      Module: tcp.h
// Description: C interface for TCP-based messaging.
//
// History:
// - 05.10.15, J. Kastner: initial version

#ifndef LIBENVSIM_TCP_H
#define LIBENVSIM_TCP_H

// maximum number of bytes per send/receive
#define TCP_MSG_SIZE 65535

#include "utils.h"

#ifdef WINDOWS
#include <winsock2.h>
#include <windows.h>
#endif // WINDOWS

typedef struct {
  int nextid;
  es_ListEntry *streams;
  bool shutdown;
#ifdef WINDOWS
  HANDLE mutex;
  HANDLE thread;
#endif
} es_TCPContext;

typedef enum {
  TCP_SERVER,
  TCP_CLIENT
} es_TCPStream_Type;

typedef struct {
  es_TCPContext *ctx;
  int id;
  char *addr;
  int port;
  es_TCPStream_Type type;
  // list with pending outgoing TCP messages
  es_ListEntry *out;
  // list with unprocessed incoming TCP messages
  es_ListEntry *in;
#ifdef WINDOWS
  SOCKET socket;
  SOCKET client;
#endif
} es_TCPStream;


typedef struct {
  // message length
  int len;
  // pointer to the message to be sent
  char *data;
} es_TCPMessage;


es_Status es_tcp_init(es_TCPContext **ctx);

es_Status es_tcp_connect(es_TCPContext *ctx, const char *addr, const int port, es_TCPStream **stream);

es_Status es_tcp_listen(es_TCPContext *ctx, const int port, es_TCPStream **stream);

es_Status es_tcp_send(es_TCPStream *stream, const char *data, int len);

es_Status es_tcp_read(es_TCPStream *stream, es_TCPMessage **msg);

es_Status es_tcp_free_msg(es_TCPMessage *msg);

// processes all pending outgoing TCP messages and handles incoming TCP messages
// for the specified TCP context.
//es_Status es_tcp_process(es_TCPContext *ctx);
//es_Status es_tcp_send_msg(const char *addr)

es_Status es_tcp_run(es_TCPContext *ctx);

es_Status es_tcp_stop(es_TCPContext *ctx);
#endif //LIBENVSIM_TCP_H
