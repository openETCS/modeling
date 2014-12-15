/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr */
void MLRI__findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_in */MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::BG_in */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_acc */MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_acc,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::index_out */MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr::_L22 */ kcg_int _L22;
  
  (*index_acc).subsequentLinkedBG_idx = (*index_in).subsequentLinkedBG_idx;
  _L22 = (*index_in).currentIndex + 1;
  (*index_acc).currentIndex = _L22;
  if ((*BG_in).valid & ((*BG_in).q_link == MLRI__Q_LINK_Linked)) {
    (*index_acc).previousLinkedBG_idx = _L22;
  }
  else {
    (*index_acc).previousLinkedBG_idx = (*index_in).previousLinkedBG_idx;
  }
  MLRI__kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    index_out,
    index_acc);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

