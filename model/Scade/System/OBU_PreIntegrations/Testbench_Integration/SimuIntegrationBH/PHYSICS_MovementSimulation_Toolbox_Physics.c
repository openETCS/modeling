/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_MovementSimulation_Toolbox_Physics.h"

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_MovementSimulation_init_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  outC->init = kcg_true;
  outC->init2 = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_Reset_SM1;
  outC->_L14_SM1_Driving = 0.0;
  outC->_L15_SM1_Driving = 0.0;
  outC->_L2_1 = kcg_true;
  outC->resetOut = kcg_true;
  outC->odometry.valid = kcg_true;
  outC->odometry.timestamp = 0;
  outC->odometry.odo.o_nominal = 0;
  outC->odometry.odo.o_min = 0;
  outC->odometry.odo.o_max = 0;
  outC->odometry.speed.v_safeNominal = 0;
  outC->odometry.speed.v_rawNominal = 0;
  outC->odometry.speed.v_lower = 0;
  outC->odometry.speed.v_upper = 0;
  outC->odometry.acceleration = 0;
  outC->odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->timestamp = 0;
  outC->velocity = 0.0;
  outC->position = 0.0;
  /* 1 */ TRAIN_systemTimeGenerator_init_Toolbox_Functions(&outC->_1_Context_1);
  /* 1 */
  PHYSICS_simulateAccelerationBuildupTime_init_Toolbox_Physics_Basic(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PHYSICS_MovementSimulation_reset_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  outC->init = kcg_true;
  outC->init2 = kcg_true;
  /* 1 */
  TRAIN_systemTimeGenerator_reset_Toolbox_Functions(&outC->_1_Context_1);
  /* 1 */
  PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Physics::PHYSICS_MovementSimulation */
void PHYSICS_MovementSimulation_Toolbox_Physics(
  /* Toolbox::Physics::PHYSICS_MovementSimulation::reset */ kcg_bool reset,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::accelerationInPercent */ kcg_real accelerationInPercent,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tractionCutOffFromEVC */ kcg_bool tractionCutOffFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateServiceBrakeFromEVC */ kcg_bool activateServiceBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateEmergencyBrakeFromEVC */ kcg_bool activateEmergencyBrakeFromEVC,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialPosition */ kcg_real initialPosition,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::initialVelocity */ kcg_real initialVelocity,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::timeSinceLastCycle */ kcg_int timeSinceLastCycle,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateBrakeBuildupTime */ kcg_bool activateBrakeBuildupTime,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::activateAirResistance */ kcg_bool activateAirResistance,
  /* Toolbox::Physics::PHYSICS_MovementSimulation::maximumAcceleration */ kcg_real maximumAcceleration,
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
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
  /* Toolbox::Physics::PHYSICS_MovementSimulation */
  static kcg_real _1_op_call;
  /* Toolbox::Physics::PHYSICS_MovementSimulation */
  static kcg_real op_call;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */
  static kcg_real _2_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::then::_L2 */
  static kcg_real _L2_IfBlock1;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */
  static kcg_real finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else */
  static kcg_bool _18_else_clock_IfBlock1;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */
  static kcg_real _6_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else::else::then::_L1 */
  static kcg_real _L122_IfBlock1;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */
  static kcg_real _5_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else::else::else::_L1 */
  static kcg_real _L123_IfBlock1;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */
  static kcg_real _3_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1::else::then::_L1 */
  static kcg_real _L1_IfBlock1;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */
  static kcg_real _4_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _16_SSM_TR_SM1 _13_SM1_fired;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool _12_SM1_reset_nxt;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _14_SSM_ST_SM1 _11_SM1_state_nxt;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpPosition */
  static kcg_real _10_tmpPosition;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpVelocity */
  static kcg_real _9_tmpVelocity;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::velocity */
  static kcg_real _8_velocity;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::position */
  static kcg_real _7_position;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Reset::_L4 */
  static kcg_real _L4_SM1_Reset;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Reset::_L2 */
  static kcg_real _L2_SM1_Reset;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _16_SSM_TR_SM1 SM1_fired;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _14_SSM_ST_SM1 SM1_state_nxt;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpPosition */
  static kcg_real tmpPosition;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpVelocity */
  static kcg_real tmpVelocity;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::velocity */
  static kcg_real velocity;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::position */
  static kcg_real position;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L35 */
  static kcg_int _L35_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L33 */
  static kcg_real _L33_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L34 */
  static kcg_real _L34_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L32 */
  static kcg_real _L32_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L31 */
  static kcg_bool _L31_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L30 */
  static kcg_real _L30_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L29 */
  static kcg_real _L29_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L28 */
  static kcg_real _L28_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L27 */
  static kcg_real _L27_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L26 */
  static kcg_real _L26_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L25 */
  static kcg_bool _L25_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L21 */
  static kcg_real _L21_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L20 */
  static kcg_real _L20_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L19 */
  static kcg_real _L19_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L18 */
  static kcg_real _L18_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L16 */
  static kcg_real _L16_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L8 */
  static kcg_real _L8_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving::_L6 */
  static kcg_real _L6_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool _17_ck_every;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool ck_every;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _16_SSM_TR_SM1 _16_SM1_fired_strong;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool _15_SM1_reset_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _14_SSM_ST_SM1 _14_SM1_state_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Reset */
  static kcg_bool br_1_guard_SM1_Reset;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _16_SSM_TR_SM1 SM1_fired_strong;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool SM1_reset_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _14_SSM_ST_SM1 SM1_state_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1::Driving */
  static kcg_bool br_1_guard_SM1_Driving;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _14_SSM_ST_SM1 SM1_state_sel;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _14_SSM_ST_SM1 _21_SM1_state_act;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool SM1_reset_sel;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static kcg_bool SM1_reset_prv;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _16_SSM_TR_SM1 _20_SM1_fired_strong;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
  static _16_SSM_TR_SM1 _19_SM1_fired;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpVelocity */
  static kcg_real _26_tmpVelocity;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::tmpPosition */
  static kcg_real _25_tmpPosition;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::finalAccelerationInPercent */
  static kcg_real _24_finalAccelerationInPercent;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::needZeroPosition */
  static kcg_bool needZeroPosition;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L5 */
  static odometry_T_Obu_BasicTypes_Pkg _L5;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L6 */
  static kcg_real _L6;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L20 */
  static kcg_real _L20;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L19 */
  static kcg_real _L19;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L18 */
  static kcg_real _L18;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L17 */
  static kcg_real _L17;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L16 */
  static kcg_real _L16;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L15 */
  static kcg_real _L15;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L21 */
  static kcg_real _L21;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L24 */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg _L24;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L25 */
  static kcg_int _L25;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L28 */
  static kcg_bool _L28;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L62 */
  static kcg_real _L62;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L63 */
  static kcg_real _L63;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L64 */
  static kcg_int _L64;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L65 */
  static kcg_real _L65;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L66 */
  static kcg_real _L66;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L67 */
  static kcg_int _L67;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L70 */
  static kcg_bool _L70;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L71 */
  static kcg_bool _L71;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L72 */
  static kcg_real _L72;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L73 */
  static kcg_bool _L73;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L74 */
  static kcg_real _L74;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L75 */
  static kcg_bool _L75;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L76 */
  static kcg_bool _L76;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L77 */
  static kcg_bool _L77;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L79 */
  static kcg_int _L79;
  /* Toolbox::Physics::PHYSICS_MovementSimulation::_L80 */
  static OdometrySpeed_T_Toolbox _L80;
  
  /* init_SM1 */ if (outC->init2) {
    SM1_state_sel = SSM_st_Reset_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      br_1_guard_SM1_Reset = kcg_true;
      if (br_1_guard_SM1_Reset) {
        _14_SM1_state_act = SSM_st_Driving_SM1;
      }
      else {
        _14_SM1_state_act = SSM_st_Reset_SM1;
      }
      _21_SM1_state_act = _14_SM1_state_act;
      break;
    case SSM_st_Driving_SM1 :
      br_1_guard_SM1_Driving = reset;
      if (br_1_guard_SM1_Driving) {
        SM1_state_act = SSM_st_Reset_SM1;
      }
      else {
        SM1_state_act = SSM_st_Driving_SM1;
      }
      _21_SM1_state_act = SM1_state_act;
      break;
    
  }
  /* init_SM1 */ if (outC->init2) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      _15_SM1_reset_act = br_1_guard_SM1_Reset;
      outC->SM1_reset_act = _15_SM1_reset_act;
      break;
    case SSM_st_Driving_SM1 :
      SM1_reset_act = br_1_guard_SM1_Driving;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  /* act_SM1 */ switch (_21_SM1_state_act) {
    case SSM_st_Driving_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      _L25_SM1_Driving = activateAirResistance;
      ck_every = _L25_SM1_Driving;
      _L19_SM1_Driving = initialVelocity;
      /* fby_1_init_2 */ if (outC->init) {
        _L8_SM1_Driving = _L19_SM1_Driving;
      }
      else {
        _L8_SM1_Driving = outC->_L15_SM1_Driving;
      }
      _L31_SM1_Driving = activateBrakeBuildupTime;
      _17_ck_every = _L31_SM1_Driving;
      _L29_SM1_Driving = maximumAcceleration;
      break;
    
  }
  IfBlock1_clock = activateEmergencyBrakeFromEVC;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _18_else_clock_IfBlock1 = activateServiceBrakeFromEVC;
  }
  _L4_1 = outC->_L2_1;
  Init_1 = kcg_false;
  _L10_1 = Init_1;
  _L71 = tractionCutOffFromEVC;
  _L76 = activateServiceBrakeFromEVC;
  _L77 = activateEmergencyBrakeFromEVC;
  _L75 = _L71 | _L76 | _L77;
  Set_1 = _L75;
  _L5_1 = Set_1;
  _L72 = accelerationInPercent;
  _L74 = 0.0;
  _L73 = _L72 <= _L74;
  Reset_1 = _L73;
  _L6_1 = Reset_1;
  _L11_1 = !_L6_1;
  _L12_1 = _L11_1 & _L4_1;
  _L13_1 = _L5_1 | _L12_1;
  /* 1_1 */ if (outC->init2) {
    outC->_L2_1 = _L10_1;
  }
  else {
    outC->_L2_1 = _L13_1;
  }
  FFS_Output_1 = outC->_L2_1;
  _L70 = FFS_Output_1;
  needZeroPosition = _L70;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = - 300.0;
    _2_finalAccelerationInPercent = _L2_IfBlock1;
    _24_finalAccelerationInPercent = _2_finalAccelerationInPercent;
  }
  else {
    /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
      _L1_IfBlock1 = - 100.0;
      _4_finalAccelerationInPercent = _L1_IfBlock1;
      finalAccelerationInPercent = _4_finalAccelerationInPercent;
    }
    else {
      else_clock_IfBlock1 = tractionCutOffFromEVC | needZeroPosition;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L122_IfBlock1 = 0.0;
        _6_finalAccelerationInPercent = _L122_IfBlock1;
        _3_finalAccelerationInPercent = _6_finalAccelerationInPercent;
      }
      else {
        _L123_IfBlock1 = accelerationInPercent;
        _5_finalAccelerationInPercent = _L123_IfBlock1;
        _3_finalAccelerationInPercent = _5_finalAccelerationInPercent;
      }
      finalAccelerationInPercent = _3_finalAccelerationInPercent;
    }
    _24_finalAccelerationInPercent = finalAccelerationInPercent;
  }
  /* act_SM1 */ switch (_21_SM1_state_act) {
    case SSM_st_Driving_SM1 :
      _L16_SM1_Driving = _24_finalAccelerationInPercent;
      _L21_SM1_Driving = (kcg_real) _L16_SM1_Driving;
      _L27_SM1_Driving = 100.0;
      _L26_SM1_Driving = _L21_SM1_Driving / _L27_SM1_Driving;
      _L28_SM1_Driving = _L29_SM1_Driving * _L26_SM1_Driving;
      if (outC->SM1_reset_act) {
        /* 1 */
        PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
          &outC->Context_1);
      }
      /* ck_SM1 */ if (_17_ck_every) {
        /* 1 */
        PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
          _L28_SM1_Driving,
          &outC->Context_1);
        op_call = outC->Context_1.acceleration;
        _L30_SM1_Driving = op_call;
      }
      else {
        _L30_SM1_Driving = _L28_SM1_Driving;
      }
      /* ck_SM1 */ if (ck_every) {
        _1_op_call = /* 1 */
          PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
            _L8_SM1_Driving,
            _L30_SM1_Driving);
      }
      break;
    
  }
  /* init_SM1 */ if (outC->init2) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      if (br_1_guard_SM1_Reset) {
        _16_SM1_fired_strong = SSM_TR_Reset_1_SM1;
      }
      else {
        _16_SM1_fired_strong = _15_SSM_TR_no_trans_SM1;
      }
      _20_SM1_fired_strong = _16_SM1_fired_strong;
      break;
    case SSM_st_Driving_SM1 :
      if (br_1_guard_SM1_Driving) {
        SM1_fired_strong = SSM_TR_Driving_1_SM1;
      }
      else {
        SM1_fired_strong = _15_SSM_TR_no_trans_SM1;
      }
      _20_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_21_SM1_state_act) {
    case SSM_st_Reset_SM1 :
      _L4_SM1_Reset = initialPosition;
      _7_position = _L4_SM1_Reset;
      outC->position = _7_position;
      _L2_SM1_Reset = 0.0;
      _8_velocity = _L2_SM1_Reset;
      outC->velocity = _8_velocity;
      _9_tmpVelocity = _L2_SM1_Reset;
      _26_tmpVelocity = _9_tmpVelocity;
      _10_tmpPosition = _L4_SM1_Reset;
      _25_tmpPosition = _10_tmpPosition;
      _11_SM1_state_nxt = SSM_st_Reset_SM1;
      outC->SM1_state_nxt = _11_SM1_state_nxt;
      _12_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _12_SM1_reset_nxt;
      _13_SM1_fired = _20_SM1_fired_strong;
      _19_SM1_fired = _13_SM1_fired;
      break;
    case SSM_st_Driving_SM1 :
      /* ck_SM1 */ if (ck_every) {
        _L32_SM1_Driving = _1_op_call;
      }
      else {
        _L32_SM1_Driving = _L30_SM1_Driving;
      }
      _L18_SM1_Driving = initialPosition;
      /* fby_1_init_1 */ if (outC->init) {
        _L6_SM1_Driving = _L18_SM1_Driving;
      }
      else {
        _L6_SM1_Driving = outC->_L14_SM1_Driving;
      }
      _L35_SM1_Driving = timeSinceLastCycle;
      /* 1 */
      PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
        _L32_SM1_Driving,
        _L6_SM1_Driving,
        _L8_SM1_Driving,
        _L35_SM1_Driving,
        &_L33_SM1_Driving,
        &_L34_SM1_Driving);
      position = _L33_SM1_Driving;
      outC->position = position;
      _L20_SM1_Driving = /* 2 */
        m_s_To_km_h_Toolbox_Converters(_L34_SM1_Driving);
      velocity = _L20_SM1_Driving;
      outC->velocity = velocity;
      tmpVelocity = _L34_SM1_Driving;
      _26_tmpVelocity = tmpVelocity;
      tmpPosition = _L33_SM1_Driving;
      _25_tmpPosition = tmpPosition;
      SM1_state_nxt = SSM_st_Driving_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _20_SM1_fired_strong;
      _19_SM1_fired = SM1_fired;
      outC->_L14_SM1_Driving = tmpPosition;
      outC->_L15_SM1_Driving = tmpVelocity;
      break;
    
  }
  _L79 = timeSinceLastCycle;
  /* 1 */
  TRAIN_systemTimeGenerator_Toolbox_Functions(_L79, &outC->_1_Context_1);
  _L67 = outC->_1_Context_1.timestamp;
  outC->timestamp = _L67;
  _L6 = _26_tmpVelocity;
  _L80 = /* 1 */ m_s_To_cm_s_Toolbox_Converters(_L6);
  _L18 = accelerationInPercent;
  _L16 = (kcg_real) _L18;
  _L17 = 100.0;
  _L20 = _L16 / _L17;
  _L19 = cMaximumAcceleration_Toolbox;
  _L15 = _L20 * _L19;
  _L66 = 100.0;
  _L65 = _L15 * _L66;
  _L25 = (kcg_int) _L65;
  _L63 = 100.0;
  _L21 = _25_tmpPosition;
  _L62 = _L63 * _L21;
  _L64 = (kcg_int) _L62;
  _L24 = cabAFirst_Obu_BasicTypes_Pkg;
  /* 1 */ ODO_Toolbox_TrainModules(_L67, _L80, _L25, _L64, _L24, &_L5);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->odometry, &_L5);
  _L28 = reset;
  outC->resetOut = _L28;
  /* act_SM1 */ switch (_21_SM1_state_act) {
    case SSM_st_Driving_SM1 :
      outC->init = kcg_false;
      break;
    
  }
  outC->init2 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** PHYSICS_MovementSimulation_Toolbox_Physics.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

