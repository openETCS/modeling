/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addAnnouncedBGs_CalculateTrainPosition_Pkg.h"

void addAnnouncedBGs_reset_CalculateTrainPosition_Pkg(
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  trimSeqNoOnTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_4_Context_1);
  /* 1 */
  mergeBGs_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_3_Context_1);
  /* 1 */
  positionLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_2_Context_1);
  /* 1 */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  NIDLRBG_2_nidC_nidBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::addAnnouncedBGs */
void addAnnouncedBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::addAnnouncedBGs::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_addAnnouncedBGs_CalculateTrainPosition_Pkg *outC)
{
  kcg_int i;
  kcg_bool noname;
  kcg_bool _1_noname;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L17,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L1, passedBG);
  outC->_L3 = outC->_L1.valid;
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L4, &outC->_L1.linkedBGs);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L5, &outC->_L4[0]);
  outC->_L6 = outC->_L5.valid;
  outC->_L11 = outC->_L3 & outC->_L6;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L16, &outC->_L17);
  if (kcg_true) {
    outC->_L16.valid = outC->_L11;
  }
  outC->_L7 = outC->_L5.nid_LRBG;
  /* 1 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L11,
    outC->_L7,
    &outC->Context_1);
  outC->_L9 = outC->Context_1.nidC;
  outC->_L10 = outC->Context_1.nidBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L18, &outC->_L16);
  if (kcg_true) {
    outC->_L18.nid_c = outC->_L9;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L19, &outC->_L18);
  if (kcg_true) {
    outC->_L19.nid_bg = outC->_L10;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L20, BGs_in);
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L19,
    &outC->_L20,
    outC->_L11,
    &outC->_1_Context_1);
  outC->_L12 = outC->_1_Context_1.indexOfBG;
  outC->_L13 = outC->_1_Context_1.BG_found;
  outC->_L14 = outC->_1_Context_1.indexValid;
  _1_noname = outC->_L13;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L41, BGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L22,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if ((0 <= outC->_L12) & (outC->_L12 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L21,
      &outC->_L20[outC->_L12]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L21, &outC->_L22);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lrbg, &outC->_L21);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L24, &outC->lrbg);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L25,
    trainProperties);
  /* 1 */
  positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L24,
    &outC->_L4,
    &outC->_L25,
    &outC->_2_Context_1);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L23,
    &outC->_2_Context_1.linkedPositionedBGs);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L35,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  for (i = 0; i < 4; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L26[i],
      &outC->_L35);
  }
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L29[0],
    &outC->_L23);
  kcg_copy_array__16944(&outC->_L29[4], &outC->_L26);
  /* 1 */
  mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L41,
    &outC->_L29,
    &outC->_3_Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L33,
    &outC->_3_Context_1.BGs_out);
  outC->_L34 = outC->_3_Context_1.overrun;
  /* 1 */
  trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L33,
    &outC->_4_Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L36,
    &outC->_4_Context_1.BGs_out);
  outC->overrun = outC->_L34;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L36);
  noname = outC->_L14;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** addAnnouncedBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

