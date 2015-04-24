/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern */
void recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::prevLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::refBG */ positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::sumOfBestDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L181 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L181;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L195 */ kcg_bool _L195;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L212 */ kcg_bool _L212;
  
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &(*refBG).location,
    sumOfBestDistances,
    &tmp1);
  /* 1 */
  calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    BG_in,
    trainProperties,
    &tmp);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(&tmp1, &tmp, &_L181);
  /* 1 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &(*prevLinkedBG).infoFromPassing.BG_Header.bgPosition.odo,
    &(*BG_in).infoFromPassing.BG_Header.bgPosition.odo,
    &tmp);
  /* 3 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &(*BG_in).infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies,
    &tmp,
    &tmp1);
  /* 3 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &(*prevLinkedBG).location,
    &tmp1,
    &tmp);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(&_L181, &tmp, &tmp1, &_L212);
  _L195 = (*BG_in).valid & (*BG_in).infoFromPassing.valid &
    (*prevLinkedBG).valid & (*prevLinkedBG).infoFromPassing.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, BG_in);
  if ((*BG_in).valid & (*refBG).valid & ((*BG_in).q_link == Q_LINK_Linked)) {
    if (_L212 & _L195) {
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&(*BG_out).location, &tmp1);
    }
    else {
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&(*BG_out).location, &_L181);
    }
  }
  else if (_L195) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&(*BG_out).location, &tmp);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &(*BG_out).location,
      &(*BG_in).location);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

