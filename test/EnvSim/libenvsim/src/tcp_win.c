//     Project: openETCS libenvsim
//      Module: tcp.c
// Description: Windows implemenation of TCP-based messaging.
//
// History:
// - 05.10.15, J. Kastner: initial version

#ifdef WINDOWS
#include "tcp.h"
#include "logging.h"
#include "assert.h"
#include <stdio.h>

#define TCPERROR(...) LOG_ERROR(tcp_win,__VA_ARGS__);snprintf(es_msg_buf,ES_MSG_BUF_SIZE,__VA_ARGS__);return ES_TCP_ERROR;

#define TCP_SYNC(ctx,fn,rc) \
  { DWORD waitResult; \
    waitResult = WaitForSingleObject(ctx->mutex,INFINITE);\
    switch(waitResult) { \
      case WAIT_OBJECT_0: \
        *rc = fn; \
        break; \
      case WAIT_ABANDONED: \
        TCPERROR("could not get lock on TCP context within specified timeout"); \
      case WAIT_FAILED: \
        TCPERROR("could not get lock on TCP context; code: %d",GetLastError()); \
      default: \
        printf("%s\n",GetLastError()); \
        TCPERROR("error during locking; reason: %d",waitResult); \
    }\
    ReleaseMutex(ctx->mutex); \
  }

es_Status es_tcp_init(es_TCPContext **ctx) {
  LOG_INFO(tcp_win,"initializing new TCP context (winsock)");
  WSADATA wsa;
  int res = WSAStartup(MAKEWORD(2,0),&wsa);
  if( res ) {
    TCPERROR("could not initialize winsocket; error code %d",res);
  }

  es_TCPContext *c = MALLOC(es_TCPContext);
  c->nextid = 1;
  c->streams = NULL;
  c->mutex = CreateMutex(NULL,FALSE,NULL);
  c->shutdown = FALSE;
  if(c->mutex==NULL) {
    TCPERROR("could not create TCP context mutex; reason: %s",GetLastError());
  }

  *ctx = c;
  return ES_OK; 
}

es_Status es_tcp_connect_sync(es_TCPContext *ctx, const char *addr, const int port, es_TCPStream **stream) {
  LOG_TRACE(tcp_win,"Initializing TCP connection to %s:%d",addr,port);
  
  es_TCPStream *conn = MALLOC(es_TCPStream);

  conn->socket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
  if(conn->socket==INVALID_SOCKET) {
    TCPERROR("could not create winsocket; error code: %d",WSAGetLastError());
  }
  
  SOCKADDR_IN saddr;
  memset(&saddr,0,sizeof(SOCKADDR_IN));
  saddr.sin_family = AF_INET;
  saddr.sin_port   = htons(port);
  saddr.sin_addr.s_addr = inet_addr(addr);

  int rc = connect(conn->socket, (SOCKADDR*)&saddr, sizeof(SOCKADDR));
  if( rc ) {
    TCPERROR("could not connect to server %s:%d; error code: %d",addr,port,WSAGetLastError());
  }
  else {
    LOG_INFO(tcp_win,"established TCP connection to server %s:%d",addr,port);
  }

  conn->type = TCP_CLIENT;
  conn->id = ctx->nextid;
  conn->addr = (char*)addr;
  conn->port = port;
  conn->ctx = ctx;
  conn->out = NULL;
  conn->in = NULL;

  ctx->nextid += 1;
  if(ctx->streams==NULL) {
    ctx->streams = es_list_append(ctx->streams,(char*)conn);
  }
  else {
    es_list_append(ctx->streams,(char*)conn);
  }

  *stream = conn;

  return ES_OK;
}

es_Status es_tcp_connect(es_TCPContext *ctx, const char *addr, const int port, es_TCPStream **stream) {
  int rc = 0;
  TCP_SYNC(ctx, es_tcp_connect_sync(ctx,addr,port,stream), &rc);
  return rc;
}


