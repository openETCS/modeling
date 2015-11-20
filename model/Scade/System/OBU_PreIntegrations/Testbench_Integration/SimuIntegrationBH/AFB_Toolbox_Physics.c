/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AFB_Toolbox_Physics.h"

#ifndef KCG_USER_DEFINED_INIT
void AFB_init_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC)
{
  outC->init = kcg_true;
  outC->_L2_1 = kcg_true;
  outC->afbActive = kcg_true;
  outC->calculatedAcceleration = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AFB_reset_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Physics::AFB */
void AFB_Toolbox_Physics(
  /* Toolbox::Physics::AFB::targetSpeed */ kcg_real targetSpeed,
  /* Toolbox::Physics::AFB::traction */ kcg_real traction,
  /* Toolbox::Physics::AFB::brake */ kcg_real brake,
  /* Toolbox::Physics::AFB::currentSpeed */ kcg_real currentSpeed,
  outC_AFB_Toolbox_Physics *outC)
{
  /* digital::FlipFlopSet::FFS_Output */
  static kcg_bool FFS_Output_1;
  /* digital::FlipFlopSet::Init */
  static kcg_bool Init_1;
  /* digital::FlipFlopSet::Reset */
  static kcg_bool Reset_1;
  /* digital::FlipFlopSet::Set */
  static kcg_bool Set_1;
  /* digital::FlipFlopSet::_L13 */
  static kcg_bool _L13_1;
  /* digital::FlipFlopSet::_L12 */
  static kcg_bool _L12_1;
  /* digital::FlipFlopSet::_L11 */
  static kcg_bool _L11_1;
  /* digital::FlipFlopSet::_L6 */
  static kcg_bool _L6_1;
  /* digital::FlipFlopSet::_L5 */
  static kcg_bool _L5_1;
  /* digital::FlipFlopSet::_L4 */
  static kcg_bool _L4_1;
  /* digital::FlipFlopSet::_L10 */
  static kcg_bool _L10_1;
  /* Toolbox::Physics::AFB::calculatedAcceleration */
  static kcg_real _1_calculatedAcceleration;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2 */
  static kcg_bool _8_IfBlock2_clock_IfBlock1;
  /* Toolbox::Physics::AFB::calculatedAcceleration */
  static kcg_real _7_calculatedAcceleration;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L3 */
  static kcg_real _L3_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L5 */
  static kcg_real _L5_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L6 */
  static kcg_real _L6_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L7 */
  static kcg_real _L7_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L8 */
  static kcg_bool _L8_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L9 */
  static kcg_real _L9_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L10 */
  static kcg_real _L10_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L11 */
  static kcg_real _L11_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L13 */
  static kcg_real _L13_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::then::_L14 */
  static kcg_real _L14_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::calculatedAcceleration */
  static kcg_real _6_calculatedAcceleration;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L19 */
  static kcg_real _L19_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L18 */
  static kcg_real _L18_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L17 */
  static kcg_real _L17_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L16 */
  static kcg_real _L16_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L15 */
  static kcg_bool _L15_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L14 */
  static kcg_real _L149_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L13 */
  static kcg_real _L1310_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L12 */
  static kcg_real _L12_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L10 */
  static kcg_real _L1011_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else::else::_L9 */
  static kcg_real _L912_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::else */
  static kcg_bool else_clock_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::calculatedAcceleration */
  static kcg_real _4_calculatedAcceleration;
  /* Toolbox::Physics::AFB::IfBlock1::then::IfBlock2::then::_L1 */
  static kcg_real _L1_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::calculatedAcceleration */
  static kcg_real _5_calculatedAcceleration;
  /* Toolbox::Physics::AFB::calculatedAcceleration */
  static kcg_real calculatedAcceleration;
  /* Toolbox::Physics::AFB::IfBlock1::else::_L14 */
  static kcg_real _L14_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::else::_L13 */
  static kcg_bool _L13_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::else::_L12 */
  static kcg_real _L12_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::else::_L11 */
  static kcg_real _L11_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::else::_L10 */
  static kcg_real _L10_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::else::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::else::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::else::needZeroPosition */
  static kcg_bool needZeroPosition_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::else::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* Toolbox::Physics::AFB::IfBlock1::else::IfBlock2::else::_L1 */
  static kcg_real _L114_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::calculatedAcceleration */
  static kcg_real _2_calculatedAcceleration;
  /* Toolbox::Physics::AFB::IfBlock1::else::IfBlock2::then::_L1 */
  static kcg_real _L113_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::IfBlock1::else::IfBlock2::then::_L2 */
  static kcg_real _L2_IfBlock1_IfBlock2;
  /* Toolbox::Physics::AFB::calculatedAcceleration */
  static kcg_real _3_calculatedAcceleration;
  /* Toolbox::Physics::AFB::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Toolbox::Physics::AFB::realTargetSpeed */
  static kcg_real realTargetSpeed;
  /* Toolbox::Physics::AFB::_L1 */
  static kcg_bool _L1;
  /* Toolbox::Physics::AFB::_L2 */
  static kcg_real _L2;
  /* Toolbox::Physics::AFB::_L3 */
  static kcg_real _L3;
  /* Toolbox::Physics::AFB::_L4 */
  static kcg_real _L4;
  /* Toolbox::Physics::AFB::_L5 */
  static kcg_real _L5;
  /* Toolbox::Physics::AFB::_L6 */
  static kcg_real _L6;
  
  _L2 = targetSpeed;
  _L3 = 0.0;
  _L1 = _L2 > _L3;
  outC->afbActive = _L1;
  IfBlock1_clock = outC->afbActive;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _L4_1 = outC->_L2_1;
    Init_1 = kcg_false;
    _L10_1 = Init_1;
    _L12_IfBlock1 = brake;
    _L14_IfBlock1 = 0.0;
    _L13_IfBlock1 = _L12_IfBlock1 > _L14_IfBlock1;
    Set_1 = _L13_IfBlock1;
    _L5_1 = Set_1;
    _L10_IfBlock1 = traction;
    _L11_IfBlock1 = 0.0;
    _L9_IfBlock1 = _L10_IfBlock1 == _L11_IfBlock1;
    Reset_1 = _L9_IfBlock1;
    _L6_1 = Reset_1;
    _L11_1 = !_L6_1;
    _L12_1 = _L11_1 & _L4_1;
    _L13_1 = _L5_1 | _L12_1;
    /* 1_1 */ if (outC->init) {
      outC->_L2_1 = _L10_1;
    }
    else {
      outC->_L2_1 = _L13_1;
    }
    FFS_Output_1 = outC->_L2_1;
    _L6_IfBlock1 = FFS_Output_1;
    needZeroPosition_IfBlock1 = _L6_IfBlock1;
    IfBlock2_clock_IfBlock1 = needZeroPosition_IfBlock1;
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      _L113_IfBlock1_IfBlock2 = brake;
      _L2_IfBlock1_IfBlock2 = - _L113_IfBlock1_IfBlock2;
      _3_calculatedAcceleration = _L2_IfBlock1_IfBlock2;
      calculatedAcceleration = _3_calculatedAcceleration;
    }
    else {
      _L114_IfBlock1_IfBlock2 = traction;
      _2_calculatedAcceleration = _L114_IfBlock1_IfBlock2;
      calculatedAcceleration = _2_calculatedAcceleration;
    }
  }
  _L5 = targetSpeed;
  _L6 = 0.8;
  _L4 = _L5 - _L6;
  realTargetSpeed = _L4;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _8_IfBlock2_clock_IfBlock1 = (currentSpeed < realTargetSpeed + 0.5) &
      (currentSpeed > realTargetSpeed - 0.5);
    /* ck_IfBlock2 */ if (_8_IfBlock2_clock_IfBlock1) {
      _L1_IfBlock1_IfBlock2 = 0.0;
      _5_calculatedAcceleration = _L1_IfBlock1_IfBlock2;
      _1_calculatedAcceleration = _5_calculatedAcceleration;
    }
    else {
      else_clock_IfBlock1_IfBlock2 = currentSpeed < realTargetSpeed;
      /* ck_anon_activ */ if (else_clock_IfBlock1_IfBlock2) {
        _L6_IfBlock1_IfBlock2 = realTargetSpeed;
        _L5_IfBlock1_IfBlock2 = currentSpeed;
        _L7_IfBlock1_IfBlock2 = _L6_IfBlock1_IfBlock2 - _L5_IfBlock1_IfBlock2;
        _L9_IfBlock1_IfBlock2 = 5.5;
        _L8_IfBlock1_IfBlock2 = _L7_IfBlock1_IfBlock2 > _L9_IfBlock1_IfBlock2;
        _L10_IfBlock1_IfBlock2 = traction;
        _L14_IfBlock1_IfBlock2 = 5.5;
        _L13_IfBlock1_IfBlock2 = _L7_IfBlock1_IfBlock2 / _L14_IfBlock1_IfBlock2;
        _L11_IfBlock1_IfBlock2 = _L10_IfBlock1_IfBlock2 *
          _L13_IfBlock1_IfBlock2;
        /* 1 */ if (_L8_IfBlock1_IfBlock2) {
          _L3_IfBlock1_IfBlock2 = _L10_IfBlock1_IfBlock2;
        }
        else {
          _L3_IfBlock1_IfBlock2 = _L11_IfBlock1_IfBlock2;
        }
        _7_calculatedAcceleration = _L3_IfBlock1_IfBlock2;
        _4_calculatedAcceleration = _7_calculatedAcceleration;
      }
      else {
        _L1011_IfBlock1_IfBlock2 = currentSpeed;
        _L17_IfBlock1_IfBlock2 = realTargetSpeed;
        _L912_IfBlock1_IfBlock2 = _L1011_IfBlock1_IfBlock2 -
          _L17_IfBlock1_IfBlock2;
        _L18_IfBlock1_IfBlock2 = 5.5;
        _L15_IfBlock1_IfBlock2 = _L912_IfBlock1_IfBlock2 >
          _L18_IfBlock1_IfBlock2;
        _L19_IfBlock1_IfBlock2 = - 300.0;
        _L149_IfBlock1_IfBlock2 = 5.5;
        _L1310_IfBlock1_IfBlock2 = _L912_IfBlock1_IfBlock2 /
          _L149_IfBlock1_IfBlock2;
        _L12_IfBlock1_IfBlock2 = _L19_IfBlock1_IfBlock2 *
          _L1310_IfBlock1_IfBlock2;
        /* 3 */ if (_L15_IfBlock1_IfBlock2) {
          _L16_IfBlock1_IfBlock2 = _L19_IfBlock1_IfBlock2;
        }
        else {
          _L16_IfBlock1_IfBlock2 = _L12_IfBlock1_IfBlock2;
        }
        _6_calculatedAcceleration = _L16_IfBlock1_IfBlock2;
        _4_calculatedAcceleration = _6_calculatedAcceleration;
      }
      _1_calculatedAcceleration = _4_calculatedAcceleration;
    }
    outC->calculatedAcceleration = _1_calculatedAcceleration;
  }
  else {
    outC->calculatedAcceleration = calculatedAcceleration;
    outC->init = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** AFB_Toolbox_Physics.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

