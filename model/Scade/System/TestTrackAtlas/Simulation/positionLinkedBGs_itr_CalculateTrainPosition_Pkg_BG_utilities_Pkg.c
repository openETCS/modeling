/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void positionLinkedBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* 1 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->_2_Context_1);
  /* 1 */
  scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
  /* 3 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_3);
  /* 4 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_4);
  /* 2 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_2);
  /* 2 */
  scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr */
void positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfPrevLinkingDistances */LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfPrevLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::passedPositionedBG */positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedBG */LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  infoFromLinking_T_TrainPosition_Types_Pck noname;
  passedBG_T_BG_Types_Pkg _1_noname;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L2,
    passedPositionedBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L113, &outC->_L2.infoFromPassing);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L17,
    &outC->_L2.infoFromLinking);
  outC->_L16 = outC->_L2.seqNoOnTrack;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L15, &outC->_L2.location);
  outC->_L14 = outC->_L2.q_link;
  outC->_L13 = outC->_L2.nid_bg;
  outC->_L12 = outC->_L2.nid_c;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L129, linkedBG);
  outC->_L130 = outC->_L129.nid_bg;
  outC->_L128 = outC->_L129.nid_c;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L3, linkedBG);
  outC->_L127 = outC->_L3.valid;
  outC->_L126 = outC->_L3.q_locacc;
  outC->_L125 = outC->_L3.d_link;
  outC->_L124 = outC->_L3.q_scale;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L1,
    sumOfPrevLinkingDistances);
  /* 2 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L124,
    outC->_L125,
    outC->_L126,
    &outC->Context_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L117,
    &outC->Context_2.distance);
  /* 2 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L1,
    &outC->_L117,
    &outC->_1_Context_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L119,
    &outC->_1_Context_2.distance);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L121,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L122,
    &outC->_L121.centerDetectionAcc_DefaultValue);
  /* 4 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L119,
    &outC->_L122,
    &outC->Context_4);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L123,
    &outC->Context_4.distance);
  /* 3 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L15,
    &outC->_L123,
    &outC->Context_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L120,
    &outC->Context_3.distance);
  outC->_L114 = 0;
  /* 1 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    outC->_L124,
    outC->_L125,
    outC->_L114,
    &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L86,
    &outC->Context_1.distance);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L1,
    &outC->_L86,
    &outC->_2_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L87,
    &outC->_2_Context_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->sumOfLinkingDistances,
    &outC->_L87);
  outC->_L11 = outC->_L2.valid;
  outC->_L85 = outC->_L11 & outC->_L127;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L90, &outC->_L3);
  if (kcg_true) {
    outC->_L90.valid = outC->_L85;
  }
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &outC->_L89,
    (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosition_Pkg);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_1_noname, &outC->_L113);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(&noname, &outC->_L17);
  outC->_L84.valid = outC->_L85;
  outC->_L84.nid_bg_fromLinkingBG = outC->_L13;
  outC->_L84.nid_c_fromLinkingBG = outC->_L12;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L84.expectedLocation,
    &outC->_L120);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L84.d_link, &outC->_L86);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->_L84.linkingInfo, &outC->_L90);
  outC->_L32.valid = outC->_L85;
  outC->_L32.nid_c = outC->_L128;
  outC->_L32.nid_bg = outC->_L130;
  outC->_L32.q_link = outC->_L14;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L32.location,
    &outC->_L120);
  outC->_L32.seqNoOnTrack = outC->_L16;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L32.infoFromLinking,
    &outC->_L84);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L32.infoFromPassing, &outC->_L89);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->linkedPositionedBG,
    &outC->_L32);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

