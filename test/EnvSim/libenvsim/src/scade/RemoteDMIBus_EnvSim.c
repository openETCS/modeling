/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-19T20:52:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RemoteDMIBus_EnvSim.h"

extern void es_remote_dmibus_init(outC_RemoteDMIBus_EnvSim *out);
extern void es_remote_dmibus_cycle(EVC_to_DMI_Message_int_T_API_DMI_Pkg *evcToDMI, TIU_Input_msg_API_TIU_Pkg *tiuToDMI, outC_RemoteDMIBus_EnvSim *outC);
kcg_bool RemoteDMIBus_initialized_EnvSim = kcg_false;

void RemoteDMIBus_init_EnvSim(outC_RemoteDMIBus_EnvSim *outC)
{
  es_remote_dmibus_init(outC);
  RemoteDMIBus_initialized_EnvSim = kcg_true;
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RemoteDMIBus_reset_EnvSim(outC_RemoteDMIBus_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::RemoteDMIBus */
void RemoteDMIBus_EnvSim(
  /* EnvSim::RemoteDMIBus::evcToDMI */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *evcToDMI,
  /* EnvSim::RemoteDMIBus::tiuToDMI */ TIU_Input_msg_API_TIU_Pkg *tiuToDMI,
  outC_RemoteDMIBus_EnvSim *outC)
{
  if(! RemoteDMIBus_initialized_EnvSim) {
    RemoteDMIBus_init_EnvSim(outC);
  }
  es_remote_dmibus_cycle(evcToDMI,tiuToDMI,outC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteDMIBus_EnvSim.dc
** Generation date: 2015-10-19T20:52:26
*************************************************************$ */

