/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void mergeBGs_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    mergeBGs_onTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack */
void mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_1 */positionedBGs_T_TrainPosition_Types_Pck *BGs_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack::BGs_2 */positionedBGs_T_TrainPosition_Types_Pck *BGs_2,
  outC_mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg tmp;
  kcg_int i;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L1, BGs_1);
  outC->_L9 = kcg_false;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L8.BGs, &outC->_L1);
  outC->_L8.overrun = outC->_L9;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs_2);
  kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
    &outC->_L7,
    &outC->_L8);
  for (i = 0; i < 8; i++) {
    kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
      &tmp,
      &outC->_L7);
    /* 1 */
    mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &tmp,
      &outC->_L2[i],
      &outC->Context_1[i]);
    kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
      &outC->_L7,
      &outC->Context_1[i].BGs_out);
  }
  outC->_L13 = outC->_L7.overrun;
  outC->overrun = outC->_L13;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L12, &outC->_L7.BGs);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L12);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mergeBGs_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

