/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern */
void recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::referenceBG */positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp;
  static kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::_L3 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L3;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern::_L4 */
  static array__156522 _L4;
  
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L3,
    (refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoRefPrevBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L3.refBG, referenceBG);
  for (i = 0; i < 41; i++) {
    kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(&tmp, &_L3);
    /* 1 */
    recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp,
      &(*BGs_in)[40 - i],
      trainProperties,
      &_L3,
      &_L4[i]);
  }
  for (i = 0; i < 41; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*BGs_out)[i],
      &_L4[40 - i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

