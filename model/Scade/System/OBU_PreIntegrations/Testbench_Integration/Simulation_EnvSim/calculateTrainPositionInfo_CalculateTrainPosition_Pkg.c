/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"

void calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(&outC->Context_1);
  /* 2 */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
  /* 1 */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_1);
}

/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
void calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::recalculateBGs */kcg_bool recalculateBGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::passedBG */positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::reset */kcg_bool reset,
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L7 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L7;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L8 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L8;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L11 */
  static kcg_bool _L11;
  
  outC->trainPositionInfo.valid = (*currentOdometry).valid;
  outC->trainPositionInfo.timestamp = (*currentOdometry).timestamp;
  outC->trainPositionInfo.speed = (*currentOdometry).speed.v_safeNominal;
  if (recalculateBGs) {
    /* 1 */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      passedBG,
      BGs,
      kcg_true,
      reset,
      recalculateBGs,
      &outC->_1_Context_1);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L62,
      &outC->_1_Context_1.lastBG);
    /* 2 */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      passedBG,
      BGs,
      kcg_false,
      reset,
      recalculateBGs,
      &outC->Context_2);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L71,
      &outC->Context_2.lastBG);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L61,
      &outC->_1_Context_1.prvBG);
  }
  else if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L62,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L71,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L61,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->init = kcg_false;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.prevPassedLinkedBG,
    &outC->_L61);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.lastPassedLinkedBG,
    &outC->_L62);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.lastPassedUnlinkedBG,
    &outC->_L71);
  /* 1 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &(*currentOdometry).odo,
    &outC->_L62,
    &_L7);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG,
    &_L7);
  /* 2 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &(*currentOdometry).odo,
    &outC->_L71,
    &_L8);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG,
    &_L8);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &_L7,
    &_L8,
    &outC->trainPositionInfo.trainPosition,
    &_L11);
  outC->positionCalculationNotConsistent = !_L11;
  /* 1 */
  linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
    currentOdometry,
    BGs,
    recalculateBGs,
    &outC->Context_1);
  outC->trainPositionInfo.linkingIsUsedOnboard = outC->Context_1.linkingIsUsed;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainPositionInfo_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

