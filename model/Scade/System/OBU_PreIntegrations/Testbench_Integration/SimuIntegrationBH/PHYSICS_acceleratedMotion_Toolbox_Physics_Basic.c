/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h"

/* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion */
void PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::acceleration */ kcg_real acceleration,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentPosition */ kcg_real currentPosition,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::currentVelocity */ kcg_real currentVelocity,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeSinceLastCycle */ kcg_int timeSinceLastCycle,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::newPosition */ kcg_real *newPosition,
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::newVelocity */ kcg_real *newVelocity)
{
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::timeInSeconds */
  static kcg_real timeInSeconds;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L30 */
  static kcg_real _L30;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L29 */
  static kcg_bool _L29;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L28 */
  static kcg_real _L28;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L27 */
  static kcg_real _L27;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L26 */
  static kcg_real _L26;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L25 */
  static kcg_real _L25;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L24 */
  static kcg_real _L24;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L23 */
  static kcg_real _L23;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L17 */
  static kcg_real _L17;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L16 */
  static kcg_real _L16;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L15 */
  static kcg_real _L15;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L14 */
  static kcg_real _L14;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L12 */
  static kcg_real _L12;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L11 */
  static kcg_bool _L11;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L10 */
  static kcg_real _L10;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L7 */
  static kcg_real _L7;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L6 */
  static kcg_real _L6;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L5 */
  static kcg_bool _L5;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L4 */
  static kcg_real _L4;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L3 */
  static kcg_bool _L3;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L2 */
  static kcg_real _L2;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L1 */
  static kcg_real _L1;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L32 */
  static kcg_real _L32;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L33 */
  static kcg_real _L33;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L34 */
  static kcg_int _L34;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L35 */
  static kcg_real _L35;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L36 */
  static kcg_real _L36;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L37 */
  static kcg_real _L37;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L38 */
  static kcg_real _L38;
  /* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion::_L39 */
  static kcg_real _L39;
  
  _L34 = timeSinceLastCycle;
  _L10 = (kcg_real) _L34;
  _L7 = 1000.0;
  _L26 = _L10 / _L7;
  timeInSeconds = _L26;
  _L1 = timeInSeconds;
  _L32 = acceleration;
  _L27 = 0.0;
  _L29 = _L32 < _L27;
  _L36 = currentVelocity;
  _L28 = 0.0;
  _L5 = _L36 == _L28;
  _L3 = _L29 & _L5;
  _L39 = currentPosition;
  _L23 = 0.5;
  _L25 = _L32 / _L23;
  _L12 = _L25 * _L1 * _L1;
  _L35 = currentVelocity;
  _L30 = timeInSeconds;
  _L15 = _L35 * _L30;
  _L38 = currentPosition;
  _L24 = _L12 + _L15 + _L38;
  /* 1 */ if (_L3) {
    _L2 = _L39;
  }
  else {
    _L2 = _L24;
  }
  _L33 = acceleration;
  _L4 = _L33 * _L26;
  _L6 = 0.0;
  _L37 = currentVelocity;
  _L14 = _L4 + _L37;
  _L17 = 0.0;
  _L11 = _L14 >= _L17;
  /* 2 */ if (_L11) {
    _L16 = _L14;
  }
  else {
    _L16 = _L6;
  }
  *newPosition = _L2;
  *newVelocity = _L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

