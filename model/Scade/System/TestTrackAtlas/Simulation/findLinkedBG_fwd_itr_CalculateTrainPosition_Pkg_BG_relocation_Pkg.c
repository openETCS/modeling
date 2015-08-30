/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void findLinkedBG_fwd_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr */
void findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_in */linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  outC_findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L19,
    index_in);
  outC->_L18 = outC->_L19.subsequentLinkedBG_idx;
  outC->_L17 = outC->_L19.currentIndex;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L5, BG_in);
  outC->_L6 = outC->_L5.valid;
  outC->_L7 = outC->_L5.q_link;
  outC->_L9 = Q_LINK_Linked;
  outC->_L8 = outC->_L7 == outC->_L9;
  outC->_L11 = outC->_L6 & outC->_L8;
  outC->_L21 = 1;
  outC->_L22 = outC->_L17 + outC->_L21;
  outC->_L16 = outC->_L19.previousLinkedBG_idx;
  if (outC->_L11) {
    outC->_L20 = outC->_L22;
  }
  else {
    outC->_L20 = outC->_L16;
  }
  outC->_L12.previousLinkedBG_idx = outC->_L20;
  outC->_L12.currentIndex = outC->_L22;
  outC->_L12.subsequentLinkedBG_idx = outC->_L18;
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->index_out,
    &outC->_L12);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->index_acc,
    &outC->_L12);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

