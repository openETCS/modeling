/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h"

/** "Remark_1" {Description = "Converts a passed balise group to a positioned balise group information - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
void passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG_asAnnounced */ positionedBG_T_TrainPosition_Types_Pck *passedBG_asAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::previouslyPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /** The passed and positioned balise group. */
  /** If the BG was announced by linking information previously, the linking and the passing information are merged together. */
  /** If the BG was not announced before, only the passing information is evaluated. */
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::notFoundWhereAnnounced */ kcg_bool *notFoundWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::linkedBGs */ linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *linkedBGs)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp2;
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else */ kcg_bool _3_else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L1_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L10 */ kcg_bool _L10_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L9 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L9_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else */ kcg_bool else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed */ kcg_bool ifAnnouncedOrABGWasPreviouslyPassed_clock;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BG_wasAnnounced */ kcg_bool BG_wasAnnounced;
  
  (*passedPositionedBG).valid = (*passedBG).valid;
  (*passedPositionedBG).nid_c = (*passedBG).BG_Header.nid_c;
  (*passedPositionedBG).nid_bg = (*passedBG).BG_Header.nid_bg;
  (*passedPositionedBG).q_link = (*passedBG).BG_Header.q_link;
  (*passedPositionedBG).seqNoOnTrack = 0;
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &(*passedPositionedBG).infoFromPassing,
    passedBG);
  BG_wasAnnounced = (*passedBG_asAnnounced).valid &
    ((*passedBG_asAnnounced).nid_bg == (*passedBG).BG_Header.nid_bg) &
    ((*passedBG_asAnnounced).nid_c == (*passedBG).BG_Header.nid_c) &
    ((*passedBG_asAnnounced).q_link == (*passedBG).BG_Header.q_link) &
    (*passedBG_asAnnounced).infoFromLinking.valid;
  ifAnnouncedOrABGWasPreviouslyPassed_clock = !BG_wasAnnounced &
    !(*previouslyPassedLinkedBG).valid;
  if (ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    /* 8 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &(*passedBG).odometrystamp,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cOdometryInitialValue_Obu_BasicTypes_Pkg,
      &tmp1);
    /* 9 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &tmp1,
      &(*passedBG).BG_centerDetectionInaccuraccuracies,
      &(*passedPositionedBG).location);
    *notFoundWhereAnnounced = kcg_false;
  }
  else {
    _3_else_clock_ifAnnouncedOrABGWasPreviouslyPassed = !BG_wasAnnounced &
      (*previouslyPassedLinkedBG).valid;
    if (_3_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      /* 5 */
      add_odo_2_Location_BasicLocationFunctions_Pkg(
        &(*previouslyPassedLinkedBG).location,
        &(*previouslyPassedLinkedBG).infoFromPassing.odometrystamp,
        &(*passedBG).odometrystamp,
        &tmp);
      /* 13 */
      add_2_Distances_BasicLocationFunctions_Pkg(
        &tmp,
        &(*passedBG).BG_centerDetectionInaccuraccuracies,
        &(*passedPositionedBG).location);
      *notFoundWhereAnnounced = kcg_false;
    }
    else {
      else_clock_ifAnnouncedOrABGWasPreviouslyPassed = BG_wasAnnounced &
        !(*previouslyPassedLinkedBG).valid;
      if (else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &(*passedPositionedBG).location,
          &(*passedBG_asAnnounced).location);
        *notFoundWhereAnnounced = kcg_false;
      }
      else {
        /* 6 */
        add_odo_2_Location_BasicLocationFunctions_Pkg(
          &(*previouslyPassedLinkedBG).location,
          &(*previouslyPassedLinkedBG).infoFromPassing.odometrystamp,
          &(*passedBG).odometrystamp,
          &tmp2);
        /* 14 */
        add_2_Distances_BasicLocationFunctions_Pkg(
          &tmp2,
          &(*passedBG).BG_centerDetectionInaccuraccuracies,
          &_L1_ifAnnouncedOrABGWasPreviouslyPassed);
        /* 3 */
        overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &(*passedBG_asAnnounced).location,
          &_L1_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L9_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L10_ifAnnouncedOrABGWasPreviouslyPassed);
        if (_L10_ifAnnouncedOrABGWasPreviouslyPassed) {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &(*passedPositionedBG).location,
            &_L9_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        else {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &(*passedPositionedBG).location,
            &_L1_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        *notFoundWhereAnnounced = !_L10_ifAnnouncedOrABGWasPreviouslyPassed;
      }
    }
  }
  if (BG_wasAnnounced) {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
      &(*passedPositionedBG).infoFromLinking,
      &(*passedBG_asAnnounced).infoFromLinking);
  }
  else {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
      &(*passedPositionedBG).infoFromLinking,
      (infoFromLinking_T_TrainPosition_Types_Pck *)
        &cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  }
  /* 1 */
  positionLinkedBGs_CalculateTrainPosition_Pkg(
    passedPositionedBG,
    &(*passedBG).linkedBGs,
    linkedBGs);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** passedBG_2_positionedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

