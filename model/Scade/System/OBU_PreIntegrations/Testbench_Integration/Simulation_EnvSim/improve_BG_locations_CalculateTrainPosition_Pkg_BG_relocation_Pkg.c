/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations */
void improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::referenceBG */positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_in */positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations::BGs_out */positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  static positionedBGs_T_TrainPosition_Types_Pck tmp1;
  static positionedBGs_T_TrainPosition_Types_Pck tmp;
  
  /* 1 */
  recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    referenceBG,
    BGs_in,
    trainProperties,
    &tmp);
  /* 1 */
  recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    referenceBG,
    &tmp,
    trainProperties,
    &tmp1);
  /* 1 */
  improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &tmp1,
    BGs_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

