/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBG_itr_CalculateTrainPosition_Pkg.h"

/** "Remark_1" {Description = "Iterated function for the conversion of the linking information, received while passing a BG into an announced (= linked positioned) BG. - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::positionLinkedBG_itr */
void positionLinkedBG_itr_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::prevLinkedBGLocation */ LocWithInAcc_T_Obu_BasicTypes_Pkg *prevLinkedBGLocation,
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::linkedBG */ LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg *location,
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::linkedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *linkedPositionedBG)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::positionLinkedBG_itr::_L85 */ kcg_bool _L85;
  
  (*linkedPositionedBG).nid_c = (*linkedBG).nid_c;
  (*linkedPositionedBG).nid_bg = (*linkedBG).nid_bg;
  (*linkedPositionedBG).q_link = (*passedPositionedBG).q_link;
  (*linkedPositionedBG).seqNoOnTrack = (*passedPositionedBG).seqNoOnTrack;
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &(*linkedPositionedBG).infoFromPassing,
    (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosition_Pkg);
  /* 1 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
    (*linkedBG).q_scale,
    (*linkedBG).d_link,
    (*linkedBG).q_locacc,
    &tmp);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    prevLinkedBGLocation,
    &tmp,
    location);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*linkedPositionedBG).location,
    location);
  _L85 = (*passedPositionedBG).valid & (*linkedBG).valid;
  (*linkedPositionedBG).valid = _L85;
  (*linkedPositionedBG).infoFromLinking.valid = _L85;
  (*linkedPositionedBG).infoFromLinking.nid_bg_fromLinkingBG =
    (*passedPositionedBG).nid_bg;
  (*linkedPositionedBG).infoFromLinking.nid_c_fromLinkingBG =
    (*passedPositionedBG).nid_c;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &(*linkedPositionedBG).infoFromLinking.expectedLocation,
    location);
  /* 1 */
  sub_2_distances_BasicLocationFunctions_Pkg(
    location,
    &(*passedPositionedBG).location,
    &(*linkedPositionedBG).infoFromLinking.d_link);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(
    &(*linkedPositionedBG).infoFromLinking.linkingInfo,
    linkedBG);
  (*linkedPositionedBG).infoFromLinking.linkingInfo.valid = _L85;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** positionLinkedBG_itr_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

