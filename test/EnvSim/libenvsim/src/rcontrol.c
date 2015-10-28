//     Project: openETCS libenvsim
//      Module: rcontrol.c
// Description: Handles remote control commands (via TCP messages).
//
// History:
// - 27.10.15, J. Kastner: initial version

#include "rcontrol.h"
#include "tcp.h"
#include "logging.h"
#include "trackmsg.h"
#include <stdio.h>

#ifdef WITH_JIM
#include "tcl/interp.h"
#endif // WITH_JIM

#define RCERROR(errmsg,...) return ES_INVALID_CMD;

#define STRLCPY(dst,src,len) strncpy(dst,src,len-1);dst[len-1] = '\0';

es_Status es_rcontrol_send_ok(es_TCPStream *responseStream, int msgid) {
  char buf[256];

  int len = snprintf(buf,256,"%d",msgid);
  return es_tcp_send(responseStream,TCPMSG_OK,buf,len);
}

es_Status es_rcontrol_send_error(es_TCPStream *responseStream, const char *errmsg) {
  return es_tcp_send(responseStream,TCPMSG_ERROR,errmsg,strlen(errmsg));
}


#ifdef WITH_JIM
es_Status es_rcontrol_run_tcl(es_TCPMessage *msg, es_TCPStream *responseStream) {
  static es_Interp *interp = NULL;

  if( interp == NULL ) {
    interp = es_get_interp();
  }

  char *path = malloc(msg->len+1);
  STRLCPY(path,msg->data,msg->len+1);
  char buf[500];
  snprintf(buf,500,"source {%s}",path);

  es_Status rc = es_eval_tcl(interp,buf);
  if( rc != ES_OK ) {
    const char *errmsg = es_tcl_last_result(interp);
    es_rcontrol_send_error(responseStream,errmsg);
    return ES_TCL_ERROR;
  }
  else {
    es_rcontrol_send_ok(responseStream,TCPMSG_ES_RUNTCL);
    return ES_OK;
  }
}
#endif // WITH_JIM

es_Status es_rcontrol_getconf(es_TCPStream *responseStream) {
  char buf[500];
  int len = snprintf(buf,500,"track {%s}",
                     es_tracksim_track.title==NULL ? "" : es_tracksim_track.title
  );

  return es_tcp_send(responseStream,TCPMSG_ES_CONF,buf,len);
}

es_Status es_rcontrol_handle_msg(es_TCPMessage *msg, es_TCPStream *responseStream) {
  if(msg==NULL) {
    RCERROR("invalid rcontrol command: NULL");
  }

  LOG_TRACE(rcontrol,"received command ID %d",msg->id);

  switch(msg->id) {
#ifdef WITH_JIM
    case TCPMSG_ES_RUNTCL:
      return es_rcontrol_run_tcl(msg, responseStream);
#endif // WITH_JIM
    case TCPMSG_ES_GETCONF:
      return es_rcontrol_getconf(responseStream);
    default:
      RCERROR("unsupported rcontrol command: %d",msg->id);
  }
}
