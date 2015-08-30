/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateBGLocations_CalculateTrainPosition_Pkg.h"

void calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  improve_BG_locations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_2_Context_1);
  /* 1 */ passing_a_BG_reset_CalculateTrainPosition_Pkg(&outC->_1_Context_1);
  /* 2 */ genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(&outC->Context_2);
  /* 1 */ prevPassedLinkedBG_reset_CalculateTrainPosition_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::calculateBGLocations */
void calculateBGLocations_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::lastBGs */positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  positionedBGs_T_TrainPosition_Types_Pck tmp;
  kcg_bool noname;
  kcg_bool _1_noname;
  
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L92, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L324, lastBGs);
  /* 1 */
  prevPassedLinkedBG_CalculateTrainPosition_Pkg(
    &outC->_L92,
    &outC->_L324,
    &outC->Context_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L137,
    &outC->Context_1.previouslyPassedBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L301, passedBG);
  outC->_L299 = reset;
  /* 2 */
  genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
    &outC->_L301,
    &outC->_L324,
    outC->_L299,
    &outC->Context_2);
  outC->_L298 = outC->Context_2.seqNo;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L356,
    trainProperties);
  /* 1 */
  passing_a_BG_CalculateTrainPosition_Pkg(
    &outC->_L92,
    &outC->_L137,
    &outC->_L324,
    outC->_L298,
    &outC->_L356,
    &outC->_1_Context_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L87,
    &outC->_1_Context_1.passedPositionedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L88,
    &outC->_1_Context_1.BGs_out);
  outC->_L89 = outC->_1_Context_1.overrun;
  outC->_L90 = outC->_1_Context_1.foundNotWhereAnnounced;
  outC->_L374 = outC->_1_Context_1.BGpassedInUnexpectedDirection;
  outC->BGpassedInUnexpectedDirection = outC->_L374;
  outC->_L376 = outC->BGpassedInUnexpectedDirection;
  outC->passedBG_foundNotWhereExpected = outC->_L90;
  outC->_L157 = outC->passedBG_foundNotWhereExpected;
  outC->_L377 = outC->_L376 | outC->_L157;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L373,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  outC->_L354 = reset;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L352,
    (positionedBGs_T_TrainPosition_Types_Pck *)
      &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  outC->_L349 = outC->_L87.valid;
  outC->_L359 = outC->_L87.q_link;
  outC->_L357 = Q_LINK_Linked;
  outC->_L358 = outC->_L359 == outC->_L357;
  outC->_L362 = !outC->_L90;
  outC->_L351 = outC->_L349 & outC->_L358 & outC->_L362;
  outC->tmp = outC->_L351;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L355,
    trainProperties);
  if (outC->tmp) {
    /* 1 */
    improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L87,
      &outC->_L88,
      &outC->_L355,
      &outC->_2_Context_1);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &tmp,
      &outC->_2_Context_1.BGs_out);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L360,
    (positionedBGs_T_TrainPosition_Types_Pck *)
      &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  if (outC->tmp) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L347, &tmp);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L347,
      &outC->_L360);
  }
  if (outC->_L351) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L361,
      &outC->_L347);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L361, &outC->_L88);
  }
  if (outC->_L354) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L353,
      &outC->_L352);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L353,
      &outC->_L361);
  }
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L87,
    &outC->_L353,
    outC->_L349,
    &outC->_3_Context_1);
  outC->_L364 = outC->_3_Context_1.indexOfBG;
  outC->_L365 = outC->_3_Context_1.BG_found;
  outC->_L366 = outC->_3_Context_1.indexValid;
  if ((0 <= outC->_L364) & (outC->_L364 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L367,
      &outC->_L353[outC->_L364]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L367,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG_loc,
    &outC->_L367);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L369,
    &outC->passedPositionedBG_loc);
  if (outC->_L157) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L372, &outC->_L369);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L372, &outC->_L373);
  }
  _1_noname = outC->_L366;
  noname = outC->_L365;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG,
    &outC->_L367);
  outC->_L346 = kcg_false;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &outC->_L353);
  outC->outOfMemSpace = outC->_L89;
  outC->_L156 = outC->outOfMemSpace;
  outC->_L225.outOfMemSpace = outC->_L156;
  outC->_L225.passedBG_foundNotWhereExpected = outC->_L157;
  outC->_L225.positionCalculation_inconsistent = outC->_L346;
  outC->_L225.linkedBGMissed = outC->_L346;
  outC->_L225.BGpassedInUnexpectedDirection = outC->_L376;
  outC->_L225.BG_LinkingConsistencyError = outC->_L377;
  outC->_L225.twoConsecutiveLinkedBGs_missed = outC->_L346;
  outC->_L225.doubleRepositioningError = outC->_L346;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L225.bg,
    &outC->_L372);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->errors,
    &outC->_L225);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateBGLocations_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

