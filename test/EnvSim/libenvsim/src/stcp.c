//     Project: openETCS libenvsim
//      Module: 
// Description: 
//
// History:
// - 14.10.15, kastner: 

#include "stcp.h"
#include "logging.h"
#include <stdio.h>
#include <string.h>

#define STCPERROR(...) LOG_ERROR(stcp,__VA_ARGS__);snprintf(es_msg_buf,ES_MSG_BUF_SIZE,__VA_ARGS__);return ES_TCP_ERROR;
#define STCP_BUFLEN 5000


es_Status es_stcp_init() {
  static bool initalized = false;
  if( !initalized ) {
#ifdef WINDOWS
    WSADATA wsa;
    int res = WSAStartup(MAKEWORD(2,0),&wsa);
    if( res ) {
      STCPERROR("could not initialize winsocket; error code %d",res);
    }
#endif
    initalized = true;
  }
  return ES_OK;
}

es_Status es_stcp_connect(char *addr, int port, es_STCPStream **stream) {
  es_stcp_init();
  es_STCPStream *conn = MALLOC(es_STCPStream);
  conn->addr = addr;
  conn->port = port;
  conn->isServer = false;
  conn->socket = INVALID_SOCKET;

#ifdef WINDOWS
  conn->socket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
  if(conn->socket==INVALID_SOCKET) {
    STCPERROR("could not create winsocket; error code: %d",WSAGetLastError());
  }

  SOCKADDR_IN saddr;
  memset(&saddr,0,sizeof(SOCKADDR_IN));
  saddr.sin_family = AF_INET;
  saddr.sin_port   = htons(port);
  saddr.sin_addr.s_addr = inet_addr(addr);

  int rc = connect(conn->socket, (SOCKADDR*)&saddr, sizeof(SOCKADDR));
  if( rc ) {
    STCPERROR("could not connect to server %s:%d; error code: %d",addr,port,WSAGetLastError());
  }
  else {
    LOG_INFO(stcp,"established TCP connection to server %s:%d",addr,port);
  }
#endif

  *stream = conn;

  return ES_OK;
}


es_Status es_stcp_listen(int port, es_STCPStream **stream) {
  es_stcp_init();
  es_STCPStream *conn = MALLOC(es_STCPStream);
  conn->addr = NULL;
  conn->port = port;
  conn->isServer = true;
  conn->socket = INVALID_SOCKET;

#ifdef WINDOWS
  conn->socket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    SOCKADDR_IN saddr;
  memset(&saddr,0,sizeof(SOCKADDR_IN));
  saddr.sin_family = AF_INET;
  saddr.sin_port   = htons(port);
  saddr.sin_addr.s_addr = INADDR_ANY;
  int rc = bind(conn->socket,(SOCKADDR*)&saddr,sizeof(SOCKADDR_IN));
  if( rc == SOCKET_ERROR ) {
    STCPERROR("could not bind to TCP socket @port %d; error code: %d",port,WSAGetLastError());
  }

  rc = listen(conn->socket,10);
  if( rc == SOCKET_ERROR ) {
    STCPERROR("cannot listen to TCP socket @port %d; error code: %d",port,WSAGetLastError());
  }

#endif

  *stream = conn;
  return ES_OK;
}

es_Status es_stcp_send(es_STCPStream *stream, es_MSGID id, const char *data, int len) {
  char buf[STCP_BUFLEN];
  if(stream == NULL) {
    STCPERROR("cannot send to stream NULL");
  }
  if(stream->socket == INVALID_SOCKET) {
    STCPERROR("cannot send to invalid socket");
  }

  if(len > STCP_BUFLEN-8) {
    STCPERROR("STCP buffer too small for message length: %d",len);
  }

  int *p = (int*)buf;
  *p = id;
  p += 4;
  *p = len;
  p += 4;
  memcpy(p,data,(size_t)len);

#ifdef WINDOWS
  int rc = send(stream->socket,buf,len+8,0);
  if( rc != len+8 ) {
    STCPERROR("could not send message %d; error code: %d",id,WSAGetLastError());
  }
#endif

  return ES_OK;
}

es_Status es_stcp_read(es_STCPStream *stream, es_TCPMessage **msg) {
  if(stream==NULL) {
    STCPERROR("cannot read from stream NULL");
  }
  if(stream->socket == INVALID_SOCKET) {
    STCPERROR("cannot read from invalid socket");
  }
  es_TCPMessage *m = MALLOC(es_TCPMessage);

  char buf[STCP_BUFLEN];
#ifdef WINDOWS
  int rc = recv(stream->socket,buf,STCP_BUFLEN,0);
  if(rc<0) {
    int err = WSAGetLastError();
    if(err!=10057) {
      STCPERROR("error while reading from socket; error code: %d",err);
    }
    else {
      return ES_TCP_NO_CONN;
    }
  }
  else {
    int *p = (int*)buf;
    m->id = *p;
    p += 4;
    m->len = *p;
    p += 4;
    m->data = malloc(m->len);
    memcpy(m->data,p,(size_t)m->len);
  }
#endif

  return ES_OK;
}
