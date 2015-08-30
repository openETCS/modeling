/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passing_a_BG_CalculateTrainPosition_Pkg.h"

void passing_a_BG_reset_CalculateTrainPosition_Pkg(
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  trimSeqNoOnTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  mergeBGs_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_2_Context_1);
  /* 2 */
  mergeBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
  /* 1 */
  passedBG_2_positionedBG_reset_CalculateTrainPosition_Pkg(&outC->_1_Context_1);
  /* 1 */
  indexOfPassedBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::passing_a_BG */
void passing_a_BG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::previouslyPassedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passing_a_BG::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::passing_a_BG::passedBGSeqNo */kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passing_a_BG::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_passing_a_BG_CalculateTrainPosition_Pkg *outC)
{
  kcg_int i;
  kcg_bool noname;
  
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L1, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L24, BGs_in);
  outC->_L15 = outC->_L1.valid;
  /* 1 */
  indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L24,
    outC->_L15,
    &outC->Context_1);
  outC->_L9 = outC->Context_1.indexOfBG;
  outC->_L10 = outC->Context_1.BG_found;
  outC->_L11 = outC->Context_1.indexValid;
  if ((0 <= outC->_L9) & (outC->_L9 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L13,
      &outC->_L24[outC->_L9]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L13,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L19,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if (outC->_L10) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L12, &outC->_L13);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L12, &outC->_L19);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L25,
    previouslyPassedLinkedBG);
  outC->_L26 = passedBGSeqNo;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L31,
    trainProperties);
  /* 1 */
  passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
    &outC->_L1,
    &outC->_L12,
    &outC->_L25,
    outC->_L26,
    &outC->_L31,
    &outC->_1_Context_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L5,
    &outC->_1_Context_1.passedPositionedBG);
  outC->_L6 = outC->_1_Context_1.foundNotWhereAnnounced;
  outC->_L32 = outC->_1_Context_1.BGpassedInUnexpectedDirection;
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L7,
    &outC->_1_Context_1.linkedBGs);
  outC->BGpassedInUnexpectedDirection = outC->_L32;
  /* 2 */
  mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L5,
    &outC->_L24,
    &outC->Context_2);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L16,
    &outC->Context_2.BGs_out);
  outC->_L17 = outC->Context_2.overrun;
  for (i = 0; i < 4; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L20[i],
      &outC->_L19);
  }
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L18[0],
    &outC->_L7);
  kcg_copy_array__16944(&outC->_L18[4], &outC->_L20);
  /* 1 */
  mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L16,
    &outC->_L18,
    &outC->_2_Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L21,
    &outC->_2_Context_1.BGs_out);
  outC->_L22 = outC->_2_Context_1.overrun;
  /* 1 */
  trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L21,
    &outC->_3_Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L30,
    &outC->_3_Context_1.BGs_out);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG,
    &outC->_L5);
  outC->foundNotWhereAnnounced = outC->_L6;
  outC->_L23 = outC->_L22 | outC->_L17;
  outC->overrun = outC->_L23;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L30);
  noname = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** passing_a_BG_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

