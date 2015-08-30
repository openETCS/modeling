/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void deleteBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    deleteBG_atIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex */
void deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::indexOfBG */kcg_int indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex::del */kcg_bool del,
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L18, BGs_in);
  outC->_L1 = del;
  outC->_L3 = indexOfBG;
  outC->_L5 = 0;
  outC->_L4 = outC->_L3 >= outC->_L5;
  outC->_L7 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  outC->_L6 = outC->_L3 < outC->_L7;
  outC->_L8 = outC->_L1 & outC->_L4 & outC->_L6;
  for (i2 = 0; i2 < 8; i2++) {
    outC->_L9[i2] = outC->_L3;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs_in);
  kcg_copy_array__17543(&outC->_L10, (array__17543 *) &outC->_L2[1]);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L11,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  for (i1 = 0; i1 < 1; i1++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L12[i1],
      &outC->_L11);
  }
  kcg_copy_array__17543(&outC->_L13[0], &outC->_L10);
  kcg_copy_array__17546(&outC->_L13[7], &outC->_L12);
  if (outC->_L8) {
    for (i = 0; i < 8; i++) {
      /* 1 */
      deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        outC->_L9[i],
        &outC->_L2[i],
        &outC->_L13[i],
        &outC->Context_1[i]);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L15[i],
        &outC->Context_1[i].BG_out);
      outC->_L16 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L16 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L16; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L15[i],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
  if (outC->_L8) {
    kcg_copy_array__16894(&outC->_L17, &outC->_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L17, &outC->_L18);
  }
  noname = outC->_L16;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

