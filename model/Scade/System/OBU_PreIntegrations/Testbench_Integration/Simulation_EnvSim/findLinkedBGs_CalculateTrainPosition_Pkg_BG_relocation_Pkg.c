/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
void findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_indices */linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *BGs_indices)
{
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L24 */
  static array__156795 _L24;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L29 */
  static array__156795 _L29;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L28 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L28;
  
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &tmp,
    (linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  for (i = 0; i < 41; i++) {
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
  for (i = 0; i < 41; i++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &_L28);
    /* 1 */
    findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &_L24[40 - i],
      &(*BGs_in)[40 - i],
      &_L28,
      &_L29[i]);
  }
  for (i = 0; i < 41; i++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &(*BGs_indices)[i],
      &_L29[40 - i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

