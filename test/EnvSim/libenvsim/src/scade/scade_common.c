//     Project: openETCS libenvsim
//      Module: scade / scade_common.c
// Description: Provides common utility functions for libenvsim imported SCADE operator implementations
//
// History:
// - 06.10.15, J. Kastner: initial version

#ifdef WITH_SCADE
#include "scade_common.h"
#include "../logging.h"

es_Status es_scade_load_config() {
  static int loaded = 0;

  if(loaded) {
    return ES_OK;
  }

  char *cfgfile = getenv("OPENETCS_ENVSIM_CONFIG");
  if(cfgfile==NULL) {
    LOG_WARN(scade_common,"Environment variable OPENETCS_ENVSIM_CONFIG not defined; using 'envsim.cfg'\n");
    cfgfile = "envsim.cfg";
  }

  es_Interp *interp = es_get_interp();
  // load configuration
  snprintf(es_msg_buf,ES_MSG_BUF_SIZE,"config::parse \"%s\"",cfgfile);

  es_Status rc = es_eval_tcl(interp,es_msg_buf);
  if(rc==ES_OK) {
    loaded = 1;
  }

  return rc;
}

es_TCPContext *scade_common_tcp_ctx = NULL;

void es_scade_shutdown_tcp() {
  es_tcp_stop(scade_common_tcp_ctx);
}

es_TCPContext* es_scade_get_tcp() {

  if(scade_common_tcp_ctx==NULL) {
    LOG_TRACE(scade_common,"Initializing TCP client context for SCADE operators");
    if( es_tcp_init(&scade_common_tcp_ctx) ) {
      scade_common_tcp_ctx = NULL;
    }
    atexit(es_scade_shutdown_tcp);
    LOG_TRACE(scade_common,"Starting TCP client thread for SCADE operators");
    es_tcp_run(scade_common_tcp_ctx);
  }

  return scade_common_tcp_ctx;
}
#endif
