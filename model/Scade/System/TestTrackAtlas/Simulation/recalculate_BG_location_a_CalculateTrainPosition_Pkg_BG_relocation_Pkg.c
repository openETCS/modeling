/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void recalculate_BG_location_a_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* 1 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->_5_Context_1);
  /* 3 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->_4_Context_3);
  /* 3 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_3);
  /* 1 */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(&outC->_3_Context_1);
  /* 1 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->_2_Context_1);
  /* 1 */
  calculateLocalBGInaccuracies_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_1_Context_1);
  /* 1 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern */
void recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::prevLinkedBG */positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::refBG */positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::sumOfBestDistances */LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L178, refBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L179,
    &outC->_L178.location);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L177, sumOfBestDistances);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L179,
    &outC->_L177,
    &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L180,
    &outC->Context_1.distance);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L172, BG_in);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L184,
    trainProperties);
  /* 1 */
  calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L172,
    &outC->_L184,
    &outC->_1_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L183,
    &outC->_1_Context_1.localInaccuracies);
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L180,
    &outC->_L183,
    &outC->_2_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L181,
    &outC->_2_Context_1.distance);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L191, prevLinkedBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L197,
    &outC->_L191.location);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L187, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L188, &outC->_L187.infoFromPassing);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L198,
    &outC->_L188.BG_Header.BG_centerDetectionInaccuraccuracies);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L194, &outC->_L191.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L193,
    &outC->_L194.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L190,
    &outC->_L188.BG_Header.bgPosition.odo);
  /* 1 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L193,
    &outC->_L190,
    &outC->_3_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L196,
    &outC->_3_Context_1.distance);
  /* 3 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L198,
    &outC->_L196,
    &outC->Context_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L199,
    &outC->Context_3.distance);
  /* 3 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L197,
    &outC->_L199,
    &outC->_4_Context_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L200,
    &outC->_4_Context_3.distance);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L181,
    &outC->_L200,
    &outC->_5_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L211,
    &outC->_5_Context_1.loc);
  outC->_L212 = outC->_5_Context_1.overlap;
  outC->_L208 = outC->_L187.valid;
  outC->_L189 = outC->_L188.valid;
  outC->_L210 = outC->_L191.valid;
  outC->_L192 = outC->_L194.valid;
  outC->_L195 = outC->_L208 & outC->_L189 & outC->_L210 & outC->_L192;
  outC->_L214 = outC->_L212 & outC->_L195;
  if (outC->_L214) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L213, &outC->_L211);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L213, &outC->_L181);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L204, BG_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L205,
    &outC->_L204.location);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L171, BG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L162, BG_in);
  outC->_L166 = outC->_L162.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L164, refBG);
  outC->_L168 = outC->_L164.valid;
  outC->_L165 = outC->_L166 & outC->_L168;
  outC->_L176 = outC->_L172.q_link;
  outC->_L175 = Q_LINK_Linked;
  outC->_L174 = outC->_L176 == outC->_L175;
  outC->_L182 = outC->_L165 & outC->_L174;
  if (outC->_L195) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L203, &outC->_L200);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L203, &outC->_L205);
  }
  if (outC->_L182) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L185, &outC->_L213);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L185, &outC->_L203);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L186, &outC->_L171);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L186.location,
      &outC->_L185);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &outC->_L186);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

