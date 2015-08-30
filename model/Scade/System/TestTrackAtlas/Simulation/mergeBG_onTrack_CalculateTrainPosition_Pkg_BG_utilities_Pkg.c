/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void mergeBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* 1 */
  insertBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_2_Context_1);
  /* 1 */
  deleteBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_1);
  /* 2 */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
  /* 1 */
  indexOfBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
void mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_bool noname;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L21, BG);
  outC->_L20 = outC->_L21.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L10, BG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L11, BGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, BG);
  outC->_L9 = outC->_L7.valid;
  /* 1 */
  indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L10,
    &outC->_L11,
    outC->_L9,
    &outC->Context_1);
  outC->_L4 = outC->Context_1.indexOfBG;
  outC->_L5 = outC->Context_1.BG_found;
  outC->_L6 = outC->Context_1.indexValid;
  outC->_L22 = outC->_L20 & outC->_L6;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L19, BG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L16, BGs_in);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L8, BGs_in);
  /* 2 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L7,
    &outC->_L8,
    outC->_L9,
    &outC->Context_2);
  outC->_L1 = outC->Context_2.indexOfBG;
  outC->_L2 = outC->Context_2.BG_found;
  outC->_L3 = outC->Context_2.indexValid;
  outC->_L13 = outC->_L1 != outC->_L4;
  outC->_L12 = outC->_L13 & outC->_L2 & outC->_L3 & outC->_L6;
  /* 1 */
  deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L16,
    outC->_L1,
    outC->_L12,
    &outC->_1_Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L15,
    &outC->_1_Context_1.BGs_out);
  /* 1 */
  insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L19,
    &outC->_L15,
    outC->_L4,
    outC->_L22,
    &outC->_2_Context_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L17,
    &outC->_2_Context_1.BGs_out);
  outC->_L18 = outC->_2_Context_1.overrun;
  noname = outC->_L5;
  outC->overrun = outC->_L18;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mergeBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

