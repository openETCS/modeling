/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void calculateTrainPosition_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i1 = 0; i1 < 41; i1++) {
    outC->BGs_loc[i1].valid = kcg_true;
    outC->BGs_loc[i1].nid_c = 0;
    outC->BGs_loc[i1].nid_bg = 0;
    outC->BGs_loc[i1].q_link = Q_LINK_Unlinked;
    outC->BGs_loc[i1].location.nominal = 0;
    outC->BGs_loc[i1].location.d_min = 0;
    outC->BGs_loc[i1].location.d_max = 0;
    outC->BGs_loc[i1].seqNoOnTrack = 0;
    outC->BGs_loc[i1].infoFromLinking.valid = kcg_true;
    outC->BGs_loc[i1].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->BGs_loc[i1].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->BGs_loc[i1].infoFromLinking.expectedLocation.nominal = 0;
    outC->BGs_loc[i1].infoFromLinking.expectedLocation.d_min = 0;
    outC->BGs_loc[i1].infoFromLinking.expectedLocation.d_max = 0;
    outC->BGs_loc[i1].infoFromLinking.d_link.nominal = 0;
    outC->BGs_loc[i1].infoFromLinking.d_link.d_min = 0;
    outC->BGs_loc[i1].infoFromLinking.d_link.d_max = 0;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.d_link = 0;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.nid_c = 0;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_loc[i1].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->BGs_loc[i1].infoFromPassing.valid = kcg_true;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.m_mcount = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.nid_c = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.nid_bg = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_loc[i1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i = 0; i < 33; i++) {
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].valid = kcg_true;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].nid_LRBG = 0;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].d_link = 0;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].nid_c = 0;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].nid_bg = 0;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_loc[i1].infoFromPassing.linkedBGs[i].q_locacc = 0;
    }
    outC->BGs_loc[i1].missed = kcg_true;
  }
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
  for (i2 = 0; i2 < 33; i2++) {
    outC->errors.bg.infoFromPassing.linkedBGs[i2].valid = kcg_true;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].nid_LRBG = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].q_dir = Q_DIR_Reverse;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].q_scale = Q_SCALE_10_cm_scale;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].d_link = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].nid_c = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].nid_bg = 0;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->errors.bg.infoFromPassing.linkedBGs[i2].q_locacc = 0;
  }
  outC->errors.bg.missed = kcg_true;
  for (i4 = 0; i4 < 41; i4++) {
    outC->BGs[i4].valid = kcg_true;
    outC->BGs[i4].nid_c = 0;
    outC->BGs[i4].nid_bg = 0;
    outC->BGs[i4].q_link = Q_LINK_Unlinked;
    outC->BGs[i4].location.nominal = 0;
    outC->BGs[i4].location.d_min = 0;
    outC->BGs[i4].location.d_max = 0;
    outC->BGs[i4].seqNoOnTrack = 0;
    outC->BGs[i4].infoFromLinking.valid = kcg_true;
    outC->BGs[i4].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->BGs[i4].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->BGs[i4].infoFromLinking.expectedLocation.nominal = 0;
    outC->BGs[i4].infoFromLinking.expectedLocation.d_min = 0;
    outC->BGs[i4].infoFromLinking.expectedLocation.d_max = 0;
    outC->BGs[i4].infoFromLinking.d_link.nominal = 0;
    outC->BGs[i4].infoFromLinking.d_link.d_min = 0;
    outC->BGs[i4].infoFromLinking.d_link.d_max = 0;
    outC->BGs[i4].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs[i4].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->BGs[i4].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs[i4].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs[i4].infoFromLinking.linkingInfo.d_link = 0;
    outC->BGs[i4].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs[i4].infoFromLinking.linkingInfo.nid_c = 0;
    outC->BGs[i4].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->BGs[i4].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs[i4].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs[i4].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->BGs[i4].infoFromPassing.valid = kcg_true;
    outC->BGs[i4].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs[i4].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs[i4].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs[i4].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs[i4].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs[i4].infoFromPassing.BG_Header.m_mcount = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.nid_c = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.nid_bg = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs[i4].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs[i4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->BGs[i4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->BGs[i4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->BGs[i4].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->BGs[i4].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs[i4].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs[i4].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i3 = 0; i3 < 33; i3++) {
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].valid = kcg_true;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].nid_LRBG = 0;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].q_dir = Q_DIR_Reverse;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].q_scale = Q_SCALE_10_cm_scale;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].d_link = 0;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].nid_c = 0;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].nid_bg = 0;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs[i4].infoFromPassing.linkedBGs[i3].q_locacc = 0;
    }
    outC->BGs[i4].missed = kcg_true;
  }
  outC->trainPosition.valid = kcg_true;
  outC->trainPosition.timestamp = 0;
  outC->trainPosition.trainPositionIsUnknown = kcg_true;
  outC->trainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->trainPosition.trainPosition.nominal = 0;
  outC->trainPosition.trainPosition.d_min = 0;
  outC->trainPosition.trainPosition.d_max = 0;
  outC->trainPosition.estimatedFrontEndPosition = 0;
  outC->trainPosition.minSafeFrontEndPosition = 0;
  outC->trainPosition.maxSafeFrontEndPostion = 0;
  outC->trainPosition.LRBG.valid = kcg_true;
  outC->trainPosition.LRBG.nid_c = 0;
  outC->trainPosition.LRBG.nid_bg = 0;
  outC->trainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.location.nominal = 0;
  outC->trainPosition.LRBG.location.d_min = 0;
  outC->trainPosition.LRBG.location.d_max = 0;
  outC->trainPosition.LRBG.seqNoOnTrack = 0;
  outC->trainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->trainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->trainPosition.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->trainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i5 = 0; i5 < 33; i5++) {
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].valid = kcg_true;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].nid_LRBG = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].q_dir =
      Q_DIR_Reverse;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].d_link = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].nid_c = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].nid_bg = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i5].q_locacc = 0;
  }
  outC->trainPosition.LRBG.missed = kcg_true;
  outC->trainPosition.prvLRBG.valid = kcg_true;
  outC->trainPosition.prvLRBG.nid_c = 0;
  outC->trainPosition.prvLRBG.nid_bg = 0;
  outC->trainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.location.nominal = 0;
  outC->trainPosition.prvLRBG.location.d_min = 0;
  outC->trainPosition.prvLRBG.location.d_max = 0;
  outC->trainPosition.prvLRBG.seqNoOnTrack = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i6 = 0; i6 < 33; i6++) {
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].valid = kcg_true;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].nid_LRBG = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].q_dir =
      Q_DIR_Reverse;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].d_link = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].nid_c = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].nid_bg = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i6].q_locacc = 0;
  }
  outC->trainPosition.prvLRBG.missed = kcg_true;
  outC->trainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->trainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->trainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->trainPosition.linkingIsUsedOnboard = kcg_true;
  outC->trainPosition.estimatedRearEndPosition = 0;
  outC->trainPosition.minSafeRearEndPosition = 0;
  outC->trainPosition.maxSafeRearEndPosition = 0;
  /* 1 */
  twoConsecutiveLinkedBGs_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_1_Context_1);
  /* 2 */
  linkedBG_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(&outC->Context_2);
  /* 1 */
  calculateTrainPositionInfo_init_CalculateTrainPosition_Pkg(&outC->Context_1);
  /* 6 */
  calculateBGLocations_init_CalculateTrainPosition_Pkg(&outC->Context_6);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  twoConsecutiveLinkedBGs_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_1_Context_1);
  /* 2 */
  linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->Context_2);
  /* 1 */
  calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(&outC->Context_1);
  /* 6 */
  calculateBGLocations_reset_CalculateTrainPosition_Pkg(&outC->Context_6);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::calculateTrainPosition */
void calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::msgFromTrack */ ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */ kcg_bool reset,
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_preloc */
  static positionedBGs_T_TrainPosition_Types_Pck _3_BGs_preloc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_asPositionedBG */
  static positionedBG_T_TrainPosition_Types_Pck _2_passedBG_asPositionedBG;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */
  static positionErrors_T_TrainPosition_Types_Pck _1_errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L24 */
  static passedBG_T_BG_Types_Pkg _L24_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L23 */
  static kcg_bool _L23_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L22 */
  static positionedBGs_T_TrainPosition_Types_Pck _L22_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L21 */
  static trainProperties_T_TrainPosition_Types_Pck _L21_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L9 */
  static positionedBGs_T_TrainPosition_Types_Pck _L9_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L12 */
  static positionedBG_T_TrainPosition_Types_Pck _L12_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L11 */
  static positionErrors_T_TrainPosition_Types_Pck _L11_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L10 */
  static positionedBGs_T_TrainPosition_Types_Pck _L10_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L14 */
  static positionedBGs_T_TrainPosition_Types_Pck _L14_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L16 */
  static kcg_bool _L16_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L19 */
  static positionedBGs_T_TrainPosition_Types_Pck _L19_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_preloc */
  static positionedBGs_T_TrainPosition_Types_Pck BGs_preloc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_asPositionedBG */
  static positionedBG_T_TrainPosition_Types_Pck passedBG_asPositionedBG;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */
  static positionErrors_T_TrainPosition_Types_Pck errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else */
  static kcg_bool else_clock_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::else::_L4 */
  static positionErrors_T_TrainPosition_Types_Pck _L4_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::else::_L6 */
  static positionedBGs_T_TrainPosition_Types_Pck _L6_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */
  static positionErrors_T_TrainPosition_Types_Pck _4_errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_preloc */
  static positionedBGs_T_TrainPosition_Types_Pck _5_BGs_preloc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L2 */
  static positionErrors_T_TrainPosition_Types_Pck _L2_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L9 */
  static positionedBGs_T_TrainPosition_Types_Pck _L910_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L13 */
  static kcg_bool _L13_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L14 */
  static positionedBGs_T_TrainPosition_Types_Pck _L149_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L15 */
  static positionErrors_T_TrainPosition_Types_Pck _L15_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L16 */
  static trainProperties_T_TrainPosition_Types_Pck _L168_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L17 */
  static passedBG_T_BG_Types_Pkg _L17_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */
  static positionErrors_T_TrainPosition_Types_Pck _6_errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_preloc */
  static positionedBGs_T_TrainPosition_Types_Pck _7_BGs_preloc;
  static kcg_int noname;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */
  static positionedBGs_T_TrainPosition_Types_Pck last_BGs_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced */
  static kcg_bool if_BGpassed_or_onlyAnnounced_clock;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BG_passed */
  static kcg_bool BG_passed;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::onlyBGsAnnouncedViaRadio */
  static kcg_bool onlyBGsAnnouncedViaRadio;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */
  static positionErrors_T_TrainPosition_Types_Pck _13_errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_asPositionedBG */
  static positionedBG_T_TrainPosition_Types_Pck _12_passedBG_asPositionedBG;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::positionCalculationNotConsistent */
  static kcg_bool positionCalculationNotConsistent;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPositionInfo */
  static trainPositionInfo_T_TrainPosition_Types_Pck trainPositionInfo;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_loc */
  static passedBG_T_BG_Types_Pkg passedBG_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::linkedBGMissed */
  static kcg_bool linkedBGMissed;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::twoConsecutiveLinkedBGsMissed */
  static kcg_bool twoConsecutiveLinkedBGsMissed;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::missedLinkedBG */
  static positionedBG_T_TrainPosition_Types_Pck missedLinkedBG;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_preloc */
  static positionedBGs_T_TrainPosition_Types_Pck _11_BGs_preloc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L200 */
  static trainPosition_T_TrainPosition_Types_Pck _L200;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L201 */
  static odometry_T_Obu_BasicTypes_Pkg _L201;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L207 */
  static trainProperties_T_TrainPosition_Types_Pck _L207;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L216 */
  static kcg_bool _L216;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L238 */
  static kcg_bool _L238;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L248 */
  static kcg_bool _L248;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L247 */
  static passedBG_T_BG_Types_Pkg _L247;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L246 */
  static kcg_bool _L246;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L245 */
  static kcg_bool _L245;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L244 */
  static kcg_bool _L244;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L243 */
  static kcg_bool _L243;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L256 */
  static positionedBG_T_TrainPosition_Types_Pck _L256;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L258 */
  static kcg_bool _L258;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L259 */
  static kcg_bool _L259;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L260 */
  static kcg_bool _L260;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L308 */
  static kcg_bool _L308;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L307 */
  static kcg_bool _L307;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L306 */
  static passedBG_T_BG_Types_Pkg _L306;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L309 */
  static ReceivedMessage_T_Common_Types_Pkg _L309;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L329 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L329;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L327 */
  static trainPositionInfo_T_TrainPosition_Types_Pck _L327;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L322 */
  static kcg_bool _L322;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L323 */
  static kcg_int _L323;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L324 */
  static positionedBG_T_TrainPosition_Types_Pck _L324;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L321 */
  static kcg_bool _L321;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L331 */
  static passedBG_T_BG_Types_Pkg _L331;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L332 */
  static kcg_bool _L332;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L333 */
  static kcg_bool _L333;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L334 */
  static kcg_bool _L334;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L335 */
  static kcg_bool _L335;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L336 */
  static positionedBG_T_TrainPosition_Types_Pck _L336;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L383 */
  static positionedBG_T_TrainPosition_Types_Pck _L383;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L382 */
  static kcg_bool _L382;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L381 */
  static positionedBG_T_TrainPosition_Types_Pck _L381;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L380 */
  static kcg_bool _L380;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L379 */
  static kcg_bool _L379;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L378 */
  static kcg_bool _L378;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L377 */
  static kcg_bool _L377;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L376 */
  static kcg_bool _L376;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L375 */
  static kcg_bool _L375;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L374 */
  static kcg_bool _L374;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L373 */
  static kcg_bool _L373;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L372 */
  static positionedBG_T_TrainPosition_Types_Pck _L372;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L371 */
  static positionErrors_T_TrainPosition_Types_Pck _L371;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L370 */
  static positionErrors_T_TrainPosition_Types_Pck _L370;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L384 */
  static positionedBGs_T_TrainPosition_Types_Pck _L384;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L385 */
  static positionedBGs_T_TrainPosition_Types_Pck _L385;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L386 */
  static positionedBGs_T_TrainPosition_Types_Pck _L386;
  
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L201, currentOdometry);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L247, passedBG);
  _L244 = _L247.valid;
  _L245 = _L247.BG_Header.valid;
  _L248 = _L245 & _L244;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L309, msgFromTrack);
  /* 1 */
  msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
    &_L309,
    &_L306,
    &_L307,
    &_L308);
  /* 15 */ if (_L244) {
    _L333 = _L248;
  }
  else {
    _L333 = _L307;
  }
  BG_passed = _L333;
  if_BGpassed_or_onlyAnnounced_clock = BG_passed | reset;
  _L243 = !_L245;
  _L246 = _L243 & _L244;
  /* 14 */ if (_L244) {
    _L332 = _L246;
  }
  else {
    _L332 = _L308;
  }
  onlyBGsAnnouncedViaRadio = _L332;
  /* ck_if_BGpassed_or_onlyAnnounced */ if (if_BGpassed_or_onlyAnnounced_clock) {
  }
  else {
    else_clock_if_BGpassed_or_onlyAnnounced = onlyBGsAnnouncedViaRadio;
  }
  /* last_init_ck_BGs_loc */ if (outC->init) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &last_BGs_loc,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &last_BGs_loc,
      &outC->BGs_loc);
  }
  /* ck_if_BGpassed_or_onlyAnnounced */ if (if_BGpassed_or_onlyAnnounced_clock) {
  }
  else /* ck_anon_activ */ if (else_clock_if_BGpassed_or_onlyAnnounced) {
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_L6_if_BGpassed_or_onlyAnnounced,
      &last_BGs_loc);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_5_BGs_preloc,
      &_L6_if_BGpassed_or_onlyAnnounced);
  }
  /* 13 */ if (_L244) {
    kcg_copy_passedBG_T_BG_Types_Pkg(&_L331, &_L247);
  }
  else {
    kcg_copy_passedBG_T_BG_Types_Pkg(&_L331, &_L306);
  }
  kcg_copy_passedBG_T_BG_Types_Pkg(&passedBG_loc, &_L331);
  /* ck_if_BGpassed_or_onlyAnnounced */ if (if_BGpassed_or_onlyAnnounced_clock) {
    kcg_copy_passedBG_T_BG_Types_Pkg(
      &_L24_if_BGpassed_or_onlyAnnounced,
      &passedBG_loc);
    _L16_if_BGpassed_or_onlyAnnounced = reset;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_L14_if_BGpassed_or_onlyAnnounced,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_L9_if_BGpassed_or_onlyAnnounced,
      &last_BGs_loc);
    /* 9 */ if (_L16_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_L19_if_BGpassed_or_onlyAnnounced,
        &_L14_if_BGpassed_or_onlyAnnounced);
    }
    else {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_L19_if_BGpassed_or_onlyAnnounced,
        &_L9_if_BGpassed_or_onlyAnnounced);
    }
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &_L21_if_BGpassed_or_onlyAnnounced,
      trainProperties);
    /* 6 */
    calculateBGLocations_CalculateTrainPosition_Pkg(
      &_L24_if_BGpassed_or_onlyAnnounced,
      &_L19_if_BGpassed_or_onlyAnnounced,
      _L16_if_BGpassed_or_onlyAnnounced,
      &_L21_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_L10_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6.BGs);
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &_L11_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6.errors);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L12_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6.passedPositionedBG);
    _L23_if_BGpassed_or_onlyAnnounced = kcg_true;
    /* 2 */
    delDispensableBGs_CalculateTrainPosition_Pkg(
      &_L10_if_BGpassed_or_onlyAnnounced,
      _L23_if_BGpassed_or_onlyAnnounced,
      &_L22_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_3_BGs_preloc,
      &_L22_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_11_BGs_preloc,
      &_3_BGs_preloc);
  }
  else {
    /* ck_anon_activ */ if (else_clock_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_passedBG_T_BG_Types_Pkg(
        &_L17_if_BGpassed_or_onlyAnnounced,
        &passedBG_loc);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_L910_if_BGpassed_or_onlyAnnounced,
        &last_BGs_loc);
      kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
        &_L168_if_BGpassed_or_onlyAnnounced,
        trainProperties);
      /* 1 */
      addAnnouncedBGs_CalculateTrainPosition_Pkg(
        &_L17_if_BGpassed_or_onlyAnnounced,
        &_L910_if_BGpassed_or_onlyAnnounced,
        &_L168_if_BGpassed_or_onlyAnnounced,
        &_L149_if_BGpassed_or_onlyAnnounced,
        &_L13_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_7_BGs_preloc,
        &_L149_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &BGs_preloc,
        &_7_BGs_preloc);
    }
    else {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &BGs_preloc,
        &_5_BGs_preloc);
    }
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_11_BGs_preloc,
      &BGs_preloc);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L386, &_11_BGs_preloc);
  _L260 = onlyBGsAnnouncedViaRadio;
  _L259 = BG_passed;
  _L238 = reset;
  _L258 = _L260 | _L259 | _L238;
  /* ck_if_BGpassed_or_onlyAnnounced */ if (if_BGpassed_or_onlyAnnounced_clock) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_2_passedBG_asPositionedBG,
      &_L12_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_12_passedBG_asPositionedBG,
      &_2_passedBG_asPositionedBG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &passedBG_asPositionedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_12_passedBG_asPositionedBG,
      &passedBG_asPositionedBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L256,
    &_12_passedBG_asPositionedBG);
  /* 1 */
  calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
    &_L201,
    &_L386,
    _L258,
    &_L256,
    _L238,
    &outC->Context_1);
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &trainPositionInfo,
    &outC->Context_1.trainPositionInfo);
  _L216 = outC->Context_1.positionCalculationNotConsistent;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L207, trainProperties);
  /* 1 */
  calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
    &trainPositionInfo,
    &_L201,
    &_L207,
    &_L200);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &_L200);
  /* ck_if_BGpassed_or_onlyAnnounced */ if (if_BGpassed_or_onlyAnnounced_clock) {
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &_1_errors_loc,
      &_L11_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &_13_errors_loc,
      &_1_errors_loc);
  }
  else {
    /* ck_anon_activ */ if (else_clock_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_L2_if_BGpassed_or_onlyAnnounced,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_L15_if_BGpassed_or_onlyAnnounced,
        &_L2_if_BGpassed_or_onlyAnnounced);
      if (kcg_true) {
        _L15_if_BGpassed_or_onlyAnnounced.outOfMemSpace =
          _L13_if_BGpassed_or_onlyAnnounced;
      }
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_6_errors_loc,
        &_L15_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &errors_loc,
        &_6_errors_loc);
    }
    else {
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_L4_if_BGpassed_or_onlyAnnounced,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_4_errors_loc,
        &_L4_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &errors_loc,
        &_4_errors_loc);
    }
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &_13_errors_loc,
      &errors_loc);
  }
  positionCalculationNotConsistent = _L216;
  _L321 = kcg_true;
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &_L327,
    &trainPositionInfo);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L329, &_L327.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L385, &_11_BGs_preloc);
  /* 2 */
  linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
    &_L329,
    &_L385,
    _L321,
    &outC->Context_2);
  _L322 = outC->Context_2.missed;
  _L323 = outC->Context_2.indexOfBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L324, &outC->Context_2.BG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &_L384,
    &outC->Context_2.BGs_out);
  noname = _L323;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L336,
    &_12_passedBG_asPositionedBG);
  _L335 = reset;
  /* 1 */
  twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
    _L322,
    &_L324,
    &_L336,
    _L335,
    &outC->_1_Context_1);
  _L334 = outC->_1_Context_1.secondConsecutiveBG_missed;
  linkedBGMissed = _L322;
  twoConsecutiveLinkedBGsMissed = _L334;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&missedLinkedBG, &_L324);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&_L371, &_13_errors_loc);
  _L374 = _L371.outOfMemSpace;
  _L375 = _L371.passedBG_foundNotWhereExpected;
  _L376 = positionCalculationNotConsistent;
  _L380 = linkedBGMissed;
  _L382 = _L371.BGpassedInUnexpectedDirection;
  _L373 = _L371.BG_LinkingConsistencyError;
  _L378 = _L380 | _L373;
  _L377 = twoConsecutiveLinkedBGsMissed;
  _L379 = kcg_false;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L372, &missedLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L383, &_L371.bg);
  /* 17 */ if (_L380) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L381, &_L372);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L381, &_L383);
  }
  _L370.outOfMemSpace = _L374;
  _L370.passedBG_foundNotWhereExpected = _L375;
  _L370.positionCalculation_inconsistent = _L376;
  _L370.linkedBGMissed = _L380;
  _L370.BGpassedInUnexpectedDirection = _L382;
  _L370.BG_LinkingConsistencyError = _L378;
  _L370.twoConsecutiveLinkedBGs_missed = _L377;
  _L370.doubleRepositioningError = _L379;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L370.bg, &_L381);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&outC->errors, &_L370);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &_L384);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_loc, &_L384);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainPosition_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

