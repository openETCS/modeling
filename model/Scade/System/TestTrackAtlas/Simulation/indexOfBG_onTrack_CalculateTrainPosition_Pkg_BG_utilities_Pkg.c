/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void indexOfBG_onTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  /* 1 */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_1);
  for (i = 0; i < 8; i++) {
    /* 1 */
    indexOfBG_onTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack */
void indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BG */positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack::enable */kcg_bool enable,
  outC_indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i1;
  kcg_int tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, BG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs);
  outC->_L9 = cNoValidIndex_CalculateTrainPosition_Pkg;
  for (i1 = 0; i1 < 8; i1++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L11[i1],
      &outC->_L1);
  }
  outC->_L3 = enable;
  outC->_L6 = outC->_L9;
  if (outC->_L3) {
    for (i = 0; i < 8; i++) {
      tmp = outC->_L6;
      /* 1 */
      indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        tmp,
        &outC->_L11[i],
        &outC->_L2[i],
        &outC->Context_1[i]);
      outC->_L6 = outC->Context_1[i].indexOfBG;
      outC->_L8 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L8 = 0;
  }
  if ((0 <= outC->_L6) & (outC->_L6 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L12,
      &outC->_L2[outC->_L6]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L12,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L12,
    &outC->_1_Context_1);
  outC->_L20 = outC->_1_Context_1.idsEqual;
  outC->_L17 = cNoValidIndex_CalculateTrainPosition_Pkg;
  outC->_L18 = outC->_L6 != outC->_L17;
  outC->_L19 = outC->_L18 & outC->_L20;
  noname = outC->_L8;
  outC->indexValid = outC->_L18;
  outC->BG_found = outC->_L19;
  outC->indexOfBG = outC->_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfBG_onTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

