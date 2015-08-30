/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void trimSeqNoOnTrack_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    trimSeqNoOnTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack */
void trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_int tmp;
  kcg_int i;
  kcg_int noname;
  
  outC->_L5 = 0;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L1, BGs_in);
  outC->_L2 = outC->_L5;
  for (i = 0; i < 8; i++) {
    tmp = outC->_L2;
    /* 1 */
    trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      tmp,
      &outC->_L1[i],
      &outC->Context_1[i]);
    outC->_L2 = outC->Context_1[i].seqNo;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L3[i],
      &outC->Context_1[i].BG_out);
  }
  noname = outC->_L2;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trimSeqNoOnTrack_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

