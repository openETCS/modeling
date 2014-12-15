/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/** "Remark_1" {Description = "Iterated function for the conversion of the linking information, received while passing a BG into an announced (= linked positioned) BG. - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr */
void MLRI__positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfPrevLinkingDistances */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfPrevLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::passedPositionedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedBG */MLRI__LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfLinkingDistances */MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedPositionedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *linkedPositionedBG)
{
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  MLRI__LinkedBG_T_BG_Types_Pkg tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L85 */ kcg_bool _L85;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L120 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L120;
  
  (*linkedPositionedBG).nid_c = (*linkedBG).nid_c;
  (*linkedPositionedBG).nid_bg = (*linkedBG).nid_bg;
  (*linkedPositionedBG).q_link = (*passedPositionedBG).q_link;
  (*linkedPositionedBG).seqNoOnTrack = (*passedPositionedBG).seqNoOnTrack;
  MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(
    &(*linkedPositionedBG).infoFromPassing,
    (MLRI__passedBG_T_BG_Types_Pkg *)
      &MLRI__cNoPassedBG_CalculateTrainPosition_Pkg);
  /* 2 */
  MLRI__scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    (*linkedBG).q_scale,
    (*linkedBG).d_link,
    (*linkedBG).q_locacc,
    &tmp1);
  /* 2 */
  MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
    sumOfPrevLinkingDistances,
    &tmp1,
    &_L120);
  /* 4 */
  MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
    &_L120,
    &(*trainProperties).centerDetectionAcc_DefaultValue,
    &tmp1);
  /* 3 */
  MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
    &(*passedPositionedBG).location,
    &tmp1,
    &_L120);
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*linkedPositionedBG).location,
    &_L120);
  /* 1 */
  MLRI__scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    (*linkedBG).q_scale,
    (*linkedBG).d_link,
    0,
    &tmp1);
  /* 1 */
  MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
    sumOfPrevLinkingDistances,
    &tmp1,
    sumOfLinkingDistances);
  _L85 = (*passedPositionedBG).valid & (*linkedBG).valid;
  (*linkedPositionedBG).valid = _L85;
  MLRI__kcg_copy_LinkedBG_T_BG_Types_Pkg(&tmp, linkedBG);
  tmp.valid = _L85;
  (*linkedPositionedBG).infoFromLinking.valid = _L85;
  (*linkedPositionedBG).infoFromLinking.nid_bg_fromLinkingBG =
    (*passedPositionedBG).nid_bg;
  (*linkedPositionedBG).infoFromLinking.nid_c_fromLinkingBG =
    (*passedPositionedBG).nid_c;
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*linkedPositionedBG).infoFromLinking.expectedLocation,
    &_L120);
  MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*linkedPositionedBG).infoFromLinking.d_link,
    &tmp1);
  MLRI__kcg_copy_LinkedBG_T_BG_Types_Pkg(
    &(*linkedPositionedBG).infoFromLinking.linkingInfo,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

