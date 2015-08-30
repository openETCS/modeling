/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void countBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    countBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs */
void countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs::enable */kcg_bool enable,
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L4,
    (BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L5, BGs_in);
  outC->_L12 = enable;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L4);
  if (outC->_L12) {
    for (i = 0; i < 8; i++) {
      kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &tmp,
        &outC->_L1);
      /* 1 */
      countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &tmp,
        &outC->_L5[i],
        &outC->Context_1[i]);
      kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &outC->_L1,
        &outC->Context_1[i].counters_out);
      outC->_L3 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L3 = 0;
  }
  outC->_L24 = outC->_L1.totalBGsCount;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->counters,
    &outC->_L1);
  outC->_L17 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  outC->_L16 = outC->_L24 == outC->_L17;
  outC->_L15 = 0;
  outC->_L14 = outC->_L24 == outC->_L15;
  outC->full = outC->_L16;
  outC->empty = outC->_L14;
  noname = outC->_L3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

