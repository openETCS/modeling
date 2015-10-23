/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-11T11:19:19
*************************************************************$ */
#ifndef _RemoteDMI_EnvSim_H_
#define _RemoteDMI_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_to_EVC_Message_T_API_DMI_Pkg /* EnvSim::RemoteDMI::dmiToEVC */ dmiToEVC;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_RemoteDMI_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::RemoteDMI */
extern void RemoteDMI_EnvSim(
  /* EnvSim::RemoteDMI::evcToDMI */ EVC_to_DMI_Message_T_API_DMI_Pkg *evcToDMI,
  /* EnvSim::RemoteDMI::tiuToDMI */ TIU_Input_msg_API_TIU_Pkg *tiuToDMI,
  outC_RemoteDMI_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RemoteDMI_reset_EnvSim(outC_RemoteDMI_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void RemoteDMI_init_EnvSim(outC_RemoteDMI_EnvSim *outC);

#endif /* _RemoteDMI_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteDMI_EnvSim.dh
** Generation date: 2015-10-11T11:19:19
*************************************************************$ */

