/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
void findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_indices */ linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *BGs_indices)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg acc5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg acc;
  static kcg_int i1;
  static kcg_int i;
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg noname;
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _6_noname;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L24 */
  static linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L24;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L23 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L23;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L25 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L25;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L26 */
  static positionedBGs_T_TrainPosition_Types_Pck _L26;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L29 */
  static linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L29;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L28 */
  static linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L28;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L30 */
  static positionedBGs_T_TrainPosition_Types_Pck _L30;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L31 */
  static linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L31;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::_L32 */
  static linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L32;
  
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L25,
    (linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L26, BGs_in);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L23,
    &_L25);
  for (i4 = 0; i4 < 41; i4++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc5,
      &_L23);
    /* 1 */
    findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc5,
      &_L26[i4],
      &_L23,
      &_L24[i4]);
  }
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &noname,
    &_L23);
  for (i3 = 0; i3 < 41; i3++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L32[i3],
      &_L24[40 - i3]);
  }
  for (i2 = 0; i2 < 41; i2++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L30[i2], &_L26[40 - i2]);
  }
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L28,
    &_L25);
  for (i1 = 0; i1 < 41; i1++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc,
      &_L28);
    /* 1 */
    findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc,
      &_L32[i1],
      &_L30[i1],
      &_L28,
      &_L29[i1]);
  }
  for (i = 0; i < 41; i++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L31[i],
      &_L29[40 - i]);
  }
  kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    BGs_indices,
    &_L31);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_6_noname,
    &_L28);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

