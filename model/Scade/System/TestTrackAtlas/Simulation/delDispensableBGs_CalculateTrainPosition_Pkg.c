/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "delDispensableBGs_CalculateTrainPosition_Pkg.h"

void delDispensableBGs_reset_CalculateTrainPosition_Pkg(
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC)
{
  /* 9 */
  deleteBGs_beforeIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_2_Context_9);
  /* 9 */
  indexOf_nthPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_9);
  /* 2 */
  deleteBGs_beforeIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_2);
  /* 2 */
  indexOf_nthPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
  /* 1 */
  countBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::delDispensableBGs */
void delDispensableBGs_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::delDispensableBGs::deleteCmd */kcg_bool deleteCmd,
  outC_delDispensableBGs_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck _1_BGs_out;
  /* CalculateTrainPosition_Pkg::delDispensableBGs::BGs_out */ positionedBGs_T_TrainPosition_Types_Pck BGs_out;
  kcg_bool noname;
  kcg_bool _2_noname;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L8, BGs_in);
  outC->_L11 = deleteCmd;
  /* 1 */
  countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L8,
    outC->_L11,
    &outC->Context_1);
  outC->_L1 = outC->Context_1.empty;
  outC->_L2 = outC->Context_1.full;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L3,
    &outC->Context_1.counters);
  outC->_L15 = outC->_L3.passedLinkedBGsCount;
  outC->passedLinkedBGsCount = outC->_L15;
  outC->IfBlock1_clock = outC->passedLinkedBGsCount > 0;
  if (outC->IfBlock1_clock) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L14_IfBlock1,
      BGs_in);
    outC->_L8_IfBlock1 = kcg_true;
    outC->_L1_IfBlock1 = outC->passedLinkedBGsCount;
    outC->_L3_IfBlock1 = cNoOfAtLeast_8_LRBGs_CalculateTrainPosition_Pkg;
    outC->_L2_IfBlock1 = outC->_L1_IfBlock1 - outC->_L3_IfBlock1;
    outC->_L5_IfBlock1 = 1;
    outC->_L4_IfBlock1 = outC->_L2_IfBlock1 + outC->_L5_IfBlock1;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L9_IfBlock1,
      BGs_in);
    outC->_L10_IfBlock1 = deleteCmd;
    /* 2 */
    indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      outC->_L8_IfBlock1,
      outC->_L4_IfBlock1,
      &outC->_L9_IfBlock1,
      outC->_L10_IfBlock1,
      &outC->Context_2);
    outC->_L6_IfBlock1 = outC->Context_2.indexOfBG;
    outC->_L7_IfBlock1 = outC->Context_2.BG_found;
    outC->_L12_IfBlock1 = deleteCmd;
    outC->_L11_IfBlock1 = outC->_L7_IfBlock1 & outC->_L12_IfBlock1;
    /* 2 */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_L14_IfBlock1,
      outC->_L6_IfBlock1,
      outC->_L11_IfBlock1,
      &outC->_1_Context_2);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L13_IfBlock1,
      &outC->_1_Context_2.BGs_out);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_1_BGs_out,
      &outC->_L13_IfBlock1);
  }
  else {
    outC->_L62_IfBlock1 = cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg;
  }
  outC->_L16 = outC->_L3.passedUnlinkedBGsCount;
  outC->passedUnlinkedBGsCount = outC->_L16;
  if (outC->IfBlock1_clock) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs_out,
      &_1_BGs_out);
  }
  else {
    outC->_L61_IfBlock1 = outC->passedUnlinkedBGsCount;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L59_IfBlock1,
      BGs_in);
    outC->_L53_IfBlock1 = kcg_false;
    outC->_L47_IfBlock1 = outC->_L61_IfBlock1 - outC->_L62_IfBlock1;
    outC->_L51_IfBlock1 = 1;
    outC->_L49_IfBlock1 = outC->_L47_IfBlock1 + outC->_L51_IfBlock1;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L56_IfBlock1,
      BGs_in);
    outC->_L57_IfBlock1 = deleteCmd;
    /* 9 */
    indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      outC->_L53_IfBlock1,
      outC->_L49_IfBlock1,
      &outC->_L56_IfBlock1,
      outC->_L57_IfBlock1,
      &outC->Context_9);
    outC->_L54_IfBlock1 = outC->Context_9.indexOfBG;
    outC->_L55_IfBlock1 = outC->Context_9.BG_found;
    outC->_L52_IfBlock1 = deleteCmd;
    outC->_L58_IfBlock1 = outC->_L55_IfBlock1 & outC->_L52_IfBlock1;
    /* 9 */
    deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_L59_IfBlock1,
      outC->_L54_IfBlock1,
      outC->_L58_IfBlock1,
      &outC->_2_Context_9);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L60_IfBlock1,
      &outC->_2_Context_9.BGs_out);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &BGs_out,
      &outC->_L60_IfBlock1);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &BGs_out);
  }
  _2_noname = outC->_L2;
  noname = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** delDispensableBGs_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

