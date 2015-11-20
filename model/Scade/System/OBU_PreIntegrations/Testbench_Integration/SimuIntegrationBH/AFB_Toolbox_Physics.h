/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _AFB_Toolbox_Physics_H_
#define _AFB_Toolbox_Physics_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::AFB::calculatedAcceleration */ calculatedAcceleration;
  kcg_bool /* Toolbox::Physics::AFB::afbActive */ afbActive;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::FlipFlopSet::_L2 */ _L2_1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_AFB_Toolbox_Physics;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::AFB */
extern void AFB_Toolbox_Physics(
  /* Toolbox::Physics::AFB::targetSpeed */ kcg_real targetSpeed,
  /* Toolbox::Physics::AFB::traction */ kcg_real traction,
  /* Toolbox::Physics::AFB::brake */ kcg_real brake,
  /* Toolbox::Physics::AFB::currentSpeed */ kcg_real currentSpeed,
  outC_AFB_Toolbox_Physics *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AFB_reset_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AFB_init_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _AFB_Toolbox_Physics_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** AFB_Toolbox_Physics.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

