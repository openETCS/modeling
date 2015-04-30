/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateBGLocations_CalculateTrainPosition_Pkg.h"

void calculateBGLocations_init_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  int i1;
  int i;
  
  for (i = 0; i < 4; i++) {
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->passedPositionedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedPositionedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->passedPositionedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.d_link.d_max = 0;
  outC->passedPositionedBG.infoFromLinking.d_link.d_min = 0;
  outC->passedPositionedBG.infoFromLinking.d_link.nominal = 0;
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->passedPositionedBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->passedPositionedBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->passedPositionedBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->passedPositionedBG.infoFromLinking.valid = kcg_true;
  outC->passedPositionedBG.seqNoOnTrack = 0;
  outC->passedPositionedBG.location.d_max = 0;
  outC->passedPositionedBG.location.d_min = 0;
  outC->passedPositionedBG.location.nominal = 0;
  outC->passedPositionedBG.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.nid_bg = 0;
  outC->passedPositionedBG.nid_c = 0;
  outC->passedPositionedBG.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->errors.bg.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->errors.bg.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->errors.bg.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->errors.bg.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->errors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->errors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->errors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->errors.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->errors.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->errors.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->errors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->errors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->errors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->errors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->errors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->errors.bg.infoFromPassing.valid = kcg_true;
  outC->errors.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->errors.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->errors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->errors.bg.infoFromLinking.d_link.d_max = 0;
  outC->errors.bg.infoFromLinking.d_link.d_min = 0;
  outC->errors.bg.infoFromLinking.d_link.nominal = 0;
  outC->errors.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->errors.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->errors.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->errors.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->errors.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->errors.bg.infoFromLinking.valid = kcg_true;
  outC->errors.bg.seqNoOnTrack = 0;
  outC->errors.bg.location.d_max = 0;
  outC->errors.bg.location.d_min = 0;
  outC->errors.bg.location.nominal = 0;
  outC->errors.bg.q_link = Q_LINK_Unlinked;
  outC->errors.bg.nid_bg = 0;
  outC->errors.bg.nid_c = 0;
  outC->errors.bg.valid = kcg_true;
  outC->errors.doubleRepositioningError = kcg_true;
  outC->errors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->errors.BG_LinkingConsistencyError = kcg_true;
  outC->errors.BGpassedInUnexpectedDirection = kcg_true;
  outC->errors.linkedBGMissed = kcg_true;
  outC->errors.positionCalculation_inconsistent = kcg_true;
  outC->errors.passedBG_foundNotWhereExpected = kcg_true;
  outC->errors.outOfMemSpace = kcg_true;
  for (i = 0; i < 8; i++) {
    for (i1 = 0; i1 < 4; i1++) {
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_locacc = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].nid_bg = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].nid_c = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].d_link = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_scale = Q_SCALE_10_cm_scale;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].valid = kcg_true;
    }
    outC->BGs[i].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->BGs[i].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs[i].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs[i].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->BGs[i].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->BGs[i].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs[i].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs[i].infoFromPassing.BG_Header.nid_bg = 0;
    outC->BGs[i].infoFromPassing.BG_Header.nid_c = 0;
    outC->BGs[i].infoFromPassing.BG_Header.m_mcount = 0;
    outC->BGs[i].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs[i].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs[i].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs[i].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs[i].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs[i].infoFromPassing.valid = kcg_true;
    outC->BGs[i].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs[i].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs[i].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.nid_c = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs[i].infoFromLinking.linkingInfo.d_link = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs[i].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs[i].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs[i].infoFromLinking.d_link.d_max = 0;
    outC->BGs[i].infoFromLinking.d_link.d_min = 0;
    outC->BGs[i].infoFromLinking.d_link.nominal = 0;
    outC->BGs[i].infoFromLinking.expectedLocation.d_max = 0;
    outC->BGs[i].infoFromLinking.expectedLocation.d_min = 0;
    outC->BGs[i].infoFromLinking.expectedLocation.nominal = 0;
    outC->BGs[i].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->BGs[i].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->BGs[i].infoFromLinking.valid = kcg_true;
    outC->BGs[i].seqNoOnTrack = 0;
    outC->BGs[i].location.d_max = 0;
    outC->BGs[i].location.d_min = 0;
    outC->BGs[i].location.nominal = 0;
    outC->BGs[i].q_link = Q_LINK_Unlinked;
    outC->BGs[i].nid_bg = 0;
    outC->BGs[i].nid_c = 0;
    outC->BGs[i].valid = kcg_true;
  }
  genPassedBG_SeqNo_init_CalculateTrainPosition_Pkg(&outC->Context_2);
}


void calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  /* 2 */ genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(&outC->Context_2);
}

/* CalculateTrainPosition_Pkg::calculateBGLocations */
void calculateBGLocations_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::lastBGs */ positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::reset */ kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG_foundNotWhereExpected */ kcg_bool passedBG_foundNotWhereExpected;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L87 */ positionedBG_T_TrainPosition_Types_Pck _L87;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L88 */ positionedBGs_T_TrainPosition_Types_Pck _L88;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L351 */ kcg_bool _L351;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L366 */ kcg_bool _L366;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L364 */ kcg_int _L364;
  
  outC->errors.positionCalculation_inconsistent = kcg_false;
  outC->errors.linkedBGMissed = kcg_false;
  outC->errors.twoConsecutiveLinkedBGs_missed = kcg_false;
  outC->errors.doubleRepositioningError = kcg_false;
  /* 1 */
  prevPassedLinkedBG_CalculateTrainPosition_Pkg(passedBG, lastBGs, &tmp);
  /* 2 */
  genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
    passedBG,
    lastBGs,
    reset,
    &outC->Context_2);
  /* 1 */
  passing_a_BG_CalculateTrainPosition_Pkg(
    passedBG,
    &tmp,
    lastBGs,
    outC->Context_2.seqNo,
    trainProperties,
    &_L87,
    &_L88,
    &outC->errors.outOfMemSpace,
    &passedBG_foundNotWhereExpected,
    &_L351);
  outC->errors.passedBG_foundNotWhereExpected = passedBG_foundNotWhereExpected;
  outC->errors.BGpassedInUnexpectedDirection = _L351;
  outC->errors.BG_LinkingConsistencyError = _L351 |
    passedBG_foundNotWhereExpected;
  _L351 = _L87.valid & (_L87.q_link == Q_LINK_Linked) &
    !passedBG_foundNotWhereExpected;
  if (reset) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else if (_L351) {
    /* 1 */
    improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L87,
      &_L88,
      trainProperties,
      &outC->BGs);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &_L88);
  }
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L87,
    &outC->BGs,
    _L87.valid,
    &_L364,
    &_L351,
    &_L366);
  if ((0 <= _L364) & (_L364 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedPositionedBG,
      &outC->BGs[_L364]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedPositionedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  if (passedBG_foundNotWhereExpected) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->errors.bg,
      &outC->passedPositionedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->errors.bg,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculateBGLocations_CalculateTrainPosition_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

