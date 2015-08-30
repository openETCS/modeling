/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_9_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void _9_recalculate_BG_locations__reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC__9_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    _8_recalculate_BG_locations__reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_1[i]);
  }
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead */
void _9_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::referenceBG */positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC__9_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_int i1;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp;
  kcg_int i;
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg noname;
  
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L9,
    trainProperties);
  for (i1 = 0; i1 < 8; i1++) {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L10[i1],
      &outC->_L9);
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
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L3,
    &outC->_L8);
  for (i = 0; i < 8; i++) {
    kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &outC->_L3);
    /* 1 */
    _8_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &outC->_L2[i],
      &outC->_L10[i],
      &outC->Context_1[i]);
    kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L3,
      &outC->Context_1[i].refBGs_out);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L4[i],
      &outC->Context_1[i].BG_out);
  }
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &noname,
    &outC->_L3);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _9_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

