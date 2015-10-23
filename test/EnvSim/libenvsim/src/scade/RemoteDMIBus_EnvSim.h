/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-19T20:52:26
*************************************************************$ */
#ifndef _RemoteDMIBus_EnvSim_H_
#define _RemoteDMIBus_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* EnvSim::RemoteDMIBus::dmiToEVC */ dmiToEVC;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_RemoteDMIBus_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::RemoteDMIBus */
extern void RemoteDMIBus_EnvSim(
  /* EnvSim::RemoteDMIBus::evcToDMI */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *evcToDMI,
  /* EnvSim::RemoteDMIBus::tiuToDMI */ TIU_Input_msg_API_TIU_Pkg *tiuToDMI,
  outC_RemoteDMIBus_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RemoteDMIBus_reset_EnvSim(outC_RemoteDMIBus_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void RemoteDMIBus_init_EnvSim(outC_RemoteDMIBus_EnvSim *outC);

#endif /* _RemoteDMIBus_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteDMIBus_EnvSim.dh
** Generation date: 2015-10-19T20:52:26
*************************************************************$ */

