/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead */
void MLRI__recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_in */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::prevLinkedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::refBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::sumOfBestDistances */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::BG_out */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp3;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp2;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead::_L165 */ kcg_bool _L165;
  
  _L165 = (*BG_in).valid & (*prevLinkedBG).valid & (*refBG).valid;
  MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, BG_in);
  if (_L165 & ((*BG_in).q_link == MLRI__Q_LINK_Linked)) {
    /* 1 */
    MLRI__calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      BG_in,
      trainProperties,
      &tmp3);
    /* 3 */
    MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
      &(*refBG).location,
      sumOfBestDistances,
      &tmp2);
    /* 4 */
    MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
      &tmp3,
      &tmp2,
      &(*BG_out).location);
  }
  else if (_L165 & (*BG_in).infoFromPassing.valid &
    (*prevLinkedBG).infoFromPassing.valid) {
    /* 2 */
    MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &(*BG_in).infoFromPassing.bgPosition.odo,
      &(*prevLinkedBG).infoFromPassing.bgPosition.odo,
      &tmp);
    /* 5 */
    MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
      &(*BG_in).infoFromPassing.BG_centerDetectionInaccuraccuracies,
      &tmp,
      &tmp1);
    /* 6 */
    MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
      &tmp1,
      &(*prevLinkedBG).location,
      &(*BG_out).location);
  }
  else {
    MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &(*BG_out).location,
      &(*BG_in).location);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

