/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies */
void calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::localInaccuracies */ LocWithInAcc_T_Obu_BasicTypes_Pkg *localInaccuracies)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