es_Status es_tcp_listen_sync(es_TCPContext *ctx, const int port, es_TCPStream **stream) {
  LOG_TRACE(tcp_win,"Initializing server socket on port %d",port);

  es_TCPStream *conn = MALLOC(es_TCPStream);

  conn->type = TCP_SERVER;
  conn->port = port;
  conn->socket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
  conn->client = INVALID_SOCKET;
  conn->out = NULL;
  conn->in = NULL;
  if(conn->socket==INVALID_SOCKET) {
    TCPERROR("could not create winsocket; error code: %d",WSAGetLastError());
  }
  
  SOCKADDR_IN saddr;
  memset(&saddr,0,sizeof(SOCKADDR_IN));
  saddr.sin_family = AF_INET;
  saddr.sin_port   = htons(port);
  saddr.sin_addr.s_addr = INADDR_ANY;
  int rc = bind(conn->socket,(SOCKADDR*)&saddr,sizeof(SOCKADDR_IN));
  if( rc == SOCKET_ERROR ) {
    TCPERROR("could not bind to TCP socket @port %d; error code: %d",port,WSAGetLastError());
  }

  rc = listen(conn->socket,10);
  if( rc == SOCKET_ERROR ) {
    TCPERROR("cannot listen to TCP socket ∆port %d; error code: %d",port,WSAGetLastError());
  }

  conn->ctx = ctx;
  ctx->nextid += 1;
  if(ctx->streams==NULL) {
    ctx->streams = es_list_append(ctx->streams,(char*)conn);
  }
  else {
    es_list_append(ctx->streams,(char*)conn);
  }


  *stream = conn;

  LOG_INFO(tcp_win,"started TCP server on port %d",port);
  return ES_OK;
}


es_Status es_tcp_listen(es_TCPContext *ctx, const int port, es_TCPStream **stream) {
  int rc = 0;
  TCP_SYNC(ctx, es_tcp_listen_sync(ctx,port,stream), &rc);
  return rc;
}

es_Status es_tcp_send_sync(es_TCPStream *stream, const char *data, int len) {
  assert(stream != NULL);
  assert(stream->socket != INVALID_SOCKET);

  es_TCPMessage *msg = MALLOC(es_TCPMessage);
  msg->len = len;
  msg->data = malloc((size_t)len);
  memcpy(msg->data,data,(size_t)len);

  if(stream->out==NULL) {
    stream->out = es_list_append(stream->out,(char*)msg);
  }
  else {
    es_list_append(stream->out,(char*)msg);
  }
  return ES_OK;
}

es_Status es_tcp_send(es_TCPStream *stream, const char *data, int len) {
  int rc = 0;
  if(stream==NULL) {
    TCPERROR("cannot send message via stream NULL");
  }
  TCP_SYNC(stream->ctx, es_tcp_send_sync(stream,data,len), &rc);
  return rc;
}

es_Status es_tcp_read_sync(es_TCPStream *stream, es_TCPMessage **msg) {
  if(stream->in==NULL) {
    *msg = NULL;
  }
  else {
    stream->in = es_list_remove_head(stream->in,(char**)msg);
  }
  return ES_OK;
}

es_Status es_tcp_read(es_TCPStream *stream, es_TCPMessage **msg) {
  int rc = 0;
  if(stream==NULL) {
    TCPERROR("cannot read message from stream NULL");
  }
  TCP_SYNC(stream->ctx, es_tcp_read_sync(stream,msg), &rc);
  return rc;
}

es_Status es_tcp_process_out(es_TCPContext *ctx) {
  es_ListEntry *next = ctx->streams;
  int err = 0;

  while( next != NULL ) {
    es_TCPStream *stream = (es_TCPStream*)next->data;
    
    es_ListEntry *nextmsg = NULL;
    es_TCPMessage *msg = NULL;
    nextmsg = es_list_remove_head(stream->out,(char**)&msg);
    while(msg != NULL) {
      int rc = 0;
      if(stream->type==TCP_SERVER) {
       if(stream->client != INVALID_SOCKET) {
         rc = send(stream->client,msg->data,msg->len,0);
       }
       else {
         LOG_WARN(tcp_win,"no client connected to port %d; discarding message",stream->port);
       }
      }
      else {
        LOG_TRACE(tcp_win,"sending message");
        rc = send(stream->socket,msg->data,msg->len,0);
      }
      if( rc != msg->len ) {
        LOG_ERROR(tcp_win,"could not send message to %s:%d; error code: %d",stream->addr,stream->port,GetLastError());
        err++;
      }

      free(msg->data);
      free(msg);

      nextmsg = es_list_remove_head(nextmsg,(char**)&msg);
    }
    stream->out = nextmsg;

    next = next->tail;
  }

  if( err ) {
    return ES_TCP_ERROR;
  }

  return ES_OK;
}

