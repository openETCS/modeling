//     Project: openETCS libenvsim
//      Module: tcp.c
// Description: Windows implemenation of TCP-based messaging.
//
// History:
// - 05.10.15, J. Kastner: initial version
// - 10.10.15, J. Kastner: implement handling of multiple messages in TCP input buffer;

#ifdef WINDOWS
#include "tcp.h"
#include "logging.h"
#include "assert.h"
#include <stdio.h>

#define TCPERROR(...) LOG_ERROR(tcp_win,__VA_ARGS__);snprintf(es_msg_buf,ES_MSG_BUF_SIZE,__VA_ARGS__);return ES_TCP_ERROR;

// Timeout for winsock select() in usecs
#define TCP_RECEIVE_TIMEOUT 1000


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
  c->streams = NULL;
  c->thread = NULL;
  c->mutex = CreateMutex(NULL,FALSE,NULL);
  c->shutdown = FALSE;
  if(c->mutex==NULL) {
    TCPERROR("could not create TCP context mutex; reason: %s",GetLastError());
  }

  *ctx = c;
  return ES_OK; 
}

es_Status es_tcp_connect_sync(es_TCPContext *ctx, const char *addr, const int port,
                              const char *name, es_TCPStream **stream) {
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
  conn->name = (char*)name;
  conn->addr = (char*)addr;
  conn->port = port;
  conn->ctx = ctx;
  conn->out = NULL;
  conn->nout = 0;
  conn->in = NULL;
  conn->nin = 0;
  conn->run = true;
  conn->afterSend = NULL;

  if(ctx->streams==NULL) {
    ctx->streams = es_list_append(ctx->streams,(char*)conn);
  }
  else {
    es_list_append(ctx->streams,(char*)conn);
  }

  *stream = conn;

  return ES_OK;
}

es_Status es_tcp_connect(es_TCPContext *ctx, const char *addr, const int port, const char* name, es_TCPStream **stream) {
  int rc = 0;
  TCP_SYNC(ctx, es_tcp_connect_sync(ctx,addr,port,name,stream), &rc);
  return rc;
}


es_Status es_tcp_listen_sync(es_TCPContext *ctx, const int port, const char *name, es_TCPStream **stream) {
  LOG_TRACE(tcp_win,"Initializing server socket on port %d",port);

  es_TCPStream *conn = MALLOC(es_TCPStream);

  conn->type = TCP_SERVER;
  conn->name = (char*)name;
  conn->port = port;
  conn->socket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
  conn->client = INVALID_SOCKET;
  conn->out = NULL;
  conn->nout = 0;
  conn->in = NULL;
  conn->nin = 0;
  conn->run = true;
  conn->afterSend = NULL;
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
    TCPERROR("cannot listen to TCP socket @port %d; error code: %d",port,WSAGetLastError());
  }

  conn->ctx = ctx;
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


es_Status es_tcp_listen(es_TCPContext *ctx, const int port, const char *name, es_TCPStream **stream) {
  int rc = 0;
  TCP_SYNC(ctx, es_tcp_listen_sync(ctx,port,name,stream), &rc);
  return rc;
}

es_Status es_tcp_send_sync(es_TCPStream *stream, es_MSGID id, const char *data, int len) {
  assert(stream != NULL);
  assert(stream->socket != INVALID_SOCKET);

  es_TCPMessage *msg = MALLOC(es_TCPMessage);
  msg->id = id;
  msg->len = len;
  char *raw = malloc((size_t)(8+len));
  msg->raw = raw;
  *(int*)raw = id;
  raw += 4;
  *(int*)raw = len;
  msg->data = raw += 4;
  memcpy(msg->data,data,(size_t)len);

  if(stream->out==NULL) {
    stream->out = es_list_append(stream->out,(char*)msg);
  }
  else {
    es_list_append(stream->out,(char*)msg);
    stream->nout += 1;
  }

  return ES_OK;
}

es_Status es_tcp_send(es_TCPStream *stream, es_MSGID id, const char *data, int len) {
  int rc = 0;
  if(stream==NULL) {
    TCPERROR("cannot send message via stream NULL");
  }

  TCP_SYNC(stream->ctx, es_tcp_send_sync(stream,id,data,len), &rc);
  return rc;
}

es_Status es_tcp_read_sync(es_TCPStream *stream, es_MSGID id, es_TCPMessage **msg) {
  if(stream->in==NULL) {
    *msg = NULL;
  }
  else if (id<0) {
    stream->in = es_list_remove_head(stream->in,(char**)msg);
    stream->nin -= 1;
  }
  else {
    es_ListEntry *next = stream->in;
    es_ListEntry *prev = NULL;
    while( next != NULL ) {
      es_TCPMessage *m = (es_TCPMessage*) next->data;
      if( m->id == id ) {
        if( prev != NULL ) {
          prev->tail = next->tail;
        }
        else {
          stream->in = next->tail;
        }
        *msg = m;
        free(next);
        stream->nin -= 1;
        break;
      }
      prev = next;
      next = next->tail;
    }
  }
  return ES_OK;
}

