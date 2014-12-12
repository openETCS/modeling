/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"

void MLRI__calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  MLRI__outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
void MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::BGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::recalculateBGs */kcg_bool recalculateBGs,
  MLRI__outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  kcg_bool tmp1;
  kcg_bool tmp2;
  kcg_int tmp3;
  kcg_bool tmp;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L7 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L7;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L8 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L8;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L10 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L10;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L11 */ kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L20 */ MLRI__positionedBG_T_TrainPosition_Types_Pck _L20;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L22 */ MLRI__positionedBG_T_TrainPosition_Types_Pck _L22;
  
  outC->trainPositionInfo.timestamp = (*currentOdometry).timestamp;
  outC->trainPositionInfo.speed = (*currentOdometry).speed;
  if (recalculateBGs) {
    /* 1 */
    MLRI__indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_true,
      BGs,
      recalculateBGs,
      &tmp3,
      &tmp2,
      &tmp1);
    /* 2 */
    MLRI__indexOfLastPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      kcg_false,
      BGs,
      recalculateBGs,
      &outC->_L23,
      &tmp,
      &_L11);
  }
  else if (outC->init) {
    outC->_L23 = MLRI__cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  if ((0 <= outC->_L23) & (outC->_L23 < 8)) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L22,
      &(*BGs)[outC->_L23]);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L22,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.lastPassedUnlinkedBG,
    &_L22);
  if (recalculateBGs) {
    outC->_L17 = tmp3;
  }
  else if (outC->init) {
    outC->_L17 = MLRI__cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  if ((0 <= outC->_L17) & (outC->_L17 < 8)) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L20,
      &(*BGs)[outC->_L17]);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L20,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.lastPassedLinkedBG,
    &_L20);
  /* 1 */
  MLRI__positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &(*currentOdometry).odo,
    &_L20,
    &_L7);
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG,
    &_L7);
  /* 2 */
  MLRI__positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &(*currentOdometry).odo,
    &_L22,
    &_L8);
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG,
    &_L8);
  /* 1 */
  MLRI__overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &_L7,
    &_L8,
    &_L10,
    &_L11);
  outC->trainPositionInfo.valid = _L11;
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPosition,
    &_L10);
  outC->positionCalculationNotConsistent = !_L11;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateTrainPositionInfo_CalculateTrainPosition_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

