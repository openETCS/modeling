/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic_H_
#define _PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::acceleration */ acceleration;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_real /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::currentAcceleration */ currentAcceleration;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime */
extern void PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */ kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC);

extern void PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_simulateAccelerationBuildupTime_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

