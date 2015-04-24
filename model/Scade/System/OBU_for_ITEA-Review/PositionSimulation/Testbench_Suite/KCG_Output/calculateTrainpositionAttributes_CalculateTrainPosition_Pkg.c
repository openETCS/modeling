/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes */
void calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPositionInfo */ trainPositionInfo_T_TrainPosition_Types_Pck *trainPositionInfo,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition)
{
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L243 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L243;
  /* CalculateTrainPosition_Pkg::calculateTrainpositionAttributes::_L266 */ kcg_bool _L266;
  
  (*trainPosition).valid = (*trainPositionInfo).valid;
  (*trainPosition).timestamp = (*trainPositionInfo).timestamp;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*trainPosition).trainPosition,
    &(*trainPositionInfo).trainPosition);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &(*trainPosition).LRBG,
    &(*trainPositionInfo).lastPassedLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &(*trainPosition).prvLRBG,
    &(*trainPositionInfo).prevPassedLinkedBG);
  (*trainPosition).linkingIsUsedOnboard =
    (*trainPositionInfo).linkingIsUsedOnboard;
  _L266 = !(*trainPositionInfo).lastPassedLinkedBG.valid;
  (*trainPosition).noCoordinateSystemHasBeenAssigned = _L266 |
    (*trainPositionInfo).lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &(*trainPositionInfo).trainPosition,
    &(*trainProperties).d_baliseAntenna_2_frontend,
    &_L243);
  (*trainPosition).estimatedFrontEndPosition = _L243.nominal;
  (*trainPosition).minSafeFrontEndPosition = _L243.nominal + _L243.d_min;
  (*trainPosition).maxSafeFrontEndPostion = _L243.nominal + _L243.d_max;
  (*trainPosition).trainPositionIsUnknown = _L266 | (/* nidC_nidBG_2_NIDLRBG */
      nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        (*trainPositionInfo).lastPassedLinkedBG.valid,
        (*trainPositionInfo).lastPassedLinkedBG.nid_c,
        (*trainPositionInfo).lastPassedLinkedBG.nid_bg) ==
      cNID_LRBG_unknown_BG_Types_Pkg);
  (*trainPosition).nominalOrReverseToLRBG = /* 1 */
    frontendToLRBG_CalculateTrainPosition_Pkg_Pos_Pkg(
      &(*trainPositionInfo).lastPassedLinkedBG,
      trainPositionInfo,
      trainProperties);
  if (_L266) {
    (*trainPosition).trainOrientationToLRBG = Q_DIRLRBG_Unknown;
  }
  else {
    (*trainPosition).trainOrientationToLRBG =
      (*trainPositionInfo).lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG;
  }
  (*trainPosition).trainRunningDirectionToLRBG = /* 1 */
    trainMoveDir_vs_refBG_CalculateTrainPosition_Pkg_Pos_Pkg(
      currentOdometry,
      &(*trainPositionInfo).lastPassedLinkedBG);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculateTrainpositionAttributes_CalculateTrainPosition_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

