/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionGenerator.h"

void positionGenerator_init(outC_positionGenerator *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->SM1_state_nxt = SSM_st_Reset_SM1;
  outC->_L2_SM1_Driving = 0.0;
  outC->_L1_SM1_Driving = 0.0;
  outC->resetOut = kcg_true;
  outC->odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->odometry.acceleration = 0;
  outC->odometry.speed.v_upper = 0;
  outC->odometry.speed.v_lower = 0;
  outC->odometry.speed.v_rawNominal = 0;
  outC->odometry.speed.v_safeNominal = 0;
  outC->odometry.odo.o_max = 0;
  outC->odometry.odo.o_min = 0;
  outC->odometry.odo.o_nominal = 0;
  outC->odometry.timestamp = 0;
  outC->odometry.valid = kcg_true;
  outC->timestamp = 0;
  outC->velocity = 0.0;
  outC->position = 0.0;
  calculatePosition_init(&outC->Context_1);
}


void positionGenerator_reset(outC_positionGenerator *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ calculatePosition_reset(&outC->Context_1);
}

/* positionGenerator */
void positionGenerator(
  /* positionGenerator::reset */ kcg_bool reset,
  /* positionGenerator::accelerationPercent */ kcg_real accelerationPercent,
  /* positionGenerator::activateServiceBrakeFromEVC */ kcg_bool activateServiceBrakeFromEVC,
  /* positionGenerator::activateEmergencyBrakeFromEVC */ kcg_bool activateEmergencyBrakeFromEVC,
  /* positionGenerator::initialPosition */ kcg_real initialPosition,
  /* positionGenerator::initialVelocity */ kcg_real initialVelocity,
  /* positionGenerator::tractionCutOffFromEVC */ kcg_bool tractionCutOffFromEVC,
  outC_positionGenerator *outC)
{
  kcg_real tmp3;
  kcg_real tmp2;
  kcg_real tmp1;
  kcg_real tmp;
  /* positionGenerator::IfBlock1::else */ kcg_bool _4_else_clock_IfBlock1;
  /* positionGenerator::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* positionGenerator::SM1 */ SSM_ST_SM1 SM1_state_sel;
  /* positionGenerator::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* positionGenerator::SM1 */ kcg_bool SM1_reset_act;
  
  outC->resetOut = reset;
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_Reset_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_Reset_SM1 :
      SM1_reset_act = kcg_true;
      SM1_state_act = SSM_st_Driving_SM1;
      break;
    case SSM_st_Driving_SM1 :
      if (outC->resetOut) {
        SM1_state_act = SSM_st_Reset_SM1;
      }
      else {
        SM1_state_act = SSM_st_Driving_SM1;
      }
      SM1_reset_act = outC->resetOut;
      break;
    
  }
  if (activateEmergencyBrakeFromEVC) {
  }
  else {
    _4_else_clock_IfBlock1 = activateServiceBrakeFromEVC;
    if (_4_else_clock_IfBlock1) {
    }
    else {
      else_clock_IfBlock1 = tractionCutOffFromEVC;
    }
  }
  switch (SM1_state_act) {
    case SSM_st_Driving_SM1 :
      if (SM1_reset_act) {
        outC->init1 = kcg_true;
        /* 1 */ calculatePosition_reset(&outC->Context_1);
      }
      if (activateEmergencyBrakeFromEVC) {
        tmp3 = - 300.0;
      }
      else if (_4_else_clock_IfBlock1) {
        tmp3 = - 100.0;
      }
      else if (else_clock_IfBlock1) {
        tmp3 = 0.0;
      }
      else {
        tmp3 = accelerationPercent;
      }
      if (outC->init1) {
        tmp2 = initialPosition;
        tmp1 = initialVelocity;
      }
      else {
        tmp2 = outC->_L1_SM1_Driving;
        tmp1 = outC->_L2_SM1_Driving;
      }
      /* 1 */
      calculatePosition(
        tmp3,
        cDeltaSimulationTime,
        tmp2,
        tmp1,
        &outC->Context_1);
      outC->_L1_SM1_Driving = outC->Context_1.position;
      outC->_L2_SM1_Driving = outC->Context_1.velocity;
      outC->velocity = /* 1 */ m_s_To_km_h_Converters(outC->_L2_SM1_Driving);
      outC->timestamp = outC->Context_1.timestamp;
      outC->position = outC->_L1_SM1_Driving;
      outC->SM1_state_nxt = SSM_st_Driving_SM1;
      tmp = outC->_L2_SM1_Driving;
      outC->init1 = kcg_false;
      break;
    case SSM_st_Reset_SM1 :
      outC->velocity = 0.0;
      outC->timestamp = 0;
      outC->position = initialPosition;
      outC->SM1_state_nxt = SSM_st_Reset_SM1;
      tmp = 0.0;
      break;
    
  }
  tmp1 = /* 2 */ m_s_To_km_h_Converters(tmp);
  /* 1 */
  buildOdometryPacket(
    outC->timestamp,
    (kcg_int) tmp1,
    (kcg_int) (accelerationPercent / 100.0 * 0.5 * 100.0),
    (kcg_int) (100.0 * outC->position),
    cabAFirst_Obu_BasicTypes_Pkg,
    &outC->odometry);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** positionGenerator.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

