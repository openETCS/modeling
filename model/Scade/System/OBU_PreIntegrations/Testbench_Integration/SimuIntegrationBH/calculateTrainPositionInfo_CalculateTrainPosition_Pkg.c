/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void calculateTrainPositionInfo_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.nid_c = 0;
  outC->_L71.nid_bg = 0;
  outC->_L71.q_link = Q_LINK_Unlinked;
  outC->_L71.location.nominal = 0;
  outC->_L71.location.d_min = 0;
  outC->_L71.location.d_max = 0;
  outC->_L71.seqNoOnTrack = 0;
  outC->_L71.infoFromLinking.valid = kcg_true;
  outC->_L71.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L71.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L71.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L71.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L71.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L71.infoFromLinking.d_link.nominal = 0;
  outC->_L71.infoFromLinking.d_link.d_min = 0;
  outC->_L71.infoFromLinking.d_link.d_max = 0;
  outC->_L71.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L71.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L71.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L71.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L71.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L71.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L71.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L71.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L71.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L71.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L71.infoFromPassing.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L71.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L71.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L71.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L71.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L71.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L71.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L71.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L71.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L71.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L71.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L71.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->_L71.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->_L71.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L71.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L71.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L71.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L71.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L71.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->_L71.missed = kcg_true;
  outC->_L70.valid = kcg_true;
  outC->_L70.nid_c = 0;
  outC->_L70.nid_bg = 0;
  outC->_L70.q_link = Q_LINK_Unlinked;
  outC->_L70.location.nominal = 0;
  outC->_L70.location.d_min = 0;
  outC->_L70.location.d_max = 0;
  outC->_L70.seqNoOnTrack = 0;
  outC->_L70.infoFromLinking.valid = kcg_true;
  outC->_L70.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L70.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L70.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L70.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L70.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L70.infoFromLinking.d_link.nominal = 0;
  outC->_L70.infoFromLinking.d_link.d_min = 0;
  outC->_L70.infoFromLinking.d_link.d_max = 0;
  outC->_L70.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L70.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L70.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L70.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L70.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L70.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L70.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L70.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L70.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L70.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L70.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L70.infoFromPassing.valid = kcg_true;
  outC->_L70.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L70.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L70.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L70.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L70.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L70.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L70.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L70.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L70.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L70.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L70.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L70.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L70.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L70.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L70.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L70.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L70.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L70.infoFromPassing.linkedBGs[i1].valid = kcg_true;
    outC->_L70.infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
    outC->_L70.infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
    outC->_L70.infoFromPassing.linkedBGs[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L70.infoFromPassing.linkedBGs[i1].d_link = 0;
    outC->_L70.infoFromPassing.linkedBGs[i1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L70.infoFromPassing.linkedBGs[i1].nid_c = 0;
    outC->_L70.infoFromPassing.linkedBGs[i1].nid_bg = 0;
    outC->_L70.infoFromPassing.linkedBGs[i1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L70.infoFromPassing.linkedBGs[i1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L70.infoFromPassing.linkedBGs[i1].q_locacc = 0;
  }
  outC->_L70.missed = kcg_true;
  outC->_L61.valid = kcg_true;
  outC->_L61.nid_c = 0;
  outC->_L61.nid_bg = 0;
  outC->_L61.q_link = Q_LINK_Unlinked;
  outC->_L61.location.nominal = 0;
  outC->_L61.location.d_min = 0;
  outC->_L61.location.d_max = 0;
  outC->_L61.seqNoOnTrack = 0;
  outC->_L61.infoFromLinking.valid = kcg_true;
  outC->_L61.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L61.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L61.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L61.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L61.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L61.infoFromLinking.d_link.nominal = 0;
  outC->_L61.infoFromLinking.d_link.d_min = 0;
  outC->_L61.infoFromLinking.d_link.d_max = 0;
  outC->_L61.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L61.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L61.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L61.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L61.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L61.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L61.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L61.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L61.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L61.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L61.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L61.infoFromPassing.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L61.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L61.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L61.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L61.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L61.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L61.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L61.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L61.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L61.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L61.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L61.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L61.infoFromPassing.linkedBGs[i2].valid = kcg_true;
    outC->_L61.infoFromPassing.linkedBGs[i2].nid_LRBG = 0;
    outC->_L61.infoFromPassing.linkedBGs[i2].q_dir = Q_DIR_Reverse;
    outC->_L61.infoFromPassing.linkedBGs[i2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L61.infoFromPassing.linkedBGs[i2].d_link = 0;
    outC->_L61.infoFromPassing.linkedBGs[i2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L61.infoFromPassing.linkedBGs[i2].nid_c = 0;
    outC->_L61.infoFromPassing.linkedBGs[i2].nid_bg = 0;
    outC->_L61.infoFromPassing.linkedBGs[i2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L61.infoFromPassing.linkedBGs[i2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L61.infoFromPassing.linkedBGs[i2].q_locacc = 0;
  }
  outC->_L61.missed = kcg_true;
  outC->_L62.valid = kcg_true;
  outC->_L62.nid_c = 0;
  outC->_L62.nid_bg = 0;
  outC->_L62.q_link = Q_LINK_Unlinked;
  outC->_L62.location.nominal = 0;
  outC->_L62.location.d_min = 0;
  outC->_L62.location.d_max = 0;
  outC->_L62.seqNoOnTrack = 0;
  outC->_L62.infoFromLinking.valid = kcg_true;
  outC->_L62.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L62.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L62.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L62.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L62.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L62.infoFromLinking.d_link.nominal = 0;
  outC->_L62.infoFromLinking.d_link.d_min = 0;
  outC->_L62.infoFromLinking.d_link.d_max = 0;
  outC->_L62.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L62.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L62.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L62.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L62.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L62.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L62.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L62.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L62.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L62.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L62.infoFromPassing.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L62.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L62.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L62.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L62.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L62.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L62.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L62.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L62.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L62.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L62.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i3 = 0; i3 < 33; i3++) {
    outC->_L62.infoFromPassing.linkedBGs[i3].valid = kcg_true;
    outC->_L62.infoFromPassing.linkedBGs[i3].nid_LRBG = 0;
    outC->_L62.infoFromPassing.linkedBGs[i3].q_dir = Q_DIR_Reverse;
    outC->_L62.infoFromPassing.linkedBGs[i3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L62.infoFromPassing.linkedBGs[i3].d_link = 0;
    outC->_L62.infoFromPassing.linkedBGs[i3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62.infoFromPassing.linkedBGs[i3].nid_c = 0;
    outC->_L62.infoFromPassing.linkedBGs[i3].nid_bg = 0;
    outC->_L62.infoFromPassing.linkedBGs[i3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62.infoFromPassing.linkedBGs[i3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.infoFromPassing.linkedBGs[i3].q_locacc = 0;
  }
  outC->_L62.missed = kcg_true;
  outC->positionCalculationNotConsistent = kcg_true;
  outC->trainPositionInfo.valid = kcg_true;
  outC->trainPositionInfo.timestamp = 0;
  outC->trainPositionInfo.trainPosition.nominal = 0;
  outC->trainPositionInfo.trainPosition.d_min = 0;
  outC->trainPositionInfo.trainPosition.d_max = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.nominal = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.d_min = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.d_max = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.nominal = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.d_min = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.d_max = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.nid_c = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.nid_bg = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.location.nominal = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_min = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_max = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.seqNoOnTrack = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i4 = 0; i4 < 33; i4++) {
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].valid =
      kcg_true;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].nid_LRBG =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].d_link =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].nid_c =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].nid_bg =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i4].q_locacc =
      0;
  }
  outC->trainPositionInfo.prevPassedLinkedBG.missed = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.nid_c = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.nid_bg = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.location.nominal = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_min = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_max = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.seqNoOnTrack = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i5 = 0; i5 < 33; i5++) {
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].valid =
      kcg_true;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].nid_LRBG =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].d_link =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].nid_c =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].nid_bg =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i5].q_locacc =
      0;
  }
  outC->trainPositionInfo.lastPassedLinkedBG.missed = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_c = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_bg = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.nominal = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_min = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_max = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.seqNoOnTrack = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i6 = 0; i6 < 33; i6++) {
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].valid =
      kcg_true;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].nid_LRBG =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].d_link =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].nid_c =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].nid_bg =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i6].q_locacc =
      0;
  }
  outC->trainPositionInfo.lastPassedUnlinkedBG.missed = kcg_true;
  outC->trainPositionInfo.speed = 0;
  outC->trainPositionInfo.linkingIsUsedOnboard = kcg_true;
  /* 1 */
  linkingIsUsed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
  /* 2 */
  lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
  /* 2 */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
void calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::recalculateBGs */ kcg_bool recalculateBGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::passedBG */ positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::reset */ kcg_bool reset,
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static positionedBG_T_TrainPosition_Types_Pck tmp3;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static positionedBG_T_TrainPosition_Types_Pck tmp2;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static positionedBG_T_TrainPosition_Types_Pck tmp1;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static positionedBG_T_TrainPosition_Types_Pck _5_op_call;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static positionedBG_T_TrainPosition_Types_Pck _6_op_call;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static positionedBG_T_TrainPosition_Types_Pck op_call;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static positionedBG_T_TrainPosition_Types_Pck _4_op_call;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static kcg_bool ck_every;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
  static kcg_bool _7_ck_every;
  static positionedBG_T_TrainPosition_Types_Pck noname;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L1 */
  static odometry_T_Obu_BasicTypes_Pkg _L1;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L7 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L7;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L8 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L8;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L9 */
  static trainPositionInfo_T_TrainPosition_Types_Pck _L9;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L10 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L10;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L12 */
  static kcg_bool _L12;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L13 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L13;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L14 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L14;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L15 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L15;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L28 */
  static odometry_T_Obu_BasicTypes_Pkg _L28;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L56 */
  static kcg_bool _L56;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L57 */
  static odometry_T_Obu_BasicTypes_Pkg _L57;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L58 */
  static kcg_bool _L58;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L59 */
  static positionedBGs_T_TrainPosition_Types_Pck _L59;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L68 */
  static positionedBG_T_TrainPosition_Types_Pck _L68;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L67 */
  static kcg_bool _L67;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L66 */
  static kcg_bool _L66;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L65 */
  static positionedBGs_T_TrainPosition_Types_Pck _L65;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L64 */
  static kcg_bool _L64;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L63 */
  static positionedBG_T_TrainPosition_Types_Pck _L63;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L76 */
  static kcg_bool _L76;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L75 */
  static positionedBG_T_TrainPosition_Types_Pck _L75;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L74 */
  static kcg_bool _L74;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L73 */
  static kcg_bool _L73;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L72 */
  static positionedBG_T_TrainPosition_Types_Pck _L72;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L69 */
  static positionedBGs_T_TrainPosition_Types_Pck _L69;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L77 */
  static kcg_bool _L77;
  
  _L76 = recalculateBGs;
  ck_every = _L76;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L72, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L69, BGs);
  _L73 = kcg_false;
  _L74 = reset;
  /* ck_calculateTrainPositionInfo */ if (ck_every) {
    /* 2 */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L72,
      &_L69,
      _L73,
      _L74,
      _L76,
      &outC->Context_2);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_6_op_call,
      &outC->Context_2.prvBG);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_5_op_call,
      &outC->Context_2.lastBG);
  }
  _L66 = recalculateBGs;
  _7_ck_every = _L66;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L63, passedBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L65, BGs);
  _L64 = kcg_true;
  _L67 = reset;
  /* ck_calculateTrainPositionInfo */ if (_7_ck_every) {
    /* 1 */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L63,
      &_L65,
      _L64,
      _L67,
      _L66,
      &outC->Context_1);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_4_op_call,
      &outC->Context_1.prvBG);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &op_call,
      &outC->Context_1.lastBG);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L1, currentOdometry);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L13, &_L1.odo);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L68,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* ck_calculateTrainPositionInfo */ if (_7_ck_every) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L62, &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp3, &_L68);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp3, &outC->_L62);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L62, &tmp3);
  }
  /* 1 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L13,
    &outC->_L62,
    &_L7);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L75,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* ck_calculateTrainPositionInfo */ if (ck_every) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L71, &_5_op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp2, &_L75);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp2, &outC->_L71);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L71, &tmp2);
  }
  /* 2 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L13,
    &outC->_L71,
    &_L8);
  _L77 = _L1.valid;
  _L14 = _L1.timestamp;
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(&_L7, &_L8, &_L10, &_L11);
  /* ck_calculateTrainPositionInfo */ if (_7_ck_every) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L61, &_4_op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &_L68);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp1, &outC->_L61);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L61, &tmp1);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L28, currentOdometry);
  _L15 = _L28.speed.v_safeNominal;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L57, currentOdometry);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L59, BGs);
  _L58 = recalculateBGs;
  /* 1 */
  linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
    &_L57,
    &_L59,
    _L58,
    &outC->_1_Context_1);
  _L56 = outC->_1_Context_1.linkingIsUsed;
  _L9.valid = _L77;
  _L9.timestamp = _L14;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L9.trainPosition, &_L10);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L9.trainPositionDerivedFromLastLinkedBG,
    &_L7);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L9.trainPositionDerivedFromLastUnlinkedBG,
    &_L8);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L9.prevPassedLinkedBG,
    &outC->_L61);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L9.lastPassedLinkedBG,
    &outC->_L62);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L9.lastPassedUnlinkedBG,
    &outC->_L71);
  _L9.speed = _L15;
  _L9.linkingIsUsedOnboard = _L56;
  _L12 = !_L11;
  outC->positionCalculationNotConsistent = _L12;
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo,
    &_L9);
  /* ck_calculateTrainPositionInfo */ if (ck_every) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &_6_op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &_L75);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &outC->_L70);
    }
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L70, &tmp);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&noname, &outC->_L70);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** calculateTrainPositionInfo_CalculateTrainPosition_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

