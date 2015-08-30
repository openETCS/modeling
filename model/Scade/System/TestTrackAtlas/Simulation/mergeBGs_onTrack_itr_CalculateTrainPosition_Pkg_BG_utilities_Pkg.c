/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void mergeBGs_onTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* 1 */
  mergeBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr */
void mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BGs_in */positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBGs_onTrack_itr::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
    &outC->_L2,
    BGs_in);
  outC->_L18 = outC->_L2.overrun;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, BG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L17, &outC->_L2.BGs);
  /* 1 */
  mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L17,
    &outC->Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L12,
    &outC->Context_1.BGs_out);
  outC->_L13 = outC->Context_1.overrun;
  outC->_L19 = outC->_L13 | outC->_L18;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L14.BGs,
    &outC->_L12);
  outC->_L14.overrun = outC->_L19;
  kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
    &outC->BGs_out,
    &outC->_L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mergeBGs_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

