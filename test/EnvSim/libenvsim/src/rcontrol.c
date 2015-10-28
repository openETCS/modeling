//     Project: openETCS libenvsim
//      Module: rcontrol.c
// Description: Handles remote control commands (via TCP messages).
//
// History:
// - 27.10.15, J. Kastner: initial version

#include "rcontrol.h"
#include "tcp.h"
#include "logging.h"

#ifdef WITH_JIM
#include "tcl/interp.h"
#endif // WITH_JIM

#define ERROR(errmsg,...) return ES_INVALID_CMD;

es_Status es_rcontrol_handle_msg(es_TCPMessage *msg, es_TCPStream *responseStream) {
  if(msg==NULL) {
    ERROR("invalid rcontrol command: NULL");
  }

  LOG_TRACE(rcontrol,"received command ID %d",msg->id);

  switch(msg->id) {
#ifdef WITH_JIM
    case TCPMSG_ES_RUNTCL:
      return es_rcontrol_load_tcl(msg,responseStream);
#endif // WITH_JIM
    default:
      ERROR("unsupported rcontrol command: %d",msg->id);
  }
}

es_Status es_rcontrol_send_ok(es_TCPStream *responseStream, int msgid) {
  char buf[256];

  int len = snprintf(buf,256,"%d",msgid);
  return es_tcp_send(responseStream,TCPMSG_OK,buf,len);
}

es_Status es_rcontrol_send_error(es_TCPStream *responseStream, const char *errmsg) {
  return es_tcp_send(responseStream,TCPMSG_ERROR,errmsg,strlen(errmsg));
}


#ifdef WITH_JIM
es_Status es_rcontrol_load_tcl(es_TCPMessage *msg, es_TCPStream *responseStream) {
  static es_Interp *interp = NULL;

  if( interp == NULL ) {
    interp = es_get_interp();
  }

  char *path = malloc(msg->len+1);
  strlcpy(path,msg->data,msg->len+1);
  es_Status rc = es_eval_tcl(interp,path);
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