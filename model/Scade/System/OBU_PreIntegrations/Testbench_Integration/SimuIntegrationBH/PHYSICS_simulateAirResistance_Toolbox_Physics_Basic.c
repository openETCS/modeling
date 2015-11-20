/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.h"

/* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance */
kcg_real PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentVelocity */ kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::currentAcceleration */ kcg_real currentAcceleration)
{
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L16 */
  static kcg_real _L16;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L15 */
  static kcg_real _L15;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L14 */
  static kcg_real _L14;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L13 */
  static kcg_real _L13;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L12 */
  static kcg_real _L12;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L10 */
  static kcg_real _L10;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L8 */
  static kcg_real _L8;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L6 */
  static kcg_real _L6;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L4 */
  static kcg_real _L4;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L3 */
  static kcg_real _L3;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::_L1 */
  static kcg_real _L1;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance::newAcceleration */
  static kcg_real newAcceleration;
  
  _L1 = 42000.0;
  _L3 = 0.2;
  _L6 = 1.2;
  _L13 = 10.4;
  _L16 = currentVelocity;
  _L8 = _L6 * _L3 * _L13 * _L16 * _L16;
  _L10 = 2.0;
  _L12 = _L8 / _L10;
  _L4 = _L12 / _L1;
  _L15 = currentAcceleration;
  _L14 = _L15 - _L4;
  newAcceleration = _L14;
  return newAcceleration;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

