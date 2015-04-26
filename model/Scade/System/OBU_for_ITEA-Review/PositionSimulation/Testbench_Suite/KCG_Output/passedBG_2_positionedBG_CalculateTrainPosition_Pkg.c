/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
void passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG_asAnnounced */ positionedBG_T_TrainPosition_Types_Pck *passedBG_asAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::previouslyPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBGSeqNo */ kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ kcg_bool *foundNotWhereAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BGpassedInUnexpectedDirection */ kcg_bool *BGpassedInUnexpectedDirection,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::linkedBGs */ linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *linkedBGs)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp3;
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp2;
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L27 */ kcg_bool _L27_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::then::_L22 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L22_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else */ kcg_bool _4_else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L16 */ kcg_bool _L16_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L15 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L155_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L10 */ kcg_bool _L10_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else::else::_L9 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L9_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::else */ kcg_bool else_clock_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L8 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L8_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed::else::then::_L15 */ kcg_bool _L15_ifAnnouncedOrABGWasPreviouslyPassed;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::ifAnnouncedOrABGWasPreviouslyPassed */ kcg_bool ifAnnouncedOrABGWasPreviouslyPassed_clock;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::BG_wasAnnounced */ kcg_bool BG_wasAnnounced;
  
  (*passedPositionedBG).valid = (*passedBG).valid;
  (*passedPositionedBG).nid_c = (*passedBG).BG_Header.nid_c;
  (*passedPositionedBG).nid_bg = (*passedBG).BG_Header.nid_bg;
  (*passedPositionedBG).q_link = (*passedBG).BG_Header.q_link;
  (*passedPositionedBG).seqNoOnTrack = passedBGSeqNo;
  BG_wasAnnounced = (*passedBG_asAnnounced).valid &
    ((*passedBG_asAnnounced).nid_bg == (*passedBG).BG_Header.nid_bg) &
    ((*passedBG_asAnnounced).nid_c == (*passedBG).BG_Header.nid_c) &
    (Q_LINK_Linked == (*passedBG_asAnnounced).q_link) &
    ((*passedBG_asAnnounced).q_link == (*passedBG).BG_Header.q_link) &
    (*passedBG_asAnnounced).infoFromLinking.valid & (*passedBG).valid &
    (*passedBG).BG_Header.valid;
  ifAnnouncedOrABGWasPreviouslyPassed_clock = !BG_wasAnnounced &
    !(*previouslyPassedLinkedBG).valid;
  *BGpassedInUnexpectedDirection = BG_wasAnnounced & !(((Q_DIRLRBG_Nominal ==
          (*passedBG).BG_Header.trainOrientationToBG) &
        (Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction ==
          (*passedBG_asAnnounced).infoFromLinking.linkingInfo.q_linkorientation)) |
      (((*passedBG).BG_Header.trainOrientationToBG == Q_DIRLRBG_Reverse) &
        (Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction ==
          (*passedBG_asAnnounced).infoFromLinking.linkingInfo.q_linkorientation)));
  if (ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    *foundNotWhereAnnounced = kcg_false;
    /* 8 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &(*passedBG).BG_Header.bgPosition.odo,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cOdometryInitialValue_Obu_BasicTypes_Pkg,
      &tmp);
    /* 9 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &tmp,
      &(*passedBG).BG_Header.BG_centerDetectionInaccuraccuracies,
      &_L22_ifAnnouncedOrABGWasPreviouslyPassed);
    /* 4 */
    overlapOf_2_Locations_BasicLocationFunctions_Pkg(
      &_L22_ifAnnouncedOrABGWasPreviouslyPassed,
      &_L22_ifAnnouncedOrABGWasPreviouslyPassed,
      &(*passedPositionedBG).location,
      &_L27_ifAnnouncedOrABGWasPreviouslyPassed);
  }
  else {
    _4_else_clock_ifAnnouncedOrABGWasPreviouslyPassed = !BG_wasAnnounced &
      (*previouslyPassedLinkedBG).valid;
    if (_4_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      *foundNotWhereAnnounced = kcg_false;
      /* 5 */
      add_odo_2_Location_BasicLocationFunctions_Pkg(
        &(*previouslyPassedLinkedBG).location,
        &(*previouslyPassedLinkedBG).infoFromPassing.BG_Header.bgPosition.odo,
        &(*passedBG).BG_Header.bgPosition.odo,
        &tmp1);
      /* 13 */
      add_2_Distances_BasicLocationFunctions_Pkg(
        &tmp1,
        &(*passedBG).BG_Header.BG_centerDetectionInaccuraccuracies,
        &_L8_ifAnnouncedOrABGWasPreviouslyPassed);
      /* 5 */
      overlapOf_2_Locations_BasicLocationFunctions_Pkg(
        &_L8_ifAnnouncedOrABGWasPreviouslyPassed,
        &_L8_ifAnnouncedOrABGWasPreviouslyPassed,
        &(*passedPositionedBG).location,
        &_L15_ifAnnouncedOrABGWasPreviouslyPassed);
    }
    else {
      else_clock_ifAnnouncedOrABGWasPreviouslyPassed = BG_wasAnnounced &
        !(*previouslyPassedLinkedBG).valid;
      if (else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
        *foundNotWhereAnnounced = kcg_false;
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &(*passedPositionedBG).location,
          &(*passedBG_asAnnounced).location);
      }
      else {
        /* 6 */
        add_odo_2_Location_BasicLocationFunctions_Pkg(
          &(*previouslyPassedLinkedBG).location,
          &(*previouslyPassedLinkedBG).infoFromPassing.BG_Header.bgPosition.odo,
          &(*passedBG).BG_Header.bgPosition.odo,
          &tmp2);
        /* 14 */
        add_2_Distances_BasicLocationFunctions_Pkg(
          &tmp2,
          &(*passedBG).BG_Header.BG_centerDetectionInaccuraccuracies,
          &tmp3);
        /* 3 */
        overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &(*passedBG_asAnnounced).location,
          &tmp3,
          &_L9_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L10_ifAnnouncedOrABGWasPreviouslyPassed);
        /* 6 */
        overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &(*passedBG_asAnnounced).location,
          &(*passedBG_asAnnounced).location,
          &_L155_ifAnnouncedOrABGWasPreviouslyPassed,
          &_L16_ifAnnouncedOrABGWasPreviouslyPassed);
        *foundNotWhereAnnounced = !_L10_ifAnnouncedOrABGWasPreviouslyPassed;
        if (_L10_ifAnnouncedOrABGWasPreviouslyPassed) {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &(*passedPositionedBG).location,
            &_L9_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        else {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &(*passedPositionedBG).location,
            &_L155_ifAnnouncedOrABGWasPreviouslyPassed);
        }
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
  if (*foundNotWhereAnnounced | *BGpassedInUnexpectedDirection) {
    kcg_copy_passedBG_T_BG_Types_Pkg(
      &(*passedPositionedBG).infoFromPassing,
      (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_passedBG_T_BG_Types_Pkg(
      &(*passedPositionedBG).infoFromPassing,
      passedBG);
  }
  /* 1 */
  positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    passedPositionedBG,
    &(*passedBG).linkedBGs,
    trainProperties,
    linkedBGs);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** passedBG_2_positionedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

