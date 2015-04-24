/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
void findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_indices */ linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *BGs_indices)
{
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L24 */ linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L24;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L29 */ linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L29;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L28 */ linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L28;
  
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &tmp,
    (linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  for (i = 0; i < 8; i++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L28,
      &tmp);
    /* 1 */
    findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L28,
      &(*BGs_in)[i],
      &tmp,
      &_L24[i]);
  }
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L28,
    (linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  for (i = 0; i < 8; i++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &_L28);
    /* 1 */
    findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &_L24[7 - i],
      &(*BGs_in)[7 - i],
      &_L28,
      &_L29[i]);
  }
  for (i = 0; i < 8; i++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &(*BGs_indices)[i],
      &_L29[7 - i]);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

