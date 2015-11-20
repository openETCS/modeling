/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
void recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_in */refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_out */refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_out */positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BGin_is_refBG */
  static kcg_bool BGin_is_refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refLocation */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg refLocation;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBG */
  static positionedBG_T_TrainPosition_Types_Pck refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::relocatedBG */
  static positionedBG_T_TrainPosition_Types_Pck relocatedBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::sumOfBestDistances */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L96 */
  static kcg_bool _L96;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L106 */
  static kcg_bool _L106;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L137 */
  static kcg_bool _L137;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L302 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L302;
  
  BGin_is_refBG = /* 3 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &(*refBGs_in).refBG,
      BG_in);
  (*refBGs_out).recalculate = BGin_is_refBG | ((*refBGs_in).recalculate &
      (*BG_in).valid);
  /* calculateLocalBGInaccuracies */
  calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    BG_in,
    trainProperties,
    &refLocation);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L302,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  _L302.nominal = (*BG_in).location.nominal;
  /* 6 */
  add_2_Distances_BasicLocationFunctions_Pkg(&refLocation, &_L302, &tmp1);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &tmp1,
    &(*BG_in).location,
    &_L302,
    &_L106);
  if (BGin_is_refBG) {
    if (_L106) {
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&refLocation, &_L302);
    }
    else {
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &refLocation,
        &(*BG_in).location);
    }
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &refLocation,
      &(*BG_in).location);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &relocatedBG,
    &(*refBGs_in).refBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &relocatedBG.location,
    &refLocation);
  if (BGin_is_refBG) {
    if ((*refBGs_in).refBG.valid & (*refBGs_in).refBG.infoFromLinking.valid) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&refBG, &relocatedBG);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &refBG.infoFromLinking.expectedLocation,
        &refLocation);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&refBG, &relocatedBG);
    }
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &refBG,
      &(*refBGs_in).refBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&(*refBGs_out).refBG, &refBG);
  _L106 = Q_LINK_Linked == refBG.q_link;
  _L96 = BGin_is_refBG & !_L106 & refBG.infoFromPassing.valid &
    (*refBGs_in).prevLinkedBG.valid &
    (*refBGs_in).prevLinkedBG.infoFromPassing.valid;
  /* 2 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &refBG.infoFromPassing.BG_Header.bgPosition.odo,
    &(*refBGs_in).prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo,
    &tmp1);
  /* 9 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &tmp1,
    &(*refBGs_in).prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies,
    &_L302);
  if (BGin_is_refBG & (*BG_in).valid) {
    if (_L96) {
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&tmp1, &_L302);
    }
    else {
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &tmp1,
        (LocWithInAcc_T_Obu_BasicTypes_Pkg *)
          &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
    }
    /* 4 */
    sub_2_distances_BasicLocationFunctions_Pkg(
      (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg,
      &tmp1,
      &sumOfBestDistances);
  }
  else if ((*BG_in).valid & (*BG_in).infoFromLinking.valid) {
    /* 7 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &(*BG_in).infoFromLinking.d_link,
      &(*refBGs_in).sumOfBestDistances,
      &sumOfBestDistances);
  }
  else if ((*BG_in).valid & ((*BG_in).q_link == Q_LINK_Linked) &
    (*BG_in).infoFromPassing.valid & (*refBGs_in).prevLinkedBG.valid &
    (*refBGs_in).prevLinkedBG.infoFromPassing.valid) {
    /* 4 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &(*BG_in).infoFromPassing.BG_Header.bgPosition.odo,
      &(*refBGs_in).prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo,
      &refLocation);
    /* 8 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &refLocation,
      &(*refBGs_in).sumOfBestDistances,
      &sumOfBestDistances);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &sumOfBestDistances,
      &(*refBGs_in).sumOfBestDistances);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*refBGs_out).sumOfBestDistances,
    &sumOfBestDistances);
  if ((*refBGs_in).recalculate) {
    /* 1 */
    recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      BG_in,
      &(*refBGs_in).prevLinkedBG,
      &(*refBGs_in).refBG,
      &sumOfBestDistances,
      trainProperties,
      &relocatedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&relocatedBG, BG_in);
  }
  _L137 = Q_LINK_Unlinked == refBG.q_link;
  if (BGin_is_refBG & _L106) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &refBG);
  }
  else if (_L96) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*refBGs_in).prevLinkedBG);
    /* 2 */
    sub_2_distances_BasicLocationFunctions_Pkg(
      &refBG.location,
      &_L302,
      &tmp.location);
  }
  else if (Q_LINK_Linked == relocatedBG.q_link) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &relocatedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*refBGs_in).prevLinkedBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &(*refBGs_out).prevLinkedBG,
    &tmp);
  if (BGin_is_refBG & _L137) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &refBG);
  }
  else if (BGin_is_refBG & !_L137 & refBG.infoFromPassing.valid &
    (*refBGs_in).prevUnlinkedBG.valid &
    (*refBGs_in).prevUnlinkedBG.infoFromPassing.valid) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*refBGs_in).prevUnlinkedBG);
    /* 3 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &refBG.infoFromPassing.BG_Header.bgPosition.odo,
      &(*refBGs_in).prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo,
      &refLocation);
    /* 12 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &refLocation,
      &(*refBGs_in).prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies,
      &tmp1);
    /* 3 */
    sub_2_distances_BasicLocationFunctions_Pkg(
      &refBG.location,
      &tmp1,
      &tmp.location);
  }
  else if (Q_LINK_Unlinked == relocatedBG.q_link) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &relocatedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*refBGs_in).prevUnlinkedBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &(*refBGs_out).prevUnlinkedBG,
    &tmp);
  if (BGin_is_refBG) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &refBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &relocatedBG);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

