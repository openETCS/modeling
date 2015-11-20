/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */
#ifndef _AFB_Toolbox_Physics_H_
#define _AFB_Toolbox_Physics_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::AFB::calculatedAcceleration */ calculatedAcceleration;
  kcg_bool /* Toolbox::Physics::AFB::afbActive */ afbActive;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Toolbox::Physics::AFB::IfBlock1::else::needZeroPosition */ needZeroPosition_IfBlock1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_AFB_Toolbox_Physics;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::AFB */
extern void AFB_Toolbox_Physics(
  /* Toolbox::Physics::AFB::targetSpeed */kcg_real targetSpeed,
  /* Toolbox::Physics::AFB::traction */kcg_real traction,
  /* Toolbox::Physics::AFB::brake */kcg_real brake,
  /* Toolbox::Physics::AFB::currentSpeed */kcg_real currentSpeed,
  outC_AFB_Toolbox_Physics *outC);

extern void AFB_reset_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC);

#endif /* _AFB_Toolbox_Physics_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** AFB_Toolbox_Physics.h
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */

