/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies */
void MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::BG_in */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies::localInaccuracies */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *localInaccuracies)
{
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  
  if ((*BG_in).infoFromPassing.valid) {
    MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &tmp1,
      &(*BG_in).infoFromPassing.BG_centerDetectionInaccuraccuracies);
  }
  else {
    MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &tmp1,
      &(*trainProperties).centerDetectionAcc_DefaultValue);
  }
  if ((*BG_in).infoFromLinking.valid) {
    /* 3 */
    MLRI__scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
      (*BG_in).infoFromLinking.linkingInfo.q_scale,
      0,
      (*BG_in).infoFromLinking.linkingInfo.q_locacc,
      &tmp);
  }
  else if ((*BG_in).infoFromPassing.valid) {
    /* 4 */
    MLRI__scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
      MLRI__Q_SCALE_1_m_scale,
      0,
      (*BG_in).infoFromPassing.q_nvlocacc,
      &tmp);
  }
  else {
    MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &tmp,
      &(*trainProperties).locationAccuracy_DefaultValue);
  }
  /* 5 */
  MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
    &tmp1,
    &tmp,
    localInaccuracies);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

