/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"

void calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  calculateTrainpositionAtt_reset_CalculateTrainPosition_Pkg(
    &outC->_5_Context_1);
  /* 1 */
  twoConsecutiveLinkedBGs_m_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_4_Context_1);
  /* 2 */
  linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_3_Context_2);
  /* 1 */
  calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
    &outC->_2_Context_1);
  /* 2 */ delDispensableBGs_reset_CalculateTrainPosition_Pkg(&outC->Context_2);
  /* 6 */
  calculateBGLocations_reset_CalculateTrainPosition_Pkg(&outC->Context_6);
  /* 1 */ addAnnouncedBGs_reset_CalculateTrainPosition_Pkg(&outC->_1_Context_1);
  /* 1 */
  msg_2_passedBG_reset_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
    &outC->Context_1);
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
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */ positionedBGs_T_TrainPosition_Types_Pck _3_BGs_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */ positionErrors_T_TrainPosition_Types_Pck _2_errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_asPositionedBG */ positionedBG_T_TrainPosition_Types_Pck _1_passedBG_asPositionedBG;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */ positionedBGs_T_TrainPosition_Types_Pck BGs_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */ positionErrors_T_TrainPosition_Types_Pck errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_asPositionedBG */ positionedBG_T_TrainPosition_Types_Pck passedBG_asPositionedBG;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */ positionedBGs_T_TrainPosition_Types_Pck _4_BGs_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */ positionErrors_T_TrainPosition_Types_Pck _5_errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */ positionedBGs_T_TrainPosition_Types_Pck _6_BGs_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */ positionErrors_T_TrainPosition_Types_Pck _7_errors_loc;
  kcg_int noname;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */ positionedBGs_T_TrainPosition_Types_Pck last_BGs_loc;
  
  if (outC->init) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &last_BGs_loc,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &last_BGs_loc,
      &outC->BGs_loc);
  }
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L247, passedBG);
  outC->_L244 = outC->_L247.valid;
  outC->_L245 = outC->_L247.BG_Header.valid;
  outC->_L248 = outC->_L245 & outC->_L244;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L309, msgFromTrack);
  /* 1 */
  msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
    &outC->_L309,
    &outC->Context_1);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L306, &outC->Context_1.passedBG);
  outC->_L307 = outC->Context_1.BG_passed;
  outC->_L308 = outC->Context_1.onlyBGsAnnouncedViaRadio;
  if (outC->_L244) {
    outC->_L333 = outC->_L248;
  }
  else {
    outC->_L333 = outC->_L307;
  }
  outC->BG_passed = outC->_L333;
  outC->if_BGpassed_or_onlyAnnounced_clock = outC->BG_passed | reset;
  outC->_L243 = !outC->_L245;
  outC->_L246 = outC->_L243 & outC->_L244;
  if (outC->_L244) {
    outC->_L332 = outC->_L246;
  }
  else {
    outC->_L332 = outC->_L308;
  }
  outC->onlyBGsAnnouncedViaRadio = outC->_L332;
  if (outC->if_BGpassed_or_onlyAnnounced_clock) {
  }
  else {
    outC->else_clock_if_BGpassed_or_onlyAnnounced =
      outC->onlyBGsAnnouncedViaRadio;
    if (outC->else_clock_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &outC->_L2_if_BGpassed_or_onlyAnnounced,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
    }
    else {
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &outC->_L4_if_BGpassed_or_onlyAnnounced,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_5_errors_loc,
        &outC->_L4_if_BGpassed_or_onlyAnnounced);
    }
  }
  if (outC->_L244) {
    kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L331, &outC->_L247);
  }
  else {
    kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L331, &outC->_L306);
  }
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->passedBG_loc, &outC->_L331);
  if (outC->if_BGpassed_or_onlyAnnounced_clock) {
    kcg_copy_passedBG_T_BG_Types_Pkg(
      &outC->_L24_if_BGpassed_or_onlyAnnounced,
      &outC->passedBG_loc);
    outC->_L16_if_BGpassed_or_onlyAnnounced = reset;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L14_if_BGpassed_or_onlyAnnounced,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L9_if_BGpassed_or_onlyAnnounced,
      &last_BGs_loc);
    if (outC->_L16_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L19_if_BGpassed_or_onlyAnnounced,
        &outC->_L14_if_BGpassed_or_onlyAnnounced);
    }
    else {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L19_if_BGpassed_or_onlyAnnounced,
        &outC->_L9_if_BGpassed_or_onlyAnnounced);
    }
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L21_if_BGpassed_or_onlyAnnounced,
      trainProperties);
    /* 6 */
    calculateBGLocations_CalculateTrainPosition_Pkg(
      &outC->_L24_if_BGpassed_or_onlyAnnounced,
      &outC->_L19_if_BGpassed_or_onlyAnnounced,
      outC->_L16_if_BGpassed_or_onlyAnnounced,
      &outC->_L21_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L10_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6.BGs);
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &outC->_L11_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6.errors);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L12_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6.passedPositionedBG);
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &_2_errors_loc,
      &outC->_L11_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &outC->errors_loc,
      &_2_errors_loc);
  }
  else {
    if (outC->else_clock_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_passedBG_T_BG_Types_Pkg(
        &outC->_L17_if_BGpassed_or_onlyAnnounced,
        &outC->passedBG_loc);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L98_if_BGpassed_or_onlyAnnounced,
        &last_BGs_loc);
      kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
        &outC->_L166_if_BGpassed_or_onlyAnnounced,
        trainProperties);
      /* 1 */
      addAnnouncedBGs_CalculateTrainPosition_Pkg(
        &outC->_L17_if_BGpassed_or_onlyAnnounced,
        &outC->_L98_if_BGpassed_or_onlyAnnounced,
        &outC->_L166_if_BGpassed_or_onlyAnnounced,
        &outC->_1_Context_1);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L147_if_BGpassed_or_onlyAnnounced,
        &outC->_1_Context_1.BGs_out);
      outC->_L13_if_BGpassed_or_onlyAnnounced = outC->_1_Context_1.overrun;
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &outC->_L15_if_BGpassed_or_onlyAnnounced,
        &outC->_L2_if_BGpassed_or_onlyAnnounced);
      if (kcg_true) {
        outC->_L15_if_BGpassed_or_onlyAnnounced.outOfMemSpace =
          outC->_L13_if_BGpassed_or_onlyAnnounced;
      }
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_7_errors_loc,
        &outC->_L15_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &errors_loc,
        &_7_errors_loc);
    }
    else {
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &errors_loc,
        &_5_errors_loc);
    }
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &outC->errors_loc,
      &errors_loc);
  }
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L371,
    &outC->errors_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L383,
    &outC->_L371.bg);
  outC->_L382 = outC->_L371.BGpassedInUnexpectedDirection;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L201, currentOdometry);
  if (outC->if_BGpassed_or_onlyAnnounced_clock) {
    outC->_L23_if_BGpassed_or_onlyAnnounced = kcg_true;
    /* 2 */
    delDispensableBGs_CalculateTrainPosition_Pkg(
      &outC->_L10_if_BGpassed_or_onlyAnnounced,
      outC->_L23_if_BGpassed_or_onlyAnnounced,
      &outC->Context_2);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L22_if_BGpassed_or_onlyAnnounced,
      &outC->Context_2.BGs_out);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_3_BGs_loc,
      &outC->_L22_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs_loc,
      &_3_BGs_loc);
  }
  else {
    if (outC->else_clock_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_6_BGs_loc,
        &outC->_L147_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&BGs_loc, &_6_BGs_loc);
    }
    else {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L6_if_BGpassed_or_onlyAnnounced,
        &last_BGs_loc);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_4_BGs_loc,
        &outC->_L6_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&BGs_loc, &_4_BGs_loc);
    }
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_loc, &BGs_loc);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L257,
    &outC->BGs_loc);
  outC->_L260 = outC->onlyBGsAnnouncedViaRadio;
  outC->_L259 = outC->BG_passed;
  outC->_L238 = reset;
  outC->_L258 = outC->_L260 | outC->_L259 | outC->_L238;
  if (outC->if_BGpassed_or_onlyAnnounced_clock) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_1_passedBG_asPositionedBG,
      &outC->_L12_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedBG_asPositionedBG,
      &_1_passedBG_asPositionedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &passedBG_asPositionedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedBG_asPositionedBG,
      &passedBG_asPositionedBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L256,
    &outC->passedBG_asPositionedBG);
  /* 1 */
  calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
    &outC->_L201,
    &outC->_L257,
    outC->_L258,
    &outC->_L256,
    outC->_L238,
    &outC->_2_Context_1);
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo,
    &outC->_2_Context_1.trainPositionInfo);
  outC->_L216 = outC->_2_Context_1.positionCalculationNotConsistent;
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->_L327,
    &outC->trainPositionInfo);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L329,
    &outC->_L327.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L316,
    &outC->BGs_loc);
  outC->_L321 = kcg_true;
  /* 2 */
  linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_L329,
    &outC->_L316,
    outC->_L321,
    &outC->_3_Context_2);
  outC->_L322 = outC->_3_Context_2.missed;
  outC->_L323 = outC->_3_Context_2.indexOfBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L324,
    &outC->_3_Context_2.BG);
  outC->linkedBGMissed = outC->_L322;
  outC->_L380 = outC->linkedBGMissed;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->missedLinkedBG,
    &outC->_L324);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L372,
    &outC->missedLinkedBG);
  if (outC->_L380) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L381, &outC->_L372);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L381, &outC->_L383);
  }
  outC->_L379 = kcg_false;
  outC->_L373 = outC->_L371.BG_LinkingConsistencyError;
  outC->_L378 = outC->_L380 | outC->_L373;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L336,
    &outC->passedBG_asPositionedBG);
  outC->_L335 = reset;
  /* 1 */
  twoConsecutiveLinkedBGs_m_CalculateTrainPosition_Pkg_Linking_Pkg(
    outC->_L322,
    &outC->_L324,
    &outC->_L336,
    outC->_L335,
    &outC->_4_Context_1);
  outC->_L334 = outC->_4_Context_1.secondConsecutiveBG_missed;
  outC->twoConsecutiveLinkedBGsMissed = outC->_L334;
  outC->_L377 = outC->twoConsecutiveLinkedBGsMissed;
  outC->positionCalculationNotConsistent = outC->_L216;
  outC->_L376 = outC->positionCalculationNotConsistent;
  outC->_L375 = outC->_L371.passedBG_foundNotWhereExpected;
  outC->_L374 = outC->_L371.outOfMemSpace;
  outC->_L370.outOfMemSpace = outC->_L374;
  outC->_L370.passedBG_foundNotWhereExpected = outC->_L375;
  outC->_L370.positionCalculation_inconsistent = outC->_L376;
  outC->_L370.linkedBGMissed = outC->_L380;
  outC->_L370.BGpassedInUnexpectedDirection = outC->_L382;
  outC->_L370.BG_LinkingConsistencyError = outC->_L378;
  outC->_L370.twoConsecutiveLinkedBGs_missed = outC->_L377;
  outC->_L370.doubleRepositioningError = outC->_L379;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L370.bg,
    &outC->_L381);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->errors,
    &outC->_L370);
  noname = outC->_L323;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L207,
    trainProperties);
  /* 1 */
  calculateTrainpositionAtt_CalculateTrainPosition_Pkg(
    &outC->trainPositionInfo,
    &outC->_L201,
    &outC->_L207,
    &outC->_5_Context_1);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L200,
    &outC->_5_Context_1.trainPosition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &outC->_L200);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &outC->_L257);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateTrainPosition_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

