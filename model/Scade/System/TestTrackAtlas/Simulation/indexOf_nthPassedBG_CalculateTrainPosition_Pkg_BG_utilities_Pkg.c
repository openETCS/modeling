/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void indexOf_nthPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    indexOf_nthPassedBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG */
void indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::linked */kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::n */kcg_int n,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::BGs */positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG::enable */kcg_bool enable,
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i2;
  kcg_int i1;
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg tmp;
  kcg_int i;
  kcg_int noname;
  
  outC->_L6 = enable;
  outC->_L20 = n;
  outC->_L22 = 0;
  outC->_L21 = outC->_L20 > outC->_L22;
  outC->_L23 = outC->_L6 & outC->_L21;
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L15,
    (BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBG_find_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  outC->_L13 = linked;
  for (i2 = 0; i2 < 8; i2++) {
    outC->_L14[i2] = outC->_L13;
  }
  outC->_L16 = n;
  for (i1 = 0; i1 < 8; i1++) {
    outC->_L17[i1] = outC->_L16;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L4, BGs);
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L15);
  if (outC->_L23) {
    for (i = 0; i < 8; i++) {
      kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &tmp,
        &outC->_L1);
      /* 1 */
      indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        i,
        &tmp,
        outC->_L14[i],
        outC->_L17[i],
        &outC->_L4[i],
        &outC->Context_1[i]);
      kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &outC->_L1,
        &outC->Context_1[i].acc_out);
      outC->_L3 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L3 = 0;
  }
  outC->_L19 = outC->_L1.BGFound;
  outC->_L18 = outC->_L1.index;
  outC->BG_found = outC->_L19;
  outC->indexOfBG = outC->_L18;
  noname = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

