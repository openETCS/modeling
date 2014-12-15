/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations */
void MLRI__improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_in */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::BGs_out */MLRI__positionedBGs_T_TrainPosition_Types_Pck *BGs_out)
{
  MLRI__linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations::_L6 */ kcg_int _L6;
  
  /* 1 */
  MLRI__findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    BGs_in,
    &tmp1);
  for (i = 0; i < 8; i++) {
    /* 1 */
    MLRI__improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &tmp1[i],
      BGs_in,
      &tmp,
      &(*BGs_out)[i]);
    _L6 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L6; i < 8; i++) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*BGs_out)[i],
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

