/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.h"

/* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance */
kcg_real PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentVelocity */kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentAcceleration */kcg_real currentAcceleration)
{
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::newAcceleration */
  static kcg_real newAcceleration;
  
  newAcceleration = currentAcceleration - 1.2 * 0.2 * 10.4 * currentVelocity *
    currentVelocity / 2.0 / 42000.0;
  return newAcceleration;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

