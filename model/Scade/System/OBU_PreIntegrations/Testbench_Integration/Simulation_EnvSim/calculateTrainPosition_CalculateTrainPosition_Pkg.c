/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"

void calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  twoConsecutiveLinkedBGs_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->Context_1);
  /* 2 */
  linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->Context_2);
  /* 1 */
  calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
    &outC->_1_Context_1);
  /* 6 */
  calculateBGLocations_reset_CalculateTrainPosition_Pkg(&outC->Context_6);
}

/* CalculateTrainPosition_Pkg::calculateTrainPosition */
void calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::msgFromTrack */ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */kcg_bool reset,
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  static positionedBGs_T_TrainPosition_Types_Pck tmp1;
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L10 */
  static positionedBGs_T_TrainPosition_Types_Pck _L10_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L13 */
  static kcg_bool _L13_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */
  static positionedBGs_T_TrainPosition_Types_Pck last_BGs_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced */
  static kcg_bool if_BGpassed_or_onlyAnnounced_clock;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BG_passed */
  static kcg_bool BG_passed;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::onlyBGsAnnouncedViaRadio */
  static kcg_bool onlyBGsAnnouncedViaRadio;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */
  static positionErrors_T_TrainPosition_Types_Pck errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPositionInfo */
  static trainPositionInfo_T_TrainPosition_Types_Pck trainPositionInfo;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_loc */
  static passedBG_T_BG_Types_Pkg passedBG_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_preloc */
  static positionedBGs_T_TrainPosition_Types_Pck BGs_preloc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L306 */
  static passedBG_T_BG_Types_Pkg _L306;
  
  outC->errors.doubleRepositioningError = kcg_false;
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &last_BGs_loc,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&last_BGs_loc, &outC->BGs);
  }
  /* 1 */
  msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
    msgFromTrack,
    &_L306,
    &if_BGpassed_or_onlyAnnounced_clock,
    &_L13_if_BGpassed_or_onlyAnnounced);
  if ((*passedBG).valid) {
    BG_passed = (*passedBG).BG_Header.valid & (*passedBG).valid;
    onlyBGsAnnouncedViaRadio = !(*passedBG).BG_Header.valid & (*passedBG).valid;
    kcg_copy_passedBG_T_BG_Types_Pkg(&passedBG_loc, passedBG);
  }
  else {
    BG_passed = if_BGpassed_or_onlyAnnounced_clock;
    onlyBGsAnnouncedViaRadio = _L13_if_BGpassed_or_onlyAnnounced;
    kcg_copy_passedBG_T_BG_Types_Pkg(&passedBG_loc, &_L306);
  }
  if_BGpassed_or_onlyAnnounced_clock = BG_passed | reset;
  if (if_BGpassed_or_onlyAnnounced_clock) {
    if (reset) {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &tmp1,
        (positionedBGs_T_TrainPosition_Types_Pck *)
          &cNoPositionedBGs_CalculateTrainPosition_Pkg);
    }
    else {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp1, &last_BGs_loc);
    }
    /* 6 */
    calculateBGLocations_CalculateTrainPosition_Pkg(
      &passedBG_loc,
      &tmp1,
      reset,
      trainProperties,
      &outC->Context_6);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_L10_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6.BGs);
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &errors_loc,
      &outC->Context_6.errors);
    /* 2 */
    delDispensableBGs_CalculateTrainPosition_Pkg(
      &_L10_if_BGpassed_or_onlyAnnounced,
      kcg_true,
      &BGs_preloc);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &outC->Context_6.passedPositionedBG);
  }
  else {
    if (onlyBGsAnnouncedViaRadio) {
      /* 1 */
      addAnnouncedBGs_CalculateTrainPosition_Pkg(
        &passedBG_loc,
        &last_BGs_loc,
        trainProperties,
        &BGs_preloc,
        &_L13_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &errors_loc,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
      errors_loc.outOfMemSpace = _L13_if_BGpassed_or_onlyAnnounced;
    }
    else {
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &errors_loc,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &BGs_preloc,
        &last_BGs_loc);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->errors.outOfMemSpace = errors_loc.outOfMemSpace;
  outC->errors.passedBG_foundNotWhereExpected =
    errors_loc.passedBG_foundNotWhereExpected;
  outC->errors.BGpassedInUnexpectedDirection =
    errors_loc.BGpassedInUnexpectedDirection;
  /* 1 */
  calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
    currentOdometry,
    &BGs_preloc,
    (kcg_bool) (onlyBGsAnnouncedViaRadio | BG_passed | reset),
    &tmp,
    reset,
    &outC->_1_Context_1);
  outC->errors.positionCalculation_inconsistent =
    outC->_1_Context_1.positionCalculationNotConsistent;
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &trainPositionInfo,
    &outC->_1_Context_1.trainPositionInfo);
  /* 2 */
  linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
    &trainPositionInfo.trainPosition,
    &BGs_preloc,
    kcg_true,
    &outC->Context_2);
  outC->errors.linkedBGMissed = outC->Context_2.missed;
  outC->errors.BG_LinkingConsistencyError = outC->Context_2.missed |
    errors_loc.BG_LinkingConsistencyError;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->BGs,
    &outC->Context_2.BGs_out);
  /* 1 */
  twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
    outC->Context_2.missed,
    &outC->Context_2.BG,
    &tmp,
    reset,
    &outC->Context_1);
  outC->errors.twoConsecutiveLinkedBGs_missed =
    outC->Context_1.secondConsecutiveBG_missed;
  if (outC->Context_2.missed) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->errors.bg,
      &outC->Context_2.BG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->errors.bg,
      &errors_loc.bg);
  }
  /* 1 */
  calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
    &trainPositionInfo,
    currentOdometry,
    trainProperties,
    &outC->trainPosition);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainPosition_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

