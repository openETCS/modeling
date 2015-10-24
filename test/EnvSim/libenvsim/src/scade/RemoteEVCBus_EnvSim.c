/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-19T20:52:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RemoteEVCBus_EnvSim.h"

extern void es_remote_evcbus_init(outC_RemoteEVCBus_EnvSim *out);
extern void es_remote_evcbus_cycle(DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmiToEVC, outC_RemoteEVCBus_EnvSim *outC);
kcg_bool RemoteEVCBus_Initialized_EnvSim = kcg_false;

void RemoteEVCBus_init_EnvSim(outC_RemoteEVCBus_EnvSim *outC)
{
  es_remote_evcbus_init(outC);
  RemoteEVCBus_Initialized_EnvSim = kcg_true;
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RemoteEVCBus_reset_EnvSim(outC_RemoteEVCBus_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::RemoteEVCBus */
void RemoteEVCBus_EnvSim(
  /* EnvSim::RemoteEVCBus::dmiToEVC */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmiToEVC,
  outC_RemoteEVCBus_EnvSim *outC)
{
  if( !RemoteEVCBus_Initialized_EnvSim ) {
    RemoteEVCBus_init_EnvSim(outC);
  }
  es_remote_evcbus_cycle(dmiToEVC,outC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteEVCBus_EnvSim.dc
** Generation date: 2015-10-19T20:52:26
*************************************************************$ */

