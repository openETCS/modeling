/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dataForLevelTransition_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void dataForLevelTransition_init_xdebugSupport_Pkg(
  outC_dataForLevelTransition_xdebugSupport_Pkg *outC)
{
  static kcg_int i41;
  static kcg_int i40;
  static kcg_int i39;
  static kcg_int i38;
  static kcg_int i37;
  static kcg_int i36;
  static kcg_int i35;
  static kcg_int i34;
  static kcg_int i33;
  static kcg_int i32;
  static kcg_int i31;
  static kcg_int i30;
  static kcg_int i29;
  static kcg_int i28;
  static kcg_int i27;
  static kcg_int i26;
  static kcg_int i25;
  static kcg_int i24;
  static kcg_int i23;
  static kcg_int i22;
  static kcg_int i21;
  static kcg_int i20;
  static kcg_int i19;
  static kcg_int i18;
  static kcg_int i17;
  static kcg_int i16;
  static kcg_int i15;
  static kcg_int i14;
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L125.nid_engine = 0;
  outC->_L125.nid_operational = 0;
  outC->_L125.l_train = 0;
  outC->_L125.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L125.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L125.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L125.d_frontend_2_rearend.nominal = 0;
  outC->_L125.d_frontend_2_rearend.d_min = 0;
  outC->_L125.d_frontend_2_rearend.d_max = 0;
  outC->_L125.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L125.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L125.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L125.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L125.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L125.centerDetectionAcc_DefaultValue.d_max = 0;
  for (i = 0; i < 7; i++) {
    outC->_L124[i].valid = kcg_true;
    outC->_L124[i].q_dir = Q_DIR_Reverse;
    outC->_L124[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124[i].d_leveltr = 0;
    outC->_L124[i].m_leveltr = M_LEVELTR_Level_0;
    outC->_L124[i].nid_ntc = 0;
    outC->_L124[i].l_ackleveltr = 0;
  }
  for (i1 = 0; i1 < 7; i1++) {
    outC->_L123[i1].valid = kcg_true;
    outC->_L123[i1].q_dir = Q_DIR_Reverse;
    outC->_L123[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L123[i1].d_leveltr = 0;
    outC->_L123[i1].m_leveltr = M_LEVELTR_Level_0;
    outC->_L123[i1].nid_ntc = 0;
    outC->_L123[i1].l_ackleveltr = 0;
  }
  outC->_L122 = M_LEVEL_Level_0;
  outC->_L121 = kcg_true;
  outC->_L120 = kcg_true;
  outC->_L119 = M_LEVEL_Level_0;
  outC->_L117 = M_LEVEL_Level_0;
  outC->_L116 = 0;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L78 = 0;
  outC->_L77 = kcg_true;
  outC->_L76 = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L75[i2].nid_packet = 0;
    outC->_L75[i2].q_dir = Q_DIR_Reverse;
    outC->_L75[i2].valid = kcg_true;
    outC->_L75[i2].startAddress = 0;
    outC->_L75[i2].endAddress = 0;
  }
  outC->_L74 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65 = 0;
  for (i3 = 0; i3 < 7; i3++) {
    outC->_L63.p41[i3].valid = kcg_true;
    outC->_L63.p41[i3].q_dir = Q_DIR_Reverse;
    outC->_L63.p41[i3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L63.p41[i3].d_leveltr = 0;
    outC->_L63.p41[i3].m_leveltr = M_LEVELTR_Level_0;
    outC->_L63.p41[i3].nid_ntc = 0;
    outC->_L63.p41[i3].l_ackleveltr = 0;
  }
  for (i4 = 0; i4 < 7; i4++) {
    outC->_L63.p46[i4].valid = kcg_true;
    outC->_L63.p46[i4].q_dir = Q_DIR_Reverse;
    outC->_L63.p46[i4].m_leveltr = M_LEVELTR_Level_0;
    outC->_L63.p46[i4].nid_ntc = 0;
  }
  outC->_L63.p12_received = kcg_true;
  outC->_L63.p15_received = kcg_true;
  outC->_L63.p21_received = kcg_true;
  outC->_L63.p27_received = kcg_true;
  outC->_L63.LRBG = 0;
  outC->_L63.referenceLocation = 0;
  outC->_L62.valid = kcg_true;
  outC->_L62.timestamp = 0;
  outC->_L62.trainPositionIsUnknown = kcg_true;
  outC->_L62.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L62.trainPosition.nominal = 0;
  outC->_L62.trainPosition.d_min = 0;
  outC->_L62.trainPosition.d_max = 0;
  outC->_L62.estimatedFrontEndPosition = 0;
  outC->_L62.minSafeFrontEndPosition = 0;
  outC->_L62.maxSafeFrontEndPostion = 0;
  outC->_L62.LRBG.valid = kcg_true;
  outC->_L62.LRBG.nid_c = 0;
  outC->_L62.LRBG.nid_bg = 0;
  outC->_L62.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L62.LRBG.location.nominal = 0;
  outC->_L62.LRBG.location.d_min = 0;
  outC->_L62.LRBG.location.d_max = 0;
  outC->_L62.LRBG.seqNoOnTrack = 0;
  outC->_L62.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L62.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L62.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L62.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L62.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L62.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L62.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L62.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L62.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L62.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L62.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L62.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L62.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L62.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L62.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L62.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L62.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L62.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L62.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i5 = 0; i5 < 33; i5++) {
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].valid = kcg_true;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].nid_LRBG = 0;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].q_dir = Q_DIR_Reverse;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].d_link = 0;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].nid_c = 0;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].nid_bg = 0;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.LRBG.infoFromPassing.linkedBGs[i5].q_locacc = 0;
  }
  outC->_L62.LRBG.missed = kcg_true;
  outC->_L62.prvLRBG.valid = kcg_true;
  outC->_L62.prvLRBG.nid_c = 0;
  outC->_L62.prvLRBG.nid_bg = 0;
  outC->_L62.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L62.prvLRBG.location.nominal = 0;
  outC->_L62.prvLRBG.location.d_min = 0;
  outC->_L62.prvLRBG.location.d_max = 0;
  outC->_L62.prvLRBG.seqNoOnTrack = 0;
  outC->_L62.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L62.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L62.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L62.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L62.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L62.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L62.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L62.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L62.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L62.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L62.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i6 = 0; i6 < 33; i6++) {
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].valid = kcg_true;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].nid_LRBG = 0;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].q_dir = Q_DIR_Reverse;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].d_link = 0;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].nid_c = 0;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].nid_bg = 0;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.prvLRBG.infoFromPassing.linkedBGs[i6].q_locacc = 0;
  }
  outC->_L62.prvLRBG.missed = kcg_true;
  outC->_L62.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L62.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L62.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L62.linkingIsUsedOnboard = kcg_true;
  outC->_L62.estimatedRearEndPosition = 0;
  outC->_L62.minSafeRearEndPosition = 0;
  outC->_L62.maxSafeRearEndPosition = 0;
  outC->_L60 = kcg_true;
  outC->_L61 = 0;
  for (i7 = 0; i7 < 7; i7++) {
    outC->_L59.p41[i7].valid = kcg_true;
    outC->_L59.p41[i7].q_dir = Q_DIR_Reverse;
    outC->_L59.p41[i7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L59.p41[i7].d_leveltr = 0;
    outC->_L59.p41[i7].m_leveltr = M_LEVELTR_Level_0;
    outC->_L59.p41[i7].nid_ntc = 0;
    outC->_L59.p41[i7].l_ackleveltr = 0;
  }
  for (i8 = 0; i8 < 7; i8++) {
    outC->_L59.p46[i8].valid = kcg_true;
    outC->_L59.p46[i8].q_dir = Q_DIR_Reverse;
    outC->_L59.p46[i8].m_leveltr = M_LEVELTR_Level_0;
    outC->_L59.p46[i8].nid_ntc = 0;
  }
  outC->_L59.p12_received = kcg_true;
  outC->_L59.p15_received = kcg_true;
  outC->_L59.p21_received = kcg_true;
  outC->_L59.p27_received = kcg_true;
  outC->_L59.LRBG = 0;
  outC->_L59.referenceLocation = 0;
  outC->_L55 = 0;
  outC->_L54 = kcg_true;
  outC->_L49.valid = kcg_true;
  outC->_L49.source = msrc_undefined_Common_Types_Pkg;
  outC->_L49.radioMetadata.t_train_reference = kcg_true;
  outC->_L49.radioMetadata.nid_em = kcg_true;
  outC->_L49.radioMetadata.q_scale = kcg_true;
  outC->_L49.radioMetadata.d_sr = kcg_true;
  outC->_L49.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L49.radioMetadata.d_ref = kcg_true;
  outC->_L49.radioMetadata.q_dir = kcg_true;
  outC->_L49.radioMetadata.d_emergencystop = kcg_true;
  outC->_L49.radioMetadata.m_version = kcg_true;
  outC->_L49.BG_Common_Header.valid = kcg_true;
  outC->_L49.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L49.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L49.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L49.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L49.BG_Common_Header.m_mcount = 0;
  outC->_L49.BG_Common_Header.nid_c = 0;
  outC->_L49.BG_Common_Header.nid_bg = 0;
  outC->_L49.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L49.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L49.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L49.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L49.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L49.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L49.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L49.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L49.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L49.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L49.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L49.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L49.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L49.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L49.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L49.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L49.BG_Common_Header.q_nvlocacc = 0;
  outC->_L49.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L49.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L49.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L49.Radio_Common_Header.radioDevice = 0;
  outC->_L49.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L49.Radio_Common_Header.nid_message = 0;
  outC->_L49.Radio_Common_Header.t_train = 0;
  outC->_L49.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L49.Radio_Common_Header.nid_lrbg = 0;
  outC->_L49.Radio_Common_Header.t_train_reference = 0;
  outC->_L49.Radio_Common_Header.nid_em = 0;
  outC->_L49.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L49.Radio_Common_Header.d_sr = 0;
  outC->_L49.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L49.Radio_Common_Header.d_ref = 0;
  outC->_L49.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L49.Radio_Common_Header.d_emergencystop = 0;
  outC->_L49.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i9 = 0; i9 < 30; i9++) {
    outC->_L49.packets.PacketHeaders[i9].nid_packet = 0;
    outC->_L49.packets.PacketHeaders[i9].q_dir = Q_DIR_Reverse;
    outC->_L49.packets.PacketHeaders[i9].valid = kcg_true;
    outC->_L49.packets.PacketHeaders[i9].startAddress = 0;
    outC->_L49.packets.PacketHeaders[i9].endAddress = 0;
  }
  for (i10 = 0; i10 < 500; i10++) {
    outC->_L49.packets.PacketData[i10] = 0;
  }
  outC->_L49.sendingRBC.valid = kcg_true;
  outC->_L49.sendingRBC.nid_c = 0;
  outC->_L49.sendingRBC.rbc_id = 0;
  outC->_L49.sendingRBC.device_id = 0;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L43 = kcg_true;
  for (i11 = 0; i11 < 7; i11++) {
    outC->_L40.p41[i11].valid = kcg_true;
    outC->_L40.p41[i11].q_dir = Q_DIR_Reverse;
    outC->_L40.p41[i11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L40.p41[i11].d_leveltr = 0;
    outC->_L40.p41[i11].m_leveltr = M_LEVELTR_Level_0;
    outC->_L40.p41[i11].nid_ntc = 0;
    outC->_L40.p41[i11].l_ackleveltr = 0;
  }
  for (i12 = 0; i12 < 7; i12++) {
    outC->_L40.p46[i12].valid = kcg_true;
    outC->_L40.p46[i12].q_dir = Q_DIR_Reverse;
    outC->_L40.p46[i12].m_leveltr = M_LEVELTR_Level_0;
    outC->_L40.p46[i12].nid_ntc = 0;
  }
  outC->_L40.p12_received = kcg_true;
  outC->_L40.p15_received = kcg_true;
  outC->_L40.p21_received = kcg_true;
  outC->_L40.p27_received = kcg_true;
  outC->_L40.LRBG = 0;
  outC->_L40.referenceLocation = 0;
  outC->_L38.valid = kcg_true;
  outC->_L38.q_dir = Q_DIR_Reverse;
  outC->_L38.q_scale = Q_SCALE_10_cm_scale;
  outC->_L38.d_static = 0;
  outC->_L38.v_static = 0;
  outC->_L38.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i13 = 0; i13 < 7; i13++) {
    outC->_L38.diffArray[i13].valid = kcg_true;
    outC->_L38.diffArray[i13].q_diff = Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L38.diffArray[i13].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L38.diffArray[i13].nc_diff = 0;
    outC->_L38.diffArray[i13].v_diff = 0;
  }
  for (i15 = 0; i15 < 7; i15++) {
    outC->_L38.SSPArray[i15].valid = kcg_true;
    outC->_L38.SSPArray[i15].d_static = 0;
    outC->_L38.SSPArray[i15].v_static = 0;
    outC->_L38.SSPArray[i15].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i14 = 0; i14 < 7; i14++) {
      outC->_L38.SSPArray[i15].diffArray[i14].valid = kcg_true;
      outC->_L38.SSPArray[i15].diffArray[i14].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L38.SSPArray[i15].diffArray[i14].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L38.SSPArray[i15].diffArray[i14].nc_diff = 0;
      outC->_L38.SSPArray[i15].diffArray[i14].v_diff = 0;
    }
  }
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L33 = kcg_true;
  for (i16 = 0; i16 < 7; i16++) {
    outC->_L32.p41[i16].valid = kcg_true;
    outC->_L32.p41[i16].q_dir = Q_DIR_Reverse;
    outC->_L32.p41[i16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L32.p41[i16].d_leveltr = 0;
    outC->_L32.p41[i16].m_leveltr = M_LEVELTR_Level_0;
    outC->_L32.p41[i16].nid_ntc = 0;
    outC->_L32.p41[i16].l_ackleveltr = 0;
  }
  for (i17 = 0; i17 < 7; i17++) {
    outC->_L32.p46[i17].valid = kcg_true;
    outC->_L32.p46[i17].q_dir = Q_DIR_Reverse;
    outC->_L32.p46[i17].m_leveltr = M_LEVELTR_Level_0;
    outC->_L32.p46[i17].nid_ntc = 0;
  }
  outC->_L32.p12_received = kcg_true;
  outC->_L32.p15_received = kcg_true;
  outC->_L32.p21_received = kcg_true;
  outC->_L32.p27_received = kcg_true;
  outC->_L32.LRBG = 0;
  outC->_L32.referenceLocation = 0;
  for (i18 = 0; i18 < 7; i18++) {
    outC->_L31.p41[i18].valid = kcg_true;
    outC->_L31.p41[i18].q_dir = Q_DIR_Reverse;
    outC->_L31.p41[i18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L31.p41[i18].d_leveltr = 0;
    outC->_L31.p41[i18].m_leveltr = M_LEVELTR_Level_0;
    outC->_L31.p41[i18].nid_ntc = 0;
    outC->_L31.p41[i18].l_ackleveltr = 0;
  }
  for (i19 = 0; i19 < 7; i19++) {
    outC->_L31.p46[i19].valid = kcg_true;
    outC->_L31.p46[i19].q_dir = Q_DIR_Reverse;
    outC->_L31.p46[i19].m_leveltr = M_LEVELTR_Level_0;
    outC->_L31.p46[i19].nid_ntc = 0;
  }
  outC->_L31.p12_received = kcg_true;
  outC->_L31.p15_received = kcg_true;
  outC->_L31.p21_received = kcg_true;
  outC->_L31.p27_received = kcg_true;
  outC->_L31.LRBG = 0;
  outC->_L31.referenceLocation = 0;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  for (i20 = 0; i20 < 7; i20++) {
    outC->_L28[i20].valid = kcg_true;
    outC->_L28[i20].q_dir = Q_DIR_Reverse;
    outC->_L28[i20].m_leveltr = M_LEVELTR_Level_0;
    outC->_L28[i20].nid_ntc = 0;
  }
  for (i21 = 0; i21 < 7; i21++) {
    outC->_L27.p41[i21].valid = kcg_true;
    outC->_L27.p41[i21].q_dir = Q_DIR_Reverse;
    outC->_L27.p41[i21].q_scale = Q_SCALE_10_cm_scale;
    outC->_L27.p41[i21].d_leveltr = 0;
    outC->_L27.p41[i21].m_leveltr = M_LEVELTR_Level_0;
    outC->_L27.p41[i21].nid_ntc = 0;
    outC->_L27.p41[i21].l_ackleveltr = 0;
  }
  for (i22 = 0; i22 < 7; i22++) {
    outC->_L27.p46[i22].valid = kcg_true;
    outC->_L27.p46[i22].q_dir = Q_DIR_Reverse;
    outC->_L27.p46[i22].m_leveltr = M_LEVELTR_Level_0;
    outC->_L27.p46[i22].nid_ntc = 0;
  }
  outC->_L27.p12_received = kcg_true;
  outC->_L27.p15_received = kcg_true;
  outC->_L27.p21_received = kcg_true;
  outC->_L27.p27_received = kcg_true;
  outC->_L27.LRBG = 0;
  outC->_L27.referenceLocation = 0;
  for (i23 = 0; i23 < 7; i23++) {
    outC->_L26.p41[i23].valid = kcg_true;
    outC->_L26.p41[i23].q_dir = Q_DIR_Reverse;
    outC->_L26.p41[i23].q_scale = Q_SCALE_10_cm_scale;
    outC->_L26.p41[i23].d_leveltr = 0;
    outC->_L26.p41[i23].m_leveltr = M_LEVELTR_Level_0;
    outC->_L26.p41[i23].nid_ntc = 0;
    outC->_L26.p41[i23].l_ackleveltr = 0;
  }
  for (i24 = 0; i24 < 7; i24++) {
    outC->_L26.p46[i24].valid = kcg_true;
    outC->_L26.p46[i24].q_dir = Q_DIR_Reverse;
    outC->_L26.p46[i24].m_leveltr = M_LEVELTR_Level_0;
    outC->_L26.p46[i24].nid_ntc = 0;
  }
  outC->_L26.p12_received = kcg_true;
  outC->_L26.p15_received = kcg_true;
  outC->_L26.p21_received = kcg_true;
  outC->_L26.p27_received = kcg_true;
  outC->_L26.LRBG = 0;
  outC->_L26.referenceLocation = 0;
  for (i25 = 0; i25 < 7; i25++) {
    outC->_L25.p41[i25].valid = kcg_true;
    outC->_L25.p41[i25].q_dir = Q_DIR_Reverse;
    outC->_L25.p41[i25].q_scale = Q_SCALE_10_cm_scale;
    outC->_L25.p41[i25].d_leveltr = 0;
    outC->_L25.p41[i25].m_leveltr = M_LEVELTR_Level_0;
    outC->_L25.p41[i25].nid_ntc = 0;
    outC->_L25.p41[i25].l_ackleveltr = 0;
  }
  for (i26 = 0; i26 < 7; i26++) {
    outC->_L25.p46[i26].valid = kcg_true;
    outC->_L25.p46[i26].q_dir = Q_DIR_Reverse;
    outC->_L25.p46[i26].m_leveltr = M_LEVELTR_Level_0;
    outC->_L25.p46[i26].nid_ntc = 0;
  }
  outC->_L25.p12_received = kcg_true;
  outC->_L25.p15_received = kcg_true;
  outC->_L25.p21_received = kcg_true;
  outC->_L25.p27_received = kcg_true;
  outC->_L25.LRBG = 0;
  outC->_L25.referenceLocation = 0;
  for (i27 = 0; i27 < 7; i27++) {
    outC->_L24[i27].valid = kcg_true;
    outC->_L24[i27].q_dir = Q_DIR_Reverse;
    outC->_L24[i27].q_scale = Q_SCALE_10_cm_scale;
    outC->_L24[i27].d_leveltr = 0;
    outC->_L24[i27].m_leveltr = M_LEVELTR_Level_0;
    outC->_L24[i27].nid_ntc = 0;
    outC->_L24[i27].l_ackleveltr = 0;
  }
  for (i28 = 0; i28 < 7; i28++) {
    outC->_L23.p41[i28].valid = kcg_true;
    outC->_L23.p41[i28].q_dir = Q_DIR_Reverse;
    outC->_L23.p41[i28].q_scale = Q_SCALE_10_cm_scale;
    outC->_L23.p41[i28].d_leveltr = 0;
    outC->_L23.p41[i28].m_leveltr = M_LEVELTR_Level_0;
    outC->_L23.p41[i28].nid_ntc = 0;
    outC->_L23.p41[i28].l_ackleveltr = 0;
  }
  for (i29 = 0; i29 < 7; i29++) {
    outC->_L23.p46[i29].valid = kcg_true;
    outC->_L23.p46[i29].q_dir = Q_DIR_Reverse;
    outC->_L23.p46[i29].m_leveltr = M_LEVELTR_Level_0;
    outC->_L23.p46[i29].nid_ntc = 0;
  }
  outC->_L23.p12_received = kcg_true;
  outC->_L23.p15_received = kcg_true;
  outC->_L23.p21_received = kcg_true;
  outC->_L23.p27_received = kcg_true;
  outC->_L23.LRBG = 0;
  outC->_L23.referenceLocation = 0;
  outC->_L20 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.q_dir = Q_DIR_Reverse;
  outC->_L21.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.n_iter = 0;
  for (i30 = 0; i30 < 33; i30++) {
    outC->_L21.sections[i30].valid = kcg_true;
    outC->_L21.sections[i30].d_gradient = 0;
    outC->_L21.sections[i30].q_gdir = Q_GDIR_downhill;
    outC->_L21.sections[i30].g_a = 0;
  }
  for (i31 = 0; i31 < 30; i31++) {
    outC->_L19.PacketHeaders[i31].nid_packet = 0;
    outC->_L19.PacketHeaders[i31].q_dir = Q_DIR_Reverse;
    outC->_L19.PacketHeaders[i31].valid = kcg_true;
    outC->_L19.PacketHeaders[i31].startAddress = 0;
    outC->_L19.PacketHeaders[i31].endAddress = 0;
  }
  for (i32 = 0; i32 < 500; i32++) {
    outC->_L19.PacketData[i32] = 0;
  }
  for (i33 = 0; i33 < 7; i33++) {
    outC->_L18[i33].valid = kcg_true;
    outC->_L18[i33].q_dir = Q_DIR_Reverse;
    outC->_L18[i33].q_scale = Q_SCALE_10_cm_scale;
    outC->_L18[i33].d_leveltr = 0;
    outC->_L18[i33].m_leveltr = M_LEVELTR_Level_0;
    outC->_L18[i33].nid_ntc = 0;
    outC->_L18[i33].l_ackleveltr = 0;
  }
  for (i34 = 0; i34 < 7; i34++) {
    outC->_L13[i34].valid = kcg_true;
    outC->_L13[i34].q_dir = Q_DIR_Reverse;
    outC->_L13[i34].q_scale = Q_SCALE_10_cm_scale;
    outC->_L13[i34].d_leveltr = 0;
    outC->_L13[i34].m_leveltr = M_LEVELTR_Level_0;
    outC->_L13[i34].nid_ntc = 0;
    outC->_L13[i34].l_ackleveltr = 0;
  }
  for (i35 = 0; i35 < 7; i35++) {
    outC->_L11[i35].valid = kcg_true;
    outC->_L11[i35].q_dir = Q_DIR_Reverse;
    outC->_L11[i35].m_leveltr = M_LEVELTR_Level_0;
    outC->_L11[i35].nid_ntc = 0;
  }
  for (i36 = 0; i36 < 7; i36++) {
    outC->_L10[i36].valid = kcg_true;
    outC->_L10[i36].q_dir = Q_DIR_Reverse;
    outC->_L10[i36].m_leveltr = M_LEVELTR_Level_0;
    outC->_L10[i36].nid_ntc = 0;
  }
  outC->_L4.valid = kcg_true;
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.v_loa = 0;
  outC->_L4.t_loa = 0;
  outC->_L4.n_iter = 0;
  for (i37 = 0; i37 < 32; i37++) {
    outC->_L4.sections[i37].valid = kcg_true;
    outC->_L4.sections[i37].l_section = 0;
    outC->_L4.sections[i37].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L4.sections[i37].t_sectiontimer = 0;
    outC->_L4.sections[i37].d_sectiontimerstoploc = 0;
  }
  outC->_L4.l_endsection = 0;
  outC->_L4.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L4.t_sectiontimer = 0;
  outC->_L4.d_sectiontimerstoploc = 0;
  outC->_L4.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L4.t_endtimer = 0;
  outC->_L4.d_endtimerstartloc = 0;
  outC->_L4.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L4.d_dp = 0;
  outC->_L4.v_releasedp = 0;
  outC->_L4.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L4.d_startol = 0;
  outC->_L4.t_ol = 0;
  outC->_L4.d_ol = 0;
  outC->_L4.v_releaseol = 0;
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2.radioMetadata.t_train_reference = kcg_true;
  outC->_L2.radioMetadata.nid_em = kcg_true;
  outC->_L2.radioMetadata.q_scale = kcg_true;
  outC->_L2.radioMetadata.d_sr = kcg_true;
  outC->_L2.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2.radioMetadata.d_ref = kcg_true;
  outC->_L2.radioMetadata.q_dir = kcg_true;
  outC->_L2.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2.radioMetadata.m_version = kcg_true;
  outC->_L2.BG_Common_Header.valid = kcg_true;
  outC->_L2.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.BG_Common_Header.m_mcount = 0;
  outC->_L2.BG_Common_Header.nid_c = 0;
  outC->_L2.BG_Common_Header.nid_bg = 0;
  outC->_L2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L2.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L2.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L2.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L2.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L2.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L2.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L2.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L2.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L2.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L2.BG_Common_Header.q_nvlocacc = 0;
  outC->_L2.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L2.Radio_Common_Header.radioDevice = 0;
  outC->_L2.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L2.Radio_Common_Header.nid_message = 0;
  outC->_L2.Radio_Common_Header.t_train = 0;
  outC->_L2.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.Radio_Common_Header.nid_lrbg = 0;
  outC->_L2.Radio_Common_Header.t_train_reference = 0;
  outC->_L2.Radio_Common_Header.nid_em = 0;
  outC->_L2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.Radio_Common_Header.d_sr = 0;
  outC->_L2.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L2.Radio_Common_Header.d_ref = 0;
  outC->_L2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2.Radio_Common_Header.d_emergencystop = 0;
  outC->_L2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i38 = 0; i38 < 30; i38++) {
    outC->_L2.packets.PacketHeaders[i38].nid_packet = 0;
    outC->_L2.packets.PacketHeaders[i38].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[i38].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[i38].startAddress = 0;
    outC->_L2.packets.PacketHeaders[i38].endAddress = 0;
  }
  for (i39 = 0; i39 < 500; i39++) {
    outC->_L2.packets.PacketData[i39] = 0;
  }
  outC->_L2.sendingRBC.valid = kcg_true;
  outC->_L2.sendingRBC.nid_c = 0;
  outC->_L2.sendingRBC.rbc_id = 0;
  outC->_L2.sendingRBC.device_id = 0;
  outC->ntcRequested = kcg_true;
  outC->p46Valid = kcg_true;
  outC->p41Valid = kcg_true;
  outC->_7_ck_every = kcg_true;
  outC->_6_ck_every = kcg_true;
  outC->_5_ck_every = kcg_true;
  outC->ck_every = kcg_true;
  outC->outPositionNeeded = kcg_true;
  for (i40 = 0; i40 < 7; i40++) {
    outC->outstoredData.p41[i40].valid = kcg_true;
    outC->outstoredData.p41[i40].q_dir = Q_DIR_Reverse;
    outC->outstoredData.p41[i40].q_scale = Q_SCALE_10_cm_scale;
    outC->outstoredData.p41[i40].d_leveltr = 0;
    outC->outstoredData.p41[i40].m_leveltr = M_LEVELTR_Level_0;
    outC->outstoredData.p41[i40].nid_ntc = 0;
    outC->outstoredData.p41[i40].l_ackleveltr = 0;
  }
  for (i41 = 0; i41 < 7; i41++) {
    outC->outstoredData.p46[i41].valid = kcg_true;
    outC->outstoredData.p46[i41].q_dir = Q_DIR_Reverse;
    outC->outstoredData.p46[i41].m_leveltr = M_LEVELTR_Level_0;
    outC->outstoredData.p46[i41].nid_ntc = 0;
  }
  outC->outstoredData.p12_received = kcg_true;
  outC->outstoredData.p15_received = kcg_true;
  outC->outstoredData.p21_received = kcg_true;
  outC->outstoredData.p27_received = kcg_true;
  outC->outstoredData.LRBG = 0;
  outC->outstoredData.referenceLocation = 0;
  /* 2 */ packetValid_init_xdebugSupport_Pkg(&outC->_4_Context_2);
  /* 1 */ locationOfReferenceLRBG_init_xdebugSupport_Pkg(&outC->_3_Context_1);
  /* 2 */ checkNTCPriority_init_xdebugSupport_Pkg(&outC->Context_2);
  /* 1 */ getLRBGFromMsg_init_xdebugSupport_Pkg(&outC->_2_Context_1);
  /* 1 */ getP41Level_init_xdebugSupport_Pkg(&outC->_1_Context_1);
  /* 1 */ packetValid_init_xdebugSupport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void dataForLevelTransition_reset_xdebugSupport_Pkg(
  outC_dataForLevelTransition_xdebugSupport_Pkg *outC)
{
  /* 2 */ packetValid_reset_xdebugSupport_Pkg(&outC->_4_Context_2);
  /* 1 */ locationOfReferenceLRBG_reset_xdebugSupport_Pkg(&outC->_3_Context_1);
  /* 2 */ checkNTCPriority_reset_xdebugSupport_Pkg(&outC->Context_2);
  /* 1 */ getLRBGFromMsg_reset_xdebugSupport_Pkg(&outC->_2_Context_1);
  /* 1 */ getP41Level_reset_xdebugSupport_Pkg(&outC->_1_Context_1);
  /* 1 */ packetValid_reset_xdebugSupport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::dataForLevelTransition */
void dataForLevelTransition_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::dataForLevelTransition::actualMessage */ ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* xdebugSupport_Pkg::dataForLevelTransition::storedData */ dataCollectionForLevelTransition_T_xdebugSupport_Pkg *storedData,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* xdebugSupport_Pkg::dataForLevelTransition::positionNeeded */ kcg_bool positionNeeded,
  /* xdebugSupport_Pkg::dataForLevelTransition::actualLevel */ M_LEVEL actualLevel,
  /* xdebugSupport_Pkg::dataForLevelTransition::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_dataForLevelTransition_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::dataForLevelTransition */
  static M_LEVEL _4_op_call;
  /* xdebugSupport_Pkg::dataForLevelTransition */
  static NID_LRBG _3_op_call;
  /* xdebugSupport_Pkg::dataForLevelTransition */
  static kcg_bool _2_op_call;
  /* xdebugSupport_Pkg::dataForLevelTransition */
  static kcg_bool op_call;
  /* xdebugSupport_Pkg::dataForLevelTransition */
  static L_internal_Type_Obu_BasicTypes_Pkg _1_op_call;
  static P015_OBU_T_TM noname;
  static P021_OBU_T_TM _5_noname;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2, actualMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->_L2.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L75, &outC->_L19.PacketHeaders);
  outC->_L76 = cp041_Level_Transition_Order_Id_Pkg;
  /* 1 */
  packetValid_xdebugSupport_Pkg(&outC->_L75, outC->_L76, &outC->Context_1);
  outC->_L74 = outC->Context_1.isValid;
  outC->p41Valid = outC->_L74;
  outC->_L120 = outC->p41Valid;
  outC->ck_every = outC->_L120;
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L23,
    storedData);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L24,
    &outC->_L23.p41);
  /* ck_dataForLevelTransition */ if (outC->ck_every) {
    /* 1 */ getP41Level_xdebugSupport_Pkg(&outC->_L24, &outC->_1_Context_1);
    _4_op_call = outC->_1_Context_1.p41_level;
  }
  outC->_L54 = outC->p41Valid;
  outC->_5_ck_every = outC->_L54;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L49, actualMessage);
  /* ck_dataForLevelTransition */ if (outC->_5_ck_every) {
    /* 1 */ getLRBGFromMsg_xdebugSupport_Pkg(&outC->_L49, &outC->_2_Context_1);
    _3_op_call = outC->_2_Context_1.LRBG;
  }
  outC->_L86 = outC->p41Valid;
  outC->_6_ck_every = outC->_L86;
  /* 1 */ Read_P041_Legacy_TM_specific(&outC->_L19, &outC->_L18);
  /* ck_dataForLevelTransition */ if (outC->_6_ck_every) {
    /* 2 */ checkNTCPriority_xdebugSupport_Pkg(&outC->_L18, &outC->Context_2);
    _2_op_call = outC->Context_2.isNTC;
  }
  outC->_L68 = positionNeeded;
  outC->_L69 = outC->p41Valid;
  outC->_L71 = outC->_L68 | outC->_L69;
  outC->_7_ck_every = outC->_L71;
  outC->_L55 = outC->_L23.LRBG;
  /* ck_dataForLevelTransition */ if (outC->_5_ck_every) {
    outC->_L116 = _3_op_call;
  }
  else {
    outC->_L116 = outC->_L55;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L62, trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L125,
    trainProperties);
  /* ck_dataForLevelTransition */ if (outC->_7_ck_every) {
    /* 1 */
    locationOfReferenceLRBG_xdebugSupport_Pkg(
      outC->_L116,
      &outC->_L62,
      &outC->_L125,
      &outC->_3_Context_1);
    _1_op_call = outC->_3_Context_1.position;
    op_call = outC->_3_Context_1.passed;
  }
  /* 1 */ Read_P015_TM(&outC->_L19, &outC->_L3, &outC->_L4);
  outC->_L78 = cp046_Conditional_Level_Transition_Order_Id_Pkg;
  /* 2 */
  packetValid_xdebugSupport_Pkg(&outC->_L75, outC->_L78, &outC->_4_Context_2);
  outC->_L77 = outC->_4_Context_2.isValid;
  outC->p46Valid = outC->_L77;
  outC->_L48 = outC->p46Valid;
  /* 1 */ Read_P046_Legacy_TM_specific(&outC->_L19, &outC->_L11);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L28,
    &outC->_L23.p46);
  /* 3 */ if (outC->_L48) {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &outC->_L10,
      &outC->_L11);
  }
  else {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &outC->_L10,
      &outC->_L28);
  }
  outC->_L47 = outC->p41Valid;
  outC->_L122 = actualLevel;
  outC->_L119 = M_LEVEL_Level_0;
  /* ck_dataForLevelTransition */ if (outC->ck_every) {
    outC->_L117 = _4_op_call;
  }
  else {
    outC->_L117 = outC->_L119;
  }
  outC->_L121 = outC->_L122 == outC->_L117;
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L124,
    (P41_LevelTransistionOrders_T_Packet_Types_Pkg *)
      &cNoP41_xdebugSupport_Pkg);
  /* 4 */ if (outC->_L121) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L123,
      &outC->_L124);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L123,
      &outC->_L24);
  }
  /* 2 */ if (outC->_L47) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L13,
      &outC->_L18);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L13,
      &outC->_L123);
  }
  /* 1 */ Read_P021_TM(&outC->_L19, &outC->_L20, &outC->_L21);
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L26,
    storedData);
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L25,
    &outC->_L26);
  if (kcg_true) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L25.p41,
      &outC->_L13);
  }
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L27,
    &outC->_L25);
  if (kcg_true) {
    kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &outC->_L27.p46,
      &outC->_L10);
  }
  outC->_L29 = outC->_L23.p15_received;
  outC->_L87 = kcg_false;
  /* ck_dataForLevelTransition */ if (outC->_6_ck_every) {
    outC->_L85 = _2_op_call;
  }
  else {
    outC->_L85 = outC->_L87;
  }
  outC->ntcRequested = outC->_L85;
  outC->_L83 = outC->ntcRequested;
  outC->_L30 = outC->_L3 | outC->_L29 | outC->_L83;
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L31,
    &outC->_L27);
  if (kcg_true) {
    outC->_L31.p15_received = outC->_L30;
  }
  outC->_L35 = outC->_L23.p21_received;
  outC->_L33 = outC->_L20 | outC->_L35;
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L32,
    &outC->_L31);
  if (kcg_true) {
    outC->_L32.p21_received = outC->_L33;
  }
  kcg_copy_P015_OBU_T_TM(&noname, &outC->_L4);
  outC->_L36 = outC->_L23.p27_received;
  kcg_copy_P021_OBU_T_TM(&_5_noname, &outC->_L21);
  /* 1 */ Read_P027V1_Legacy_for_ML_TM_specific(&outC->_L19, &outC->_L38);
  outC->_L43 = outC->_L38.valid;
  outC->_L84 = outC->ntcRequested;
  outC->_L46 = outC->_L43 | outC->_L36 | outC->_L84;
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L40,
    &outC->_L32);
  if (kcg_true) {
    outC->_L40.p27_received = outC->_L46;
  }
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L59,
    &outC->_L40);
  if (kcg_true) {
    outC->_L59.LRBG = outC->_L116;
  }
  outC->_L66 = positionNeeded;
  /* ck_dataForLevelTransition */ if (outC->_7_ck_every) {
    outC->_L60 = op_call;
  }
  else {
    outC->_L60 = outC->_L66;
  }
  outC->_L65 = outC->_L23.referenceLocation;
  /* ck_dataForLevelTransition */ if (outC->_7_ck_every) {
    outC->_L61 = _1_op_call;
  }
  else {
    outC->_L61 = outC->_L65;
  }
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->_L63,
    &outC->_L59);
  if (kcg_true) {
    outC->_L63.referenceLocation = outC->_L61;
  }
  outC->_L73 = !outC->_L60;
  outC->outPositionNeeded = outC->_L73;
  kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
    &outC->outstoredData,
    &outC->_L63);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dataForLevelTransition_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

