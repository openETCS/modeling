/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-08T06:32:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RemoteEVC_EnvSim.h"

extern void es_remote_evc_init(outC_RemoteEVC_EnvSim *out);
extern void es_remote_evc_cycle(DMI_to_EVC_Message_T_API_DMI_Pkg *dmiToEVC, outC_RemoteEVC_EnvSim *outC);
int RemoteEVC_Initialized_EnvSim = 0;

void RemoteEVC_init_EnvSim(outC_RemoteEVC_EnvSim *outC)
{
  es_remote_evc_init(outC);
  RemoteEVC_Initialized_EnvSim = 1;
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RemoteEVC_reset_EnvSim(outC_RemoteEVC_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::RemoteEVC */
void RemoteEVC_EnvSim(
  /* EnvSim::RemoteEVC::dmiToEVC */ DMI_to_EVC_Message_T_API_DMI_Pkg *dmiToEVC,
  outC_RemoteEVC_EnvSim *outC)
{
  if( !RemoteEVC_Initialized_EnvSim ) {
    RemoteEVC_init_EnvSim(outC);
  }
  es_remote_evc_cycle(dmiToEVC,outC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteEVC_EnvSim.dc
** Generation date: 2015-10-08T06:32:03
*************************************************************$ */

