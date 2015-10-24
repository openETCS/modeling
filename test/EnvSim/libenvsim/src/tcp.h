//     Project: openETCS libenvsim
//      Module: tcp.h
// Description: C interface for TCP-based messaging.
//
// History:
// - 05.10.15, J. Kastner: initial version
// - 10.10.15, J. Kastner: add es_MSGID

#ifndef LIBENVSIM_TCP_H
#define LIBENVSIM_TCP_H

// maximum number of bytes per send/receive
#define TCP_MSG_SIZE 65535

// maximum number of pending messages
// (currently we only WARN when we reach this limit)
#define TCP_MAX_PENDING_MSGS 100

// TCP message IDs
#define TCPMSG_ANY        -1
#define TCPMSG_STOP        1
#define TCPMSG_RUN         2
#define TCPMSG_EVC2DMI_BUS 1000
#define TCPMSG_EVC2DMI     1001
#define TCPMSG_TIU2DMI     1002
#define TCPMSG_EVC2GUI     1003
#define TCPMSG_DMI2EVC_BUS 2000
#define TCPMSG_DMI2EVC     2001
#define TCPMSG_GUI2EVC     2002

#include "utils.h"
#include <stdint.h>
#include <stdbool.h>

#ifdef WINDOWS

#include <winsock2.h>
#include <windows.h>

#else

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
typedef int SOCKET;
#define INVALID_SOCKET -1
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;
#define SOCKET_ERROR -1
typedef struct timeval TIMEVAL;
#define Sleep(ms) usleep(1000*ms)
#define TRUE true
#define FALSE false

#endif // WINDOWS

typedef int32_t es_MSGID;

typedef struct {
  es_ListEntry *streams;
  bool shutdown;
#ifdef WINDOWS
  HANDLE mutex;
  HANDLE thread;
#else
  pthread_mutex_t mutex;
  pthread_t thread;
#endif
} es_TCPContext;

typedef enum {
  TCP_SERVER,
  TCP_CLIENT
} es_TCPStream_Type;


// Represents a TCP server or client connection
typedef struct {
  es_TCPContext *ctx;
  char *name;
  char *addr;
  int port;
  es_TCPStream_Type type;
  // list with pending outgoing TCP messages
  es_ListEntry *out;
  // number of unprocessed outgoing messages
  int nout;
  // list with unprocessed incoming TCP messages
  es_ListEntry *in;
  // number of unprocessed incoming messages
  int nin;
  // messages are only sent iff run == true;
  // this property is set by TCPMSG_RUN and TCPMSG_STOP messages
  bool run;
  // called after each send cycle
  void (*afterSend)(void);
  SOCKET socket;
  SOCKET client;
} es_TCPStream;


// Messages received via a TCPStream
typedef struct {
  // message type ID
  es_MSGID id;
  // message body length
  int len;
  // pointer to the message body
  char *data;
  // pointer to raw telegram data
  char *raw;
} es_TCPMessage;

// Creates a new TCPContext
//
// @param ctx pointer to the pointer variable for the new TCPContext
es_Status es_tcp_init(es_TCPContext **ctx);

// Creates a new TCPStream that connects to the specified server and port (client stream).
//
// @param ctx TCPContext used to create the TCPStream
// @param addr IP address or name of the server
// @param port TCP port to connect to
// @param name identifier for this stream (used for logging)
// @param stream pointer to the target variable for the create TCPStream
es_Status es_tcp_connect(es_TCPContext *ctx, const char *addr, const int port,
                         const char *name, es_TCPStream **stream);

// Create a new TCPStream that listens on the specified port (server stream).
//
// @param ctx TCPContext used to create the TCPStream
// @param port TCP port to listen on
// @param name an identifier for this stream (used for logging)
// @param stream pointer to the target variable for the created TCPStream
es_Status es_tcp_listen(es_TCPContext *ctx, const int port, const char *name, es_TCPStream **stream);

// Send a message via the specified TCPStream.
//
// @param stream TCPStream
// @param id Message type ID
// @param data pointer to the data array to be sent
// @param len number of bytes to be sent
es_Status es_tcp_send(es_TCPStream *stream, es_MSGID id, const char *data, int len);

// Read the next message with the specified ID from the provided TCPStream.
//
// @param stream TCPStream
// @param id ID of the next message to be read; set to TCPMSG_ANY to read the next message
//           regardless of its ID
// @param msg pointer to the variable where the message pointer will be stored;
//            *msg is set to NULL, if there was no message available.
es_Status es_tcp_read(es_TCPStream *stream, es_MSGID id, es_TCPMessage **msg);

// Free the message struct at the specified location.
// Always call this after the message returned by es_tcp_read() has been processed
// to avoid a memory leak.
es_Status es_tcp_free_msg(es_TCPMessage *msg);

// Starts a thread that handles all TCPStreams defined on the provided TCPContext
es_Status es_tcp_run(es_TCPContext *ctx);

// Stops the handler thread for the specified context
es_Status es_tcp_stop(es_TCPContext *ctx);

#endif //LIBENVSIM_TCP_H
