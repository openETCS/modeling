/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */
#ifndef _PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic_H_
#define _PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::acceleration */ acceleration;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime */
extern void PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC);

extern void PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC);

#endif /* _PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.h
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */

