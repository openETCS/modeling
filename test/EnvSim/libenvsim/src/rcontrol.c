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

#define RCERROR(rs,...) LOG_ERROR(rcontrol,__VA_ARGS__);\
  if(rs!=NULL) {\
    char buf[256];\
    snprintf(buf,256,__VA_ARGS__);\
    es_rcontrol_send_error(rs,buf);\
  }\
  return ES_INVALID_CMD;

#define STRLCPY(dst,src,len) strncpy(dst,src,len-1);dst[len-1] = '\0';

#ifdef WITH_SCADE
extern es_TCPStream *scade_probe_evtstream;
extern bool es_scripted_tracksim_active;
#endif // WITH_SCADE
extern const char *ES_VERSION;

// if true, send events (track messages, train messages) to the GUI
bool es_rcontrol_send_events = false;

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
  int len = snprintf(buf,500,"version %s track {%s} sendevts %d scripttrack %d",
                     ES_VERSION,
                     es_tracksim_track.title==NULL ? "" : es_tracksim_track.title,
                     es_rcontrol_send_events,
                     #ifdef WITH_SCADE
                     es_scripted_tracksim_active
                     #else
                     0
                     #endif
  );

  return es_tcp_send(responseStream,TCPMSG_ES_CONF,buf,len);
}

es_Status es_rcontrol_get_balise_info(es_TCPStream *responseStream) {
  char buf[20000];
  int rest = 20000;
  int len = 0;
  char *p = buf;
  es_ListEntry *e = es_tracksim_track.bmsgs;
  while( e != NULL ) {
    if(rest <= 0) {
      RCERROR(responseStream,"insufficient buffer size for command TCPMSG_ES_GETBINF");
    }
    es_TriggeredBaliseMessage *bm = (es_TriggeredBaliseMessage*)e->data;
    int n = snprintf(p,rest,"%.1f {BG %d.%d} ",bm->triggerpos,bm->msg.Header.nid_bg,bm->msg.Header.n_pig);
    len += n;
    p += n;
    rest -= n;
    e = e->tail;
  }
  return es_tcp_send(responseStream,TCPMSG_ES_BINF,buf,len);
}

es_Status es_rcontrol_handle_msg(es_TCPMessage *msg, es_TCPStream *responseStream) {
  if(msg==NULL) {
    RCERROR(responseStream,"invalid rcontrol command: NULL");
  }

  LOG_TRACE(rcontrol,"received command ID %d",msg->id);

  switch(msg->id) {
#ifdef WITH_JIM
    case TCPMSG_ES_RUNTCL:
      return es_rcontrol_run_tcl(msg, responseStream);
#endif // WITH_JIM
    case TCPMSG_ES_GETCONF:
      return es_rcontrol_getconf(responseStream);
#ifdef WITH_SCADE
    case TCPMSG_ES_SENDEVTS:
      es_rcontrol_send_events = (bool)msg->data[0];
      if(es_rcontrol_send_events) {
        LOG_INFO(rcontrol,"Sending events to %s",responseStream->name);
        scade_probe_evtstream = responseStream;
      }
      else {
        LOG_INFO(rcontrol,"Disabling sending of events");
        scade_probe_evtstream = NULL;
      }
      return es_rcontrol_send_ok(responseStream,TCPMSG_ES_SENDEVTS);
#endif // WITH_SCADE
    case TCPMSG_ES_GETBINF:
      return es_rcontrol_get_balise_info(responseStream);
    default:
      RCERROR(responseStream,"unsupported rcontrol command: %d",msg->id);
  }
}
