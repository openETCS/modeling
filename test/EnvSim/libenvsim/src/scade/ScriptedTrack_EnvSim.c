/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/testbench/EnvSim/Simulation/config.txt
** Generation date: 2015-09-16T17:20:44
*************************************************************$ */

#ifdef WITH_SCADE
#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScriptedTrack_EnvSim.h"

extern void es_scripted_tracksim_init(outC_ScriptedTrack_EnvSim *out);
extern void es_scripted_tracksim_cycle(outC_ScriptedTrack_EnvSim *out, double actualPos, double radioPos);

int ScriptedTrack_initialized_EnvSim = 0;

void ScriptedTrack_init_EnvSim(outC_ScriptedTrack_EnvSim *outC)
{
  es_scripted_tracksim_init(outC);
  ScriptedTrack_initialized_EnvSim = 1;
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ScriptedTrack_reset_EnvSim(outC_ScriptedTrack_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::ScriptedTrack */
void ScriptedTrack_EnvSim(
  /* EnvSim::ScriptedTrack::actualTrainPos */ kcg_real actualTrainPos,
  /* EnvSim::ScriptedTrack::radioTrainPos */ kcg_real radioTrainPos,
  outC_ScriptedTrack_EnvSim *outC)
{
  if(!ScriptedTrack_initialized_EnvSim) {
    ScriptedTrack_init_EnvSim(outC);
  }
  es_scripted_tracksim_cycle(outC,actualTrainPos,radioTrainPos);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ScriptedTrack_EnvSim.dc
** Generation date: 2015-09-16T17:20:44
*************************************************************$ */

#endif
