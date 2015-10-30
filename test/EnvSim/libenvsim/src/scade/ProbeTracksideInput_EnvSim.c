/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-28T16:19:59
*************************************************************$ */

#include <stdio.h>
#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProbeTracksideInput_EnvSim.h"

extern void es_scade_probe_trackside_init(outC_ProbeTracksideInput_EnvSim *outC);
extern void es_scade_probe_trackside_cycle(double,
                                           CompressedBaliseMessage_TM*,
                                           CompressedRadioMessage_TM*,
                                           M_TrainTrack_Message_T_TM_radio_messages*,
                                           outC_ProbeTracksideInput_EnvSim*);

int ProbeTracksideInput_initialized_EnvSim = 0;

void ProbeTracksideInput_init_EnvSim(outC_ProbeTracksideInput_EnvSim *outC)
{
  es_scade_probe_trackside_init(outC);
  ProbeTracksideInput_initialized_EnvSim = 1;
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ProbeTracksideInput_reset_EnvSim(outC_ProbeTracksideInput_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::ProbeTracksideInput */
void ProbeTracksideInput_EnvSim(
  kcg_real currentPosition,
  CompressedBaliseMessage_TM *baliseMessage,
  CompressedRadioMessage_TM *radioMessage,
  M_TrainTrack_Message_T_TM_radio_messages *trainMessage,
  outC_ProbeTracksideInput_EnvSim *outC)
{
  if(!ProbeTracksideInput_initialized_EnvSim) {
    ProbeTracksideInput_init_EnvSim(outC);
  }
  es_scade_probe_trackside_cycle(currentPosition,baliseMessage,radioMessage,trainMessage,outC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ProbeTracksideInput_EnvSim.dc
** Generation date: 2015-10-28T16:19:59
*************************************************************$ */

