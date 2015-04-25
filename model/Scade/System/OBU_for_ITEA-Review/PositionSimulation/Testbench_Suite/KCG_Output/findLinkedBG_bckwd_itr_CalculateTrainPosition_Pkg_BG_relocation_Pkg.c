/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr */
void findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_acc_in */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_acc_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_in */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_acc_out */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_acc_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr::index_out */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_out)
{
  (*index_acc_out).previousLinkedBG_idx = (*index_in).previousLinkedBG_idx;
  (*index_acc_out).currentIndex = (*index_in).currentIndex;
  if ((*BG_in).valid & ((*BG_in).q_link == Q_LINK_Linked)) {
    (*index_acc_out).subsequentLinkedBG_idx = (*index_in).currentIndex;
  }
  else {
    (*index_acc_out).subsequentLinkedBG_idx =
      (*index_acc_in).subsequentLinkedBG_idx;
  }
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    index_out,
    index_acc_out);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

