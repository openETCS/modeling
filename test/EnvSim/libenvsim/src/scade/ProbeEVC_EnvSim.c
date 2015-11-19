/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-11-19T09:52:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProbeEVC_EnvSim.h"

#ifdef WITH_SCADE
extern void es_scade_probe_evc_init(outC_ProbeEVC_EnvSim *outC);
extern void es_scade_probe_evc_cycle(MSG_Errors_T_Common_Types_Pkg *msgErrors,
                                     positionErrors_T_TrainPosition_Types_Pck *posErrors,
                                     morcStatus_T_RCM_Session_Types_Pkg *morcStatus,
                                     outC_ProbeEVC_EnvSim *outC);

int ProbeEVC_initialized_EnvSim = 0;
#endif // WITH_SCADE

void ProbeEVC_init_EnvSim(outC_ProbeEVC_EnvSim *outC)
{
#ifdef WITH_SCADE
  es_scade_probe_evc_init(outC);
  ProbeEVC_initialized_EnvSim = 1;
#endif // WITH_SCADE
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ProbeEVC_reset_EnvSim(outC_ProbeEVC_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::ProbeEVC */
void ProbeEVC_EnvSim(
  /* EnvSim::ProbeEVC::msgErrors */ MSG_Errors_T_Common_Types_Pkg *msgErrors,
  /* EnvSim::ProbeEVC::posErrors */ positionErrors_T_TrainPosition_Types_Pck *posErrors,
  /* EnvSim::ProbeEVC::morcStatus */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus,
  outC_ProbeEVC_EnvSim *outC)
{
#ifdef WITH_SCADE
  if(!ProbeEVC_initialized_EnvSim) {
    ProbeEVC_init_EnvSim(outC);
  }
  es_scade_probe_evc_cycle(msgErrors,posErrors,morcStatus,outC);
#endif // WITH_SCADE
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ProbeEVC_EnvSim.dc
** Generation date: 2015-11-19T09:52:54
*************************************************************$ */

