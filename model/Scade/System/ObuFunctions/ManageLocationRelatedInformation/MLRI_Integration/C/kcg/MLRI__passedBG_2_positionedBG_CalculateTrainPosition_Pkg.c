/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h"

/** "Remark_1" {Description = "Converts a passed balise group to a positioned balise group information - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
void MLRI__passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG */MLRI__passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG_asAnnounced */MLRI__positionedBG_T_TrainPosition_Types_Pck *passedBG_asAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::previouslyPassedLinkedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBGSeqNo */kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::trainProperties */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /** The passed and positioned balise group. */
  /** If the BG was announced by linking information previously, the linking and the passing information are merged together. */
  /** If the BG was not announced before, only the passing information is evaluated. */
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedPositionedBG */MLRI__positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::notFoundWhereAnnounced */kcg_bool *notFoundWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::linkedBGs */MLRI__linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *linkedBGs)
{
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp3;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp2;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BG_wasAnnounced */ kcg_bool BG_wasAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed */ kcg_bool ifAnnouncedOrABGWasPreviouslyPassed_clock;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L15 */ kcg_bool _L15_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L8 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L8_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else */ kcg_bool else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L9 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L9_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L10 */ kcg_bool _L10_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L15 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L155_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L16 */ kcg_bool _L16_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else */ kcg_bool _4_else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L22 */ MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg _L22_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L27 */ kcg_bool _L27_ifAnnouncedOrABGWasPreviouslyPassed;
  
  (*passedPositionedBG).valid = (*passedBG).valid;
  (*passedPositionedBG).nid_c = (*passedBG).BG_Header.nid_c;
  (*passedPositionedBG).nid_bg = (*passedBG).BG_Header.nid_bg;
  (*passedPositionedBG).q_link = (*passedBG).BG_Header.q_link;
  (*passedPositionedBG).seqNoOnTrack = passedBGSeqNo;
  BG_wasAnnounced = (*passedBG_asAnnounced).valid &
    ((*passedBG_asAnnounced).nid_bg == (*passedBG).BG_Header.nid_bg) &
    ((*passedBG_asAnnounced).nid_c == (*passedBG).BG_Header.nid_c) &
    ((*passedBG_asAnnounced).q_link == (*passedBG).BG_Header.q_link) &
    (*passedBG_asAnnounced).infoFromLinking.valid;
  ifAnnouncedOrABGWasPreviouslyPassed_clock = !BG_wasAnnounced &
    !(*previouslyPassedLinkedBG).valid;
  if (ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    /* 8 */
    MLRI__sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &(*passedBG).bgPosition.odo,
      (MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &MLRI__cOdometryInitialValue_Obu_BasicTypes_Pkg,
      &tmp);
    /* 9 */
    MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
      &tmp,
      &(*passedBG).BG_centerDetectionInaccuraccuracies,
      &_L22_ifAnnouncedOrABGWasPreviouslyPassed);
    /* 4 */
    MLRI__overlapOf_2_Locations_BasicLocationFunctions_Pkg(
      &_L22_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L22_ifAnnouncedOrABGWasPreviouslyPassed,
      &(*passedPositionedBG).location,
      &_L27_ifAnnouncedOrABGWasPreviouslyPassed);
    *notFoundWhereAnnounced = kcg_false;
  }
  else {
    _4_else_clock_ifAnnouncedOrABGWasPreviouslyPassed = !BG_wasAnnounced &
      (*previouslyPassedLinkedBG).valid;
    if (_4_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      /* 5 */
      MLRI__add_odo_2_Location_BasicLocationFunctions_Pkg(
        &(*previouslyPassedLinkedBG).location,
        &(*previouslyPassedLinkedBG).infoFromPassing.bgPosition.odo,
        &(*passedBG).bgPosition.odo,
        &tmp1);
      /* 13 */
      MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
        &tmp1,
        &(*passedBG).BG_centerDetectionInaccuraccuracies,
        &_L8_ifAnnouncedOrABGWasPreviouslyPassed);
      /* 5 */
      MLRI__overlapOf_2_Locations_BasicLocationFunctions_Pkg(
        &_L8_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L8_ifAnnouncedOrABGWasPreviouslyPassed,
        &(*passedPositionedBG).location,
        &_L15_ifAnnouncedOrABGWasPreviouslyPassed);
      *notFoundWhereAnnounced = kcg_false;
    }
    else {
      else_clock_ifAnnouncedOrABGWasPreviouslyPassed = BG_wasAnnounced &
        !(*previouslyPassedLinkedBG).valid;
      if (else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
        *notFoundWhereAnnounced = kcg_false;
        MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &(*passedPositionedBG).location,
          &(*passedBG_asAnnounced).location);
      }
      else {
        /* 6 */
        MLRI__add_odo_2_Location_BasicLocationFunctions_Pkg(
          &(*previouslyPassedLinkedBG).location,
          &(*previouslyPassedLinkedBG).infoFromPassing.bgPosition.odo,
          &(*passedBG).bgPosition.odo,
          &tmp2);
        /* 14 */
        MLRI__add_2_Distances_BasicLocationFunctions_Pkg(
          &tmp2,
          &(*passedBG).BG_centerDetectionInaccuraccuracies,
          &tmp3);
        /* 3 */
        MLRI__overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &(*passedBG_asAnnounced).location,
          &tmp3,
          &_L9_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L10_ifAnnouncedOrABGWasPreviouslyPassed);
        /* 6 */
        MLRI__overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &(*passedBG_asAnnounced).location,
          &(*passedBG_asAnnounced).location,
          &_L155_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L16_ifAnnouncedOrABGWasPreviouslyPassed);
        *notFoundWhereAnnounced = !_L10_ifAnnouncedOrABGWasPreviouslyPassed;
        if (_L10_ifAnnouncedOrABGWasPreviouslyPassed) {
          MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &(*passedPositionedBG).location,
            &_L9_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        else {
          MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &(*passedPositionedBG).location,
            &_L155_ifAnnouncedOrABGWasPreviouslyPassed);
        }
      }
    }
  }
  if (BG_wasAnnounced) {
    MLRI__kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
      &(*passedPositionedBG).infoFromLinking,
      &(*passedBG_asAnnounced).infoFromLinking);
  }
  else {
    MLRI__kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
      &(*passedPositionedBG).infoFromLinking,
      (MLRI__infoFromLinking_T_TrainPosition_Types_Pck *)
        &MLRI__cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  }
  if (*notFoundWhereAnnounced) {
    MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(
      &(*passedPositionedBG).infoFromPassing,
      (MLRI__passedBG_T_BG_Types_Pkg *)
        &MLRI__cNoPassedBG_CalculateTrainPosition_Pkg);
  }
  else {
    MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(
      &(*passedPositionedBG).infoFromPassing,
      passedBG);
  }
  /* 1 */
  MLRI__positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    passedPositionedBG,
    &(*passedBG).linkedBGs,
    trainProperties,
    linkedBGs);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__passedBG_2_positionedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

