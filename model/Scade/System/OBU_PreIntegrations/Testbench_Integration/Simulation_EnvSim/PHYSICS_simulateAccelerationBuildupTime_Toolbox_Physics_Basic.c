/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.h"

void PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC)
{
  outC->init = kcg_true;
}

/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime */
void PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC)
{
  if (outC->init) {
    outC->init = kcg_false;
    outC->acceleration = requestedAcceleration;
  }
  else {
    outC->acceleration = (requestedAcceleration - outC->acceleration) * 0.04 +
      outC->acceleration;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

