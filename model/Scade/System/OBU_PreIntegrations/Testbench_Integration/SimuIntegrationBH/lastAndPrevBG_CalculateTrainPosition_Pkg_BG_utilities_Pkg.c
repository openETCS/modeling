/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->rem_BG.valid = kcg_true;
  outC->rem_BG.nid_c = 0;
  outC->rem_BG.nid_bg = 0;
  outC->rem_BG.q_link = Q_LINK_Unlinked;
  outC->rem_BG.location.nominal = 0;
  outC->rem_BG.location.d_min = 0;
  outC->rem_BG.location.d_max = 0;
  outC->rem_BG.seqNoOnTrack = 0;
  outC->rem_BG.infoFromLinking.valid = kcg_true;
  outC->rem_BG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->rem_BG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->rem_BG.infoFromLinking.expectedLocation.nominal = 0;
  outC->rem_BG.infoFromLinking.expectedLocation.d_min = 0;
  outC->rem_BG.infoFromLinking.expectedLocation.d_max = 0;
  outC->rem_BG.infoFromLinking.d_link.nominal = 0;
  outC->rem_BG.infoFromLinking.d_link.d_min = 0;
  outC->rem_BG.infoFromLinking.d_link.d_max = 0;
  outC->rem_BG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->rem_BG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->rem_BG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->rem_BG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->rem_BG.infoFromLinking.linkingInfo.d_link = 0;
  outC->rem_BG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->rem_BG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->rem_BG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->rem_BG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->rem_BG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->rem_BG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->rem_BG.infoFromPassing.valid = kcg_true;
  outC->rem_BG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->rem_BG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->rem_BG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->rem_BG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->rem_BG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->rem_BG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->rem_BG.infoFromPassing.BG_Header.nid_c = 0;
  outC->rem_BG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->rem_BG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->rem_BG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->rem_BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->rem_BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->rem_BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->rem_BG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->rem_BG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->rem_BG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->rem_BG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->rem_BG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->rem_BG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->rem_BG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->rem_BG.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->rem_BG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->rem_BG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->rem_BG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->rem_BG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->rem_BG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->rem_BG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->rem_BG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->rem_BG.missed = kcg_true;
  outC->storedBG_loc.valid = kcg_true;
  outC->storedBG_loc.nid_c = 0;
  outC->storedBG_loc.nid_bg = 0;
  outC->storedBG_loc.q_link = Q_LINK_Unlinked;
  outC->storedBG_loc.location.nominal = 0;
  outC->storedBG_loc.location.d_min = 0;
  outC->storedBG_loc.location.d_max = 0;
  outC->storedBG_loc.seqNoOnTrack = 0;
  outC->storedBG_loc.infoFromLinking.valid = kcg_true;
  outC->storedBG_loc.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->storedBG_loc.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->storedBG_loc.infoFromLinking.expectedLocation.nominal = 0;
  outC->storedBG_loc.infoFromLinking.expectedLocation.d_min = 0;
  outC->storedBG_loc.infoFromLinking.expectedLocation.d_max = 0;
  outC->storedBG_loc.infoFromLinking.d_link.nominal = 0;
  outC->storedBG_loc.infoFromLinking.d_link.d_min = 0;
  outC->storedBG_loc.infoFromLinking.d_link.d_max = 0;
  outC->storedBG_loc.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->storedBG_loc.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->storedBG_loc.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->storedBG_loc.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->storedBG_loc.infoFromLinking.linkingInfo.d_link = 0;
  outC->storedBG_loc.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->storedBG_loc.infoFromLinking.linkingInfo.nid_c = 0;
  outC->storedBG_loc.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->storedBG_loc.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->storedBG_loc.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->storedBG_loc.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->storedBG_loc.infoFromPassing.valid = kcg_true;
  outC->storedBG_loc.infoFromPassing.BG_Header.valid = kcg_true;
  outC->storedBG_loc.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->storedBG_loc.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->storedBG_loc.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->storedBG_loc.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->storedBG_loc.infoFromPassing.BG_Header.m_mcount = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.nid_c = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.nid_bg = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storedBG_loc.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storedBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storedBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storedBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storedBG_loc.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->storedBG_loc.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->storedBG_loc.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->storedBG_loc.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i1 = 0; i1 < 33; i1++) {
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].valid = kcg_true;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].d_link = 0;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].nid_c = 0;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].nid_bg = 0;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->storedBG_loc.infoFromPassing.linkedBGs[i1].q_locacc = 0;
  }
  outC->storedBG_loc.missed = kcg_true;
  outC->prvBG_loc.valid = kcg_true;
  outC->prvBG_loc.nid_c = 0;
  outC->prvBG_loc.nid_bg = 0;
  outC->prvBG_loc.q_link = Q_LINK_Unlinked;
  outC->prvBG_loc.location.nominal = 0;
  outC->prvBG_loc.location.d_min = 0;
  outC->prvBG_loc.location.d_max = 0;
  outC->prvBG_loc.seqNoOnTrack = 0;
  outC->prvBG_loc.infoFromLinking.valid = kcg_true;
  outC->prvBG_loc.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->prvBG_loc.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->prvBG_loc.infoFromLinking.expectedLocation.nominal = 0;
  outC->prvBG_loc.infoFromLinking.expectedLocation.d_min = 0;
  outC->prvBG_loc.infoFromLinking.expectedLocation.d_max = 0;
  outC->prvBG_loc.infoFromLinking.d_link.nominal = 0;
  outC->prvBG_loc.infoFromLinking.d_link.d_min = 0;
  outC->prvBG_loc.infoFromLinking.d_link.d_max = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->prvBG_loc.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->prvBG_loc.infoFromLinking.linkingInfo.d_link = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->prvBG_loc.infoFromLinking.linkingInfo.nid_c = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->prvBG_loc.infoFromPassing.valid = kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.valid = kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->prvBG_loc.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->prvBG_loc.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->prvBG_loc.infoFromPassing.BG_Header.m_mcount = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.nid_c = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.nid_bg = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->prvBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->prvBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->prvBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->prvBG_loc.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i2 = 0; i2 < 33; i2++) {
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].valid = kcg_true;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].nid_LRBG = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].q_dir = Q_DIR_Reverse;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].q_scale = Q_SCALE_10_cm_scale;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].d_link = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].nid_c = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].nid_bg = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i2].q_locacc = 0;
  }
  outC->prvBG_loc.missed = kcg_true;
  outC->_L8_2.valid = kcg_true;
  outC->_L8_2.nid_c = 0;
  outC->_L8_2.nid_bg = 0;
  outC->_L8_2.q_link = Q_LINK_Unlinked;
  outC->_L8_2.location.nominal = 0;
  outC->_L8_2.location.d_min = 0;
  outC->_L8_2.location.d_max = 0;
  outC->_L8_2.seqNoOnTrack = 0;
  outC->_L8_2.infoFromLinking.valid = kcg_true;
  outC->_L8_2.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L8_2.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L8_2.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L8_2.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L8_2.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L8_2.infoFromLinking.d_link.nominal = 0;
  outC->_L8_2.infoFromLinking.d_link.d_min = 0;
  outC->_L8_2.infoFromLinking.d_link.d_max = 0;
  outC->_L8_2.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8_2.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L8_2.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8_2.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_2.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L8_2.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8_2.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L8_2.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L8_2.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8_2.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8_2.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L8_2.infoFromPassing.valid = kcg_true;
  outC->_L8_2.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8_2.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8_2.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_2.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_2.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8_2.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L8_2.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L8_2.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L8_2.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_2.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L8_2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L8_2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L8_2.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L8_2.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_2.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_2.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i3 = 0; i3 < 33; i3++) {
    outC->_L8_2.infoFromPassing.linkedBGs[i3].valid = kcg_true;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].nid_LRBG = 0;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].q_dir = Q_DIR_Reverse;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].d_link = 0;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].nid_c = 0;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].nid_bg = 0;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8_2.infoFromPassing.linkedBGs[i3].q_locacc = 0;
  }
  outC->_L8_2.missed = kcg_true;
  outC->_L8_1.valid = kcg_true;
  outC->_L8_1.nid_c = 0;
  outC->_L8_1.nid_bg = 0;
  outC->_L8_1.q_link = Q_LINK_Unlinked;
  outC->_L8_1.location.nominal = 0;
  outC->_L8_1.location.d_min = 0;
  outC->_L8_1.location.d_max = 0;
  outC->_L8_1.seqNoOnTrack = 0;
  outC->_L8_1.infoFromLinking.valid = kcg_true;
  outC->_L8_1.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L8_1.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L8_1.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L8_1.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L8_1.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L8_1.infoFromLinking.d_link.nominal = 0;
  outC->_L8_1.infoFromLinking.d_link.d_min = 0;
  outC->_L8_1.infoFromLinking.d_link.d_max = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8_1.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8_1.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_1.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8_1.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8_1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8_1.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L8_1.infoFromPassing.valid = kcg_true;
  outC->_L8_1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8_1.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8_1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_1.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8_1.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L8_1.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L8_1.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L8_1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L8_1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L8_1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L8_1.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L8_1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i4 = 0; i4 < 33; i4++) {
    outC->_L8_1.infoFromPassing.linkedBGs[i4].valid = kcg_true;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].nid_LRBG = 0;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].q_dir = Q_DIR_Reverse;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].d_link = 0;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].nid_c = 0;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].nid_bg = 0;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8_1.infoFromPassing.linkedBGs[i4].q_locacc = 0;
  }
  outC->_L8_1.missed = kcg_true;
  outC->lastBG.valid = kcg_true;
  outC->lastBG.nid_c = 0;
  outC->lastBG.nid_bg = 0;
  outC->lastBG.q_link = Q_LINK_Unlinked;
  outC->lastBG.location.nominal = 0;
  outC->lastBG.location.d_min = 0;
  outC->lastBG.location.d_max = 0;
  outC->lastBG.seqNoOnTrack = 0;
  outC->lastBG.infoFromLinking.valid = kcg_true;
  outC->lastBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->lastBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->lastBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->lastBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->lastBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->lastBG.infoFromLinking.d_link.nominal = 0;
  outC->lastBG.infoFromLinking.d_link.d_min = 0;
  outC->lastBG.infoFromLinking.d_link.d_max = 0;
  outC->lastBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->lastBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->lastBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->lastBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->lastBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->lastBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->lastBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->lastBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->lastBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->lastBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->lastBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->lastBG.infoFromPassing.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->lastBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->lastBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->lastBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->lastBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->lastBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->lastBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->lastBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->lastBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->lastBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->lastBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i5 = 0; i5 < 33; i5++) {
    outC->lastBG.infoFromPassing.linkedBGs[i5].valid = kcg_true;
    outC->lastBG.infoFromPassing.linkedBGs[i5].nid_LRBG = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i5].q_dir = Q_DIR_Reverse;
    outC->lastBG.infoFromPassing.linkedBGs[i5].q_scale = Q_SCALE_10_cm_scale;
    outC->lastBG.infoFromPassing.linkedBGs[i5].d_link = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->lastBG.infoFromPassing.linkedBGs[i5].nid_c = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i5].nid_bg = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->lastBG.infoFromPassing.linkedBGs[i5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->lastBG.infoFromPassing.linkedBGs[i5].q_locacc = 0;
  }
  outC->lastBG.missed = kcg_true;
  outC->prvBG.valid = kcg_true;
  outC->prvBG.nid_c = 0;
  outC->prvBG.nid_bg = 0;
  outC->prvBG.q_link = Q_LINK_Unlinked;
  outC->prvBG.location.nominal = 0;
  outC->prvBG.location.d_min = 0;
  outC->prvBG.location.d_max = 0;
  outC->prvBG.seqNoOnTrack = 0;
  outC->prvBG.infoFromLinking.valid = kcg_true;
  outC->prvBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->prvBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->prvBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->prvBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->prvBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->prvBG.infoFromLinking.d_link.nominal = 0;
  outC->prvBG.infoFromLinking.d_link.d_min = 0;
  outC->prvBG.infoFromLinking.d_link.d_max = 0;
  outC->prvBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->prvBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->prvBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->prvBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->prvBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->prvBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->prvBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->prvBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->prvBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->prvBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->prvBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->prvBG.infoFromPassing.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->prvBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->prvBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->prvBG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->prvBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->prvBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->prvBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->prvBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->prvBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->prvBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->prvBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i6 = 0; i6 < 33; i6++) {
    outC->prvBG.infoFromPassing.linkedBGs[i6].valid = kcg_true;
    outC->prvBG.infoFromPassing.linkedBGs[i6].nid_LRBG = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i6].q_dir = Q_DIR_Reverse;
    outC->prvBG.infoFromPassing.linkedBGs[i6].q_scale = Q_SCALE_10_cm_scale;
    outC->prvBG.infoFromPassing.linkedBGs[i6].d_link = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->prvBG.infoFromPassing.linkedBGs[i6].nid_c = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i6].nid_bg = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->prvBG.infoFromPassing.linkedBGs[i6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->prvBG.infoFromPassing.linkedBGs[i6].q_locacc = 0;
  }
  outC->prvBG.missed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
void lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::reset */ kcg_bool reset,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::enable */ kcg_bool enable,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* linear::Memory::Out */
  static positionedBG_T_TrainPosition_Types_Pck Out_1;
  /* linear::Memory::InitVal */
  static positionedBG_T_TrainPosition_Types_Pck InitVal_1;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_1;
  /* linear::Memory::Reset */
  static kcg_bool Reset_1;
  /* linear::Memory::M_Input */
  static positionedBG_T_TrainPosition_Types_Pck M_Input_1;
  /* linear::Memory::_L9 */
  static positionedBG_T_TrainPosition_Types_Pck _L9_1;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_1;
  /* linear::Memory::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2_1;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_1;
  /* linear::Memory::_L5 */
  static positionedBG_T_TrainPosition_Types_Pck _L5_1;
  /* linear::Memory::_L6 */
  static positionedBG_T_TrainPosition_Types_Pck _L6_1;
  /* linear::Memory::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7_1;
  /* linear::Memory::Out */
  static positionedBG_T_TrainPosition_Types_Pck Out_2;
  /* linear::Memory::InitVal */
  static positionedBG_T_TrainPosition_Types_Pck InitVal_2;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_2;
  /* linear::Memory::Reset */
  static kcg_bool Reset_2;
  /* linear::Memory::M_Input */
  static positionedBG_T_TrainPosition_Types_Pck M_Input_2;
  /* linear::Memory::_L9 */
  static positionedBG_T_TrainPosition_Types_Pck _L9_2;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_2;
  /* linear::Memory::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2_2;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_2;
  /* linear::Memory::_L5 */
  static positionedBG_T_TrainPosition_Types_Pck _L5_2;
  /* linear::Memory::_L6 */
  static positionedBG_T_TrainPosition_Types_Pck _L6_2;
  /* linear::Memory::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7_2;
  static kcg_bool noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::storedBG_loc */
  static positionedBG_T_TrainPosition_Types_Pck last_storedBG_loc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::prvBG_loc */
  static positionedBG_T_TrainPosition_Types_Pck last_prvBG_loc;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */
  static positionedBG_T_TrainPosition_Types_Pck last_BG;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L9 */
  static kcg_bool _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L6 */
  static positionedBG_T_TrainPosition_Types_Pck _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L4 */
  static positionedBG_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L2 */
  static kcg_bool _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L10 */
  static positionedBG_T_TrainPosition_Types_Pck _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L12 */
  static kcg_bool _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L14 */
  static positionedBG_T_TrainPosition_Types_Pck _L14;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L15 */
  static positionedBG_T_TrainPosition_Types_Pck _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L16 */
  static kcg_bool _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L17 */
  static positionedBG_T_TrainPosition_Types_Pck _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L18 */
  static positionedBG_T_TrainPosition_Types_Pck _L18;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L19 */
  static kcg_bool _L19;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L20 */
  static kcg_bool _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L23 */
  static kcg_bool _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L22 */
  static kcg_bool _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L21 */
  static kcg_int _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L24 */
  static positionedBGs_T_TrainPosition_Types_Pck _L24;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L25 */
  static kcg_bool _L25;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L26 */
  static positionedBG_T_TrainPosition_Types_Pck _L26;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L27 */
  static positionedBG_T_TrainPosition_Types_Pck _L27;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L29 */
  static positionedBG_T_TrainPosition_Types_Pck _L29;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L37 */
  static Q_LINK _L37;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L36 */
  static Q_LINK _L36;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L35 */
  static kcg_bool _L35;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L34 */
  static Q_LINK _L34;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L33 */
  static Q_LINK _L33;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L32 */
  static kcg_bool _L32;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L38 */
  static kcg_bool _L38;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L39 */
  static kcg_bool _L39;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L40 */
  static kcg_bool _L40;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L41 */
  static positionedBG_T_TrainPosition_Types_Pck _L41;
  
  /* last_init_ck_prvBG_loc */ if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_prvBG_loc,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_prvBG_loc,
      &outC->prvBG_loc);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L6,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&InitVal_1, &_L6);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L9_1, &InitVal_1);
  /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5_1, &_L9_1);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5_1, &outC->_L8_1);
  }
  _L12 = reset;
  Reset_1 = _L12;
  _L1_1 = Reset_1;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2_1, &InitVal_1);
  /* last_init_ck_storedBG_loc */ if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_storedBG_loc,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_storedBG_loc,
      &outC->storedBG_loc);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L17, &last_storedBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&InitVal_2, &_L6);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L9_2, &InitVal_2);
  /* 2_fby_1_init_7 */ if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5_2, &_L9_2);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5_2, &outC->_L8_2);
  }
  Reset_2 = _L12;
  _L1_2 = Reset_2;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2_2, &InitVal_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L15, BG);
  _L16 = _L15.valid;
  _L39 = _L15.infoFromPassing.valid;
  _L40 = _L15.infoFromPassing.BG_Header.valid;
  _L37 = _L15.q_link;
  _L32 = linked;
  _L33 = Q_LINK_Linked;
  _L34 = Q_LINK_Unlinked;
  /* 2 */ if (_L32) {
    _L36 = _L33;
  }
  else {
    _L36 = _L34;
  }
  _L35 = _L37 == _L36;
  _L38 = _L16 & _L39 & _L40 & _L35;
  MemCond_2 = _L38;
  _L3_2 = MemCond_2;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&M_Input_2, &_L15);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L6_2, &M_Input_2);
  /* 4 */ if (_L3_2) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7_2, &_L6_2);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7_2, &_L5_2);
  }
  /* 1 */ if (_L1_2) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L8_2, &_L2_2);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L8_2, &_L7_2);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&Out_2, &outC->_L8_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L14, &Out_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->storedBG_loc, &_L14);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L18, &outC->storedBG_loc);
  _L13 = !kcg_comp_positionedBG_T_TrainPosition_Types_Pck(&_L17, &_L18);
  _L5 = _L18.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L10, &last_prvBG_loc);
  _L9 = /* 1 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L18,
      &_L10);
  _L2 = !_L9;
  _L19 = /* 2 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L18,
      &_L17);
  _L20 = !_L19;
  _L8 = _L13 & _L5 & _L2 & _L20;
  MemCond_1 = _L8;
  _L3_1 = MemCond_1;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&M_Input_1, &_L17);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L6_1, &M_Input_1);
  /* 4 */ if (_L3_1) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7_1, &_L6_1);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7_1, &_L5_1);
  }
  /* 1 */ if (_L1_1) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L8_1, &_L2_1);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L8_1, &_L7_1);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&Out_1, &outC->_L8_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L4, &Out_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG_loc, &_L4);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L41, &outC->prvBG_loc);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L24, BGs);
  _L25 = enable;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L41,
    &_L24,
    _L25,
    &_L21,
    &_L22,
    &_L23);
  if ((0 <= _L21) & (_L21 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L26, &_L24[_L21]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L26,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L29, &outC->prvBG_loc);
  /* 1 */ if (_L22) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L27, &_L26);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L27, &_L29);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG, &_L27);
  noname = _L23;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lastBG, &_L14);
  /* last_init_ck_BG */ if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_BG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&last_BG, &outC->rem_BG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->rem_BG, BG);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

