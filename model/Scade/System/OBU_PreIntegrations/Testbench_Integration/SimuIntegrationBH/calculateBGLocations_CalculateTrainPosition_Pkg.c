/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateBGLocations_CalculateTrainPosition_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void calculateBGLocations_init_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->passedPositionedBG.valid = kcg_true;
  outC->passedPositionedBG.nid_c = 0;
  outC->passedPositionedBG.nid_bg = 0;
  outC->passedPositionedBG.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.location.nominal = 0;
  outC->passedPositionedBG.location.d_min = 0;
  outC->passedPositionedBG.location.d_max = 0;
  outC->passedPositionedBG.seqNoOnTrack = 0;
  outC->passedPositionedBG.infoFromLinking.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->passedPositionedBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->passedPositionedBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->passedPositionedBG.infoFromLinking.d_link.nominal = 0;
  outC->passedPositionedBG.infoFromLinking.d_link.d_min = 0;
  outC->passedPositionedBG.infoFromLinking.d_link.d_max = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->passedPositionedBG.infoFromPassing.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->passedPositionedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedPositionedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->passedPositionedBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->passedPositionedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->passedPositionedBG.missed = kcg_true;
  outC->errors.outOfMemSpace = kcg_true;
  outC->errors.passedBG_foundNotWhereExpected = kcg_true;
  outC->errors.positionCalculation_inconsistent = kcg_true;
  outC->errors.linkedBGMissed = kcg_true;
  outC->errors.BGpassedInUnexpectedDirection = kcg_true;
  outC->errors.BG_LinkingConsistencyError = kcg_true;
  outC->errors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->errors.doubleRepositioningError = kcg_true;
  outC->errors.bg.valid = kcg_true;
  outC->errors.bg.nid_c = 0;
  outC->errors.bg.nid_bg = 0;
  outC->errors.bg.q_link = Q_LINK_Unlinked;
  outC->errors.bg.location.nominal = 0;
  outC->errors.bg.location.d_min = 0;
  outC->errors.bg.location.d_max = 0;
  outC->errors.bg.seqNoOnTrack = 0;
  outC->errors.bg.infoFromLinking.valid = kcg_true;
  outC->errors.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->errors.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->errors.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->errors.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->errors.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->errors.bg.infoFromLinking.d_link.nominal = 0;
  outC->errors.bg.infoFromLinking.d_link.d_min = 0;
  outC->errors.bg.infoFromLinking.d_link.d_max = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->errors.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->errors.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->errors.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->errors.bg.infoFromPassing.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->errors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->errors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->errors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->errors.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->errors.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->errors.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->errors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->errors.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->errors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->errors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i1 = 0; i1 < 33; i1++) {
    outC->errors.bg.infoFromPassing.linkedBGs[i1].valid = kcg_true;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].d_link = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].nid_c = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].nid_bg = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->errors.bg.infoFromPassing.linkedBGs[i1].q_locacc = 0;
  }
  outC->errors.bg.missed = kcg_true;
  for (i3 = 0; i3 < 41; i3++) {
    outC->BGs[i3].valid = kcg_true;
    outC->BGs[i3].nid_c = 0;
    outC->BGs[i3].nid_bg = 0;
    outC->BGs[i3].q_link = Q_LINK_Unlinked;
    outC->BGs[i3].location.nominal = 0;
    outC->BGs[i3].location.d_min = 0;
    outC->BGs[i3].location.d_max = 0;
    outC->BGs[i3].seqNoOnTrack = 0;
    outC->BGs[i3].infoFromLinking.valid = kcg_true;
    outC->BGs[i3].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->BGs[i3].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->BGs[i3].infoFromLinking.expectedLocation.nominal = 0;
    outC->BGs[i3].infoFromLinking.expectedLocation.d_min = 0;
    outC->BGs[i3].infoFromLinking.expectedLocation.d_max = 0;
    outC->BGs[i3].infoFromLinking.d_link.nominal = 0;
    outC->BGs[i3].infoFromLinking.d_link.d_min = 0;
    outC->BGs[i3].infoFromLinking.d_link.d_max = 0;
    outC->BGs[i3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs[i3].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->BGs[i3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs[i3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs[i3].infoFromLinking.linkingInfo.d_link = 0;
    outC->BGs[i3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs[i3].infoFromLinking.linkingInfo.nid_c = 0;
    outC->BGs[i3].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->BGs[i3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs[i3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs[i3].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->BGs[i3].infoFromPassing.valid = kcg_true;
    outC->BGs[i3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs[i3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs[i3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs[i3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs[i3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs[i3].infoFromPassing.BG_Header.m_mcount = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.nid_c = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.nid_bg = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs[i3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs[i3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->BGs[i3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->BGs[i3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->BGs[i3].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->BGs[i3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs[i3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs[i3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i2 = 0; i2 < 33; i2++) {
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].valid = kcg_true;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].nid_LRBG = 0;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].q_dir = Q_DIR_Reverse;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].q_scale = Q_SCALE_10_cm_scale;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].d_link = 0;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].nid_c = 0;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].nid_bg = 0;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs[i3].infoFromPassing.linkedBGs[i2].q_locacc = 0;
    }
    outC->BGs[i3].missed = kcg_true;
  }
  /* 2 */ genPassedBG_SeqNo_init_CalculateTrainPosition_Pkg(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateBGLocations_reset_CalculateTrainPosition_Pkg(
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  /* 2 */ genPassedBG_SeqNo_reset_CalculateTrainPosition_Pkg(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::calculateBGLocations */
void calculateBGLocations_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::lastBGs */ positionedBGs_T_TrainPosition_Types_Pck *lastBGs,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::reset */ kcg_bool reset,
  /* CalculateTrainPosition_Pkg::calculateBGLocations::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_calculateBGLocations_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::calculateBGLocations */
  static positionedBGs_T_TrainPosition_Types_Pck op_call;
  /* CalculateTrainPosition_Pkg::calculateBGLocations */
  static kcg_bool ck_every;
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::outOfMemSpace */
  static kcg_bool outOfMemSpace;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedBG_foundNotWhereExpected */
  static kcg_bool passedBG_foundNotWhereExpected;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::passedPositionedBG_loc */
  static positionedBG_T_TrainPosition_Types_Pck passedPositionedBG_loc;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::BGpassedInUnexpectedDirection */
  static kcg_bool BGpassedInUnexpectedDirection;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L92 */
  static passedBG_T_BG_Types_Pkg _L92;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L87 */
  static positionedBG_T_TrainPosition_Types_Pck _L87;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L88 */
  static positionedBGs_T_TrainPosition_Types_Pck _L88;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L89 */
  static kcg_bool _L89;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L90 */
  static kcg_bool _L90;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L137 */
  static positionedBG_T_TrainPosition_Types_Pck _L137;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L156 */
  static kcg_bool _L156;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L157 */
  static kcg_bool _L157;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L225 */
  static positionErrors_T_TrainPosition_Types_Pck _L225;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L301 */
  static passedBG_T_BG_Types_Pkg _L301;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L298 */
  static kcg_int _L298;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L324 */
  static positionedBGs_T_TrainPosition_Types_Pck _L324;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L346 */
  static kcg_bool _L346;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L347 */
  static positionedBGs_T_TrainPosition_Types_Pck _L347;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L349 */
  static kcg_bool _L349;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L351 */
  static kcg_bool _L351;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L352 */
  static positionedBGs_T_TrainPosition_Types_Pck _L352;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L353 */
  static positionedBGs_T_TrainPosition_Types_Pck _L353;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L299 */
  static kcg_bool _L299;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L354 */
  static kcg_bool _L354;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L355 */
  static trainProperties_T_TrainPosition_Types_Pck _L355;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L356 */
  static trainProperties_T_TrainPosition_Types_Pck _L356;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L359 */
  static Q_LINK _L359;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L358 */
  static kcg_bool _L358;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L357 */
  static Q_LINK _L357;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L360 */
  static positionedBGs_T_TrainPosition_Types_Pck _L360;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L361 */
  static positionedBGs_T_TrainPosition_Types_Pck _L361;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L362 */
  static kcg_bool _L362;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L366 */
  static kcg_bool _L366;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L365 */
  static kcg_bool _L365;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L364 */
  static kcg_int _L364;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L367 */
  static positionedBG_T_TrainPosition_Types_Pck _L367;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L369 */
  static positionedBG_T_TrainPosition_Types_Pck _L369;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L372 */
  static positionedBG_T_TrainPosition_Types_Pck _L372;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L373 */
  static positionedBG_T_TrainPosition_Types_Pck _L373;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L374 */
  static kcg_bool _L374;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L376 */
  static kcg_bool _L376;
  /* CalculateTrainPosition_Pkg::calculateBGLocations::_L377 */
  static kcg_bool _L377;
  
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L92, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L324, lastBGs);
  /* 1 */ prevPassedLinkedBG_CalculateTrainPosition_Pkg(&_L92, &_L324, &_L137);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L301, passedBG);
  _L299 = reset;
  /* 2 */
  genPassedBG_SeqNo_CalculateTrainPosition_Pkg(
    &_L301,
    &_L324,
    _L299,
    &outC->Context_2);
  _L298 = outC->Context_2.seqNo;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L356, trainProperties);
  /* 1 */
  passing_a_BG_CalculateTrainPosition_Pkg(
    &_L92,
    &_L137,
    &_L324,
    _L298,
    &_L356,
    &_L87,
    &_L88,
    &_L89,
    &_L90,
    &_L374);
  _L349 = _L87.valid;
  _L359 = _L87.q_link;
  _L357 = Q_LINK_Linked;
  _L358 = _L359 == _L357;
  _L362 = !_L90;
  _L351 = _L349 & _L358 & _L362;
  ck_every = _L351;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L355, trainProperties);
  /* ck_calculateBGLocations */ if (ck_every) {
    /* 1 */
    improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L87,
      &_L88,
      &_L355,
      &op_call);
  }
  outOfMemSpace = _L89;
  _L156 = outOfMemSpace;
  passedBG_foundNotWhereExpected = _L90;
  _L157 = passedBG_foundNotWhereExpected;
  _L346 = kcg_false;
  BGpassedInUnexpectedDirection = _L374;
  _L376 = BGpassedInUnexpectedDirection;
  _L377 = _L376 | _L157;
  _L354 = reset;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &_L352,
    (positionedBGs_T_TrainPosition_Types_Pck *)
      &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &_L360,
    (positionedBGs_T_TrainPosition_Types_Pck *)
      &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  /* ck_calculateBGLocations */ if (ck_every) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L347, &op_call);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L347, &_L360);
  }
  /* 2 */ if (_L351) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L361, &_L347);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L361, &_L88);
  }
  /* 1 */ if (_L354) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L353, &_L352);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L353, &_L361);
  }
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L87,
    &_L353,
    _L349,
    &_L364,
    &_L365,
    &_L366);
  if ((0 <= _L364) & (_L364 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L367, &_L353[_L364]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L367,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &passedPositionedBG_loc,
    &_L367);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L369,
    &passedPositionedBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L373,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* 3 */ if (_L157) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L372, &_L369);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L372, &_L373);
  }
  _L225.outOfMemSpace = _L156;
  _L225.passedBG_foundNotWhereExpected = _L157;
  _L225.positionCalculation_inconsistent = _L346;
  _L225.linkedBGMissed = _L346;
  _L225.BGpassedInUnexpectedDirection = _L376;
  _L225.BG_LinkingConsistencyError = _L377;
  _L225.twoConsecutiveLinkedBGs_missed = _L346;
  _L225.doubleRepositioningError = _L346;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L225.bg, &_L372);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&outC->errors, &_L225);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &_L353);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG,
    &_L367);
  noname = _L365;
  _1_noname = _L366;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calculateBGLocations_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

