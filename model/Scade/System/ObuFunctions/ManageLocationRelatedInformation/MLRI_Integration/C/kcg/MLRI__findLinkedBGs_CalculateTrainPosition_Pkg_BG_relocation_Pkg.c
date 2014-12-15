/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
void MLRI__findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_in */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_indices */MLRI__linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *BGs_indices)
{
  MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L24 */ MLRI__array__21495 _L24;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L29 */ MLRI__array__21495 _L29;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L28 */ MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L28;
  
  MLRI__kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &tmp,
    (MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &MLRI__cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  for (i = 0; i < 8; i++) {
    MLRI__kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L28,
      &tmp);
    /* 1 */
    MLRI__findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L28,
      &(*BGs_in)[i],
      &tmp,
      &_L24[i]);
  }
  MLRI__kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L28,
    (MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &MLRI__cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  for (i = 0; i < 8; i++) {
    MLRI__kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &_L28);
    /* 1 */
    MLRI__findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &_L24[7 - i],
      &(*BGs_in)[7 - i],
      &_L28,
      &_L29[i]);
  }
  for (i = 0; i < 8; i++) {
    MLRI__kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &(*BGs_indices)[i],
      &_L29[7 - i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

