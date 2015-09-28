//     Project: openETCS libenvsim
//      Module: scade / scade_track.c
// Description: Implementation of the init and cycle functions for the SCADE ScriptedTrack operator
//
// History:
// - 25.09.15, J. Kastner: initial version

#ifdef WITH_SCADE
#include <stdio.h>
#include "../trackmsg.h"
#include "../tcl/interp.h"
#include "../logging.h"
#include "ScriptedTrack_EnvSim.h"

es_TrackSimState es_scripted_tracksim_state = {
  .messages = &es_tracksim_track,
  .prevBmsg = NULL,
  .prevBPos = 0.0,
  .prevRmsg = NULL,
  .prevRPos = 0.0
};


void es_scripted_tracksim_init(outC_ScriptedTrack_EnvSim *out) {
  es_log_init(NULL);

  LOG_INFO(scade_track,"Initializing ScriptedTrack");
  char *cfgfile = getenv("OPENETCS_ENVSIM_CONFIG");
  if(cfgfile==NULL) {
    LOG_WARN(scade_track,"Environment variable OPENETCS_ENVSIM_CONFIG not defined; using 'envsim.cfg'\n");
    cfgfile = "envsim.cfg";
  }

  es_Interp *interp = es_get_interp();
  // load configuration
  snprintf(es_msg_buf,ES_MSG_BUF_SIZE,"config::parse \"%s\"",cfgfile);
  es_eval_tcl(interp,es_msg_buf);

  // load track, if defined in configuration
  es_eval_tcl(interp,
     "set trackfile [config::get track];"
     "if {$trackfile eq {}} {log warn scade_track {no track loaded!}} {source $trackfile; log info scade_track {track successfully loaded}}");

  // use loaded track for current simulation
  es_scripted_tracksim_state.messages = &es_tracksim_track;
  LOG_INFO(scade_track,"loaded %d balise messages and %d radio messages",
           es_list_size(es_tracksim_track.bmsgs),es_list_size(es_tracksim_track.rmsgs));
}


void es_scripted_tracksim_cycle(outC_ScriptedTrack_EnvSim *out, double actualPos, double radioPos) {
  es_exec_tracksim_cycle(&es_scripted_tracksim_state,actualPos,radioPos);
  es_write_next_balise_message(&out->baliseMessage);
  es_write_next_radio_message(&out->radioMessage);
}

#endif