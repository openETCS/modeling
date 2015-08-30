/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_8_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void _8_recalculate_BG_locations__reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC__8_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* 2 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->_5_Context_2);
  /* 3 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->_4_Context_3);
  /* 1 */
  recalculate_BG_location_ahead_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_3_Context_1);
  /* 12 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_12);
  /* 3 */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(&outC->_2_Context_3);
  /* 8 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_8);
  /* 4 */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_4);
  /* 7 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_7);
  /* 4 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->Context_4);
  /* 9 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_9);
  /* 2 */ sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
  /* 6 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_6);
  /* calculateLocalBGInaccuracies */
  calculateLocalBGInaccuracies_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_calculateLocalBGInaccuracies);
  /* 3 */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_3);
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
void _8_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_in */refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC__8_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  positionedBG_T_TrainPosition_Types_Pck tmp;
  LocWithInAcc_T_Obu_BasicTypes_Pkg noname;
  
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L64,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L71,
    &outC->_L64.refBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L74, BG_in);
  /* 3 */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L71,
    &outC->_L74,
    &outC->Context_3);
  outC->_L67 = outC->Context_3.idsEqual;
  outC->BGin_is_refBG = outC->_L67;
  outC->_L236 = outC->BGin_is_refBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L237, BG_in);
  outC->_L259 = outC->_L237.valid;
  outC->_L257 = outC->_L236 & outC->_L259;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L244,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  outC->_L77 = outC->BGin_is_refBG;
  outC->_L107 = Q_LINK_Linked;
  outC->_L164 = outC->_L71.valid;
  outC->_L165 = outC->_L71.infoFromLinking.valid;
  outC->_L169 = outC->_L164 & outC->_L165;
  outC->_L61 = outC->BGin_is_refBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L188, BG_in);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L197,
    trainProperties);
  /* calculateLocalBGInaccuracies */
  calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L188,
    &outC->_L197,
    &outC->Context_calculateLocalBGInaccuracies);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L220,
    &outC->Context_calculateLocalBGInaccuracies.localInaccuracies);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->BG_loc_inacc, &outC->_L220);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L216, &outC->BG_loc_inacc);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L217,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L62, BG_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L59, &outC->_L62.location);
  outC->_L51 = outC->_L59.nominal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L218, &outC->_L217);
  if (kcg_true) {
    outC->_L218.nominal = outC->_L51;
  }
  /* 6 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L216,
    &outC->_L218,
    &outC->Context_6);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L219,
    &outC->Context_6.distance);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L219,
    &outC->_L59,
    &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L302,
    &outC->Context_1.loc);
  outC->_L303 = outC->Context_1.overlap;
  if (outC->_L303) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L304, &outC->_L302);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L304, &outC->_L59);
  }
  if (outC->_L61) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L52, &outC->_L304);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L52, &outC->_L59);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->refLocation, &outC->_L52);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L76, &outC->refLocation);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L75, &outC->_L71);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L75.location,
      &outC->_L76);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L167, &outC->_L75);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L167.infoFromLinking.expectedLocation,
      &outC->_L76);
  }
  if (outC->_L169) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L168, &outC->_L167);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L168, &outC->_L75);
  }
  if (outC->_L67) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L163, &outC->_L168);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L163, &outC->_L71);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->refBG, &outC->_L163);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L78, &outC->refBG);
  outC->_L105 = outC->_L78.q_link;
  outC->_L106 = outC->_L107 == outC->_L105;
  outC->_L83 = !outC->_L106;
  outC->_L84 = outC->_L77 & outC->_L83;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L93, &outC->_L78.infoFromPassing);
  outC->_L94 = outC->_L93.valid;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L82,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L86,
    &outC->_L82.prevLinkedBG);
  outC->_L87 = outC->_L86.valid;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L88, &outC->_L86.infoFromPassing);
  outC->_L89 = outC->_L88.valid;
  outC->_L96 = outC->_L84 & outC->_L94 & outC->_L87 & outC->_L89;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L95,
    &outC->_L93.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L90,
    &outC->_L88.BG_Header.bgPosition.odo);
  /* 2 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L95,
    &outC->_L90,
    &outC->Context_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L92,
    &outC->Context_2.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L294,
    &outC->_L88.BG_Header.BG_centerDetectionInaccuraccuracies);
  /* 9 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L92,
    &outC->_L294,
    &outC->Context_9);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L297,
    &outC->Context_9.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L286,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  if (outC->_L96) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L285, &outC->_L297);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L285, &outC->_L286);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->d_prevLinkedBG_refBG,
    &outC->_L285);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L287,
    &outC->d_prevLinkedBG_refBG);
  /* 4 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L244,
    &outC->_L287,
    &outC->Context_4);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L288,
    &outC->Context_4.distance);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L253,
    &outC->_L237.infoFromLinking);
  outC->_L260 = outC->_L253.valid;
  outC->_L258 = outC->_L259 & outC->_L260;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L254, &outC->_L253.d_link);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L229,
    refBGs_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L230,
    &outC->_L229.sumOfBestDistances);
  /* 7 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L254,
    &outC->_L230,
    &outC->Context_7);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L255,
    &outC->Context_7.distance);
  outC->_L238 = outC->_L237.q_link;
  outC->_L240 = Q_LINK_Linked;
  outC->_L239 = outC->_L238 == outC->_L240;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L274, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L275, &outC->_L274.infoFromPassing);
  outC->_L276 = outC->_L275.valid;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L273,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L267,
    &outC->_L273.prevLinkedBG);
  outC->_L268 = outC->_L267.valid;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L269, &outC->_L267.infoFromPassing);
  outC->_L270 = outC->_L269.valid;
  outC->_L278 = outC->_L259 & outC->_L239 & outC->_L276 & outC->_L268 &
    outC->_L270;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L277,
    &outC->_L275.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L271,
    &outC->_L269.BG_Header.bgPosition.odo);
  /* 4 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L277,
    &outC->_L271,
    &outC->_1_Context_4);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L279,
    &outC->_1_Context_4.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L282,
    &outC->_L273.sumOfBestDistances);
  /* 8 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L279,
    &outC->_L282,
    &outC->Context_8);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L280,
    &outC->Context_8.distance);
  if (outC->_L278) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L281, &outC->_L280);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L281, &outC->_L282);
  }
  if (outC->_L258) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L256, &outC->_L255);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L256, &outC->_L281);
  }
  if (outC->_L257) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L243, &outC->_L288);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L243, &outC->_L256);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->sumOfBestDistances,
    &outC->_L243);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L305,
    &outC->sumOfBestDistances);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L152,
    refBGs_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L292,
    &outC->_L152.sumOfBestDistances);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &outC->_L292);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L301,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L115, &outC->refBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L128, &outC->_L115.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L130,
    &outC->_L128.BG_Header.bgPosition.odo);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L118,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L122,
    &outC->_L118.prevUnlinkedBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L124, &outC->_L122.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L126,
    &outC->_L124.BG_Header.bgPosition.odo);
  /* 3 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L130,
    &outC->_L126,
    &outC->_2_Context_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L127,
    &outC->_2_Context_3.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L296,
    &outC->_L124.BG_Header.BG_centerDetectionInaccuraccuracies);
  /* 12 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L127,
    &outC->_L296,
    &outC->Context_12);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L300,
    &outC->Context_12.distance);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L293,
    trainProperties);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L291,
    &outC->_L152.refBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L290,
    &outC->_L152.prevLinkedBG);
  outC->_L158 = outC->_L152.recalculate;
  outC->tmp = outC->_L158;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L147, BG_in);
  if (outC->tmp) {
    /* 1 */
    recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L147,
      &outC->_L290,
      &outC->_L291,
      &outC->_L305,
      &outC->_L293,
      &outC->_3_Context_1);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &outC->_3_Context_1.BG_out);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L289, &tmp);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L289, &outC->_L301);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L265,
    &outC->sumOfBestDistances);
  outC->_L173 = outC->BGin_is_refBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L174, &outC->refBG);
  if (outC->_L158) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L154, &outC->_L289);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L154, &outC->_L147);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->relocatedBG,
    &outC->_L154);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L172,
    &outC->relocatedBG);
  if (outC->_L173) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L175, &outC->_L174);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L175, &outC->_L172);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &outC->_L175);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L162, &outC->refBG);
  outC->_L161 = outC->_L74.valid;
  outC->_L69 = outC->_L64.recalculate;
  outC->_L160 = outC->_L69 & outC->_L161;
  outC->_L159 = outC->_L67 | outC->_L160;
  outC->recalculateSubsequentBGs = outC->_L159;
  outC->_L157 = outC->recalculateSubsequentBGs;
  outC->_L114 = outC->BGin_is_refBG;
  outC->_L138 = Q_LINK_Unlinked;
  outC->_L136 = outC->_L115.q_link;
  outC->_L137 = outC->_L138 == outC->_L136;
  outC->_L116 = outC->_L114 & outC->_L137;
  outC->_L119 = !outC->_L137;
  outC->_L120 = outC->_L114 & outC->_L119;
  outC->_L129 = outC->_L128.valid;
  outC->_L123 = outC->_L122.valid;
  outC->_L125 = outC->_L124.valid;
  outC->_L131 = outC->_L120 & outC->_L129 & outC->_L123 & outC->_L125;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L133,
    &outC->_L115.location);
  /* 3 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L133,
    &outC->_L300,
    &outC->_4_Context_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L132,
    &outC->_4_Context_3.distance);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L134, &outC->_L122);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L134.location,
      &outC->_L132);
  }
  outC->_L141 = Q_LINK_Unlinked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L148,
    &outC->relocatedBG);
  outC->_L139 = outC->_L148.q_link;
  outC->_L140 = outC->_L141 == outC->_L139;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L144,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L143,
    &outC->_L144.prevUnlinkedBG);
  if (outC->_L140) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L142, &outC->_L148);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L142, &outC->_L143);
  }
  if (outC->_L131) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L121, &outC->_L134);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L121, &outC->_L142);
  }
  if (outC->_L116) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L117, &outC->_L115);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L117, &outC->_L121);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->prevUnlinkedBG,
    &outC->_L117);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L156,
    &outC->prevUnlinkedBG);
  outC->_L80 = outC->_L77 & outC->_L106;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L98, &outC->_L78.location);
  /* 2 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L98,
    &outC->_L297,
    &outC->_5_Context_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L97,
    &outC->_5_Context_2.distance);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L99, &outC->_L86);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L99.location,
      &outC->_L97);
  }
  outC->_L110 = Q_LINK_Linked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L149,
    &outC->relocatedBG);
  outC->_L108 = outC->_L149.q_link;
  outC->_L109 = outC->_L110 == outC->_L108;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L113,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L112,
    &outC->_L113.prevLinkedBG);
  if (outC->_L109) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L111, &outC->_L149);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L111, &outC->_L112);
  }
  if (outC->_L96) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L85, &outC->_L99);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L85, &outC->_L111);
  }
  if (outC->_L80) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L81, &outC->_L78);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L81, &outC->_L85);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->prevLinkedBG,
    &outC->_L81);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L155,
    &outC->prevLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L36.refBG,
    &outC->_L162);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L36.prevLinkedBG,
    &outC->_L155);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L36.prevUnlinkedBG,
    &outC->_L156);
  outC->_L36.recalculate = outC->_L157;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L36.sumOfBestDistances,
    &outC->_L265);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->refBGs_out,
    &outC->_L36);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _8_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

