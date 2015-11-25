/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-11-25T10:38:38
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InjectRadioMessage_EnvSim.h"

#ifdef WITH_SCADE
/*extern void es_scade_remote_inject_init(outC_InjectRadioMessage_EnvSim *outC);
extern void es_scade_remote_inject_cycle(CompressedRadioMessage_TM *rmsgIn,
                                         outC_InjectRadioMessage_EnvSim *outC);

int InjectRadioMessage_initialized_EnvSim = 0;*/
#endif // WITH_SCADE

void InjectRadioMessage_init_EnvSim(outC_InjectRadioMessage_EnvSim *outC)
{
#ifdef WITH_SCADE
/*  es_scade_remote_inject_init(outC);
  InjectRadioMessage_initialized_EnvSim = 1;
  */
#endif // WITH_SCADE
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InjectRadioMessage_reset_EnvSim(outC_InjectRadioMessage_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::InjectRadioMessage */
void InjectRadioMessage_EnvSim(
  /* EnvSim::InjectRadioMessage::rmsgIn */ CompressedRadioMessage_TM *rmsgIn,
  outC_InjectRadioMessage_EnvSim *outC)
{
#ifdef WITH_SCADE

#endif // WITH_SCADE
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InjectRadioMessage_EnvSim.dc
** Generation date: 2015-11-25T10:38:38
*************************************************************$ */

