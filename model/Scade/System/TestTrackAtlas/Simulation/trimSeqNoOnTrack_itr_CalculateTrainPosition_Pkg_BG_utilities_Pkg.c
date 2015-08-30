/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void trimSeqNoOnTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr */
void trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::prevSeqNo */kcg_int prevSeqNo,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::trimSeqNoOnTrack_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  outC_trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L2, BG_in);
  outC->_L3 = outC->_L2.valid;
  outC->_L4 = outC->_L2.infoFromPassing.valid;
  outC->_L6 = outC->_L3 & outC->_L4;
  outC->_L8 = outC->_L2.seqNoOnTrack;
  outC->_L13 = prevSeqNo;
  outC->_L15 = 1;
  outC->_L14 = outC->_L13 + outC->_L15;
  if (outC->_L6) {
    outC->_L7 = outC->_L8;
  }
  else {
    outC->_L7 = outC->_L14;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L16, &outC->_L2);
  if (kcg_true) {
    outC->_L16.seqNoOnTrack = outC->_L7;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &outC->_L16);
  outC->seqNo = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trimSeqNoOnTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

