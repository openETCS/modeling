/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void findLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    findLinkedBG_bckwd_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_1_Context_1[i]);
  }
  for (i = 0; i < 8; i++) {
    /* 1 */
    findLinkedBG_fwd_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs */
void findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp;
  kcg_int i1;
  kcg_int i;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg noname;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _6_noname;
  
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L25,
    (linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L26, BGs_in);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L23,
    &outC->_L25);
  for (i4 = 0; i4 < 8; i4++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp5,
      &outC->_L23);
    /* 1 */
    findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp5,
      &outC->_L26[i4],
      &outC->Context_1[i4]);
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L23,
      &outC->Context_1[i4].index_acc);
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L24[i4],
      &outC->Context_1[i4].index_out);
  }
  for (i3 = 0; i3 < 8; i3++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L32[i3],
      &outC->_L24[7 - i3]);
  }
  for (i2 = 0; i2 < 8; i2++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L30[i2],
      &outC->_L26[7 - i2]);
  }
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L28,
    &outC->_L25);
  for (i1 = 0; i1 < 8; i1++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &outC->_L28);
    /* 1 */
    findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &outC->_L32[i1],
      &outC->_L30[i1],
      &outC->_1_Context_1[i1]);
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L28,
      &outC->_1_Context_1[i1].index_acc_out);
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L29[i1],
      &outC->_1_Context_1[i1].index_out);
  }
  for (i = 0; i < 8; i++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L31[i],
      &outC->_L29[7 - i]);
  }
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_6_noname,
    &outC->_L28);
  kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->BGs_indices,
    &outC->_L31);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &noname,
    &outC->_L23);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

