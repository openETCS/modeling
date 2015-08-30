/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void indexOfLastBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    indexOfLastBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG */
void indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfLastBG::enable */kcg_bool enable,
  outC_indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i1;
  kcg_int tmp;
  kcg_int i;
  kcg_int noname;
  
  outC->_L13 = linked;
  for (i1 = 0; i1 < 8; i1++) {
    outC->_L14[i1] = outC->_L13;
  }
  outC->_L12 = cNoValidIndex_CalculateTrainPosition_Pkg;
  outC->_L5 = cNoValidIndex_CalculateTrainPosition_Pkg;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L4, BGs);
  outC->_L6 = enable;
  outC->_L1 = outC->_L5;
  if (outC->_L6) {
    for (i = 0; i < 8; i++) {
      tmp = outC->_L1;
      /* 1 */
      indexOfLastBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        tmp,
        outC->_L14[i],
        &outC->_L4[i],
        &outC->Context_1[i]);
      outC->_L1 = outC->Context_1[i].indexOfBG;
      outC->_L3 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L3 = 0;
  }
  outC->_L8 = outC->_L1 != outC->_L12;
  outC->indexValid = outC->_L8;
  if ((0 <= outC->_L1) & (outC->_L1 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L7,
      &outC->_L4[outC->_L1]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L7,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->_L9 = outC->_L7.valid;
  outC->_L10 = outC->_L8 & outC->_L9;
  outC->BG_found = outC->_L10;
  outC->indexOfBG = outC->_L1;
  noname = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOfLastBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

