/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

void linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ FallingEdge_reset_digital(&outC->_2_Context_1);
  /* 1 */
  positionedBGs_ids_notEqual_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  posInRangeOfBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
  /* 2 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
}

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed */
void linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::enable */kcg_bool enable,
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::weakenedPosition */ LocWithInAcc_T_Obu_BasicTypes_Pkg _1_weakenedPosition;
  L_internal_Type_Obu_BasicTypes_Pkg _4_noname;
  L_internal_Type_Obu_BasicTypes_Pkg _3_noname;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::weakenedPosition */ LocWithInAcc_T_Obu_BasicTypes_Pkg weakenedPosition;
  L_internal_Type_Obu_BasicTypes_Pkg _2_noname;
  L_internal_Type_Obu_BasicTypes_Pkg noname;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg last_position;
  
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L54, position);
  if (outC->init) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &last_position,
      (LocWithInAcc_T_Obu_BasicTypes_Pkg *)
        &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &last_position,
      &outC->rem_position);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L52, &last_position);
  /* 2 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L54,
    &outC->_L52,
    &outC->Context_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L56,
    &outC->Context_2.distance);
  outC->_L55 = outC->_L56.nominal;
  outC->_L57 = 0;
  outC->_L53 = outC->_L55 >= outC->_L57;
  outC->movedAhead = outC->_L53;
  outC->IfBlock1_clock = outC->movedAhead;
  if (outC->IfBlock1_clock) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1_IfBlock1, position);
    outC->_L5_IfBlock1 = outC->_L1_IfBlock1.d_max;
    outC->_L4_IfBlock1 = outC->_L1_IfBlock1.d_min;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L2_IfBlock1,
      &last_position);
    outC->_L10_IfBlock1 = outC->_L2_IfBlock1.d_max;
    outC->_L9_IfBlock1 = outC->_L2_IfBlock1.d_min;
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L98_IfBlock1,
      &last_position);
    outC->_L7_IfBlock1 = outC->_L98_IfBlock1.d_max;
    outC->_L65_IfBlock1 = outC->_L98_IfBlock1.d_min;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L33_IfBlock1, position);
    outC->_L13_IfBlock1 = outC->_L33_IfBlock1.d_max;
    outC->_L1210_IfBlock1 = outC->_L33_IfBlock1.d_min;
  }
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L10, &outC->_L3);
  }
  if (outC->init) {
    outC->_L7 = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  else {
    outC->_L7 = outC->_L2;
  }
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = outC->_L1_IfBlock1.nominal;
    outC->_L8_IfBlock1 = outC->_L2_IfBlock1.nominal;
    outC->_L11_IfBlock1 = outC->_L8_IfBlock1 + outC->_L9_IfBlock1;
    outC->_L12_IfBlock1 = outC->_L11_IfBlock1 - outC->_L3_IfBlock1;
    outC->_L6_IfBlock1.nominal = outC->_L3_IfBlock1;
    outC->_L6_IfBlock1.d_min = outC->_L12_IfBlock1;
    outC->_L6_IfBlock1.d_max = outC->_L5_IfBlock1;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_1_weakenedPosition,
      &outC->_L6_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->weakenedPosition,
      &_1_weakenedPosition);
  }
  else {
    outC->_L1111_IfBlock1 = outC->_L33_IfBlock1.nominal;
    outC->_L56_IfBlock1 = outC->_L98_IfBlock1.nominal;
    outC->_L44_IfBlock1 = outC->_L56_IfBlock1 + outC->_L7_IfBlock1;
    outC->_L109_IfBlock1 = outC->_L44_IfBlock1 - outC->_L1111_IfBlock1;
    outC->_L87_IfBlock1.nominal = outC->_L1111_IfBlock1;
    outC->_L87_IfBlock1.d_min = outC->_L1210_IfBlock1;
    outC->_L87_IfBlock1.d_max = outC->_L109_IfBlock1;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &weakenedPosition,
      &outC->_L87_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->weakenedPosition,
      &weakenedPosition);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L51,
    &outC->weakenedPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L5, BGs);
  outC->_L6 = enable;
  /* 1 */
  posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L51,
    &outC->_L5,
    outC->_L6,
    &outC->Context_1);
  outC->_L1 = outC->Context_1.isInRange;
  outC->_L2 = outC->Context_1.indexOfBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L3,
    &outC->Context_1.BG);
  /* 1 */
  positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L3,
    &outC->_L10,
    &outC->_1_Context_1);
  outC->_L59 = outC->_1_Context_1.idsNotEqual;
  outC->_L60 = outC->_L59 & outC->_L1;
  /* 1 */ FallingEdge_digital(outC->_L1, &outC->_2_Context_1);
  outC->_L8 = outC->_2_Context_1.FE_Output;
  outC->_L58 = outC->_L60 | outC->_L8;
  if (outC->IfBlock1_clock) {
    _4_noname = outC->_L4_IfBlock1;
    _3_noname = outC->_L10_IfBlock1;
  }
  else {
    _2_noname = outC->_L65_IfBlock1;
    noname = outC->_L13_IfBlock1;
  }
  outC->_L11 = outC->_L10.q_link;
  outC->_L15 = Q_LINK_Linked;
  outC->_L16 = outC->_L11 == outC->_L15;
  outC->_L17 = outC->_L10.infoFromPassing.valid;
  outC->_L18 = !outC->_L17;
  outC->_L19 = outC->_L58 & outC->_L16 & outC->_L18;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG, &outC->_L10);
  outC->indexOfBG = outC->_L7;
  outC->missed = outC->_L19;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->rem_position, position);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

