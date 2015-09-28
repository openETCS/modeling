/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/testbench/EnvSim/Simulation/config.txt
** Generation date: 2015-09-16T17:20:44
*************************************************************$ */
#ifndef _ScriptedTrack_EnvSim_H_
#define _ScriptedTrack_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* EnvSim::ScriptedTrack::radioMessage */ radioMessage;
  CompressedBaliseMessage_TM /* EnvSim::ScriptedTrack::baliseMessage */ baliseMessage;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_ScriptedTrack_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::ScriptedTrack */
extern void ScriptedTrack_EnvSim(
  /* EnvSim::ScriptedTrack::actualTrainPos */ kcg_real actualTrainPos,
  /* EnvSim::ScriptedTrack::radioTrainPos */ kcg_real radioTrainPos,
  outC_ScriptedTrack_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ScriptedTrack_reset_EnvSim(outC_ScriptedTrack_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void ScriptedTrack_init_EnvSim(outC_ScriptedTrack_EnvSim *outC);

#endif /* _ScriptedTrack_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ScriptedTrack_EnvSim.dh
** Generation date: 2015-09-16T17:20:44
*************************************************************$ */

