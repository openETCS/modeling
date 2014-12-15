/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg.h"

void MLRI__trainMovementSensor_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  MLRI__outC_trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor */
void MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  MLRI__outC_trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  MLRI__Speed_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::SM1 */ MLRI___4_SSM_ST_SM1 SM1_state_sel;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::SM1 */ MLRI___4_SSM_ST_SM1 SM1_state_act;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::standstillDetected */ kcg_bool standstillDetected;
  
  if (outC->init) {
    tmp = MLRI__cOdometryStartVal_CalculateTrainPosition_Pkg_Pos_Pkg.speed;
  }
  else {
    tmp = outC->rem_currentOdometry.speed;
  }
  standstillDetected = ((*currentOdometry).speed ==
      MLRI__cSpeed_0_CalculateTrainPosition_Pkg_Pos_Pkg) &
    (MLRI__cSpeed_0_CalculateTrainPosition_Pkg_Pos_Pkg == tmp);
  if (outC->init) {
    SM1_state_sel = MLRI__SSM_st_Unknown_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case MLRI__SSM_st_Unknown_SM1 :
      if ((*currentOdometry).speed < 0) {
        SM1_state_act = MLRI__SSM_st_Decreasing_SM1;
      }
      else if ((*currentOdometry).speed > 0) {
        SM1_state_act = MLRI__SSM_st_Increasing_SM1;
      }
      else if ((*currentOdometry).speed == 0) {
        SM1_state_act = MLRI__SSM_st_Standstill_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_Unknown_SM1;
      }
      break;
    case MLRI__SSM_st_Decreasing_SM1 :
      if ((*currentOdometry).speed > 0) {
        SM1_state_act = MLRI__SSM_st_Increasing_SM1;
      }
      else if (standstillDetected) {
        SM1_state_act = MLRI__SSM_st_Standstill_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_Decreasing_SM1;
      }
      break;
    case MLRI__SSM_st_Increasing_SM1 :
      if ((*currentOdometry).speed < 0) {
        SM1_state_act = MLRI__SSM_st_Decreasing_SM1;
      }
      else if (standstillDetected) {
        SM1_state_act = MLRI__SSM_st_Standstill_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_Increasing_SM1;
      }
      break;
    case MLRI__SSM_st_Standstill_SM1 :
      if ((*currentOdometry).speed > 0) {
        SM1_state_act = MLRI__SSM_st_Increasing_SM1;
      }
      else if ((*currentOdometry).speed < 0) {
        SM1_state_act = MLRI__SSM_st_Decreasing_SM1;
      }
      else {
        SM1_state_act = MLRI__SSM_st_Standstill_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case MLRI__SSM_st_Unknown_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_Unknown_SM1;
      outC->direction = MLRI__trm_unknown_CalculateTrainPosition_Pkg_Pos_Pkg;
      break;
    case MLRI__SSM_st_Decreasing_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_Decreasing_SM1;
      outC->direction = MLRI__trm_decreasing_CalculateTrainPosition_Pkg_Pos_Pkg;
      break;
    case MLRI__SSM_st_Increasing_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_Increasing_SM1;
      outC->direction = MLRI__trm_increasing_CalculateTrainPosition_Pkg_Pos_Pkg;
      break;
    case MLRI__SSM_st_Standstill_SM1 :
      outC->SM1_state_nxt = MLRI__SSM_st_Standstill_SM1;
      outC->direction = MLRI__trm_standstill_CalculateTrainPosition_Pkg_Pos_Pkg;
      break;
    
  }
  MLRI__kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->rem_currentOdometry,
    currentOdometry);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

