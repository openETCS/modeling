/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void deleteBGs_beforeIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    deleteBGs_beforeIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex */
void deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBGs_beforeIndex::del */kcg_bool del,
  outC_deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs_in);
  for (i2 = 0; i2 < 8; i2++) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L22[i2],
      &outC->_L2);
  }
  outC->_L3 = indexOfBG;
  for (i1 = 0; i1 < 8; i1++) {
    outC->_L9[i1] = outC->_L3;
  }
  outC->_L1 = del;
  outC->_L5 = 0;
  outC->_L4 = outC->_L3 > outC->_L5;
  outC->_L7 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  outC->_L6 = outC->_L3 < outC->_L7;
  outC->_L8 = outC->_L1 & outC->_L4 & outC->_L6;
  if (outC->_L8) {
    for (i = 0; i < 8; i++) {
      /* 1 */
      deleteBGs_beforeIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        outC->_L9[i],
        &outC->_L22[i],
        &outC->Context_1[i]);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L20[i],
        &outC->Context_1[i].BG_out);
      outC->_L21 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L21 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L21; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L20[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L18, BGs_in);
  if (outC->_L8) {
    kcg_copy_array__16894(&outC->_L17, &outC->_L20);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L17, &outC->_L18);
  }
  noname = outC->_L21;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** deleteBGs_beforeIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

