/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h"

void passedBG_2_positionedBG_reset_CalculateTrainPosition_Pkg(
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  positionLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
  /* 4 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->Context_4);
  /* 9 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_9);
  /* 8 */ sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(&outC->Context_8);
  /* 5 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->_2_Context_5);
  /* 13 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_13);
  /* 5 */ add_odo_2_Location_reset_BasicLocationFunctions_Pkg(&outC->Context_5);
  /* 6 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_6);
  /* 3 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->Context_3);
  /* 14 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->Context_14);
  /* 6 */ add_odo_2_Location_reset_BasicLocationFunctions_Pkg(&outC->Context_6);
}

/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG */
void passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG */passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBG_asAnnounced */positionedBG_T_TrainPosition_Types_Pck *passedBG_asAnnounced,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::previouslyPassedLinkedBG */positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::passedBGSeqNo */kcg_int passedBGSeqNo,
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::trainProperties */trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ kcg_bool _3_foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg _2_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */ kcg_bool _1_foundNotWhereAnnounced_loc;
  kcg_bool _17_noname;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ kcg_bool foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */ kcg_bool foundNotWhereAnnounced_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */ kcg_bool _15_foundNotWhereAnnounced_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg _14_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ kcg_bool _13_foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */ kcg_bool _12_foundNotWhereAnnounced_loc;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg _11_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ kcg_bool _10_foundNotWhereAnnounced;
  kcg_bool noname;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ kcg_bool _4_foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg _5_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */ kcg_bool _6_foundNotWhereAnnounced_loc;
  kcg_bool _16_noname;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced */ kcg_bool _7_foundNotWhereAnnounced;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg _8_location;
  /* CalculateTrainPosition_Pkg::passedBG_2_positionedBG::foundNotWhereAnnounced_loc */ kcg_bool _9_foundNotWhereAnnounced_loc;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L41,
    passedBG_asAnnounced);
  outC->_L56 = outC->_L41.valid;
  outC->_L57 = outC->_L41.nid_bg;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L58, passedBG);
  outC->_L59 = outC->_L58.BG_Header.nid_bg;
  outC->_L60 = outC->_L57 == outC->_L59;
  outC->_L61 = outC->_L41.nid_c;
  outC->_L62 = outC->_L58.BG_Header.nid_c;
  outC->_L63 = outC->_L61 == outC->_L62;
  outC->_L303 = Q_LINK_Linked;
  outC->_L64 = outC->_L41.q_link;
  outC->_L302 = outC->_L303 == outC->_L64;
  outC->_L65 = outC->_L58.BG_Header.q_link;
  outC->_L66 = outC->_L64 == outC->_L65;
  outC->_L181 = outC->_L41.infoFromLinking.valid;
  outC->_L301 = outC->_L58.valid;
  outC->_L305 = outC->_L58.BG_Header.valid;
  outC->_L67 = outC->_L56 & outC->_L60 & outC->_L63 & outC->_L302 & outC->_L66 &
    outC->_L181 & outC->_L301 & outC->_L305;
  outC->BG_wasAnnounced = outC->_L67;
  outC->ifAnnouncedOrABGWasPreviouslyPassed_clock = !outC->BG_wasAnnounced &
    !(*previouslyPassedLinkedBG).valid;
  if (outC->ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    _1_foundNotWhereAnnounced_loc = kcg_false;
    outC->foundNotWhereAnnounced_loc = _1_foundNotWhereAnnounced_loc;
  }
  else {
    outC->_3_else_clock_ifAnnouncedOrABGWasPreviouslyPassed =
      !outC->BG_wasAnnounced & (*previouslyPassedLinkedBG).valid;
    if (outC->_3_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      _9_foundNotWhereAnnounced_loc = kcg_false;
      foundNotWhereAnnounced_loc = _9_foundNotWhereAnnounced_loc;
    }
    else {
      outC->else_clock_ifAnnouncedOrABGWasPreviouslyPassed =
        outC->BG_wasAnnounced & !(*previouslyPassedLinkedBG).valid;
      if (outC->else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
        _15_foundNotWhereAnnounced_loc = kcg_false;
        _6_foundNotWhereAnnounced_loc = _15_foundNotWhereAnnounced_loc;
      }
      else {
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &outC->_L1114_ifAnnouncedOrABGWasPreviouslyPassed,
          passedBG_asAnnounced);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L1417_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L1114_ifAnnouncedOrABGWasPreviouslyPassed.location);
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &outC->_L710_ifAnnouncedOrABGWasPreviouslyPassed,
          previouslyPassedLinkedBG);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L811_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L710_ifAnnouncedOrABGWasPreviouslyPassed.location);
        kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
          &outC->_L3_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L710_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo);
        kcg_copy_passedBG_T_BG_Types_Pkg(
          &outC->_L1316_ifAnnouncedOrABGWasPreviouslyPassed,
          passedBG);
        kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
          &outC->_L69_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L1316_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo);
        /* 6 */
        add_odo_2_Location_BasicLocationFunctions_Pkg(
          &outC->_L811_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L3_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L69_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_6);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L28_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_6.location);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L4_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L1316_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies);
        /* 14 */
        add_2_Distances_BasicLocationFunctions_Pkg(
          &outC->_L28_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L4_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_14);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L17_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_14.distance);
        /* 3 */
        overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &outC->_L1417_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L17_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_3);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L913_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_3.loc);
        outC->_L1012_ifAnnouncedOrABGWasPreviouslyPassed =
          outC->Context_3.overlap;
        outC->_L1215_ifAnnouncedOrABGWasPreviouslyPassed =
          !outC->_L1012_ifAnnouncedOrABGWasPreviouslyPassed;
        _12_foundNotWhereAnnounced_loc =
          outC->_L1215_ifAnnouncedOrABGWasPreviouslyPassed;
        _6_foundNotWhereAnnounced_loc = _12_foundNotWhereAnnounced_loc;
      }
      foundNotWhereAnnounced_loc = _6_foundNotWhereAnnounced_loc;
    }
    outC->foundNotWhereAnnounced_loc = foundNotWhereAnnounced_loc;
  }
  outC->_L284 = outC->foundNotWhereAnnounced_loc;
  outC->_L297 = outC->BG_wasAnnounced;
  outC->_L313 = Q_DIRLRBG_Nominal;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L306, passedBG);
  outC->_L308 = outC->_L306.BG_Header.trainOrientationToBG;
  outC->_L315 = outC->_L313 == outC->_L308;
  outC->_L311 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L307,
    passedBG_asAnnounced);
  outC->_L309 = outC->_L307.infoFromLinking.linkingInfo.q_linkorientation;
  outC->_L316 = outC->_L311 == outC->_L309;
  outC->_L317 = outC->_L315 & outC->_L316;
  outC->_L312 = Q_DIRLRBG_Reverse;
  outC->_L318 = outC->_L308 == outC->_L312;
  outC->_L310 =
    _5_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L319 = outC->_L310 == outC->_L309;
  outC->_L320 = outC->_L318 & outC->_L319;
  outC->_L321 = outC->_L317 | outC->_L320;
  outC->_L322 = !outC->_L321;
  outC->BGpassedInUnexpectedDirection_loc = outC->_L297 & outC->_L322;
  outC->_L325 = outC->BGpassedInUnexpectedDirection_loc;
  outC->_L326 = outC->_L284 | outC->_L325;
  outC->BGpassedInUnexpectedDirection = outC->BGpassedInUnexpectedDirection_loc;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L15, passedBG);
  outC->_L296 = outC->_L15.valid;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L295, &outC->_L15.BG_Header);
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &outC->_L285,
    (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosition_Pkg);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L16, passedBG);
  if (outC->_L326) {
    kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L283, &outC->_L285);
  }
  else {
    kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L283, &outC->_L16);
  }
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L282,
    trainProperties);
  outC->_L281 = passedBGSeqNo;
  outC->_L37 = outC->_L295.nid_c;
  outC->_L38 = outC->_L295.nid_bg;
  outC->_L39 = outC->_L295.q_link;
  if (outC->ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    kcg_copy_passedBG_T_BG_Types_Pkg(
      &outC->_L23_ifAnnouncedOrABGWasPreviouslyPassed,
      passedBG);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L21_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L23_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L20_ifAnnouncedOrABGWasPreviouslyPassed,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cOdometryInitialValue_Obu_BasicTypes_Pkg);
    /* 8 */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &outC->_L21_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L20_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_8);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L24_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_8.distance);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L25_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L23_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies);
    /* 9 */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &outC->_L24_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L25_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_9);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L22_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_9.distance);
    /* 4 */
    overlapOf_2_Locations_BasicLocationFunctions_Pkg(
      &outC->_L22_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L22_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_4);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L26_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_4.loc);
    outC->_L27_ifAnnouncedOrABGWasPreviouslyPassed = outC->Context_4.overlap;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_2_location,
      &outC->_L26_ifAnnouncedOrABGWasPreviouslyPassed);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->location, &_2_location);
  }
  else {
    if (outC->_3_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L12_ifAnnouncedOrABGWasPreviouslyPassed,
        previouslyPassedLinkedBG);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L7_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L12_ifAnnouncedOrABGWasPreviouslyPassed.location);
      kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
        &outC->_L11_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L12_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo);
      kcg_copy_passedBG_T_BG_Types_Pkg(
        &outC->_L10_ifAnnouncedOrABGWasPreviouslyPassed,
        passedBG);
      kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
        &outC->_L9_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L10_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo);
      /* 5 */
      add_odo_2_Location_BasicLocationFunctions_Pkg(
        &outC->_L7_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L11_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L9_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_5);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L6_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_5.location);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L13_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L10_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies);
      /* 13 */
      add_2_Distances_BasicLocationFunctions_Pkg(
        &outC->_L6_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L13_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_13);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L8_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_13.distance);
      /* 5 */
      overlapOf_2_Locations_BasicLocationFunctions_Pkg(
        &outC->_L8_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L8_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_2_Context_5);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L14_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_2_Context_5.loc);
      outC->_L15_ifAnnouncedOrABGWasPreviouslyPassed =
        outC->_2_Context_5.overlap;
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &_8_location,
        &outC->_L14_ifAnnouncedOrABGWasPreviouslyPassed);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&location, &_8_location);
    }
    else {
      if (outC->else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &outC->_L1_ifAnnouncedOrABGWasPreviouslyPassed,
          passedBG_asAnnounced);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L2_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L1_ifAnnouncedOrABGWasPreviouslyPassed.location);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_14_location,
          &outC->_L2_ifAnnouncedOrABGWasPreviouslyPassed);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_5_location, &_14_location);
      }
      else {
        /* 6 */
        overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &outC->_L1417_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L1417_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_1_Context_6);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L154_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_1_Context_6.loc);
        outC->_L16_ifAnnouncedOrABGWasPreviouslyPassed =
          outC->_1_Context_6.overlap;
        if (outC->_L1012_ifAnnouncedOrABGWasPreviouslyPassed) {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &outC->_L5_ifAnnouncedOrABGWasPreviouslyPassed,
            &outC->_L913_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        else {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &outC->_L5_ifAnnouncedOrABGWasPreviouslyPassed,
            &outC->_L154_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_11_location,
          &outC->_L5_ifAnnouncedOrABGWasPreviouslyPassed);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_5_location, &_11_location);
      }
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&location, &_5_location);
    }
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->location, &location);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L182, &outC->location);
  outC->_L68 = outC->BG_wasAnnounced;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L40,
    passedBG_asAnnounced);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L183,
    &outC->_L40.infoFromLinking);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L185,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  if (outC->_L68) {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
      &outC->_L184,
      &outC->_L183);
  }
  else {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
      &outC->_L184,
      &outC->_L185);
  }
  outC->_L14.valid = outC->_L296;
  outC->_L14.nid_c = outC->_L37;
  outC->_L14.nid_bg = outC->_L38;
  outC->_L14.q_link = outC->_L39;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L14.location,
    &outC->_L182);
  outC->_L14.seqNoOnTrack = outC->_L281;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L14.infoFromLinking,
    &outC->_L184);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L14.infoFromPassing, &outC->_L283);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG_loc,
    &outC->_L14);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L262,
    &outC->passedPositionedBG_loc);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L264, passedBG);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L263, &outC->_L264.linkedBGs);
  /* 1 */
  positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L262,
    &outC->_L263,
    &outC->_L282,
    &outC->Context_1);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L265,
    &outC->Context_1.linkedPositionedBGs);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->linkedBGs,
    &outC->_L265);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG,
    &outC->_L14);
  if (outC->ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    _3_foundNotWhereAnnounced = kcg_false;
    _17_noname = outC->_L27_ifAnnouncedOrABGWasPreviouslyPassed;
    outC->foundNotWhereAnnounced = _3_foundNotWhereAnnounced;
  }
  else {
    if (outC->_3_else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      _7_foundNotWhereAnnounced = kcg_false;
      _16_noname = outC->_L15_ifAnnouncedOrABGWasPreviouslyPassed;
      foundNotWhereAnnounced = _7_foundNotWhereAnnounced;
    }
    else {
      if (outC->else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
        _13_foundNotWhereAnnounced = kcg_false;
        _4_foundNotWhereAnnounced = _13_foundNotWhereAnnounced;
      }
      else {
        noname = outC->_L16_ifAnnouncedOrABGWasPreviouslyPassed;
        _10_foundNotWhereAnnounced =
          outC->_L1215_ifAnnouncedOrABGWasPreviouslyPassed;
        _4_foundNotWhereAnnounced = _10_foundNotWhereAnnounced;
      }
      foundNotWhereAnnounced = _4_foundNotWhereAnnounced;
    }
    outC->foundNotWhereAnnounced = foundNotWhereAnnounced;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** passedBG_2_positionedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

