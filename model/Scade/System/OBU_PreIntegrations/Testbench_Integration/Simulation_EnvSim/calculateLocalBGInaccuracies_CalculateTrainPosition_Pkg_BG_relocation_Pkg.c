/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies */
void calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::localInaccuracies */LocWithInAcc_T_Obu_BasicTypes_Pkg *localInaccuracies)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  
  if ((*BG_in).infoFromPassing.valid) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &tmp1,
      &(*BG_in).infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &tmp1,
      &(*trainProperties).centerDetectionAcc_DefaultValue);
  }
  if ((*BG_in).infoFromLinking.valid) {
    /* 3 */
    scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
      (*BG_in).infoFromLinking.linkingInfo.q_scale,
      0,
      (*BG_in).infoFromLinking.linkingInfo.q_locacc,
      &tmp);
  }
  else if ((*BG_in).infoFromPassing.valid) {
    /* 4 */
    scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
      Q_SCALE_1_m_scale,
      0,
      (*BG_in).infoFromPassing.BG_Header.q_nvlocacc,
      &tmp);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &tmp,
      &(*trainProperties).locationAccuracy_DefaultValue);
  }
  /* 5 */
  add_2_Distances_BasicLocationFunctions_Pkg(&tmp1, &tmp, localInaccuracies);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

