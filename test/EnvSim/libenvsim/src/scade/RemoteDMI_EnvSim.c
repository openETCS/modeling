/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/SimulationJK/config.txt
** Generation date: 2015-09-28T11:34:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RemoteDMI_EnvSim.h"

extern void es_remote_dmi_init(outC_RemoteDMI_EnvSim *out);
extern void es_remote_dmi_cycle(EVC_to_DMI_Message_T_API_DMI_Pkg *evcToDMI, outC_RemoteDMI_EnvSim *outC);
int RemoteDMI_initialized_EnvSim = 0;

void RemoteDMI_init_EnvSim(outC_RemoteDMI_EnvSim *outC)
{
  es_remote_dmi_init(outC);
  RemoteDMI_initialized_EnvSim = 1;
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RemoteDMI_reset_EnvSim(outC_RemoteDMI_EnvSim *outC)
{
  /* The body of this function must be provided */
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EnvSim::DMIAdapter */
void RemoteDMI_EnvSim(
  /* EnvSim::DMIAdapter::evcToDMI */ EVC_to_DMI_Message_T_API_DMI_Pkg *evcToDMI,
  outC_RemoteDMI_EnvSim *outC)
{
  if(! RemoteDMI_initialized_EnvSim) {
    RemoteDMI_init_EnvSim(outC);
  }
  es_remote_dmi_cycle(evcToDMI,outC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DMIAdapter_EnvSim.dc
** Generation date: 2015-09-28T11:34:05
*************************************************************$ */

