/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-19T20:52:26
*************************************************************$ */
#ifndef _RemoteEVCBus_EnvSim_H_
#define _RemoteEVCBus_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* EnvSim::RemoteEVCBus::evcToDMI */ evcToDMI;
  TIU_Input_msg_API_TIU_Pkg /* EnvSim::RemoteEVCBus::tiuToDMI */ tiuToDMI;
  kcg_bool /* EnvSim::RemoteEVCBus::run */ run;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_RemoteEVCBus_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::RemoteEVCBus */
extern void RemoteEVCBus_EnvSim(
  /* EnvSim::RemoteEVCBus::dmiToEVC */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmiToEVC,
  outC_RemoteEVCBus_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RemoteEVCBus_reset_EnvSim(outC_RemoteEVCBus_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void RemoteEVCBus_init_EnvSim(outC_RemoteEVCBus_EnvSim *outC);

#endif /* _RemoteEVCBus_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteEVCBus_EnvSim.dh
** Generation date: 2015-10-19T20:52:26
*************************************************************$ */

