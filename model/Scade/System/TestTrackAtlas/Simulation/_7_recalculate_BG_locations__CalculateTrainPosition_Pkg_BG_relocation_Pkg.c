/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_7_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void _7_recalculate_BG_locations__reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC__7_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    recalculate_BG_locations__reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern */
void _7_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::referenceBG */positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC__7_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_int i3;
  kcg_int i2;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp;
  kcg_int i1;
  kcg_int i;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg noname;
  
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L11,
    trainProperties);
  for (i3 = 0; i3 < 8; i3++) {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L12[i3],
      &outC->_L11);
  }
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L7,
    (refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoRefPrevBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, referenceBG);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L8,
    &outC->_L7);
  if (kcg_true) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8.refBG,
      &outC->_L1);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs_in);
  for (i2 = 0; i2 < 8; i2++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L9[i2],
      &outC->_L2[7 - i2]);
  }
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L3,
    &outC->_L8);
  for (i1 = 0; i1 < 8; i1++) {
    kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &outC->_L3);
    /* 1 */
    recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &outC->_L9[i1],
      &outC->_L12[i1],
      &outC->Context_1[i1]);
    kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L3,
      &outC->Context_1[i1].refBGs_out);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L4[i1],
      &outC->Context_1[i1].BG_out);
  }
  for (i = 0; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L10[i],
      &outC->_L4[7 - i]);
  }
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &noname,
    &outC->_L3);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L10);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _7_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