es_Status es_tcp_read(es_TCPStream *stream, es_MSGID id, es_TCPMessage **msg) {
  int rc = 0;
  if(stream==NULL) {
    TCPERROR("cannot read message from stream NULL");
  }
  TCP_SYNC(stream->ctx, es_tcp_read_sync(stream,id,msg), &rc);
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
      int rawlen = msg->len + 8;
      if(stream->type==TCP_SERVER) {
       if(stream->client != INVALID_SOCKET) {
         LOG_TRACE(tcp_win,"sending message %d (data: %d bytes)",msg->id,msg->len);
         rc = send(stream->client,msg->raw,rawlen,0);
       }
       else {
         LOG_WARN(tcp_win,"no client connected to port %d; discarding message",stream->port);
       }
      }
      else {
        LOG_TRACE(tcp_win,"sending message %d to %s:%d (data: %d)",msg->id,stream->addr,stream->port,msg->len);
        rc = send(stream->socket,msg->raw,rawlen,0);
      }
      if( rc != rawlen ) {
        LOG_ERROR(tcp_win,"could not send message %d; error code: %d",msg->id,GetLastError());
        err++;
      }

      free(msg->data);
      free(msg);

      nextmsg = es_list_remove_head(nextmsg,(char**)&msg);
      stream->nout -= 1;
    }
    stream->out = nextmsg;

    if( stream->afterSend != NULL ) {
      stream->afterSend();
    }

    if( stream->nout > TCP_MAX_PENDING_MSGS ) {
      LOG_WARN(tcp_win,"%d pending messages on output stream '%s'",stream->nout, stream->name);
    }
    next = next->tail;
  }

  if( err ) {
    return ES_TCP_ERROR;
  }

  return ES_OK;
}

es_Status es_tcp_process_msgstream(es_TCPStream *stream, char* data, int len) {
  if(len>TCP_MSG_SIZE) {
    TCPERROR("received telegram too long (%d bytes); discarding telegram!",len);
  }
  
  int pos = 0;
  char *next = data;
  while(pos <= len - 8) {
    int id = *((int32_t*)next);
    next += 4;
    int dlen = *((int32_t*)next);
    next += 4;
    if( dlen > len - 8 ) {
      TCPERROR("received incomplete message: expected %d bytes, got %d",dlen,len-8);
    }

    if( id == TCPMSG_RUN ) {
      LOG_INFO(scade_remote,"STARTING %s",stream->name);
      stream->run = true;
    }
    else if( id == TCPMSG_STOP ) {
      LOG_INFO(scade_remote,"STOPPING %s",stream->name);
      stream->run = false;
    }
    else {
      es_TCPMessage *msg = MALLOC(es_TCPMessage);
      msg->id = id;
      msg->raw = NULL;
      msg->data = malloc(dlen);
      msg->len = dlen;
      LOG_TRACE(tcp_win,"received message %d (data: %d bytes)",id,dlen);
      memcpy(msg->data,next,dlen);

      if(stream->in==NULL) {
        stream->in = es_list_append(stream->in,(char*)msg);
      }
      else {
        es_list_append(stream->in,(char*)msg);
      }
      stream->nin += 1;
    }
    pos += 8+dlen;
    next += dlen;
  }

  return ES_OK;
}


es_Status es_tcp_receive(es_TCPContext *ctx) {
  static TIMEVAL timeout = { .tv_sec = 0, .tv_usec = TCP_RECEIVE_TIMEOUT };
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
            es_tcp_process_msgstream(stream,buf,rc);
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
          es_tcp_process_msgstream(stream,buf,rc);
        }
      }
    }
    
    if( stream->nin > TCP_MAX_PENDING_MSGS ) {
      LOG_WARN(tcp_win,"%d pending messages on input stream '%s'!",stream->nin,stream->name);
    }
    next = next->tail;
  }
  return ES_OK;
}

DWORD WINAPI es_tcp_process(LPVOID param) {
  es_TCPContext *ctx = (es_TCPContext*)param;
  while( !ctx->shutdown ) {
    int rc = 0;
    TCP_SYNC(ctx, es_tcp_receive(ctx), &rc);
    TCP_SYNC(ctx, es_tcp_process_out(ctx), &rc);
    //Sleep( 10 );
  }
  // cleanup
  es_ListEntry *next = ctx->streams;
  while( next != NULL ) {
    es_TCPStream *s = (es_TCPStream*) next->data;
    if(s != NULL ) {
      if( s->socket != INVALID_SOCKET ) {
        closesocket( s->socket );
      }
      if( s->client != INVALID_SOCKET ) {
        closesocket( s->client );
      }
    }
    next = next->tail;
  }
  return ES_OK;
}

es_Status es_tcp_run(es_TCPContext *ctx) {
  if(ctx == NULL) {
    TCPERROR("cannot start thread for TCPContext NULL");
  }
  if(ctx->thread != NULL) {
    LOG_WARN(tcp_win,"handler thread already started");
    return;
  }
  DWORD id;
  LOG_TRACE(tcp_win,"starting TCP handler thread");
  ctx->thread = CreateThread(NULL,0,es_tcp_process,ctx,0,&id);
  if(ctx->thread == NULL) {
    TCPERROR("could not create TCP handler thread; error code: %d",GetLastError());
  }
  return ES_OK;
}


es_Status es_tcp_stop(es_TCPContext *ctx) {
  LOG_TRACE(tcp_win,"Stopping TCP handler thread");
  if(ctx == NULL || ctx->thread == NULL) {
    return ES_OK;
  }

  ctx->shutdown = TRUE;
  Sleep( 100 );
  //TerminateThread(ctx->thread,0);

  return ES_OK;
}

es_Status es_tcp_free_msg(es_TCPMessage *msg) {
  if(msg!=NULL) {
    free(msg->raw);
    free(msg);
  }
  return ES_OK;
}

#endif // WINDOWS
