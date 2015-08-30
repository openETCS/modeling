/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_1);
  /* 2 */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
  /* 1 */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
void lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::reset */kcg_bool reset,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::enable */kcg_bool enable,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_bool noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::storedBG_loc */ positionedBG_T_TrainPosition_Types_Pck last_storedBG_loc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG_loc */ positionedBG_T_TrainPosition_Types_Pck last_prvBG_loc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */ positionedBG_T_TrainPosition_Types_Pck last_BG;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L6,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->InitVal_2, &outC->_L6);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L15, BG);
  outC->_L16 = outC->_L15.valid;
  outC->_L39 = outC->_L15.infoFromPassing.valid;
  outC->_L40 = outC->_L15.infoFromPassing.BG_Header.valid;
  outC->_L37 = outC->_L15.q_link;
  outC->_L32 = linked;
  outC->_L33 = Q_LINK_Linked;
  outC->_L34 = Q_LINK_Unlinked;
  if (outC->_L32) {
    outC->_L36 = outC->_L33;
  }
  else {
    outC->_L36 = outC->_L34;
  }
  outC->_L35 = outC->_L37 == outC->_L36;
  outC->_L38 = outC->_L16 & outC->_L39 & outC->_L40 & outC->_L35;
  outC->MemCond_2 = outC->_L38;
  outC->_L12 = reset;
  outC->Reset_2 = outC->_L12;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->InitVal_1, &outC->_L6);
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_storedBG_loc,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_storedBG_loc,
      &outC->storedBG_loc);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L17,
    &last_storedBG_loc);
  kcg_copy_struct__16883(&outC->_L9_2, &outC->InitVal_2);
  if (outC->init) {
    kcg_copy_struct__16883(&outC->_L5_2, &outC->_L9_2);
  }
  else {
    kcg_copy_struct__16883(&outC->_L5_2, &outC->_L8_2);
  }
  outC->_L1_2 = outC->Reset_2;
  kcg_copy_struct__16883(&outC->_L2_2, &outC->InitVal_2);
  outC->_L3_2 = outC->MemCond_2;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->M_Input_2,
    &outC->_L15);
  kcg_copy_struct__16883(&outC->_L6_2, &outC->M_Input_2);
  if (outC->_L3_2) {
    kcg_copy_struct__16883(&outC->_L7_2, &outC->_L6_2);
  }
  else {
    kcg_copy_struct__16883(&outC->_L7_2, &outC->_L5_2);
  }
  if (outC->_L1_2) {
    kcg_copy_struct__16883(&outC->_L8_2, &outC->_L2_2);
  }
  else {
    kcg_copy_struct__16883(&outC->_L8_2, &outC->_L7_2);
  }
  kcg_copy_struct__16883(&outC->Out_2, &outC->_L8_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L14, &outC->Out_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->storedBG_loc,
    &outC->_L14);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L18,
    &outC->storedBG_loc);
  outC->_L13 = !kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L17,
      &outC->_L18);
  outC->_L5 = outC->_L18.valid;
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_prvBG_loc,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_prvBG_loc,
      &outC->prvBG_loc);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L10, &last_prvBG_loc);
  /* 1 */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L18,
    &outC->_L10,
    &outC->Context_1);
  outC->_L9 = outC->Context_1.idsEqual;
  outC->_L2 = !outC->_L9;
  /* 2 */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L18,
    &outC->_L17,
    &outC->Context_2);
  outC->_L19 = outC->Context_2.idsEqual;
  outC->_L20 = !outC->_L19;
  outC->_L8 = outC->_L13 & outC->_L5 & outC->_L2 & outC->_L20;
  outC->MemCond_1 = outC->_L8;
  outC->Reset_1 = outC->_L12;
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_BG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&last_BG, &outC->rem_BG);
  }
  kcg_copy_struct__16883(&outC->_L9_1, &outC->InitVal_1);
  if (outC->init) {
    kcg_copy_struct__16883(&outC->_L5_1, &outC->_L9_1);
  }
  else {
    kcg_copy_struct__16883(&outC->_L5_1, &outC->_L8_1);
  }
  outC->_L1_1 = outC->Reset_1;
  kcg_copy_struct__16883(&outC->_L2_1, &outC->InitVal_1);
  outC->_L3_1 = outC->MemCond_1;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->M_Input_1,
    &outC->_L17);
  kcg_copy_struct__16883(&outC->_L6_1, &outC->M_Input_1);
  if (outC->_L3_1) {
    kcg_copy_struct__16883(&outC->_L7_1, &outC->_L6_1);
  }
  else {
    kcg_copy_struct__16883(&outC->_L7_1, &outC->_L5_1);
  }
  if (outC->_L1_1) {
    kcg_copy_struct__16883(&outC->_L8_1, &outC->_L2_1);
  }
  else {
    kcg_copy_struct__16883(&outC->_L8_1, &outC->_L7_1);
  }
  kcg_copy_struct__16883(&outC->Out_1, &outC->_L8_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4, &outC->Out_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG_loc, &outC->_L4);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L41,
    &outC->prvBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lastBG, &outC->_L14);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L29,
    &outC->prvBG_loc);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L24, BGs);
  outC->_L25 = enable;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L41,
    &outC->_L24,
    outC->_L25,
    &outC->_1_Context_1);
  outC->_L21 = outC->_1_Context_1.indexOfBG;
  outC->_L22 = outC->_1_Context_1.BG_found;
  outC->_L23 = outC->_1_Context_1.indexValid;
  if ((0 <= outC->_L21) & (outC->_L21 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L26,
      &outC->_L24[outC->_L21]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L26,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  if (outC->_L22) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L27, &outC->_L26);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L27, &outC->_L29);
  }
  noname = outC->_L23;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG, &outC->_L27);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->rem_BG, BG);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

