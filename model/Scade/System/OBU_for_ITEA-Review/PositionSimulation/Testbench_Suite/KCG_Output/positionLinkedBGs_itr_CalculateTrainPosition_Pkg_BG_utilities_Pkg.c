/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr */
void positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfPrevLinkingDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfPrevLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedBG */ LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfLinkingDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *linkedPositionedBG)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L85 */ kcg_bool _L85;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L120 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L120;
  
  (*linkedPositionedBG).nid_c = (*linkedBG).nid_c;
  (*linkedPositionedBG).nid_bg = (*linkedBG).nid_bg;
  (*linkedPositionedBG).q_link = (*passedPositionedBG).q_link;
  (*linkedPositionedBG).seqNoOnTrack = (*passedPositionedBG).seqNoOnTrack;
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &(*linkedPositionedBG).infoFromPassing,
    (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosition_Pkg);
  /* 2 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    (*linkedBG).q_scale,
    (*linkedBG).d_link,
    (*linkedBG).q_locacc,
    &tmp);
  /* 2 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    sumOfPrevLinkingDistances,
    &tmp,
    &_L120);
  /* 4 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &_L120,
    &(*trainProperties).centerDetectionAcc_DefaultValue,
    &tmp);
  /* 3 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &(*passedPositionedBG).location,
    &tmp,
    &_L120);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*linkedPositionedBG).location,
    &_L120);
  /* 1 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    (*linkedBG).q_scale,
    (*linkedBG).d_link,
    0,
    &tmp);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    sumOfPrevLinkingDistances,
    &tmp,
    sumOfLinkingDistances);
  _L85 = (*passedPositionedBG).valid & (*linkedBG).valid;
  (*linkedPositionedBG).valid = _L85;
  (*linkedPositionedBG).infoFromLinking.valid = _L85;
  (*linkedPositionedBG).infoFromLinking.nid_bg_fromLinkingBG =
    (*passedPositionedBG).nid_bg;
  (*linkedPositionedBG).infoFromLinking.nid_c_fromLinkingBG =
    (*passedPositionedBG).nid_c;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*linkedPositionedBG).infoFromLinking.expectedLocation,
    &_L120);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*linkedPositionedBG).infoFromLinking.d_link,
    &tmp);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(
    &(*linkedPositionedBG).infoFromLinking.linkingInfo,
    linkedBG);
  (*linkedPositionedBG).infoFromLinking.linkingInfo.valid = _L85;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

