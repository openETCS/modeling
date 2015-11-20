/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h"

/* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion */
void PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::acceleration */kcg_real acceleration,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentPosition */kcg_real currentPosition,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentVelocity */kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeSinceLastCycle */kcg_int timeSinceLastCycle,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::newPosition */kcg_real *newPosition,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::newVelocity */kcg_real *newVelocity)
{
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeInSeconds */
  static kcg_real timeInSeconds;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L14 */
  static kcg_real _L14;
  
  timeInSeconds = (kcg_real) timeSinceLastCycle / 1000.0;
  _L14 = acceleration * timeInSeconds + currentVelocity;
  if (_L14 >= 0.0) {
    *newVelocity = _L14;
  }
  else {
    *newVelocity = 0.0;
  }
  if ((acceleration < 0.0) & (currentVelocity == 0.0)) {
    *newPosition = currentPosition;
  }
  else {
    *newPosition = acceleration / 0.5 * timeInSeconds * timeInSeconds +
      currentVelocity * timeInSeconds + currentPosition;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

