/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-08T06:32:03
*************************************************************$ */
#ifndef _RemoteEVC_EnvSim_H_
#define _RemoteEVC_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  EVC_to_DMI_Message_T_API_DMI_Pkg /* EnvSim::RemoteEVC::evcToDMI */ evcToDMI;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_RemoteEVC_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::RemoteEVC */
extern void RemoteEVC_EnvSim(
  /* EnvSim::RemoteEVC::dmiToEVC */ DMI_to_EVC_Message_T_API_DMI_Pkg *dmiToEVC,
  outC_RemoteEVC_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RemoteEVC_reset_EnvSim(outC_RemoteEVC_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void RemoteEVC_init_EnvSim(outC_RemoteEVC_EnvSim *outC);

#endif /* _RemoteEVC_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RemoteEVC_EnvSim.dh
** Generation date: 2015-10-08T06:32:03
*************************************************************$ */

