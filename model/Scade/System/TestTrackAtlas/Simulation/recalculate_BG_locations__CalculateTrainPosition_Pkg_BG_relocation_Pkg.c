/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

void recalculate_BG_locations__reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* 1 */
  recalculate_BG_location_a_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_4_Context_1);
  /* 2 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->_3_Context_2);
  /* 1 */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(&outC->_2_Context_1);
  /* 1 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_1);
  /* 3 */ sub_2_distances_reset_BasicLocationFunctions_Pkg(&outC->Context_3);
  /* 2 */ sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr */
void recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::refBGs_in */refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::BG_in */positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  positionedBG_T_TrainPosition_Types_Pck tmp;
  
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L64,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L71,
    &outC->_L64.refBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L74, BG_in);
  /* 1 */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L71,
    &outC->_L74,
    &outC->Context_1);
  outC->_L67 = outC->Context_1.idsEqual;
  outC->BGin_is_refBG = outC->_L67;
  outC->_L182 = outC->BGin_is_refBG;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L207,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L225,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L230,
    &outC->_L225.prevLinkedBG);
  outC->_L231 = outC->_L230.valid;
  outC->_L232 = !outC->_L231;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L226,
    &outC->_L225.refBG);
  outC->_L233 = outC->_L226.valid;
  outC->_L228 = outC->_L226.q_link;
  outC->_L229 = Q_LINK_Unlinked;
  outC->_L227 = outC->_L228 == outC->_L229;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L234, &outC->_L226.infoFromPassing);
  outC->_L235 = outC->_L234.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L183, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L240, &outC->_L183.infoFromPassing);
  outC->_L242 = outC->_L240.valid;
  outC->_L184 = outC->_L183.valid;
  outC->_L187 = outC->_L183.q_link;
  outC->_L185 = Q_LINK_Linked;
  outC->_L186 = outC->_L187 == outC->_L185;
  outC->_L213 = outC->_L184 & outC->_L186;
  outC->_L236 = outC->_L232 & outC->_L233 & outC->_L227 & outC->_L235 &
    outC->_L242 & outC->_L213;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L222,
    refBGs_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L223,
    &outC->_L222.sumOfBestDistances);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L243,
    &outC->_L234.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L241,
    &outC->_L240.BG_Header.bgPosition.odo);
  /* 2 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L243,
    &outC->_L241,
    &outC->Context_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L244,
    &outC->Context_2.distance);
  /* 3 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L223,
    &outC->_L244,
    &outC->Context_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L246,
    &outC->Context_3.distance);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L209,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L208,
    &outC->_L209.prevLinkedBG);
  outC->_L210 = outC->_L208.valid;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L194,
    &outC->_L208.infoFromLinking);
  outC->_L195 = outC->_L194.valid;
  outC->_L193 = outC->_L213 & outC->_L210 & outC->_L195;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L196, &outC->_L194.d_link);
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L223,
    &outC->_L196,
    &outC->_1_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L199,
    &outC->_1_Context_1.distance);
  outC->_L203 = !outC->_L195;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L214, &outC->_L208.infoFromPassing);
  outC->_L215 = outC->_L214.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L217, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L218, &outC->_L217.infoFromPassing);
  outC->_L220 = outC->_L218.valid;
  outC->_L204 = outC->_L213 & outC->_L210 & outC->_L203 & outC->_L215 &
    outC->_L220;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L216,
    &outC->_L214.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L219,
    &outC->_L218.BG_Header.bgPosition.odo);
  /* 1 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L216,
    &outC->_L219,
    &outC->_2_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L221,
    &outC->_2_Context_1.distance);
  /* 2 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L223,
    &outC->_L221,
    &outC->_3_Context_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L224,
    &outC->_3_Context_2.distance);
  if (outC->_L204) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L205, &outC->_L224);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L205, &outC->_L223);
  }
  if (outC->_L193) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L190, &outC->_L199);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L190, &outC->_L205);
  }
  if (outC->_L236) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L245, &outC->_L246);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L245, &outC->_L190);
  }
  if (outC->_L182) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L206, &outC->_L207);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L206, &outC->_L245);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->sumOfBestDistances,
    &outC->_L206);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L251,
    &outC->sumOfBestDistances);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L250,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L249,
    &outC->sumOfBestDistances);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L152,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L248,
    &outC->_L152.refBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L247,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L198,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L197,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  if (outC->_L67) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L181, &outC->_L74);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L181, &outC->_L71);
  }
  outC->_L173 = outC->BGin_is_refBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->refBG, &outC->_L181);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L174, &outC->refBG);
  outC->_L158 = outC->_L152.recalculate;
  outC->tmp = outC->_L158;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L147, BG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L153,
    &outC->_L152.prevLinkedBG);
  if (outC->tmp) {
    /* 1 */
    recalculate_BG_location_a_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L147,
      &outC->_L153,
      &outC->_L248,
      &outC->_L249,
      &outC->_L250,
      &outC->_4_Context_1);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &outC->_4_Context_1.BG_out);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L150, &tmp);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L150, &outC->_L247);
  }
  if (outC->_L158) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L154, &outC->_L150);
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
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L115, &outC->refBG);
  outC->_L136 = outC->_L115.q_link;
  outC->_L137 = outC->_L138 == outC->_L136;
  outC->_L116 = outC->_L114 & outC->_L137;
  outC->_L119 = !outC->_L137;
  outC->_L120 = outC->_L114 & outC->_L119;
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
  if (outC->_L120) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L121, &outC->_L198);
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
  outC->_L77 = outC->BGin_is_refBG;
  outC->_L107 = Q_LINK_Linked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L78, &outC->refBG);
  outC->_L105 = outC->_L78.q_link;
  outC->_L106 = outC->_L107 == outC->_L105;
  outC->_L80 = outC->_L77 & outC->_L106;
  outC->_L83 = !outC->_L106;
  outC->_L84 = outC->_L77 & outC->_L83;
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
  if (outC->_L84) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L85, &outC->_L197);
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
    &outC->_L251);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->refBGs_out,
    &outC->_L36);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** recalculate_BG_locations__CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