es_Status es_tcp_receive(es_TCPContext *ctx) {
  static TIMEVAL timeout = { .tv_sec = 0, .tv_usec = 1000 };
  char buf[TCP_MSG_SIZE];

  es_ListEntry *next = ctx->streams;
  while( next != NULL ) {
    es_TCPStream *stream = (es_TCPStream*)next->data;
    if(stream==NULL) {
      LOG_WARN(tcp_win,"skipping NULL stream");
      next = next->tail;
      continue;
    }

    /* SERVER STREAMS */
    if(stream->type == TCP_SERVER) {
      FD_SET fdSet;
      FD_ZERO(&fdSet);
      
      // if no client is connected -> wait for incoming connections
      if(stream->client==INVALID_SOCKET) {
        FD_SET(stream->socket,&fdSet);
        int rc = select(0,&fdSet,NULL,NULL,&timeout);
        if( rc == SOCKET_ERROR ) {
          LOG_ERROR(tcp_win,"error while executing select on server socket for port %d; error code: %d",stream->port,WSAGetLastError());
          continue;
        }
        if(FD_ISSET(stream->socket,&fdSet)) {
          stream->client = accept(stream->socket,NULL,NULL);
          LOG_INFO(tcp_win,"accepted new client connection on port %d",stream->port);
        }
      }

      // read data from connected client
      else {
        FD_SET(stream->client,&fdSet);
        int rc = select(0,&fdSet,NULL,NULL,&timeout);
        if( rc == SOCKET_ERROR ) {
          LOG_ERROR(tcp_win,"error while executing select on connected client @port %d; error code: %d",stream->port,WSAGetLastError());
          continue;
        }
        if( FD_ISSET(stream->client,&fdSet) ) {
          rc = recv(stream->client,buf,TCP_MSG_SIZE,0);
          if(rc==0 || rc==SOCKET_ERROR) {
            LOG_INFO(tcp_win,"connection closed by client @port %d",stream->port);
            closesocket(stream->client);
            stream->client = INVALID_SOCKET;
          } 
          else {
            char *data = malloc(rc);
            int len = rc;
            if(len>TCP_MSG_SIZE) {
              LOG_WARN(tcp_win,"received message too long (%d bytes); truncating to %d bytes",len,TCP_MSG_SIZE);
              len = TCP_MSG_SIZE;
            }
            memcpy(data,buf,len);

            es_TCPMessage *msg = MALLOC(es_TCPMessage);
            msg->len = rc;
            msg->data = data;
            if(stream->in==NULL) {
              stream->in = es_list_append(stream->in,(char*)msg);
            }
            else {
              stream->in = es_list_append(stream->in,(char*)msg);
            }
          }
        }
      }

    }
    /* CLIENT STREAMS */
    else {
      if(stream->socket==INVALID_SOCKET) {
        continue;
      }
      FD_SET fdSet;
      FD_ZERO(&fdSet);

      FD_SET(stream->socket,&fdSet);
      int rc = select(0,&fdSet,NULL,NULL,&timeout);
      if( rc == SOCKET_ERROR ) {
        LOG_ERROR(tcp_win,"error while executing select on client socket for %s:%d; error code: %d",stream->addr,stream->port,WSAGetLastError());
        stream->socket = INVALID_SOCKET;
        continue;
      } 
      if( FD_ISSET(stream->socket,&fdSet) ) {
        rc = recv(stream->socket,buf,TCP_MSG_SIZE,0);
        if(rc==0 || rc==SOCKET_ERROR) {
          LOG_INFO(tcp_win,"connection closed by server %s:%d",stream->addr,stream->port);
          closesocket(stream->socket);
          stream->socket = INVALID_SOCKET;
        }
        else {
          char *data = malloc(rc);
          int len = rc;
          if(len>TCP_MSG_SIZE) {
            LOG_WARN(tcp_win,"received message too long (%d bytes); truncating to %d bytes",len,TCP_MSG_SIZE);
            len = TCP_MSG_SIZE;
          }
          memcpy(data,buf,len);

          es_TCPMessage *msg = MALLOC(es_TCPMessage);
          msg->len = rc;
          msg->data = data;
          if(stream->in==NULL) {
            stream->in = es_list_append(stream->in,(char*)msg);
          }
          else {
            stream->in = es_list_append(stream->in,(char*)msg);
          }
        }
      }
    }

    next = next->tail;
  }
  return ES_OK;
}

DWORD WINAPI es_tcp_process(LPVOID param) {
  es_TCPContext *ctx = (es_TCPContext*)param;
  while( !ctx->shutdown ) {
    int rc = 0;
    TCP_SYNC(ctx, es_tcp_process_out(ctx), &rc);
    TCP_SYNC(ctx, es_tcp_receive(ctx), &rc);
    Sleep( 10 );
  }
  return ES_OK;
}

es_Status es_tcp_run(es_TCPContext *ctx) {
  HANDLE thread = NULL;
  DWORD id;
  LOG_INFO(tcp_win,"starting TCP handler thread");
  thread = CreateThread(NULL,0,es_tcp_process,ctx,0,&id);
  if(thread == NULL) {
    TCPERROR("could not create TCP handler thread; error code: %d",GetLastError());
  }
  return ES_OK;
}


es_Status es_tcp_free_msg(es_TCPMessage *msg) {
  if(msg!=NULL) {
    free(msg->data);
    free(msg);
  }
  return ES_OK;
}

#endif // WINDOWS
