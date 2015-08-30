/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"

void calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->_4_Context_1);
  /* 2 */
  positionDerivedFromPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_3_Context_2);
  /* 1 */
  positionDerivedFromPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_2_Context_1);
  /* 1 */
  linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_1_Context_1);
  /* 2 */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
  /* 1 */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
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
  positionedBG_T_TrainPosition_Types_Pck tmp3;
  positionedBG_T_TrainPosition_Types_Pck tmp2;
  positionedBG_T_TrainPosition_Types_Pck tmp1;
  positionedBG_T_TrainPosition_Types_Pck tmp;
  positionedBG_T_TrainPosition_Types_Pck tmp6;
  positionedBG_T_TrainPosition_Types_Pck tmp7;
  positionedBG_T_TrainPosition_Types_Pck tmp4;
  positionedBG_T_TrainPosition_Types_Pck tmp5;
  positionedBG_T_TrainPosition_Types_Pck noname;
  
  outC->_L66 = recalculateBGs;
  outC->tmp5 = outC->_L66;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L63, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L65, BGs);
  outC->_L64 = kcg_true;
  outC->_L67 = reset;
  if (outC->tmp5) {
    /* 1 */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_L63,
      &outC->_L65,
      outC->_L64,
      outC->_L67,
      outC->_L66,
      &outC->Context_1);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp7,
      &outC->Context_1.prvBG);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp6,
      &outC->Context_1.lastBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L68,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if (outC->tmp5) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L62, &tmp6);
  }
  else {
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp3, &outC->_L68);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp3, &outC->_L62);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L62, &tmp3);
  }
  outC->_L76 = recalculateBGs;
  outC->tmp = outC->_L76;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L72, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L69, BGs);
  outC->_L73 = kcg_false;
  outC->_L74 = reset;
  if (outC->tmp) {
    /* 2 */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_L72,
      &outC->_L69,
      outC->_L73,
      outC->_L74,
      outC->_L76,
      &outC->Context_2);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp5,
      &outC->Context_2.prvBG);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp4,
      &outC->Context_2.lastBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L75,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if (outC->tmp) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L71, &tmp4);
  }
  else {
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp2, &outC->_L75);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp2, &outC->_L71);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L71, &tmp2);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1, currentOdometry);
  outC->_L77 = outC->_L1.valid;
  if (outC->tmp) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &tmp5);
  }
  else {
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &outC->_L75);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &outC->_L70);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &tmp1);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&noname, &outC->_L70);
  if (outC->tmp5) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L61, &tmp7);
  }
  else {
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &outC->_L68);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &outC->_L61);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L61, &tmp);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L59, BGs);
  outC->_L58 = recalculateBGs;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L57, currentOdometry);
  /* 1 */
  linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_L57,
    &outC->_L59,
    outC->_L58,
    &outC->_1_Context_1);
  outC->_L56 = outC->_1_Context_1.linkingIsUsed;
  outC->_L14 = outC->_L1.timestamp;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L13, &outC->_L1.odo);
  /* 1 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L13,
    &outC->_L62,
    &outC->_2_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L7,
    &outC->_2_Context_1.position);
  /* 2 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L13,
    &outC->_L71,
    &outC->_3_Context_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L8,
    &outC->_3_Context_2.position);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L7,
    &outC->_L8,
    &outC->_4_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L10,
    &outC->_4_Context_1.loc);
  outC->_L11 = outC->_4_Context_1.overlap;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L28, currentOdometry);
  outC->_L15 = outC->_L28.speed.v_safeNominal;
  outC->_L9.valid = outC->_L77;
  outC->_L9.timestamp = outC->_L14;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L9.trainPosition,
    &outC->_L10);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L9.trainPositionDerivedFromLastLinkedBG,
    &outC->_L7);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L9.trainPositionDerivedFromLastUnlinkedBG,
    &outC->_L8);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9.prevPassedLinkedBG,
    &outC->_L61);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9.lastPassedLinkedBG,
    &outC->_L62);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9.lastPassedUnlinkedBG,
    &outC->_L71);
  outC->_L9.speed = outC->_L15;
  outC->_L9.linkingIsUsedOnboard = outC->_L56;
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo,
    &outC->_L9);
  outC->_L12 = !outC->_L11;
  outC->positionCalculationNotConsistent = outC->_L12;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainPositionInfo_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

