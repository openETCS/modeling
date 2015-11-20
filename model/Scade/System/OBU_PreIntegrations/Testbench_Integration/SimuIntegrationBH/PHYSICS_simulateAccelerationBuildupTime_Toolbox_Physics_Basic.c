/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.h"

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_simulateAccelerationBuildupTime_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC)
{
  outC->init = kcg_true;
  outC->currentAcceleration = 0.0;
  outC->acceleration = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


void PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC)
{
  outC->init = kcg_true;
}

/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime */
void PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::requestedAcceleration */ kcg_real requestedAcceleration,
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC)
{
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::currentAcceleration */
  static kcg_real last_currentAcceleration;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L1 */
  static kcg_real _L1;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L2 */
  static kcg_real _L2;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L3 */
  static kcg_real _L3;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L5 */
  static kcg_real _L5;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L6 */
  static kcg_real _L6;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L7 */
  static kcg_real _L7;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L8 */
  static kcg_real _L8;
  /* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime::_L9 */
  static kcg_real _L9;
  
  _L1 = requestedAcceleration;
  /* last_init_ck_currentAcceleration */ if (outC->init) {
    last_currentAcceleration = 0.0;
  }
  else {
    last_currentAcceleration = outC->currentAcceleration;
  }
  _L5 = requestedAcceleration;
  _L3 = last_currentAcceleration;
  _L6 = _L5 - _L3;
  _L8 = 0.04;
  _L7 = _L6 * _L8;
  _L9 = _L7 + _L3;
  /* 1 */ if (outC->init) {
    _L2 = _L1;
  }
  else {
    _L2 = _L9;
  }
  outC->currentAcceleration = _L2;
  outC->acceleration = _L2;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

