//     Project: openETCS libenvsim
//      Module: tcl / interp.c
// Description: Custom interface to the embedded Tcl interpreter (Jim)
//
// History:
// - 22.09.15, J. Kastner: initial version
// - 28.10.15, J. Kastner: add es_tcl_last_result()

#ifdef WITH_JIM

#include <assert.h>
#include <string.h>
#include "interp.h"
#include "config.tcl.h"
#include "track.h"
#include "../logging.h"

#define RCERROR(interp,...) snprintf(es_msg_buf,ES_MSG_BUF_SIZE,__VA_ARGS__); return es_jim_error(interp,es_msg_buf);
#define WRONG_ARGS(interp,i,argv,msg) Jim_WrongNumArgs(interp,i,argv,msg);return JIM_ERR;

#define GetString(argv) (char*)Jim_GetString(argv,NULL);

//----------------------------- JIM commands ---------------------------------
int es_jim_error(Jim_Interp *interp, char *msg) {
  LOG_ERROR(Tcl,msg);
  Jim_SetResult(interp, Jim_NewStringObj(interp, msg, strlen(msg)));
  return JIM_ERR;
}

void es_jim_append_result(char* res, es_ClientData data) {

}


int es_jim_track_cmd(Jim_Interp *interp, int argc, Jim_Obj *const *argv) {
  const char *cmd = Jim_GetString(argv[0],NULL);

  if(argc<2) {
    WRONG_ARGS(interp,1,argv,"missing subcommand");
  }
  char *subcmd = GetString(argv[1]);

  if(argc!=3) {
    WRONG_ARGS(interp,2,argv,"arg");
  }
  char *arg = GetString(argv[2]);
  if(!strcmp("track::balise",cmd)) {
    if(es_tcl_track_balise(subcmd,arg,es_jim_append_result,NULL)) {
      RCERROR(interp,es_msg_buf);
    }
    return JIM_OK;
  }
  if(!strcmp("track::radio",cmd)) {
    if(!strcmp("raw",subcmd)) {
      if(es_tcl_track_radio(subcmd,arg,NULL,es_jim_append_result,NULL)) {
        RCERROR(interp,es_msg_buf);
      }
      return JIM_OK;
    }
    RCERROR(interp,"invalid subcommand for track::radio: %s",subcmd);
  }
  if(!strcmp("track::add",cmd)) {
    if(es_tcl_track_add(subcmd,atof(arg))) {
      RCERROR(interp,es_msg_buf);
    }
    return JIM_OK;
  }

  RCERROR(interp,"invalid track command: %s",cmd);
}

int es_jim_track_title(Jim_Interp *interp, int argc, Jim_Obj *const *argv) {
  if(argc!=2) {
    WRONG_ARGS(interp,1,argv,"title");
  }
  char *title = GetString(argv[1]);
  char *buf = malloc(strlen(title));
  strcpy(buf,title);
  return es_tcl_track_title_set(buf);
}

int es_jim_track_clear(Jim_Interp *interp, int argc, Jim_Obj *const *argv) {
  if(argc!=1) {
    WRONG_ARGS(interp,0,argv,"");
  }
  return es_tcl_track_clear();
}

int es_jim_log_cmd(Jim_Interp *interp, int argc, Jim_Obj *const *argv) {
  if(argc!=4) {
    WRONG_ARGS(interp,1,argv,"info|warn|error tag message");
  }
  char *lvl = (char*)Jim_GetString(argv[1],NULL);
  char *src = (char*)Jim_GetString(argv[2],NULL);
  char *msg = (char*)Jim_GetString(argv[3],NULL);
  if(!strcmp("info",lvl)) {
    LOG_INFO(src,msg);
    return JIM_OK;
  }
  if(!strcmp("warn",lvl)) {
    LOG_WARN(src,msg);
    return JIM_OK;
  }
  if(!strcmp("error",lvl)) {
    LOG_ERROR(src,msg);
    return JIM_OK;
  }
  RCERROR(interp,"Invalid log level: %s",lvl);
}


void es_jim_register_commands(es_Interp *interp) {
  Jim_CreateCommand(interp,"log",es_jim_log_cmd,NULL,NULL);
  Jim_CreateCommand(interp,"track::balise",es_jim_track_cmd,NULL,NULL);
  Jim_CreateCommand(interp,"track::radio",es_jim_track_cmd,NULL,NULL);
  Jim_CreateCommand(interp,"track::add",es_jim_track_cmd,NULL,NULL);
  Jim_CreateCommand(interp,"track::title",es_jim_track_title,NULL,NULL);
  Jim_CreateCommand(interp,"track::clear",es_jim_track_clear,NULL,NULL);
}



//----------------------------- Public API -----------------------------------
// provided to avoid a linking error with mingw (which doesn't provide mkstemp)
int mkstemp(char* d) {
  assert(false);
  return 1;
}

es_Interp *es_embedded_tcl = NULL;

es_Interp* es_get_interp() {
  if(es_embedded_tcl==NULL) {
    LOG_INFO(interp,"Initializing embedded Tcl interpreter");
    es_embedded_tcl = es_init_interp();
  }
  return es_embedded_tcl;
}


es_Interp* es_init_interp() {
  es_Interp *interp = NULL;

  interp = Jim_CreateInterp();
  Jim_RegisterCoreCommands(interp);
  Jim_InitStaticExtensions(interp);

  // load scripts
  es_eval_tcl(interp,es_tcl_script_config);

  // register commands
  es_jim_register_commands(interp);

  return interp;
}


void es_free_interp(es_Interp *interp) {
  Jim_FreeInterp(interp);
}

es_Status es_eval_tcl(es_Interp *interp, const char *script) {
  int error = Jim_Eval(interp, script);
  if (error == JIM_ERR) {
    Jim_MakeErrorMessage(interp);
    LOG_ERROR(Tcl,"%s\n", Jim_GetString(Jim_GetResult(interp), NULL));
  }
  return error;
}

const char* es_tcl_last_result(es_Interp *interp) {
  return Jim_GetString(Jim_GetResult(interp), NULL);
}

#endif
