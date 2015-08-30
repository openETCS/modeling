/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainpositionAtt_CalculateTrainPosition_Pkg.h"

void calculateTrainpositionAtt_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainpositionAtt_CalculateTrainPosition_Pkg *outC)
{
  /* nidC_nidBG_2_NIDLRBG */
  nidC_nidBG_2_NIDLRBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidC_nidBG_2_NIDLRBG);
  /* 1 */
  frontendToLRBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(&outC->_2_Context_1);
  /* 1 */
  trainMoveDir_vs_refBG_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->_1_Context_1);
  /* 1 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
void calculateTrainpositionAtt_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateTrainpositionAtt_CalculateTrainPosition_Pkg *outC)
{
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->_L218,
    trainPositionInfo);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L225,
    &outC->_L218.trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L237,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L242,
    &outC->_L237.d_baliseAntenna_2_frontend);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L225,
    &outC->_L242,
    &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L243,
    &outC->Context_1.distance);
  outC->_L249 = outC->_L243.d_max;
  outC->_L248 = outC->_L243.d_min;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L305, currentOdometry);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L320,
    &outC->_L218.lastPassedLinkedBG);
  /* 1 */
  trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->_L305,
    &outC->_L320,
    &outC->_1_Context_1);
  outC->_L347 = outC->_1_Context_1.direction;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L346,
    &outC->_L218.prevPassedLinkedBG);
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->_L343,
    trainPositionInfo);
  outC->_L344 = outC->_L343.linkingIsUsedOnboard;
  outC->_L247 = outC->_L243.nominal;
  outC->_L316 = outC->_L247 + outC->_L249;
  outC->_L315 = outC->_L247 + outC->_L248;
  outC->_L261 = outC->_L320.valid;
  outC->_L266 = !outC->_L261;
  outC->_L311 = Q_DIRLRBG_Unknown;
  outC->_L274 = outC->_L320.infoFromPassing.BG_Header.trainOrientationToBG;
  if (outC->_L266) {
    outC->_L312 = outC->_L311;
  }
  else {
    outC->_L312 = outC->_L274;
  }
  outC->_L223 =
    outC->_L320.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
  outC->_L310 = outC->_L266 | outC->_L223;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L307,
    trainProperties);
  /* 1 */
  frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
    &outC->_L320,
    &outC->_L218,
    &outC->_L307,
    &outC->_2_Context_1);
  outC->_L306 = outC->_2_Context_1.nominalOrReverseToLRBG;
  outC->_L301 = outC->_L218.timestamp;
  outC->_L262 = outC->_L320.nid_c;
  outC->_L263 = outC->_L320.nid_bg;
  /* nidC_nidBG_2_NIDLRBG */
  nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L261,
    outC->_L262,
    outC->_L263,
    &outC->Context_nidC_nidBG_2_NIDLRBG);
  outC->_L260 = outC->Context_nidC_nidBG_2_NIDLRBG.nidLRBG;
  outC->_L268 = cNID_LRBG_unknown_BG_Types_Pkg;
  outC->_L269 = outC->_L260 == outC->_L268;
  outC->_L267 = outC->_L266 | outC->_L269;
  outC->_L219 = outC->_L218.valid;
  outC->_L205.valid = outC->_L219;
  outC->_L205.timestamp = outC->_L301;
  outC->_L205.trainPositionIsUnknown = outC->_L267;
  outC->_L205.noCoordinateSystemHasBeenAssigned = outC->_L310;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L205.trainPosition,
    &outC->_L225);
  outC->_L205.estimatedFrontEndPosition = outC->_L247;
  outC->_L205.minSafeFrontEndPosition = outC->_L315;
  outC->_L205.maxSafeFrontEndPostion = outC->_L316;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L205.LRBG,
    &outC->_L320);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L205.prvLRBG,
    &outC->_L346);
  outC->_L205.nominalOrReverseToLRBG = outC->_L306;
  outC->_L205.trainOrientationToLRBG = outC->_L312;
  outC->_L205.trainRunningDirectionToLRBG = outC->_L347;
  outC->_L205.linkingIsUsedOnboard = outC->_L344;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &outC->_L205);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainpositionAtt_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

