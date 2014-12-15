/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg.h"

void MLRI__runningDirectionVsRef_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  MLRI__outC_runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  /* 1 */
  MLRI__trainMovementSensor_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef */
void MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::refTrainRunningDirection */MLRI__Q_DIRTRAIN refTrainRunningDirection,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::refSpeed */MLRI__Speed_T_Obu_BasicTypes_Pkg refSpeed,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  MLRI__outC_runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::IfBlock2::else */ kcg_bool else_clock_IfBlock2;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::IfBlock2 */ kcg_bool IfBlock2_clock;
  /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::refDir */ MLRI__trainMovementDir_T_CalculateTrainPosition_Pkg_Pos_Pkg refDir;
  
  /* 1 */
  MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg(
    currentOdometry,
    &outC->Context_1);
  else_clock_IfBlock2 = refSpeed > 0;
  if (else_clock_IfBlock2) {
    refDir = MLRI__trm_increasing_CalculateTrainPosition_Pkg_Pos_Pkg;
  }
  else {
    IfBlock2_clock = refSpeed < 0;
    if (IfBlock2_clock) {
      refDir = MLRI__trm_decreasing_CalculateTrainPosition_Pkg_Pos_Pkg;
    }
    else {
      refDir = MLRI__trm_standstill_CalculateTrainPosition_Pkg_Pos_Pkg;
    }
  }
  IfBlock2_clock = outC->Context_1.direction == refDir;
  if (IfBlock2_clock) {
    outC->trainRunningDirection = refTrainRunningDirection;
  }
  else {
    else_clock_IfBlock2 = (outC->Context_1.direction ==
        MLRI__trm_standstill_CalculateTrainPosition_Pkg_Pos_Pkg) | (refDir ==
        MLRI__trm_standstill_CalculateTrainPosition_Pkg_Pos_Pkg);
    if (else_clock_IfBlock2) {
      outC->trainRunningDirection = MLRI__Q_DIRTRAIN_Unknown;
    }
    else if (refTrainRunningDirection == MLRI__Q_DIRTRAIN_Nominal) {
      outC->trainRunningDirection = MLRI__Q_DIRTRAIN_Reverse;
    }
    else {
      outC->trainRunningDirection = MLRI__Q_DIRTRAIN_Nominal;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

