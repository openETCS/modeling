/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"

void calculateTrainPosition_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  int i1;
  int i;
  
  outC->init = kcg_true;
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
  outC->trainPosition.linkingIsUsedOnboard = kcg_true;
  outC->trainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->trainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->trainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  for (i = 0; i < 4; i++) {
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->trainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.prvLRBG.seqNoOnTrack = 0;
  outC->trainPosition.prvLRBG.location.d_max = 0;
  outC->trainPosition.prvLRBG.location.d_min = 0;
  outC->trainPosition.prvLRBG.location.nominal = 0;
  outC->trainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.nid_bg = 0;
  outC->trainPosition.prvLRBG.nid_c = 0;
  outC->trainPosition.prvLRBG.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPosition.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->trainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->trainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->trainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.LRBG.seqNoOnTrack = 0;
  outC->trainPosition.LRBG.location.d_max = 0;
  outC->trainPosition.LRBG.location.d_min = 0;
  outC->trainPosition.LRBG.location.nominal = 0;
  outC->trainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.nid_bg = 0;
  outC->trainPosition.LRBG.nid_c = 0;
  outC->trainPosition.LRBG.valid = kcg_true;
  outC->trainPosition.maxSafeFrontEndPostion = 0;
  outC->trainPosition.minSafeFrontEndPosition = 0;
  outC->trainPosition.estimatedFrontEndPosition = 0;
  outC->trainPosition.trainPosition.d_max = 0;
  outC->trainPosition.trainPosition.d_min = 0;
  outC->trainPosition.trainPosition.nominal = 0;
  outC->trainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->trainPosition.trainPositionIsUnknown = kcg_true;
  outC->trainPosition.timestamp = 0;
  outC->trainPosition.valid = kcg_true;
  calculateBGLocations_init_CalculateTrainPosition_Pkg(&outC->Context_6);
  calculateTrainPositionInfo_init_CalculateTrainPosition_Pkg(&outC->Context_1);
  linkedBG_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(&outC->Context_2);
  twoConsecutiveLinkedBGs_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_1_Context_1);
}


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

/* CalculateTrainPosition_Pkg::calculateTrainPosition */
void calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::msgFromTrack */ ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::reset */ kcg_bool reset,
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  positionedBGs_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::then::_L10 */ positionedBGs_T_TrainPosition_Types_Pck _L10_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced::else::then::_L13 */ kcg_bool _L13_if_BGpassed_or_onlyAnnounced;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BGs_loc */ positionedBGs_T_TrainPosition_Types_Pck last_BGs_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::if_BGpassed_or_onlyAnnounced */ kcg_bool if_BGpassed_or_onlyAnnounced_clock;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::BG_passed */ kcg_bool BG_passed;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::onlyBGsAnnouncedViaRadio */ kcg_bool onlyBGsAnnouncedViaRadio;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::errors_loc */ positionErrors_T_TrainPosition_Types_Pck errors_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_asPositionedBG */ positionedBG_T_TrainPosition_Types_Pck passedBG_asPositionedBG;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::trainPositionInfo */ trainPositionInfo_T_TrainPosition_Types_Pck trainPositionInfo;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::passedBG_loc */ passedBG_T_BG_Types_Pkg passedBG_loc;
  /* CalculateTrainPosition_Pkg::calculateTrainPosition::_L306 */ passedBG_T_BG_Types_Pkg _L306;
  
  outC->errors.doubleRepositioningError = kcg_false;
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &last_BGs_loc,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&last_BGs_loc, &outC->BGs);
  }
  /* 1 */
  msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
    msgFromTrack,
    &_L306,
    &if_BGpassed_or_onlyAnnounced_clock,
    &_L13_if_BGpassed_or_onlyAnnounced);
  if ((*passedBG).valid) {
    BG_passed = (*passedBG).BG_Header.valid & (*passedBG).valid;
    onlyBGsAnnouncedViaRadio = !(*passedBG).BG_Header.valid & (*passedBG).valid;
    kcg_copy_passedBG_T_BG_Types_Pkg(&passedBG_loc, passedBG);
  }
  else {
    BG_passed = if_BGpassed_or_onlyAnnounced_clock;
    onlyBGsAnnouncedViaRadio = _L13_if_BGpassed_or_onlyAnnounced;
    kcg_copy_passedBG_T_BG_Types_Pkg(&passedBG_loc, &_L306);
  }
  if_BGpassed_or_onlyAnnounced_clock = BG_passed | reset;
  if (if_BGpassed_or_onlyAnnounced_clock) {
    if (reset) {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &tmp,
        (positionedBGs_T_TrainPosition_Types_Pck *)
          &cNoPositionedBGs_CalculateTrainPosition_Pkg);
    }
    else {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp, &last_BGs_loc);
    }
    /* 6 */
    calculateBGLocations_CalculateTrainPosition_Pkg(
      &passedBG_loc,
      &tmp,
      reset,
      trainProperties,
      &outC->Context_6);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &_L10_if_BGpassed_or_onlyAnnounced,
      &outC->Context_6.BGs);
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &errors_loc,
      &outC->Context_6.errors);
    /* 2 */
    delDispensableBGs_CalculateTrainPosition_Pkg(
      &_L10_if_BGpassed_or_onlyAnnounced,
      kcg_true,
      &outC->BGs);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &passedBG_asPositionedBG,
      &outC->Context_6.passedPositionedBG);
  }
  else {
    if (onlyBGsAnnouncedViaRadio) {
      /* 1 */
      addAnnouncedBGs_CalculateTrainPosition_Pkg(
        &passedBG_loc,
        &last_BGs_loc,
        trainProperties,
        &outC->BGs,
        &_L13_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &errors_loc,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
      errors_loc.outOfMemSpace = _L13_if_BGpassed_or_onlyAnnounced;
    }
    else {
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &errors_loc,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->BGs,
        &last_BGs_loc);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &passedBG_asPositionedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->errors.outOfMemSpace = errors_loc.outOfMemSpace;
  outC->errors.passedBG_foundNotWhereExpected =
    errors_loc.passedBG_foundNotWhereExpected;
  outC->errors.BGpassedInUnexpectedDirection =
    errors_loc.BGpassedInUnexpectedDirection;
  /* 1 */
  calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
    currentOdometry,
    &outC->BGs,
    (kcg_bool) (onlyBGsAnnouncedViaRadio | BG_passed | reset),
    &passedBG_asPositionedBG,
    reset,
    &outC->Context_1);
  outC->errors.positionCalculation_inconsistent =
    outC->Context_1.positionCalculationNotConsistent;
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &trainPositionInfo,
    &outC->Context_1.trainPositionInfo);
  /* 2 */
  linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
    &trainPositionInfo.trainPosition,
    &outC->BGs,
    kcg_true,
    &outC->Context_2);
  outC->errors.linkedBGMissed = outC->Context_2.missed;
  outC->errors.BG_LinkingConsistencyError = outC->Context_2.missed |
    errors_loc.BG_LinkingConsistencyError;
  /* 1 */
  twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
    outC->Context_2.missed,
    &outC->Context_2.BG,
    &passedBG_asPositionedBG,
    reset,
    &outC->_1_Context_1);
  outC->errors.twoConsecutiveLinkedBGs_missed =
    outC->_1_Context_1.secondConsecutiveBG_missed;
  if (outC->Context_2.missed) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->errors.bg,
      &outC->Context_2.BG);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->errors.bg,
      &errors_loc.bg);
  }
  /* 1 */
  calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
    &trainPositionInfo,
    currentOdometry,
    trainProperties,
    &outC->trainPosition);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculateTrainPosition_CalculateTrainPosition_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

