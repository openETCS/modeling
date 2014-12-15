/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern */
void MLRI__recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::referenceBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::BGs_in */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::BGs_out */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  MLRI__refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::_L3 */ MLRI__refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L3;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::_L4 */ MLRI__array__21407 _L4;
  
  MLRI__kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L3,
    (MLRI__refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &MLRI__cNoRefPrevBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L3.refBG,
    referenceBG);
  for (i = 0; i < 8; i++) {
    MLRI__kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &_L3);
    /* 1 */
    MLRI__recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &(*BGs_in)[7 - i],
      trainProperties,
      &_L3,
      &_L4[i]);
  }
  for (i = 0; i < 8; i++) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*BGs_out)[i],
      &_L4[7 - i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

