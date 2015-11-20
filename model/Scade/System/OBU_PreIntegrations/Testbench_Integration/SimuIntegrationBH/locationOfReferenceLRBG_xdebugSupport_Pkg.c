/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "locationOfReferenceLRBG_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void locationOfReferenceLRBG_init_xdebugSupport_Pkg(
  outC_locationOfReferenceLRBG_xdebugSupport_Pkg *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L22 = 0;
  outC->_L21.nominal = 0;
  outC->_L21.d_min = 0;
  outC->_L21.d_max = 0;
  outC->_L20.nid_engine = 0;
  outC->_L20.nid_operational = 0;
  outC->_L20.l_train = 0;
  outC->_L20.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L20.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L20.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L20.d_frontend_2_rearend.nominal = 0;
  outC->_L20.d_frontend_2_rearend.d_min = 0;
  outC->_L20.d_frontend_2_rearend.d_max = 0;
  outC->_L20.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L20.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L20.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L20.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L20.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L20.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L19 = 0;
  outC->_L18 = kcg_true;
  outC->_L17 = 0;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L13 = 0;
  outC->_L14 = 0;
  outC->_L12 = kcg_true;
  outC->_L10 = 0;
  outC->_L8 = 0;
  outC->_L7 = 0;
  outC->_L6.nominal = 0;
  outC->_L6.d_min = 0;
  outC->_L6.d_max = 0;
  outC->_L5 = 0;
  outC->_L4 = 0;
  outC->_L3.valid = kcg_true;
  outC->_L3.nid_c = 0;
  outC->_L3.nid_bg = 0;
  outC->_L3.q_link = Q_LINK_Unlinked;
  outC->_L3.location.nominal = 0;
  outC->_L3.location.d_min = 0;
  outC->_L3.location.d_max = 0;
  outC->_L3.seqNoOnTrack = 0;
  outC->_L3.infoFromLinking.valid = kcg_true;
  outC->_L3.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L3.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L3.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L3.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L3.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L3.infoFromLinking.d_link.nominal = 0;
  outC->_L3.infoFromLinking.d_link.d_min = 0;
  outC->_L3.infoFromLinking.d_link.d_max = 0;
  outC->_L3.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L3.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L3.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L3.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L3.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L3.infoFromPassing.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L3.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L3.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L3.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L3.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L3.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L3.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->_L3.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->_L3.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L3.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L3.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L3.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L3.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L3.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->_L3.missed = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.timestamp = 0;
  outC->_L1.trainPositionIsUnknown = kcg_true;
  outC->_L1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.trainPosition.nominal = 0;
  outC->_L1.trainPosition.d_min = 0;
  outC->_L1.trainPosition.d_max = 0;
  outC->_L1.estimatedFrontEndPosition = 0;
  outC->_L1.minSafeFrontEndPosition = 0;
  outC->_L1.maxSafeFrontEndPostion = 0;
  outC->_L1.LRBG.valid = kcg_true;
  outC->_L1.LRBG.nid_c = 0;
  outC->_L1.LRBG.nid_bg = 0;
  outC->_L1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.LRBG.location.nominal = 0;
  outC->_L1.LRBG.location.d_min = 0;
  outC->_L1.LRBG.location.d_max = 0;
  outC->_L1.LRBG.seqNoOnTrack = 0;
  outC->_L1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].valid = kcg_true;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].d_link = 0;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].nid_c = 0;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].nid_bg = 0;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[i1].q_locacc = 0;
  }
  outC->_L1.LRBG.missed = kcg_true;
  outC->_L1.prvLRBG.valid = kcg_true;
  outC->_L1.prvLRBG.nid_c = 0;
  outC->_L1.prvLRBG.nid_bg = 0;
  outC->_L1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.prvLRBG.location.nominal = 0;
  outC->_L1.prvLRBG.location.d_min = 0;
  outC->_L1.prvLRBG.location.d_max = 0;
  outC->_L1.prvLRBG.seqNoOnTrack = 0;
  outC->_L1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].valid = kcg_true;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].nid_LRBG = 0;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].q_dir = Q_DIR_Reverse;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].d_link = 0;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].nid_c = 0;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].nid_bg = 0;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[i2].q_locacc = 0;
  }
  outC->_L1.prvLRBG.missed = kcg_true;
  outC->_L1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1.linkingIsUsedOnboard = kcg_true;
  outC->_L1.estimatedRearEndPosition = 0;
  outC->_L1.minSafeRearEndPosition = 0;
  outC->_L1.maxSafeRearEndPosition = 0;
  outC->passed = kcg_true;
  outC->position = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void locationOfReferenceLRBG_reset_xdebugSupport_Pkg(
  outC_locationOfReferenceLRBG_xdebugSupport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::locationOfReferenceLRBG */
void locationOfReferenceLRBG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::LRBG */ NID_LRBG LRBG,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::locationOfReferenceLRBG::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_locationOfReferenceLRBG_xdebugSupport_Pkg *outC)
{
  static kcg_bool noname;
  
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L1, trainPosition);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L3, &outC->_L1.LRBG);
  outC->_L2 = outC->_L3.valid;
  outC->_L4 = outC->_L3.nid_c;
  outC->_L5 = outC->_L3.nid_bg;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L6, &outC->_L3.location);
  outC->_L7 = outC->_L6.nominal;
  outC->_L10 = LRBG;
  /* 1 */ Decode_NID_LRBG_TM(outC->_L10, &outC->_L13, &outC->_L14);
  outC->_L15 = outC->_L13 == outC->_L4;
  outC->_L12 = outC->_L14 == outC->_L5;
  outC->_L16 = outC->_L15 & outC->_L12;
  outC->_L17 = outC->_L1.estimatedFrontEndPosition;
  /* 1 */ if (outC->_L16) {
    outC->_L8 = outC->_L7;
  }
  else {
    outC->_L8 = outC->_L17;
  }
  outC->_L18 = kcg_true;
  outC->passed = outC->_L18;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L20,
    trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L21,
    &outC->_L20.d_baliseAntenna_2_frontend);
  outC->_L22 = outC->_L21.nominal;
  outC->_L19 = outC->_L8 + outC->_L22;
  outC->position = outC->_L19;
  noname = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** locationOfReferenceLRBG_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

