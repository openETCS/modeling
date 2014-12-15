/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr */
void MLRI__recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::refBGs_in */MLRI__refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::BG_in */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::refBGs_out */MLRI__refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::BG_out */MLRI__positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L137 */ kcg_bool _L137;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L106 */ kcg_bool _L106;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::sumOfBestDistances */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::relocatedBG */ MLRI__positionedBG_T_TrainPosition_Types_Pck relocatedBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::refBG */ MLRI__positionedBG_T_TrainPosition_Types_Pck refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::BGin_is_refBG */ kcg_bool BGin_is_refBG;
  
  BGin_is_refBG = /* 1 */
    MLRI__positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &(*refBGs_in).refBG,
      BG_in);
  (*refBGs_out).recalculate = BGin_is_refBG | ((*refBGs_in).recalculate &
      (*BG_in).valid);
  if (BGin_is_refBG) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&refBG, BG_in);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &refBG,
      &(*refBGs_in).refBG);
  }
  MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &(*refBGs_out).refBG,
    &refBG);
  _L106 = MLRI__Q_LINK_Linked == refBG.q_link;
  _L137 = (*BG_in).valid & ((*BG_in).q_link == MLRI__Q_LINK_Linked);
  if (BGin_is_refBG) {
    MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &sumOfBestDistances,
      (MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *)
        &MLRI__cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  }
  else if (!(*refBGs_in).prevLinkedBG.valid & (*refBGs_in).refBG.valid &
    ((*refBGs_in).refBG.q_link == MLRI__Q_LINK_Unlinked) &
    (*refBGs_in).refBG.infoFromPassing.valid & (*BG_in).infoFromPassing.valid &
    _L137) {
    /* 2 */
    MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &(*refBGs_in).refBG.infoFromPassing.bgPosition.odo,
      &(*BG_in).infoFromPassing.bgPosition.odo,
      &tmp1);
    /* 3 */
    MLRI__sub_2_distances_BasicLocationFunctions_Pkg(
      &(*refBGs_in).sumOfBestDistances,
      &tmp1,
      &sumOfBestDistances);
  }
  else if (_L137 & (*refBGs_in).prevLinkedBG.valid &
    (*refBGs_in).prevLinkedBG.infoFromLinking.valid) {
    /* 1 */
    MLRI__sub_2_distances_BasicLocationFunctions_Pkg(
      &(*refBGs_in).sumOfBestDistances,
      &(*refBGs_in).prevLinkedBG.infoFromLinking.d_link,
      &sumOfBestDistances);
  }
  else if (_L137 & (*refBGs_in).prevLinkedBG.valid &
    !(*refBGs_in).prevLinkedBG.infoFromLinking.valid &
    (*refBGs_in).prevLinkedBG.infoFromPassing.valid &
    (*BG_in).infoFromPassing.valid) {
    /* 1 */
    MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &(*refBGs_in).prevLinkedBG.infoFromPassing.bgPosition.odo,
      &(*BG_in).infoFromPassing.bgPosition.odo,
      &tmp);
    /* 2 */
    MLRI__sub_2_distances_BasicLocationFunctions_Pkg(
      &(*refBGs_in).sumOfBestDistances,
      &tmp,
      &sumOfBestDistances);
  }
  else {
    MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &sumOfBestDistances,
      &(*refBGs_in).sumOfBestDistances);
  }
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*refBGs_out).sumOfBestDistances,
    &sumOfBestDistances);
  if ((*refBGs_in).recalculate) {
    /* 1 */
    MLRI__recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      BG_in,
      &(*refBGs_in).prevLinkedBG,
      &(*refBGs_in).refBG,
      &sumOfBestDistances,
      trainProperties,
      &relocatedBG);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&relocatedBG, BG_in);
  }
  _L137 = MLRI__Q_LINK_Unlinked == refBG.q_link;
  if (BGin_is_refBG & _L106) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*refBGs_out).prevLinkedBG,
      &refBG);
  }
  else if (BGin_is_refBG & !_L106) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*refBGs_out).prevLinkedBG,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else if (MLRI__Q_LINK_Linked == relocatedBG.q_link) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*refBGs_out).prevLinkedBG,
      &relocatedBG);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*refBGs_out).prevLinkedBG,
      &(*refBGs_in).prevLinkedBG);
  }
  if (BGin_is_refBG & _L137) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*refBGs_out).prevUnlinkedBG,
      &refBG);
  }
  else if (BGin_is_refBG & !_L137) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*refBGs_out).prevUnlinkedBG,
      (MLRI__positionedBG_T_TrainPosition_Types_Pck *)
        &MLRI__cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else if (MLRI__Q_LINK_Unlinked == relocatedBG.q_link) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*refBGs_out).prevUnlinkedBG,
      &relocatedBG);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &(*refBGs_out).prevUnlinkedBG,
      &(*refBGs_in).prevUnlinkedBG);
  }
  if (BGin_is_refBG) {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &refBG);
  }
  else {
    MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &relocatedBG);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

