/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-11-19T09:52:54
*************************************************************$ */
#ifndef _ProbeEVC_EnvSim_H_
#define _ProbeEVC_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* EnvSim::ProbeEVC::dummyOut */ dummyOut;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_ProbeEVC_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::ProbeEVC */
extern void ProbeEVC_EnvSim(
  /* EnvSim::ProbeEVC::msgErrors */ MSG_Errors_T_Common_Types_Pkg *msgErrors,
  /* EnvSim::ProbeEVC::posErrors */ positionErrors_T_TrainPosition_Types_Pck *posErrors,
  /* EnvSim::ProbeEVC::morcStatus */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus,
  outC_ProbeEVC_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ProbeEVC_reset_EnvSim(outC_ProbeEVC_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void ProbeEVC_init_EnvSim(outC_ProbeEVC_EnvSim *outC);

#endif /* _ProbeEVC_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ProbeEVC_EnvSim.dh
** Generation date: 2015-11-19T09:52:54
*************************************************************$ */

