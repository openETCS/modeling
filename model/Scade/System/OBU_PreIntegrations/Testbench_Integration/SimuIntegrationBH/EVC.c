/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC.h"

#ifndef KCG_USER_DEFINED_INIT
void EVC_init(outC_EVC *outC)
{
  static kcg_int i317;
  static kcg_int i316;
  static kcg_int i315;
  static kcg_int i314;
  static kcg_int i313;
  static kcg_int i312;
  static kcg_int i311;
  static kcg_int i310;
  static kcg_int i309;
  static kcg_int i308;
  static kcg_int i307;
  static kcg_int i306;
  static kcg_int i305;
  static kcg_int i304;
  static kcg_int i303;
  static kcg_int i302;
  static kcg_int i301;
  static kcg_int i300;
  static kcg_int i299;
  static kcg_int i298;
  static kcg_int i297;
  static kcg_int i296;
  static kcg_int i295;
  static kcg_int i294;
  static kcg_int i293;
  static kcg_int i292;
  static kcg_int i291;
  static kcg_int i290;
  static kcg_int i289;
  static kcg_int i288;
  static kcg_int i287;
  static kcg_int i286;
  static kcg_int i285;
  static kcg_int i284;
  static kcg_int i283;
  static kcg_int i282;
  static kcg_int i281;
  static kcg_int i280;
  static kcg_int i279;
  static kcg_int i278;
  static kcg_int i277;
  static kcg_int i276;
  static kcg_int i275;
  static kcg_int i274;
  static kcg_int i273;
  static kcg_int i272;
  static kcg_int i271;
  static kcg_int i270;
  static kcg_int i269;
  static kcg_int i268;
  static kcg_int i267;
  static kcg_int i266;
  static kcg_int i265;
  static kcg_int i264;
  static kcg_int i263;
  static kcg_int i262;
  static kcg_int i261;
  static kcg_int i260;
  static kcg_int i259;
  static kcg_int i258;
  static kcg_int i257;
  static kcg_int i256;
  static kcg_int i255;
  static kcg_int i254;
  static kcg_int i253;
  static kcg_int i252;
  static kcg_int i251;
  static kcg_int i250;
  static kcg_int i249;
  static kcg_int i248;
  static kcg_int i247;
  static kcg_int i246;
  static kcg_int i245;
  static kcg_int i244;
  static kcg_int i243;
  static kcg_int i242;
  static kcg_int i241;
  static kcg_int i240;
  static kcg_int i239;
  static kcg_int i238;
  static kcg_int i237;
  static kcg_int i236;
  static kcg_int i235;
  static kcg_int i234;
  static kcg_int i233;
  static kcg_int i232;
  static kcg_int i231;
  static kcg_int i230;
  static kcg_int i229;
  static kcg_int i228;
  static kcg_int i227;
  static kcg_int i226;
  static kcg_int i225;
  static kcg_int i224;
  static kcg_int i223;
  static kcg_int i222;
  static kcg_int i221;
  static kcg_int i220;
  static kcg_int i219;
  static kcg_int i218;
  static kcg_int i217;
  static kcg_int i216;
  static kcg_int i215;
  static kcg_int i214;
  static kcg_int i213;
  static kcg_int i212;
  static kcg_int i211;
  static kcg_int i210;
  static kcg_int i209;
  static kcg_int i208;
  static kcg_int i207;
  static kcg_int i206;
  static kcg_int i205;
  static kcg_int i204;
  static kcg_int i203;
  static kcg_int i202;
  static kcg_int i201;
  static kcg_int i200;
  static kcg_int i199;
  static kcg_int i198;
  static kcg_int i197;
  static kcg_int i196;
  static kcg_int i195;
  static kcg_int i194;
  static kcg_int i193;
  static kcg_int i192;
  static kcg_int i191;
  static kcg_int i190;
  static kcg_int i189;
  static kcg_int i188;
  static kcg_int i187;
  static kcg_int i186;
  static kcg_int i185;
  static kcg_int i184;
  static kcg_int i183;
  static kcg_int i182;
  static kcg_int i181;
  static kcg_int i180;
  static kcg_int i179;
  static kcg_int i178;
  static kcg_int i177;
  static kcg_int i176;
  static kcg_int i175;
  static kcg_int i174;
  static kcg_int i173;
  static kcg_int i172;
  static kcg_int i171;
  static kcg_int i170;
  static kcg_int i169;
  static kcg_int i168;
  static kcg_int i167;
  static kcg_int i166;
  static kcg_int i165;
  static kcg_int i164;
  static kcg_int i163;
  static kcg_int i162;
  static kcg_int i161;
  static kcg_int i160;
  static kcg_int i159;
  static kcg_int i158;
  static kcg_int i157;
  static kcg_int i156;
  static kcg_int i155;
  static kcg_int i154;
  static kcg_int i153;
  static kcg_int i152;
  static kcg_int i151;
  static kcg_int i150;
  static kcg_int i149;
  static kcg_int i148;
  static kcg_int i147;
  static kcg_int i146;
  static kcg_int i145;
  static kcg_int i144;
  static kcg_int i143;
  static kcg_int i142;
  static kcg_int i141;
  static kcg_int i140;
  static kcg_int i139;
  static kcg_int i138;
  static kcg_int i137;
  static kcg_int i136;
  static kcg_int i135;
  static kcg_int i134;
  static kcg_int i133;
  static kcg_int i132;
  static kcg_int i131;
  static kcg_int i130;
  static kcg_int i129;
  static kcg_int i128;
  static kcg_int i127;
  static kcg_int i126;
  static kcg_int i125;
  static kcg_int i124;
  static kcg_int i123;
  static kcg_int i122;
  static kcg_int i121;
  static kcg_int i120;
  static kcg_int i119;
  static kcg_int i118;
  static kcg_int i117;
  static kcg_int i116;
  static kcg_int i115;
  static kcg_int i114;
  static kcg_int i113;
  static kcg_int i112;
  static kcg_int i111;
  static kcg_int i110;
  static kcg_int i109;
  static kcg_int i108;
  static kcg_int i107;
  static kcg_int i106;
  static kcg_int i105;
  static kcg_int i104;
  static kcg_int i103;
  static kcg_int i102;
  static kcg_int i101;
  static kcg_int i100;
  static kcg_int i99;
  static kcg_int i98;
  static kcg_int i97;
  static kcg_int i96;
  static kcg_int i95;
  static kcg_int i94;
  static kcg_int i93;
  static kcg_int i92;
  static kcg_int i91;
  static kcg_int i90;
  static kcg_int i89;
  static kcg_int i88;
  static kcg_int i87;
  static kcg_int i86;
  static kcg_int i85;
  static kcg_int i84;
  static kcg_int i83;
  static kcg_int i82;
  static kcg_int i81;
  static kcg_int i80;
  static kcg_int i79;
  static kcg_int i78;
  static kcg_int i77;
  static kcg_int i76;
  static kcg_int i75;
  static kcg_int i74;
  static kcg_int i73;
  static kcg_int i72;
  static kcg_int i71;
  static kcg_int i70;
  static kcg_int i69;
  static kcg_int i68;
  static kcg_int i67;
  static kcg_int i66;
  static kcg_int i65;
  static kcg_int i64;
  static kcg_int i63;
  static kcg_int i62;
  static kcg_int i61;
  static kcg_int i60;
  static kcg_int i59;
  static kcg_int i58;
  static kcg_int i57;
  static kcg_int i56;
  static kcg_int i55;
  static kcg_int i54;
  static kcg_int i53;
  static kcg_int i52;
  static kcg_int i51;
  static kcg_int i50;
  static kcg_int i49;
  static kcg_int i48;
  static kcg_int i47;
  static kcg_int i46;
  static kcg_int i45;
  static kcg_int i44;
  static kcg_int i43;
  static kcg_int i42;
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
  
  outC->_L1768.registration.valid = kcg_true;
  outC->_L1768.registration.mobileDeviceNo = 0;
  outC->_L1768.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1768.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1768.registration.nid_mn = 0;
  outC->_L1768.connection.valid = kcg_true;
  outC->_L1768.connection.mobileDeviceNo = 0;
  outC->_L1768.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1768.connection.nid_radio = 0;
  outC->_L1768.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1768.connection.connectionLost = kcg_true;
  outC->_L1768.connection.isInRadioHole = kcg_true;
  outC->_L1768.session.valid = kcg_true;
  outC->_L1768.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1768.session.nid_c = 0;
  outC->_L1768.session.nid_rbc = 0;
  outC->_L1768.session.nid_radio = 0;
  outC->_L1767.outOfMemSpace = kcg_true;
  outC->_L1767.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1767.positionCalculation_inconsistent = kcg_true;
  outC->_L1767.linkedBGMissed = kcg_true;
  outC->_L1767.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1767.BG_LinkingConsistencyError = kcg_true;
  outC->_L1767.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1767.doubleRepositioningError = kcg_true;
  outC->_L1767.bg.valid = kcg_true;
  outC->_L1767.bg.nid_c = 0;
  outC->_L1767.bg.nid_bg = 0;
  outC->_L1767.bg.q_link = Q_LINK_Unlinked;
  outC->_L1767.bg.location.nominal = 0;
  outC->_L1767.bg.location.d_min = 0;
  outC->_L1767.bg.location.d_max = 0;
  outC->_L1767.bg.seqNoOnTrack = 0;
  outC->_L1767.bg.infoFromLinking.valid = kcg_true;
  outC->_L1767.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1767.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1767.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1767.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1767.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1767.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L1767.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L1767.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L1767.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1767.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1767.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1767.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1767.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1767.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1767.bg.infoFromPassing.valid = kcg_true;
  outC->_L1767.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1767.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1767.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1767.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1767.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1767.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1767.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1767.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1767.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1767.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1767.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1767.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1767.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1767.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1767.bg.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->_L1767.bg.missed = kcg_true;
  outC->_L1766.linkedBGError = kcg_true;
  outC->_L1766.unlinkedBGError = kcg_true;
  outC->_L1766.BG_versionIncompatible = kcg_true;
  outC->_L1766.radioSequenceError = kcg_true;
  outC->_L1766.tNvContactError = kcg_true;
  outC->_L1766.otherTimingError = kcg_true;
  outC->_L1766.radioMessageConsistencyError = kcg_true;
  outC->_L1766.nid_c = 0;
  outC->_L1766.nid_errorbg = 0;
  outC->_L1765 = kcg_true;
  outC->_L1764.nid_engine = 0;
  outC->_L1764.nid_operational = 0;
  outC->_L1764.l_train = 0;
  outC->_L1764.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L1764.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L1764.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L1764.d_frontend_2_rearend.nominal = 0;
  outC->_L1764.d_frontend_2_rearend.d_min = 0;
  outC->_L1764.d_frontend_2_rearend.d_max = 0;
  outC->_L1764.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L1764.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L1764.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L1764.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L1764.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L1764.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L1763 = kcg_true;
  outC->_L1762.linkedBGError = kcg_true;
  outC->_L1762.unlinkedBGError = kcg_true;
  outC->_L1762.BG_versionIncompatible = kcg_true;
  outC->_L1762.radioSequenceError = kcg_true;
  outC->_L1762.tNvContactError = kcg_true;
  outC->_L1762.otherTimingError = kcg_true;
  outC->_L1762.radioMessageConsistencyError = kcg_true;
  outC->_L1762.nid_c = 0;
  outC->_L1762.nid_errorbg = 0;
  outC->_L1761.linkedBGError = kcg_true;
  outC->_L1761.unlinkedBGError = kcg_true;
  outC->_L1761.BG_versionIncompatible = kcg_true;
  outC->_L1761.radioSequenceError = kcg_true;
  outC->_L1761.tNvContactError = kcg_true;
  outC->_L1761.otherTimingError = kcg_true;
  outC->_L1761.radioMessageConsistencyError = kcg_true;
  outC->_L1761.nid_c = 0;
  outC->_L1761.nid_errorbg = 0;
  outC->_L1760.registration.valid = kcg_true;
  outC->_L1760.registration.mobileDeviceNo = 0;
  outC->_L1760.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1760.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1760.registration.nid_mn = 0;
  outC->_L1760.connection.valid = kcg_true;
  outC->_L1760.connection.mobileDeviceNo = 0;
  outC->_L1760.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1760.connection.nid_radio = 0;
  outC->_L1760.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1760.connection.connectionLost = kcg_true;
  outC->_L1760.connection.isInRadioHole = kcg_true;
  outC->_L1760.session.valid = kcg_true;
  outC->_L1760.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1760.session.nid_c = 0;
  outC->_L1760.session.nid_rbc = 0;
  outC->_L1760.session.nid_radio = 0;
  outC->_L1759.registration.valid = kcg_true;
  outC->_L1759.registration.mobileDeviceNo = 0;
  outC->_L1759.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1759.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1759.registration.nid_mn = 0;
  outC->_L1759.connection.valid = kcg_true;
  outC->_L1759.connection.mobileDeviceNo = 0;
  outC->_L1759.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1759.connection.nid_radio = 0;
  outC->_L1759.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1759.connection.connectionLost = kcg_true;
  outC->_L1759.connection.isInRadioHole = kcg_true;
  outC->_L1759.session.valid = kcg_true;
  outC->_L1759.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1759.session.nid_c = 0;
  outC->_L1759.session.nid_rbc = 0;
  outC->_L1759.session.nid_radio = 0;
  outC->_L1758 = kcg_true;
  outC->_L1757.outOfMemSpace = kcg_true;
  outC->_L1757.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1757.positionCalculation_inconsistent = kcg_true;
  outC->_L1757.linkedBGMissed = kcg_true;
  outC->_L1757.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1757.BG_LinkingConsistencyError = kcg_true;
  outC->_L1757.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1757.doubleRepositioningError = kcg_true;
  outC->_L1757.bg.valid = kcg_true;
  outC->_L1757.bg.nid_c = 0;
  outC->_L1757.bg.nid_bg = 0;
  outC->_L1757.bg.q_link = Q_LINK_Unlinked;
  outC->_L1757.bg.location.nominal = 0;
  outC->_L1757.bg.location.d_min = 0;
  outC->_L1757.bg.location.d_max = 0;
  outC->_L1757.bg.seqNoOnTrack = 0;
  outC->_L1757.bg.infoFromLinking.valid = kcg_true;
  outC->_L1757.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1757.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1757.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1757.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1757.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1757.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L1757.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L1757.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L1757.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1757.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1757.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1757.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1757.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1757.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1757.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1757.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1757.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1757.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1757.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1757.bg.infoFromPassing.valid = kcg_true;
  outC->_L1757.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1757.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1757.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1757.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1757.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1757.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1757.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1757.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1757.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1757.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1757.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1757.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1757.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1757.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].valid = kcg_true;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].d_link = 0;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].nid_c = 0;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].nid_bg = 0;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1757.bg.infoFromPassing.linkedBGs[i1].q_locacc = 0;
  }
  outC->_L1757.bg.missed = kcg_true;
  outC->_L1756.outOfMemSpace = kcg_true;
  outC->_L1756.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1756.positionCalculation_inconsistent = kcg_true;
  outC->_L1756.linkedBGMissed = kcg_true;
  outC->_L1756.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1756.BG_LinkingConsistencyError = kcg_true;
  outC->_L1756.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1756.doubleRepositioningError = kcg_true;
  outC->_L1756.bg.valid = kcg_true;
  outC->_L1756.bg.nid_c = 0;
  outC->_L1756.bg.nid_bg = 0;
  outC->_L1756.bg.q_link = Q_LINK_Unlinked;
  outC->_L1756.bg.location.nominal = 0;
  outC->_L1756.bg.location.d_min = 0;
  outC->_L1756.bg.location.d_max = 0;
  outC->_L1756.bg.seqNoOnTrack = 0;
  outC->_L1756.bg.infoFromLinking.valid = kcg_true;
  outC->_L1756.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1756.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1756.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1756.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1756.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1756.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L1756.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L1756.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L1756.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1756.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1756.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1756.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1756.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1756.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1756.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1756.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1756.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1756.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1756.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1756.bg.infoFromPassing.valid = kcg_true;
  outC->_L1756.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1756.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1756.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1756.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1756.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1756.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1756.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1756.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1756.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1756.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1756.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1756.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1756.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1756.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].valid = kcg_true;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].nid_LRBG = 0;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].q_dir = Q_DIR_Reverse;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].d_link = 0;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].nid_c = 0;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].nid_bg = 0;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1756.bg.infoFromPassing.linkedBGs[i2].q_locacc = 0;
  }
  outC->_L1756.bg.missed = kcg_true;
  outC->_L1755 = M_LEVEL_Level_0;
  outC->_L1754 = kcg_true;
  outC->_L1751.valid = kcg_true;
  outC->_L1751.deskOpen = kcg_true;
  outC->_L1751.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1751.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1750 = kcg_true;
  outC->_L1748.valid = kcg_true;
  outC->_L1748.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1748.nid_c = 0;
  outC->_L1748.nid_rbc = 0;
  outC->_L1748.nid_radio = 0;
  outC->_L1739.registration.valid = kcg_true;
  outC->_L1739.registration.mobileDeviceNo = 0;
  outC->_L1739.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1739.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1739.registration.nid_mn = 0;
  outC->_L1739.connection.valid = kcg_true;
  outC->_L1739.connection.mobileDeviceNo = 0;
  outC->_L1739.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1739.connection.nid_radio = 0;
  outC->_L1739.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1739.connection.connectionLost = kcg_true;
  outC->_L1739.connection.isInRadioHole = kcg_true;
  outC->_L1739.session.valid = kcg_true;
  outC->_L1739.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1739.session.nid_c = 0;
  outC->_L1739.session.nid_rbc = 0;
  outC->_L1739.session.nid_radio = 0;
  outC->_L1740.valid = kcg_true;
  outC->_L1740.mobileDeviceNo = 0;
  outC->_L1740.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1740.nid_radio = 0;
  outC->_L1740.settingUpConnectionHasFailed = kcg_true;
  outC->_L1740.connectionLost = kcg_true;
  outC->_L1740.isInRadioHole = kcg_true;
  outC->_L1741 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1742.registration.valid = kcg_true;
  outC->_L1742.registration.mobileDeviceNo = 0;
  outC->_L1742.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1742.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1742.registration.nid_mn = 0;
  outC->_L1742.connection.valid = kcg_true;
  outC->_L1742.connection.mobileDeviceNo = 0;
  outC->_L1742.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1742.connection.nid_radio = 0;
  outC->_L1742.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1742.connection.connectionLost = kcg_true;
  outC->_L1742.connection.isInRadioHole = kcg_true;
  outC->_L1742.session.valid = kcg_true;
  outC->_L1742.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1742.session.nid_c = 0;
  outC->_L1742.session.nid_rbc = 0;
  outC->_L1742.session.nid_radio = 0;
  outC->_L1743 = kcg_true;
  outC->_L1744 = kcg_true;
  outC->_L1745.valid = kcg_true;
  outC->_L1745.mobileDeviceNo = 0;
  outC->_L1745.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1745.nid_radio = 0;
  outC->_L1745.settingUpConnectionHasFailed = kcg_true;
  outC->_L1745.connectionLost = kcg_true;
  outC->_L1745.isInRadioHole = kcg_true;
  outC->_L1746 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1747 = kcg_true;
  for (i4 = 0; i4 < 5; i4++) {
    outC->_L1738[i4].Message.valid = kcg_true;
    outC->_L1738[i4].Message.nid_message = 0;
    outC->_L1738[i4].Message.l_message = 0;
    outC->_L1738[i4].Message.t_train = 0;
    outC->_L1738[i4].Message.nid_engine = 0;
    outC->_L1738[i4].Message.field1 = 0;
    outC->_L1738[i4].Message.field2 = 0;
    outC->_L1738[i4].Message.field3 = 0;
    for (i3 = 0; i3 < 50; i3++) {
      outC->_L1738[i4].OptionalPackets[i3] = 0;
    }
  }
  outC->_L1724.registration.valid = kcg_true;
  outC->_L1724.registration.mobileDeviceNo = 0;
  outC->_L1724.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1724.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1724.registration.nid_mn = 0;
  outC->_L1724.connection.valid = kcg_true;
  outC->_L1724.connection.mobileDeviceNo = 0;
  outC->_L1724.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1724.connection.nid_radio = 0;
  outC->_L1724.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1724.connection.connectionLost = kcg_true;
  outC->_L1724.connection.isInRadioHole = kcg_true;
  outC->_L1724.session.valid = kcg_true;
  outC->_L1724.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1724.session.nid_c = 0;
  outC->_L1724.session.nid_rbc = 0;
  outC->_L1724.session.nid_radio = 0;
  outC->_L1723 = kcg_true;
  outC->_L1720.registration.valid = kcg_true;
  outC->_L1720.registration.mobileDeviceNo = 0;
  outC->_L1720.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1720.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1720.registration.nid_mn = 0;
  outC->_L1720.connection.valid = kcg_true;
  outC->_L1720.connection.mobileDeviceNo = 0;
  outC->_L1720.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1720.connection.nid_radio = 0;
  outC->_L1720.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1720.connection.connectionLost = kcg_true;
  outC->_L1720.connection.isInRadioHole = kcg_true;
  outC->_L1720.session.valid = kcg_true;
  outC->_L1720.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1720.session.nid_c = 0;
  outC->_L1720.session.nid_rbc = 0;
  outC->_L1720.session.nid_radio = 0;
  outC->_L1721.valid = kcg_true;
  outC->_L1721.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L1719 = 0;
  outC->_L1718 = 0;
  outC->_L1716 = 0;
  outC->_L1715 = 0;
  outC->_L1713 = 0;
  outC->_L1714 = 0;
  outC->_L1711 = 0;
  outC->_L1712 = 0;
  outC->_L1705.valid = kcg_true;
  outC->_L1705.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->_L1705.Radio_Common_Header.radioDevice = 0;
  outC->_L1705.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1705.Radio_Common_Header.nid_message = 0;
  outC->_L1705.Radio_Common_Header.t_train = 0;
  outC->_L1705.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1705.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1705.Radio_Common_Header.t_train_reference = 0;
  outC->_L1705.Radio_Common_Header.nid_em = 0;
  outC->_L1705.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1705.Radio_Common_Header.d_sr = 0;
  outC->_L1705.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1705.Radio_Common_Header.d_ref = 0;
  outC->_L1705.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1705.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1705.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1705.p42.valid = kcg_true;
  outC->_L1705.p42.q_dir = Q_DIR_Reverse;
  outC->_L1705.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1705.p42.nid_c = 0;
  outC->_L1705.p42.nid_rbc = 0;
  outC->_L1705.p42.nid_radio = 0;
  outC->_L1705.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1705.p45.valid = kcg_true;
  outC->_L1705.p45.q_dir = Q_DIR_Reverse;
  outC->_L1705.p45.nid_mn = 0;
  outC->_L1705.sendingRBC.valid = kcg_true;
  outC->_L1705.sendingRBC.nid_c = 0;
  outC->_L1705.sendingRBC.rbc_id = 0;
  outC->_L1705.sendingRBC.device_id = 0;
  outC->_L1706 = kcg_true;
  outC->_L1698.valid = kcg_true;
  outC->_L1698.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1698.radioMetadata.t_train_reference = kcg_true;
  outC->_L1698.radioMetadata.nid_em = kcg_true;
  outC->_L1698.radioMetadata.q_scale = kcg_true;
  outC->_L1698.radioMetadata.d_sr = kcg_true;
  outC->_L1698.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1698.radioMetadata.d_ref = kcg_true;
  outC->_L1698.radioMetadata.q_dir = kcg_true;
  outC->_L1698.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1698.radioMetadata.m_version = kcg_true;
  outC->_L1698.BG_Common_Header.valid = kcg_true;
  outC->_L1698.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1698.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1698.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1698.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1698.BG_Common_Header.m_mcount = 0;
  outC->_L1698.BG_Common_Header.nid_c = 0;
  outC->_L1698.BG_Common_Header.nid_bg = 0;
  outC->_L1698.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1698.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1698.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1698.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1698.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1698.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1698.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1698.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1698.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1698.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1698.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1698.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1698.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1698.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1698.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1698.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1698.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1698.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1698.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1698.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1698.Radio_Common_Header.radioDevice = 0;
  outC->_L1698.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1698.Radio_Common_Header.nid_message = 0;
  outC->_L1698.Radio_Common_Header.t_train = 0;
  outC->_L1698.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1698.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1698.Radio_Common_Header.t_train_reference = 0;
  outC->_L1698.Radio_Common_Header.nid_em = 0;
  outC->_L1698.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1698.Radio_Common_Header.d_sr = 0;
  outC->_L1698.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1698.Radio_Common_Header.d_ref = 0;
  outC->_L1698.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1698.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1698.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i5 = 0; i5 < 30; i5++) {
    outC->_L1698.packets.PacketHeaders[i5].nid_packet = 0;
    outC->_L1698.packets.PacketHeaders[i5].q_dir = Q_DIR_Reverse;
    outC->_L1698.packets.PacketHeaders[i5].valid = kcg_true;
    outC->_L1698.packets.PacketHeaders[i5].startAddress = 0;
    outC->_L1698.packets.PacketHeaders[i5].endAddress = 0;
  }
  for (i6 = 0; i6 < 500; i6++) {
    outC->_L1698.packets.PacketData[i6] = 0;
  }
  outC->_L1698.sendingRBC.valid = kcg_true;
  outC->_L1698.sendingRBC.nid_c = 0;
  outC->_L1698.sendingRBC.rbc_id = 0;
  outC->_L1698.sendingRBC.device_id = 0;
  outC->_L1700 = kcg_true;
  outC->_L1699 = kcg_true;
  outC->_L1692 = 0;
  outC->_L1693 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1690 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1691 = 0;
  outC->_L1689.compatibleModeAndLevel = kcg_true;
  outC->_L1689.level = M_LEVEL_Level_0;
  outC->_L1689.newLevel = kcg_true;
  outC->_L1689.Mode = M_MODE_Full_Supervision;
  outC->_L1689.newMode = kcg_true;
  outC->_L1688.compatibleModeAndLevel = kcg_true;
  outC->_L1688.level = M_LEVEL_Level_0;
  outC->_L1688.newLevel = kcg_true;
  outC->_L1688.Mode = M_MODE_Full_Supervision;
  outC->_L1688.newMode = kcg_true;
  outC->_L1686.Message.valid = kcg_true;
  outC->_L1686.Message.nid_message = 0;
  outC->_L1686.Message.l_message = 0;
  outC->_L1686.Message.t_train = 0;
  outC->_L1686.Message.nid_engine = 0;
  outC->_L1686.Message.field1 = 0;
  outC->_L1686.Message.field2 = 0;
  outC->_L1686.Message.field3 = 0;
  for (i7 = 0; i7 < 50; i7++) {
    outC->_L1686.OptionalPackets[i7] = 0;
  }
  outC->_L1687.valid = kcg_true;
  outC->_L1687.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L1687.networkID = 0;
  outC->_L1684.Message.valid = kcg_true;
  outC->_L1684.Message.nid_message = 0;
  outC->_L1684.Message.l_message = 0;
  outC->_L1684.Message.t_train = 0;
  outC->_L1684.Message.nid_engine = 0;
  outC->_L1684.Message.field1 = 0;
  outC->_L1684.Message.field2 = 0;
  outC->_L1684.Message.field3 = 0;
  for (i8 = 0; i8 < 50; i8++) {
    outC->_L1684.OptionalPackets[i8] = 0;
  }
  outC->_L1685.valid = kcg_true;
  outC->_L1685.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->_L1685.networkID = 0;
  outC->_L1683 = kcg_true;
  outC->_L1682 = kcg_true;
  outC->_L1681 = kcg_true;
  outC->_L1680.compatibleModeAndLevel = kcg_true;
  outC->_L1680.level = M_LEVEL_Level_0;
  outC->_L1680.newLevel = kcg_true;
  outC->_L1680.Mode = M_MODE_Full_Supervision;
  outC->_L1680.newMode = kcg_true;
  outC->_L1679 = kcg_true;
  outC->_L1678 = kcg_true;
  outC->_L1676 = kcg_true;
  outC->_L1677 = kcg_true;
  outC->_L1675.atPowerUp = kcg_true;
  outC->_L1675.atPowerDown = kcg_true;
  outC->_L1675.atStartOfMission = kcg_true;
  outC->_L1675.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L1675.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L1675.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L1675.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L1675.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L1675.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L1675.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L1675.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L1675.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L1675.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L1675.endOfMissionIsExecuted = kcg_true;
  outC->_L1675.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L1675.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L1675.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L1675.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L1675.trainExitedFromAnRBCArea = kcg_true;
  outC->_L1675.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L1675.level_1_isLeft = kcg_true;
  for (i10 = 0; i10 < 5; i10++) {
    outC->_L1673[i10].Message.valid = kcg_true;
    outC->_L1673[i10].Message.nid_message = 0;
    outC->_L1673[i10].Message.l_message = 0;
    outC->_L1673[i10].Message.t_train = 0;
    outC->_L1673[i10].Message.nid_engine = 0;
    outC->_L1673[i10].Message.field1 = 0;
    outC->_L1673[i10].Message.field2 = 0;
    outC->_L1673[i10].Message.field3 = 0;
    for (i9 = 0; i9 < 50; i9++) {
      outC->_L1673[i10].OptionalPackets[i9] = 0;
    }
  }
  outC->_L1671 = 0;
  outC->_L1670.radioNetworkID_Default.valid = kcg_true;
  outC->_L1670.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L1670.radioNetworkID_Default.nid_mn = 0;
  outC->_L1670.nid_radio_shortNumberStoredOnboard = 0;
  outC->_L1670.noOfRetriesOfSendingTerminationMessage = 0;
  outC->_L1670.maxWaitingTimeForAckMessageReceived = 0;
  outC->_L1670.maxWaitingTimeUntilTerminationOrderReceived = 0;
  outC->_L1670.noOfRetriesUntilTerminationOrderIsReceived = 0;
  outC->_L1670.connectionStatusTimerInterval = 0;
  outC->_L1670.onboardPhoneNumbers.valid = kcg_true;
  outC->_L1670.onboardPhoneNumbers.number = 0;
  for (i12 = 0; i12 < 1; i12++) {
    outC->_L1670.onboardPhoneNumbers.aNID_RADIO[i12].valid = kcg_true;
    for (i11 = 0; i11 < 15; i11++) {
      outC->_L1670.onboardPhoneNumbers.aNID_RADIO[i12].telephoneNumber[i11] = 0;
    }
  }
  outC->_L1670.nid_engine = 0;
  outC->_L1670.maxTimeToMaintainCommSession = 0;
  outC->_L1670.noOfTriesToEstablishASafeRadioConnection = 0;
  outC->_L1669 = isAbleToManageOneSession_Handover_Pkg;
  outC->_L1668.valid = kcg_true;
  outC->_L1668.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1668.radioMetadata.t_train_reference = kcg_true;
  outC->_L1668.radioMetadata.nid_em = kcg_true;
  outC->_L1668.radioMetadata.q_scale = kcg_true;
  outC->_L1668.radioMetadata.d_sr = kcg_true;
  outC->_L1668.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1668.radioMetadata.d_ref = kcg_true;
  outC->_L1668.radioMetadata.q_dir = kcg_true;
  outC->_L1668.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1668.radioMetadata.m_version = kcg_true;
  outC->_L1668.BG_Common_Header.valid = kcg_true;
  outC->_L1668.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1668.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1668.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1668.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1668.BG_Common_Header.m_mcount = 0;
  outC->_L1668.BG_Common_Header.nid_c = 0;
  outC->_L1668.BG_Common_Header.nid_bg = 0;
  outC->_L1668.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1668.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1668.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1668.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1668.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1668.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1668.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1668.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1668.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1668.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1668.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1668.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1668.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1668.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1668.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1668.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1668.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1668.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1668.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1668.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1668.Radio_Common_Header.radioDevice = 0;
  outC->_L1668.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1668.Radio_Common_Header.nid_message = 0;
  outC->_L1668.Radio_Common_Header.t_train = 0;
  outC->_L1668.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1668.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1668.Radio_Common_Header.t_train_reference = 0;
  outC->_L1668.Radio_Common_Header.nid_em = 0;
  outC->_L1668.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1668.Radio_Common_Header.d_sr = 0;
  outC->_L1668.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1668.Radio_Common_Header.d_ref = 0;
  outC->_L1668.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1668.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1668.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i13 = 0; i13 < 30; i13++) {
    outC->_L1668.packets.PacketHeaders[i13].nid_packet = 0;
    outC->_L1668.packets.PacketHeaders[i13].q_dir = Q_DIR_Reverse;
    outC->_L1668.packets.PacketHeaders[i13].valid = kcg_true;
    outC->_L1668.packets.PacketHeaders[i13].startAddress = 0;
    outC->_L1668.packets.PacketHeaders[i13].endAddress = 0;
  }
  for (i14 = 0; i14 < 500; i14++) {
    outC->_L1668.packets.PacketData[i14] = 0;
  }
  outC->_L1668.sendingRBC.valid = kcg_true;
  outC->_L1668.sendingRBC.nid_c = 0;
  outC->_L1668.sendingRBC.rbc_id = 0;
  outC->_L1668.sendingRBC.device_id = 0;
  outC->_L1667.valid = kcg_true;
  outC->_L1667.timestamp = 0;
  outC->_L1667.trainPositionIsUnknown = kcg_true;
  outC->_L1667.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1667.trainPosition.nominal = 0;
  outC->_L1667.trainPosition.d_min = 0;
  outC->_L1667.trainPosition.d_max = 0;
  outC->_L1667.estimatedFrontEndPosition = 0;
  outC->_L1667.minSafeFrontEndPosition = 0;
  outC->_L1667.maxSafeFrontEndPostion = 0;
  outC->_L1667.LRBG.valid = kcg_true;
  outC->_L1667.LRBG.nid_c = 0;
  outC->_L1667.LRBG.nid_bg = 0;
  outC->_L1667.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1667.LRBG.location.nominal = 0;
  outC->_L1667.LRBG.location.d_min = 0;
  outC->_L1667.LRBG.location.d_max = 0;
  outC->_L1667.LRBG.seqNoOnTrack = 0;
  outC->_L1667.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1667.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1667.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1667.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1667.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1667.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1667.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1667.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1667.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1667.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1667.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1667.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i15 = 0; i15 < 33; i15++) {
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].valid = kcg_true;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].nid_LRBG = 0;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].q_dir = Q_DIR_Reverse;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].d_link = 0;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].nid_c = 0;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].nid_bg = 0;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1667.LRBG.infoFromPassing.linkedBGs[i15].q_locacc = 0;
  }
  outC->_L1667.LRBG.missed = kcg_true;
  outC->_L1667.prvLRBG.valid = kcg_true;
  outC->_L1667.prvLRBG.nid_c = 0;
  outC->_L1667.prvLRBG.nid_bg = 0;
  outC->_L1667.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1667.prvLRBG.location.nominal = 0;
  outC->_L1667.prvLRBG.location.d_min = 0;
  outC->_L1667.prvLRBG.location.d_max = 0;
  outC->_L1667.prvLRBG.seqNoOnTrack = 0;
  outC->_L1667.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1667.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1667.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1667.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1667.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1667.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1667.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1667.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1667.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1667.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1667.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i16 = 0; i16 < 33; i16++) {
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].valid = kcg_true;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].nid_LRBG = 0;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].q_dir = Q_DIR_Reverse;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].d_link = 0;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].nid_c = 0;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].nid_bg = 0;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1667.prvLRBG.infoFromPassing.linkedBGs[i16].q_locacc = 0;
  }
  outC->_L1667.prvLRBG.missed = kcg_true;
  outC->_L1667.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1667.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1667.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1667.linkingIsUsedOnboard = kcg_true;
  outC->_L1667.estimatedRearEndPosition = 0;
  outC->_L1667.minSafeRearEndPosition = 0;
  outC->_L1667.maxSafeRearEndPosition = 0;
  for (i18 = 0; i18 < 41; i18++) {
    outC->_L1666[i18].valid = kcg_true;
    outC->_L1666[i18].nid_c = 0;
    outC->_L1666[i18].nid_bg = 0;
    outC->_L1666[i18].q_link = Q_LINK_Unlinked;
    outC->_L1666[i18].location.nominal = 0;
    outC->_L1666[i18].location.d_min = 0;
    outC->_L1666[i18].location.d_max = 0;
    outC->_L1666[i18].seqNoOnTrack = 0;
    outC->_L1666[i18].infoFromLinking.valid = kcg_true;
    outC->_L1666[i18].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->_L1666[i18].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->_L1666[i18].infoFromLinking.expectedLocation.nominal = 0;
    outC->_L1666[i18].infoFromLinking.expectedLocation.d_min = 0;
    outC->_L1666[i18].infoFromLinking.expectedLocation.d_max = 0;
    outC->_L1666[i18].infoFromLinking.d_link.nominal = 0;
    outC->_L1666[i18].infoFromLinking.d_link.d_min = 0;
    outC->_L1666[i18].infoFromLinking.d_link.d_max = 0;
    outC->_L1666[i18].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L1666[i18].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->_L1666[i18].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L1666[i18].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L1666[i18].infoFromLinking.linkingInfo.d_link = 0;
    outC->_L1666[i18].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1666[i18].infoFromLinking.linkingInfo.nid_c = 0;
    outC->_L1666[i18].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->_L1666[i18].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1666[i18].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1666[i18].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->_L1666[i18].infoFromPassing.valid = kcg_true;
    outC->_L1666[i18].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L1666[i18].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1666[i18].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1666[i18].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L1666[i18].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1666[i18].infoFromPassing.BG_Header.m_mcount = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.nid_c = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.nid_bg = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1666[i18].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1666[i18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->_L1666[i18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->_L1666[i18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->_L1666[i18].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->_L1666[i18].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1666[i18].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1666[i18].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i17 = 0; i17 < 33; i17++) {
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].valid = kcg_true;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].nid_LRBG = 0;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].q_dir = Q_DIR_Reverse;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].d_link = 0;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].nid_c = 0;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].nid_bg = 0;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L1666[i18].infoFromPassing.linkedBGs[i17].q_locacc = 0;
    }
    outC->_L1666[i18].missed = kcg_true;
  }
  outC->_L1665 = 0;
  outC->_L1664.valid = kcg_true;
  outC->_L1664.mobileDeviceNo = 0;
  outC->_L1664.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1664.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1664.nid_mn = 0;
  outC->_L1663.valid = kcg_true;
  outC->_L1663.mobileDeviceNo = 0;
  outC->_L1663.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1663.nid_radio = 0;
  outC->_L1663.settingUpConnectionHasFailed = kcg_true;
  outC->_L1663.connectionLost = kcg_true;
  outC->_L1663.isInRadioHole = kcg_true;
  outC->_L1662 = 0;
  outC->_L1661.valid = kcg_true;
  outC->_L1661.mobileDeviceNo = 0;
  outC->_L1661.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1661.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1661.nid_mn = 0;
  outC->_L1660 = kcg_true;
  outC->_L1658.valid = kcg_true;
  outC->_L1658.mobileDeviceNo = 0;
  outC->_L1658.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1658.nid_radio = 0;
  outC->_L1658.settingUpConnectionHasFailed = kcg_true;
  outC->_L1658.connectionLost = kcg_true;
  outC->_L1658.isInRadioHole = kcg_true;
  outC->_L1657 = kcg_true;
  outC->_L1653.valid = kcg_true;
  outC->_L1653.q_dir = Q_DIR_Reverse;
  outC->_L1653.nid_mn = 0;
  outC->_L1652.valid = kcg_true;
  outC->_L1652.q_dir = Q_DIR_Reverse;
  outC->_L1652.nid_mn = 0;
  outC->_L1633.registration.valid = kcg_true;
  outC->_L1633.registration.mobileDeviceNo = 0;
  outC->_L1633.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1633.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1633.registration.nid_mn = 0;
  outC->_L1633.connection.valid = kcg_true;
  outC->_L1633.connection.mobileDeviceNo = 0;
  outC->_L1633.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1633.connection.nid_radio = 0;
  outC->_L1633.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1633.connection.connectionLost = kcg_true;
  outC->_L1633.connection.isInRadioHole = kcg_true;
  outC->_L1633.session.valid = kcg_true;
  outC->_L1633.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1633.session.nid_c = 0;
  outC->_L1633.session.nid_rbc = 0;
  outC->_L1633.session.nid_radio = 0;
  outC->_L1634.registration.valid = kcg_true;
  outC->_L1634.registration.mobileDeviceNo = 0;
  outC->_L1634.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L1634.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L1634.registration.nid_mn = 0;
  outC->_L1634.connection.valid = kcg_true;
  outC->_L1634.connection.mobileDeviceNo = 0;
  outC->_L1634.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L1634.connection.nid_radio = 0;
  outC->_L1634.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L1634.connection.connectionLost = kcg_true;
  outC->_L1634.connection.isInRadioHole = kcg_true;
  outC->_L1634.session.valid = kcg_true;
  outC->_L1634.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L1634.session.nid_c = 0;
  outC->_L1634.session.nid_rbc = 0;
  outC->_L1634.session.nid_radio = 0;
  outC->_L1635.valid = kcg_true;
  outC->_L1635.mobileDeviceNo = 0;
  outC->_L1635.action = mca_nop_RCM_Types_Pkg;
  outC->_L1635.nid_radio = 0;
  outC->_L1636.valid = kcg_true;
  outC->_L1636.mobileDeviceNo = 0;
  outC->_L1636.action = mca_nop_RCM_Types_Pkg;
  outC->_L1636.nid_radio = 0;
  outC->_L1637.valid = kcg_true;
  outC->_L1637.mobileDeviceNo = 0;
  outC->_L1637.action = mra_nop_RCM_Types_Pkg;
  outC->_L1637.network_id = 0;
  outC->_L1638.valid = kcg_true;
  outC->_L1638.mobileDeviceNo = 0;
  outC->_L1638.action = mra_nop_RCM_Types_Pkg;
  outC->_L1638.network_id = 0;
  outC->_L1639.valid = kcg_true;
  outC->_L1639.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L1640.valid = kcg_true;
  outC->_L1640.mobileDeviceNo = 0;
  outC->_L1640.nid_c = 0;
  outC->_L1640.nid_RBC = 0;
  outC->_L1640.nid_radio = 0;
  outC->_L1640.nid_mn = 0;
  outC->_L1641 = kcg_true;
  outC->_L1642 = kcg_true;
  for (i20 = 0; i20 < 5; i20++) {
    outC->_L1643[i20].Message.valid = kcg_true;
    outC->_L1643[i20].Message.nid_message = 0;
    outC->_L1643[i20].Message.l_message = 0;
    outC->_L1643[i20].Message.t_train = 0;
    outC->_L1643[i20].Message.nid_engine = 0;
    outC->_L1643[i20].Message.field1 = 0;
    outC->_L1643[i20].Message.field2 = 0;
    outC->_L1643[i20].Message.field3 = 0;
    for (i19 = 0; i19 < 50; i19++) {
      outC->_L1643[i20].OptionalPackets[i19] = 0;
    }
  }
  for (i22 = 0; i22 < 5; i22++) {
    outC->_L1644[i22].Message.valid = kcg_true;
    outC->_L1644[i22].Message.nid_message = 0;
    outC->_L1644[i22].Message.l_message = 0;
    outC->_L1644[i22].Message.t_train = 0;
    outC->_L1644[i22].Message.nid_engine = 0;
    outC->_L1644[i22].Message.field1 = 0;
    outC->_L1644[i22].Message.field2 = 0;
    outC->_L1644[i22].Message.field3 = 0;
    for (i21 = 0; i21 < 50; i21++) {
      outC->_L1644[i22].OptionalPackets[i21] = 0;
    }
  }
  outC->_L1645 = kcg_true;
  outC->_L1646 = kcg_true;
  outC->_L1647 = kcg_true;
  outC->_L1648 = kcg_true;
  outC->_L1649 = kcg_true;
  outC->_L1650.valid = kcg_true;
  outC->_L1650.q_dir = Q_DIR_Reverse;
  outC->_L1650.nid_mn = 0;
  outC->_L1651 = kcg_true;
  outC->_L1613.atPowerUp = kcg_true;
  outC->_L1613.atPowerDown = kcg_true;
  outC->_L1613.atStartOfMission = kcg_true;
  outC->_L1613.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L1613.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L1613.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L1613.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L1613.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L1613.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L1613.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L1613.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L1613.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L1613.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L1613.endOfMissionIsExecuted = kcg_true;
  outC->_L1613.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L1613.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L1613.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L1613.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L1613.trainExitedFromAnRBCArea = kcg_true;
  outC->_L1613.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L1613.level_1_isLeft = kcg_true;
  outC->_L1614.defaultID.valid = kcg_true;
  outC->_L1614.defaultID.q_dir = Q_DIR_Reverse;
  outC->_L1614.defaultID.nid_mn = 0;
  outC->_L1614.memorizedID.valid = kcg_true;
  outC->_L1614.memorizedID.q_dir = Q_DIR_Reverse;
  outC->_L1614.memorizedID.nid_mn = 0;
  outC->_L1614.ID_fromDriver.valid = kcg_true;
  outC->_L1614.ID_fromDriver.q_dir = Q_DIR_Reverse;
  outC->_L1614.ID_fromDriver.nid_mn = 0;
  outC->_L1617.nid_engine = 0;
  outC->_L1617.nid_operational = 0;
  outC->_L1617.l_train = 0;
  outC->_L1617.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L1617.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L1617.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L1617.d_frontend_2_rearend.nominal = 0;
  outC->_L1617.d_frontend_2_rearend.d_min = 0;
  outC->_L1617.d_frontend_2_rearend.d_max = 0;
  outC->_L1617.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L1617.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L1617.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L1617.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L1617.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L1617.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L1621.valid = kcg_true;
  outC->_L1621.connectionStatus = mhwc_notRegistered_MoRC_Pck;
  outC->_L1621.settingUpConnectionHasFailed = kcg_true;
  outC->_L1621.connectionLost = kcg_true;
  outC->_L1622.compatibleModeAndLevel = kcg_true;
  outC->_L1622.level = M_LEVEL_Level_0;
  outC->_L1622.newLevel = kcg_true;
  outC->_L1622.Mode = M_MODE_Full_Supervision;
  outC->_L1622.newMode = kcg_true;
  outC->_L1623 = M_MODE_Full_Supervision;
  outC->_L1624 = M_LEVEL_Level_0;
  outC->_L1629 = 0;
  outC->_L1631 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1632.valid = kcg_true;
  outC->_L1632.nid_packet = 0;
  outC->_L1632.l_packet = 0;
  outC->_L1632.n_iter = 0;
  for (i23 = 0; i23 < 5; i23++) {
    outC->_L1632.nid_radio[i23] = 0;
  }
  for (i25 = 0; i25 < 5; i25++) {
    outC->_L1596[i25].Message.valid = kcg_true;
    outC->_L1596[i25].Message.nid_message = 0;
    outC->_L1596[i25].Message.l_message = 0;
    outC->_L1596[i25].Message.t_train = 0;
    outC->_L1596[i25].Message.nid_engine = 0;
    outC->_L1596[i25].Message.field1 = 0;
    outC->_L1596[i25].Message.field2 = 0;
    outC->_L1596[i25].Message.field3 = 0;
    for (i24 = 0; i24 < 50; i24++) {
      outC->_L1596[i25].OptionalPackets[i24] = 0;
    }
  }
  outC->_L1594 = kcg_true;
  outC->_L1593.valid = kcg_true;
  outC->_L1593.systemTimeMsgReceived = 0;
  outC->_L1593.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1593.btm_msg.present = kcg_true;
  outC->_L1593.btm_msg.checkResult = kcg_true;
  outC->_L1593.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1593.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1593.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1593.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1593.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1593.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1593.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1593.btm_msg.api_header.m_mcount = 0;
  outC->_L1593.btm_msg.api_header.nid_c = 0;
  outC->_L1593.btm_msg.api_header.nid_bg = 0;
  outC->_L1593.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1593.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1593.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1593.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1593.rtm_msg.present = kcg_true;
  outC->_L1593.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1593.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1593.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1593.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1593.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1593.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1593.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1593.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1593.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1593.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L1593.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L1593.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i26 = 0; i26 < 30; i26++) {
    outC->_L1593.packets.PacketHeaders[i26].nid_packet = 0;
    outC->_L1593.packets.PacketHeaders[i26].q_dir = Q_DIR_Reverse;
    outC->_L1593.packets.PacketHeaders[i26].valid = kcg_true;
    outC->_L1593.packets.PacketHeaders[i26].startAddress = 0;
    outC->_L1593.packets.PacketHeaders[i26].endAddress = 0;
  }
  for (i27 = 0; i27 < 500; i27++) {
    outC->_L1593.packets.PacketData[i27] = 0;
  }
  outC->_L1586 = kcg_true;
  outC->_L1587 = 0;
  outC->_L1588 = 0;
  outC->_L1589 = 0;
  outC->_L1590 = 0;
  outC->_L1591 = 0;
  outC->_L1592 = 0;
  outC->_L1564 = 0;
  outC->_L1565 = 0;
  outC->_L1566 = 0;
  outC->_L1567 = 0;
  outC->_L1568 = 0;
  for (i29 = 0; i29 < 5; i29++) {
    outC->_L1563[i29].Message.valid = kcg_true;
    outC->_L1563[i29].Message.nid_message = 0;
    outC->_L1563[i29].Message.l_message = 0;
    outC->_L1563[i29].Message.t_train = 0;
    outC->_L1563[i29].Message.nid_engine = 0;
    outC->_L1563[i29].Message.field1 = 0;
    outC->_L1563[i29].Message.field2 = 0;
    outC->_L1563[i29].Message.field3 = 0;
    for (i28 = 0; i28 < 50; i28++) {
      outC->_L1563[i29].OptionalPackets[i28] = 0;
    }
  }
  for (i31 = 0; i31 < 5; i31++) {
    outC->_L1562[i31].Message.valid = kcg_true;
    outC->_L1562[i31].Message.nid_message = 0;
    outC->_L1562[i31].Message.l_message = 0;
    outC->_L1562[i31].Message.t_train = 0;
    outC->_L1562[i31].Message.nid_engine = 0;
    outC->_L1562[i31].Message.field1 = 0;
    outC->_L1562[i31].Message.field2 = 0;
    outC->_L1562[i31].Message.field3 = 0;
    for (i30 = 0; i30 < 50; i30++) {
      outC->_L1562[i31].OptionalPackets[i30] = 0;
    }
  }
  outC->_L1558.valid = kcg_true;
  outC->_L1558.nid_packet = 0;
  outC->_L1558.l_packet = 0;
  outC->_L1558.n_iter = 0;
  for (i32 = 0; i32 < 5; i32++) {
    outC->_L1558.nid_radio[i32] = 0;
  }
  for (i34 = 0; i34 < 5; i34++) {
    outC->_L1552[i34].Message.valid = kcg_true;
    outC->_L1552[i34].Message.nid_message = 0;
    outC->_L1552[i34].Message.l_message = 0;
    outC->_L1552[i34].Message.t_train = 0;
    outC->_L1552[i34].Message.nid_engine = 0;
    outC->_L1552[i34].Message.field1 = 0;
    outC->_L1552[i34].Message.field2 = 0;
    outC->_L1552[i34].Message.field3 = 0;
    for (i33 = 0; i33 < 50; i33++) {
      outC->_L1552[i34].OptionalPackets[i33] = 0;
    }
  }
  outC->_L1543 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1542 = 0;
  for (i36 = 0; i36 < 5; i36++) {
    outC->_L1540[i36].Message.valid = kcg_true;
    outC->_L1540[i36].Message.nid_message = 0;
    outC->_L1540[i36].Message.l_message = 0;
    outC->_L1540[i36].Message.t_train = 0;
    outC->_L1540[i36].Message.nid_engine = 0;
    outC->_L1540[i36].Message.field1 = 0;
    outC->_L1540[i36].Message.field2 = 0;
    outC->_L1540[i36].Message.field3 = 0;
    for (i35 = 0; i35 < 50; i35++) {
      outC->_L1540[i36].OptionalPackets[i35] = 0;
    }
  }
  outC->_L1538 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1525.LevelTransition.is_set = kcg_true;
  outC->_L1525.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->_L1525.LevelTransition.transition.position = 0;
  outC->_L1525.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1525.LevelTransition.transition.immediateAck = kcg_true;
  outC->_L1525.LevelTransition.transition.AckLength = 0;
  outC->_L1525.LevelTransition.LRBG = 0;
  outC->_L1525.LevelTransition.referenceLocation = 0;
  outC->_L1525.IsAvailableForUse = kcg_true;
  outC->_L1523.compatibleModeAndLevel = kcg_true;
  outC->_L1523.level = M_LEVEL_Level_0;
  outC->_L1523.newLevel = kcg_true;
  outC->_L1523.Mode = M_MODE_Full_Supervision;
  outC->_L1523.newMode = kcg_true;
  outC->_L1524 = kcg_true;
  outC->_L1522 = kcg_true;
  outC->_L1521.compatibleModeAndLevel = kcg_true;
  outC->_L1521.level = M_LEVEL_Level_0;
  outC->_L1521.newLevel = kcg_true;
  outC->_L1521.Mode = M_MODE_Full_Supervision;
  outC->_L1521.newMode = kcg_true;
  outC->_L1517 = kcg_true;
  outC->_L1516 = kcg_true;
  outC->_L1513 = 0.0;
  outC->_L1514 = 0;
  outC->_L1515 = 0;
  outC->_L1511 = 0.0;
  outC->_L1512 = 0;
  for (i37 = 0; i37 < 5; i37++) {
    outC->_L1510.train_packets.P_12[i37].valid = kcg_true;
    outC->_L1510.train_packets.P_12[i37].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_12[i37].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_12[i37].v_main = 0;
    outC->_L1510.train_packets.P_12[i37].v_loa = 0;
    outC->_L1510.train_packets.P_12[i37].t_loa = 0;
    outC->_L1510.train_packets.P_12[i37].l_section = 0;
    outC->_L1510.train_packets.P_12[i37].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1510.train_packets.P_12[i37].t_sectiontimer_k = 0;
    outC->_L1510.train_packets.P_12[i37].d_sectiontimerstoploc_k = 0;
    outC->_L1510.train_packets.P_12[i37].l_endsection = 0;
    outC->_L1510.train_packets.P_12[i37].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1510.train_packets.P_12[i37].t_sectiontimer = 0;
    outC->_L1510.train_packets.P_12[i37].d_sectiontimerstoploc = 0;
    outC->_L1510.train_packets.P_12[i37].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1510.train_packets.P_12[i37].t_endtimer = 0;
    outC->_L1510.train_packets.P_12[i37].d_endtimerstartloc = 0;
    outC->_L1510.train_packets.P_12[i37].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1510.train_packets.P_12[i37].d_dp = 0;
    outC->_L1510.train_packets.P_12[i37].v_releasedp = 0;
    outC->_L1510.train_packets.P_12[i37].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1510.train_packets.P_12[i37].d_startol = 0;
    outC->_L1510.train_packets.P_12[i37].t_ol = 0;
    outC->_L1510.train_packets.P_12[i37].d_ol = 0;
    outC->_L1510.train_packets.P_12[i37].v_releaseol = 0;
  }
  outC->_L1510.train_packets.P_135.valid = kcg_true;
  outC->_L1510.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_137.valid = kcg_true;
  outC->_L1510.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1510.train_packets.P_138.valid = kcg_true;
  outC->_L1510.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1510.train_packets.P_138.d_startreverse = 0;
  outC->_L1510.train_packets.P_138.l_reversearea = 0;
  outC->_L1510.train_packets.P_139.valid = kcg_true;
  outC->_L1510.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1510.train_packets.P_139.d_reverse = 0;
  outC->_L1510.train_packets.P_139.v_reverse = 0;
  for (i38 = 0; i38 < 5; i38++) {
    outC->_L1510.train_packets.P_15[i38].valid = kcg_true;
    outC->_L1510.train_packets.P_15[i38].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_15[i38].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_15[i38].v_loa = 0;
    outC->_L1510.train_packets.P_15[i38].t_loa = 0;
    outC->_L1510.train_packets.P_15[i38].l_section = 0;
    outC->_L1510.train_packets.P_15[i38].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1510.train_packets.P_15[i38].t_sectiontimer_k = 0;
    outC->_L1510.train_packets.P_15[i38].d_sectiontimerstoploc_k = 0;
    outC->_L1510.train_packets.P_15[i38].l_endsection = 0;
    outC->_L1510.train_packets.P_15[i38].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1510.train_packets.P_15[i38].t_sectiontimer = 0;
    outC->_L1510.train_packets.P_15[i38].d_sectiontimerstoploc = 0;
    outC->_L1510.train_packets.P_15[i38].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1510.train_packets.P_15[i38].t_endtimer = 0;
    outC->_L1510.train_packets.P_15[i38].d_endtimerstartloc = 0;
    outC->_L1510.train_packets.P_15[i38].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1510.train_packets.P_15[i38].d_dp = 0;
    outC->_L1510.train_packets.P_15[i38].v_releasedp = 0;
    outC->_L1510.train_packets.P_15[i38].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1510.train_packets.P_15[i38].d_startol = 0;
    outC->_L1510.train_packets.P_15[i38].t_ol = 0;
    outC->_L1510.train_packets.P_15[i38].d_ol = 0;
    outC->_L1510.train_packets.P_15[i38].v_releaseol = 0;
  }
  for (i39 = 0; i39 < 7; i39++) {
    outC->_L1510.train_packets.P_21[i39].valid = kcg_true;
    outC->_L1510.train_packets.P_21[i39].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_21[i39].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_21[i39].d_gradient = 0;
    outC->_L1510.train_packets.P_21[i39].q_gdir = Q_GDIR_downhill;
    outC->_L1510.train_packets.P_21[i39].g_a = 0;
  }
  outC->_L1510.train_packets.P_27.valid = kcg_true;
  outC->_L1510.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1510.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1510.train_packets.P_27.d_static = 0;
  outC->_L1510.train_packets.P_27.v_static = 0;
  outC->_L1510.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i40 = 0; i40 < 7; i40++) {
    outC->_L1510.train_packets.P_27.diffArray[i40].valid = kcg_true;
    outC->_L1510.train_packets.P_27.diffArray[i40].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1510.train_packets.P_27.diffArray[i40].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1510.train_packets.P_27.diffArray[i40].nc_diff = 0;
    outC->_L1510.train_packets.P_27.diffArray[i40].v_diff = 0;
  }
  for (i42 = 0; i42 < 7; i42++) {
    outC->_L1510.train_packets.P_27.SSPArray[i42].valid = kcg_true;
    outC->_L1510.train_packets.P_27.SSPArray[i42].d_static = 0;
    outC->_L1510.train_packets.P_27.SSPArray[i42].v_static = 0;
    outC->_L1510.train_packets.P_27.SSPArray[i42].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i41 = 0; i41 < 7; i41++) {
      outC->_L1510.train_packets.P_27.SSPArray[i42].diffArray[i41].valid =
        kcg_true;
      outC->_L1510.train_packets.P_27.SSPArray[i42].diffArray[i41].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1510.train_packets.P_27.SSPArray[i42].diffArray[i41].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1510.train_packets.P_27.SSPArray[i42].diffArray[i41].nc_diff = 0;
      outC->_L1510.train_packets.P_27.SSPArray[i42].diffArray[i41].v_diff = 0;
    }
  }
  for (i43 = 0; i43 < 7; i43++) {
    outC->_L1510.train_packets.P_41[i43].valid = kcg_true;
    outC->_L1510.train_packets.P_41[i43].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_41[i43].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_41[i43].d_leveltr = 0;
    outC->_L1510.train_packets.P_41[i43].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1510.train_packets.P_41[i43].nid_ntc = 0;
    outC->_L1510.train_packets.P_41[i43].l_ackleveltr = 0;
  }
  for (i44 = 0; i44 < 7; i44++) {
    outC->_L1510.train_packets.P_46[i44].valid = kcg_true;
    outC->_L1510.train_packets.P_46[i44].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_46[i44].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1510.train_packets.P_46[i44].nid_ntc = 0;
  }
  for (i45 = 0; i45 < 7; i45++) {
    outC->_L1510.train_packets.P_63[i45].valid = kcg_true;
    outC->_L1510.train_packets.P_63[i45].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_63[i45].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1510.train_packets.P_63[i45].nid_c = 0;
    outC->_L1510.train_packets.P_63[i45].nid_bg = 0;
  }
  for (i46 = 0; i46 < 3; i46++) {
    outC->_L1510.train_packets.P_80[i46].valid = kcg_true;
    outC->_L1510.train_packets.P_80[i46].q_dir = Q_DIR_Reverse;
    outC->_L1510.train_packets.P_80[i46].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1510.train_packets.P_80[i46].d_mamode = 0;
    outC->_L1510.train_packets.P_80[i46].m_mamode = M_MAMODE_On_Sight;
    outC->_L1510.train_packets.P_80[i46].v_mamode = 0;
    outC->_L1510.train_packets.P_80[i46].l_mamode = 0;
    outC->_L1510.train_packets.P_80[i46].l_ackmamode = 0;
    outC->_L1510.train_packets.P_80[i46].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1510.train_packets.LRBG = 0;
  outC->_L1510.train_packets.referenceLocation = 0;
  outC->_L1510.train_messages.Mess_15 = kcg_true;
  outC->_L1510.train_messages.Mess_16 = kcg_true;
  outC->_L1510.train_messages.Mess_2 = kcg_true;
  outC->_L1510.train_messages.Mess_27 = kcg_true;
  outC->_L1510.train_messages.Mess_28 = kcg_true;
  outC->_L1510.train_messages.Mess_6 = kcg_true;
  outC->_L1510.p12 = kcg_true;
  outC->_L1510.p15 = kcg_true;
  outC->_L1510.p21 = kcg_true;
  outC->_L1510.p27 = kcg_true;
  for (i47 = 0; i47 < 5; i47++) {
    outC->_L1503.P_12[i47].valid = kcg_true;
    outC->_L1503.P_12[i47].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_12[i47].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_12[i47].v_main = 0;
    outC->_L1503.P_12[i47].v_loa = 0;
    outC->_L1503.P_12[i47].t_loa = 0;
    outC->_L1503.P_12[i47].l_section = 0;
    outC->_L1503.P_12[i47].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1503.P_12[i47].t_sectiontimer_k = 0;
    outC->_L1503.P_12[i47].d_sectiontimerstoploc_k = 0;
    outC->_L1503.P_12[i47].l_endsection = 0;
    outC->_L1503.P_12[i47].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1503.P_12[i47].t_sectiontimer = 0;
    outC->_L1503.P_12[i47].d_sectiontimerstoploc = 0;
    outC->_L1503.P_12[i47].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1503.P_12[i47].t_endtimer = 0;
    outC->_L1503.P_12[i47].d_endtimerstartloc = 0;
    outC->_L1503.P_12[i47].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1503.P_12[i47].d_dp = 0;
    outC->_L1503.P_12[i47].v_releasedp = 0;
    outC->_L1503.P_12[i47].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L1503.P_12[i47].d_startol = 0;
    outC->_L1503.P_12[i47].t_ol = 0;
    outC->_L1503.P_12[i47].d_ol = 0;
    outC->_L1503.P_12[i47].v_releaseol = 0;
  }
  outC->_L1503.P_135.valid = kcg_true;
  outC->_L1503.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_137.valid = kcg_true;
  outC->_L1503.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1503.P_138.valid = kcg_true;
  outC->_L1503.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1503.P_138.d_startreverse = 0;
  outC->_L1503.P_138.l_reversearea = 0;
  outC->_L1503.P_139.valid = kcg_true;
  outC->_L1503.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1503.P_139.d_reverse = 0;
  outC->_L1503.P_139.v_reverse = 0;
  for (i48 = 0; i48 < 5; i48++) {
    outC->_L1503.P_15[i48].valid = kcg_true;
    outC->_L1503.P_15[i48].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_15[i48].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_15[i48].v_loa = 0;
    outC->_L1503.P_15[i48].t_loa = 0;
    outC->_L1503.P_15[i48].l_section = 0;
    outC->_L1503.P_15[i48].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1503.P_15[i48].t_sectiontimer_k = 0;
    outC->_L1503.P_15[i48].d_sectiontimerstoploc_k = 0;
    outC->_L1503.P_15[i48].l_endsection = 0;
    outC->_L1503.P_15[i48].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1503.P_15[i48].t_sectiontimer = 0;
    outC->_L1503.P_15[i48].d_sectiontimerstoploc = 0;
    outC->_L1503.P_15[i48].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1503.P_15[i48].t_endtimer = 0;
    outC->_L1503.P_15[i48].d_endtimerstartloc = 0;
    outC->_L1503.P_15[i48].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1503.P_15[i48].d_dp = 0;
    outC->_L1503.P_15[i48].v_releasedp = 0;
    outC->_L1503.P_15[i48].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L1503.P_15[i48].d_startol = 0;
    outC->_L1503.P_15[i48].t_ol = 0;
    outC->_L1503.P_15[i48].d_ol = 0;
    outC->_L1503.P_15[i48].v_releaseol = 0;
  }
  for (i49 = 0; i49 < 7; i49++) {
    outC->_L1503.P_21[i49].valid = kcg_true;
    outC->_L1503.P_21[i49].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_21[i49].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_21[i49].d_gradient = 0;
    outC->_L1503.P_21[i49].q_gdir = Q_GDIR_downhill;
    outC->_L1503.P_21[i49].g_a = 0;
  }
  outC->_L1503.P_27.valid = kcg_true;
  outC->_L1503.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1503.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1503.P_27.d_static = 0;
  outC->_L1503.P_27.v_static = 0;
  outC->_L1503.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i50 = 0; i50 < 7; i50++) {
    outC->_L1503.P_27.diffArray[i50].valid = kcg_true;
    outC->_L1503.P_27.diffArray[i50].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1503.P_27.diffArray[i50].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1503.P_27.diffArray[i50].nc_diff = 0;
    outC->_L1503.P_27.diffArray[i50].v_diff = 0;
  }
  for (i52 = 0; i52 < 7; i52++) {
    outC->_L1503.P_27.SSPArray[i52].valid = kcg_true;
    outC->_L1503.P_27.SSPArray[i52].d_static = 0;
    outC->_L1503.P_27.SSPArray[i52].v_static = 0;
    outC->_L1503.P_27.SSPArray[i52].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i51 = 0; i51 < 7; i51++) {
      outC->_L1503.P_27.SSPArray[i52].diffArray[i51].valid = kcg_true;
      outC->_L1503.P_27.SSPArray[i52].diffArray[i51].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1503.P_27.SSPArray[i52].diffArray[i51].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1503.P_27.SSPArray[i52].diffArray[i51].nc_diff = 0;
      outC->_L1503.P_27.SSPArray[i52].diffArray[i51].v_diff = 0;
    }
  }
  for (i53 = 0; i53 < 7; i53++) {
    outC->_L1503.P_41[i53].valid = kcg_true;
    outC->_L1503.P_41[i53].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_41[i53].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_41[i53].d_leveltr = 0;
    outC->_L1503.P_41[i53].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1503.P_41[i53].nid_ntc = 0;
    outC->_L1503.P_41[i53].l_ackleveltr = 0;
  }
  for (i54 = 0; i54 < 7; i54++) {
    outC->_L1503.P_46[i54].valid = kcg_true;
    outC->_L1503.P_46[i54].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_46[i54].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1503.P_46[i54].nid_ntc = 0;
  }
  for (i55 = 0; i55 < 7; i55++) {
    outC->_L1503.P_63[i55].valid = kcg_true;
    outC->_L1503.P_63[i55].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_63[i55].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1503.P_63[i55].nid_c = 0;
    outC->_L1503.P_63[i55].nid_bg = 0;
  }
  for (i56 = 0; i56 < 3; i56++) {
    outC->_L1503.P_80[i56].valid = kcg_true;
    outC->_L1503.P_80[i56].q_dir = Q_DIR_Reverse;
    outC->_L1503.P_80[i56].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1503.P_80[i56].d_mamode = 0;
    outC->_L1503.P_80[i56].m_mamode = M_MAMODE_On_Sight;
    outC->_L1503.P_80[i56].v_mamode = 0;
    outC->_L1503.P_80[i56].l_mamode = 0;
    outC->_L1503.P_80[i56].l_ackmamode = 0;
    outC->_L1503.P_80[i56].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1503.LRBG = 0;
  outC->_L1503.referenceLocation = 0;
  for (i57 = 0; i57 < 5; i57++) {
    outC->_L1502.P_12[i57].valid = kcg_true;
    outC->_L1502.P_12[i57].q_dir = Q_DIR_Reverse;
    outC->_L1502.P_12[i57].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1502.P_12[i57].v_main = 0;
    outC->_L1502.P_12[i57].v_loa = 0;
    outC->_L1502.P_12[i57].t_loa = 0;
    outC->_L1502.P_12[i57].l_section = 0;
    outC->_L1502.P_12[i57].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1502.P_12[i57].t_sectiontimer_k = 0;
    outC->_L1502.P_12[i57].d_sectiontimerstoploc_k = 0;
    outC->_L1502.P_12[i57].l_endsection = 0;
    outC->_L1502.P_12[i57].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1502.P_12[i57].t_sectiontimer = 0;
    outC->_L1502.P_12[i57].d_sectiontimerstoploc = 0;
    outC->_L1502.P_12[i57].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1502.P_12[i57].t_endtimer = 0;
    outC->_L1502.P_12[i57].d_endtimerstartloc = 0;
    outC->_L1502.P_12[i57].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1502.P_12[i57].d_dp = 0;
    outC->_L1502.P_12[i57].v_releasedp = 0;
    outC->_L1502.P_12[i57].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L1502.P_12[i57].d_startol = 0;
    outC->_L1502.P_12[i57].t_ol = 0;
    outC->_L1502.P_12[i57].d_ol = 0;
    outC->_L1502.P_12[i57].v_releaseol = 0;
  }
  outC->_L1502.P_135.valid = kcg_true;
  outC->_L1502.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1502.P_137.valid = kcg_true;
  outC->_L1502.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1502.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1502.P_138.valid = kcg_true;
  outC->_L1502.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1502.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1502.P_138.d_startreverse = 0;
  outC->_L1502.P_138.l_reversearea = 0;
  outC->_L1502.P_139.valid = kcg_true;
  outC->_L1502.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1502.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1502.P_139.d_reverse = 0;
  outC->_L1502.P_139.v_reverse = 0;
  for (i58 = 0; i58 < 5; i58++) {
    outC->_L1502.P_15[i58].valid = kcg_true;
    outC->_L1502.P_15[i58].q_dir = Q_DIR_Reverse;
    outC->_L1502.P_15[i58].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1502.P_15[i58].v_loa = 0;
    outC->_L1502.P_15[i58].t_loa = 0;
    outC->_L1502.P_15[i58].l_section = 0;
    outC->_L1502.P_15[i58].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1502.P_15[i58].t_sectiontimer_k = 0;
    outC->_L1502.P_15[i58].d_sectiontimerstoploc_k = 0;
    outC->_L1502.P_15[i58].l_endsection = 0;
    outC->_L1502.P_15[i58].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1502.P_15[i58].t_sectiontimer = 0;
    outC->_L1502.P_15[i58].d_sectiontimerstoploc = 0;
    outC->_L1502.P_15[i58].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1502.P_15[i58].t_endtimer = 0;
    outC->_L1502.P_15[i58].d_endtimerstartloc = 0;
    outC->_L1502.P_15[i58].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1502.P_15[i58].d_dp = 0;
    outC->_L1502.P_15[i58].v_releasedp = 0;
    outC->_L1502.P_15[i58].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L1502.P_15[i58].d_startol = 0;
    outC->_L1502.P_15[i58].t_ol = 0;
    outC->_L1502.P_15[i58].d_ol = 0;
    outC->_L1502.P_15[i58].v_releaseol = 0;
  }
  for (i59 = 0; i59 < 7; i59++) {
    outC->_L1502.P_21[i59].valid = kcg_true;
    outC->_L1502.P_21[i59].q_dir = Q_DIR_Reverse;
    outC->_L1502.P_21[i59].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1502.P_21[i59].d_gradient = 0;
    outC->_L1502.P_21[i59].q_gdir = Q_GDIR_downhill;
    outC->_L1502.P_21[i59].g_a = 0;
  }
  outC->_L1502.P_27.valid = kcg_true;
  outC->_L1502.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1502.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1502.P_27.d_static = 0;
  outC->_L1502.P_27.v_static = 0;
  outC->_L1502.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i60 = 0; i60 < 7; i60++) {
    outC->_L1502.P_27.diffArray[i60].valid = kcg_true;
    outC->_L1502.P_27.diffArray[i60].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1502.P_27.diffArray[i60].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1502.P_27.diffArray[i60].nc_diff = 0;
    outC->_L1502.P_27.diffArray[i60].v_diff = 0;
  }
  for (i62 = 0; i62 < 7; i62++) {
    outC->_L1502.P_27.SSPArray[i62].valid = kcg_true;
    outC->_L1502.P_27.SSPArray[i62].d_static = 0;
    outC->_L1502.P_27.SSPArray[i62].v_static = 0;
    outC->_L1502.P_27.SSPArray[i62].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i61 = 0; i61 < 7; i61++) {
      outC->_L1502.P_27.SSPArray[i62].diffArray[i61].valid = kcg_true;
      outC->_L1502.P_27.SSPArray[i62].diffArray[i61].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1502.P_27.SSPArray[i62].diffArray[i61].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1502.P_27.SSPArray[i62].diffArray[i61].nc_diff = 0;
      outC->_L1502.P_27.SSPArray[i62].diffArray[i61].v_diff = 0;
    }
  }
  for (i63 = 0; i63 < 7; i63++) {
    outC->_L1502.P_41[i63].valid = kcg_true;
    outC->_L1502.P_41[i63].q_dir = Q_DIR_Reverse;
    outC->_L1502.P_41[i63].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1502.P_41[i63].d_leveltr = 0;
    outC->_L1502.P_41[i63].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1502.P_41[i63].nid_ntc = 0;
    outC->_L1502.P_41[i63].l_ackleveltr = 0;
  }
  for (i64 = 0; i64 < 7; i64++) {
    outC->_L1502.P_46[i64].valid = kcg_true;
    outC->_L1502.P_46[i64].q_dir = Q_DIR_Reverse;
    outC->_L1502.P_46[i64].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1502.P_46[i64].nid_ntc = 0;
  }
  for (i65 = 0; i65 < 7; i65++) {
    outC->_L1502.P_63[i65].valid = kcg_true;
    outC->_L1502.P_63[i65].q_dir = Q_DIR_Reverse;
    outC->_L1502.P_63[i65].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1502.P_63[i65].nid_c = 0;
    outC->_L1502.P_63[i65].nid_bg = 0;
  }
  for (i66 = 0; i66 < 3; i66++) {
    outC->_L1502.P_80[i66].valid = kcg_true;
    outC->_L1502.P_80[i66].q_dir = Q_DIR_Reverse;
    outC->_L1502.P_80[i66].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1502.P_80[i66].d_mamode = 0;
    outC->_L1502.P_80[i66].m_mamode = M_MAMODE_On_Sight;
    outC->_L1502.P_80[i66].v_mamode = 0;
    outC->_L1502.P_80[i66].l_mamode = 0;
    outC->_L1502.P_80[i66].l_ackmamode = 0;
    outC->_L1502.P_80[i66].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1502.LRBG = 0;
  outC->_L1502.referenceLocation = 0;
  outC->_L1501.Interface_To_National_System = kcg_true;
  outC->_L1501.National_trip_Order = kcg_true;
  outC->_L1500 = kcg_true;
  outC->_L1499.Common_Errors.linkedBGError = kcg_true;
  outC->_L1499.Common_Errors.unlinkedBGError = kcg_true;
  outC->_L1499.Common_Errors.BG_versionIncompatible = kcg_true;
  outC->_L1499.Common_Errors.radioSequenceError = kcg_true;
  outC->_L1499.Common_Errors.tNvContactError = kcg_true;
  outC->_L1499.Common_Errors.otherTimingError = kcg_true;
  outC->_L1499.Common_Errors.radioMessageConsistencyError = kcg_true;
  outC->_L1499.Common_Errors.nid_c = 0;
  outC->_L1499.Common_Errors.nid_errorbg = 0;
  outC->_L1499.Failure_Occured = kcg_true;
  outC->_L1499.Continue_Shunting_Active = kcg_true;
  outC->_L1499.Stop_Shunting_Stored = kcg_true;
  outC->_L1498.isChanged = kcg_true;
  outC->_L1498.bg_id = 0;
  outC->_L1498.nid_c = 0;
  outC->_L1498.errors.linkedBGError = kcg_true;
  outC->_L1498.errors.unlinkedBGError = kcg_true;
  outC->_L1498.errors.BG_versionIncompatible = kcg_true;
  outC->_L1498.errors.radioSequenceError = kcg_true;
  outC->_L1498.errors.tNvContactError = kcg_true;
  outC->_L1498.errors.otherTimingError = kcg_true;
  outC->_L1498.errors.radioMessageConsistencyError = kcg_true;
  outC->_L1498.errors.nid_c = 0;
  outC->_L1498.errors.nid_errorbg = 0;
  outC->_L1497.linkedBGError = kcg_true;
  outC->_L1497.unlinkedBGError = kcg_true;
  outC->_L1497.BG_versionIncompatible = kcg_true;
  outC->_L1497.radioSequenceError = kcg_true;
  outC->_L1497.tNvContactError = kcg_true;
  outC->_L1497.otherTimingError = kcg_true;
  outC->_L1497.radioMessageConsistencyError = kcg_true;
  outC->_L1497.nid_c = 0;
  outC->_L1497.nid_errorbg = 0;
  outC->_L1496.valid = kcg_true;
  outC->_L1496.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1496.radioMetadata.t_train_reference = kcg_true;
  outC->_L1496.radioMetadata.nid_em = kcg_true;
  outC->_L1496.radioMetadata.q_scale = kcg_true;
  outC->_L1496.radioMetadata.d_sr = kcg_true;
  outC->_L1496.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1496.radioMetadata.d_ref = kcg_true;
  outC->_L1496.radioMetadata.q_dir = kcg_true;
  outC->_L1496.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1496.radioMetadata.m_version = kcg_true;
  outC->_L1496.BG_Common_Header.valid = kcg_true;
  outC->_L1496.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1496.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1496.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1496.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1496.BG_Common_Header.m_mcount = 0;
  outC->_L1496.BG_Common_Header.nid_c = 0;
  outC->_L1496.BG_Common_Header.nid_bg = 0;
  outC->_L1496.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1496.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1496.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1496.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1496.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1496.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1496.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1496.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1496.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1496.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1496.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1496.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1496.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1496.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1496.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1496.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1496.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1496.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1496.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1496.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1496.Radio_Common_Header.radioDevice = 0;
  outC->_L1496.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1496.Radio_Common_Header.nid_message = 0;
  outC->_L1496.Radio_Common_Header.t_train = 0;
  outC->_L1496.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1496.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1496.Radio_Common_Header.t_train_reference = 0;
  outC->_L1496.Radio_Common_Header.nid_em = 0;
  outC->_L1496.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1496.Radio_Common_Header.d_sr = 0;
  outC->_L1496.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1496.Radio_Common_Header.d_ref = 0;
  outC->_L1496.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1496.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1496.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i67 = 0; i67 < 30; i67++) {
    outC->_L1496.packets.PacketHeaders[i67].nid_packet = 0;
    outC->_L1496.packets.PacketHeaders[i67].q_dir = Q_DIR_Reverse;
    outC->_L1496.packets.PacketHeaders[i67].valid = kcg_true;
    outC->_L1496.packets.PacketHeaders[i67].startAddress = 0;
    outC->_L1496.packets.PacketHeaders[i67].endAddress = 0;
  }
  for (i68 = 0; i68 < 500; i68++) {
    outC->_L1496.packets.PacketData[i68] = 0;
  }
  outC->_L1496.sendingRBC.valid = kcg_true;
  outC->_L1496.sendingRBC.nid_c = 0;
  outC->_L1496.sendingRBC.rbc_id = 0;
  outC->_L1496.sendingRBC.device_id = 0;
  outC->_L1495.valid = kcg_true;
  outC->_L1495.timestamp = 0;
  outC->_L1495.odo.o_nominal = 0;
  outC->_L1495.odo.o_min = 0;
  outC->_L1495.odo.o_max = 0;
  outC->_L1495.speed.v_safeNominal = 0;
  outC->_L1495.speed.v_rawNominal = 0;
  outC->_L1495.speed.v_lower = 0;
  outC->_L1495.speed.v_upper = 0;
  outC->_L1495.acceleration = 0;
  outC->_L1495.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1495.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1493 = kcg_true;
  outC->_L1492 = kcg_true;
  outC->_L1491 = kcg_true;
  outC->_L1487 = kcg_true;
  outC->_L1488 = kcg_true;
  outC->_L1489 = kcg_true;
  for (i70 = 0; i70 < 5; i70++) {
    outC->_L1490[i70].Message.valid = kcg_true;
    outC->_L1490[i70].Message.nid_message = 0;
    outC->_L1490[i70].Message.l_message = 0;
    outC->_L1490[i70].Message.t_train = 0;
    outC->_L1490[i70].Message.nid_engine = 0;
    outC->_L1490[i70].Message.field1 = 0;
    outC->_L1490[i70].Message.field2 = 0;
    outC->_L1490[i70].Message.field3 = 0;
    for (i69 = 0; i69 < 50; i69++) {
      outC->_L1490[i70].OptionalPackets[i69] = 0;
    }
  }
  outC->_L1486.valid = kcg_true;
  outC->_L1486.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1486.radioMetadata.t_train_reference = kcg_true;
  outC->_L1486.radioMetadata.nid_em = kcg_true;
  outC->_L1486.radioMetadata.q_scale = kcg_true;
  outC->_L1486.radioMetadata.d_sr = kcg_true;
  outC->_L1486.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1486.radioMetadata.d_ref = kcg_true;
  outC->_L1486.radioMetadata.q_dir = kcg_true;
  outC->_L1486.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1486.radioMetadata.m_version = kcg_true;
  outC->_L1486.BG_Common_Header.valid = kcg_true;
  outC->_L1486.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1486.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1486.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1486.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1486.BG_Common_Header.m_mcount = 0;
  outC->_L1486.BG_Common_Header.nid_c = 0;
  outC->_L1486.BG_Common_Header.nid_bg = 0;
  outC->_L1486.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1486.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1486.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1486.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1486.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1486.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1486.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1486.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1486.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1486.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1486.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1486.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1486.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1486.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1486.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1486.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1486.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1486.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1486.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1486.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1486.Radio_Common_Header.radioDevice = 0;
  outC->_L1486.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1486.Radio_Common_Header.nid_message = 0;
  outC->_L1486.Radio_Common_Header.t_train = 0;
  outC->_L1486.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1486.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1486.Radio_Common_Header.t_train_reference = 0;
  outC->_L1486.Radio_Common_Header.nid_em = 0;
  outC->_L1486.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1486.Radio_Common_Header.d_sr = 0;
  outC->_L1486.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1486.Radio_Common_Header.d_ref = 0;
  outC->_L1486.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1486.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1486.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i71 = 0; i71 < 30; i71++) {
    outC->_L1486.packets.PacketHeaders[i71].nid_packet = 0;
    outC->_L1486.packets.PacketHeaders[i71].q_dir = Q_DIR_Reverse;
    outC->_L1486.packets.PacketHeaders[i71].valid = kcg_true;
    outC->_L1486.packets.PacketHeaders[i71].startAddress = 0;
    outC->_L1486.packets.PacketHeaders[i71].endAddress = 0;
  }
  for (i72 = 0; i72 < 500; i72++) {
    outC->_L1486.packets.PacketData[i72] = 0;
  }
  outC->_L1486.sendingRBC.valid = kcg_true;
  outC->_L1486.sendingRBC.nid_c = 0;
  outC->_L1486.sendingRBC.rbc_id = 0;
  outC->_L1486.sendingRBC.device_id = 0;
  outC->_L1485.valid = kcg_true;
  outC->_L1485.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1485.radioMetadata.t_train_reference = kcg_true;
  outC->_L1485.radioMetadata.nid_em = kcg_true;
  outC->_L1485.radioMetadata.q_scale = kcg_true;
  outC->_L1485.radioMetadata.d_sr = kcg_true;
  outC->_L1485.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1485.radioMetadata.d_ref = kcg_true;
  outC->_L1485.radioMetadata.q_dir = kcg_true;
  outC->_L1485.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1485.radioMetadata.m_version = kcg_true;
  outC->_L1485.BG_Common_Header.valid = kcg_true;
  outC->_L1485.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1485.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1485.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1485.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1485.BG_Common_Header.m_mcount = 0;
  outC->_L1485.BG_Common_Header.nid_c = 0;
  outC->_L1485.BG_Common_Header.nid_bg = 0;
  outC->_L1485.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1485.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1485.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1485.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1485.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1485.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1485.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1485.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1485.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1485.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1485.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1485.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1485.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1485.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1485.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1485.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1485.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1485.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1485.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1485.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1485.Radio_Common_Header.radioDevice = 0;
  outC->_L1485.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1485.Radio_Common_Header.nid_message = 0;
  outC->_L1485.Radio_Common_Header.t_train = 0;
  outC->_L1485.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1485.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1485.Radio_Common_Header.t_train_reference = 0;
  outC->_L1485.Radio_Common_Header.nid_em = 0;
  outC->_L1485.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1485.Radio_Common_Header.d_sr = 0;
  outC->_L1485.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1485.Radio_Common_Header.d_ref = 0;
  outC->_L1485.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1485.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1485.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i73 = 0; i73 < 30; i73++) {
    outC->_L1485.packets.PacketHeaders[i73].nid_packet = 0;
    outC->_L1485.packets.PacketHeaders[i73].q_dir = Q_DIR_Reverse;
    outC->_L1485.packets.PacketHeaders[i73].valid = kcg_true;
    outC->_L1485.packets.PacketHeaders[i73].startAddress = 0;
    outC->_L1485.packets.PacketHeaders[i73].endAddress = 0;
  }
  for (i74 = 0; i74 < 500; i74++) {
    outC->_L1485.packets.PacketData[i74] = 0;
  }
  outC->_L1485.sendingRBC.valid = kcg_true;
  outC->_L1485.sendingRBC.nid_c = 0;
  outC->_L1485.sendingRBC.rbc_id = 0;
  outC->_L1485.sendingRBC.device_id = 0;
  outC->_L1483.valid = kcg_true;
  outC->_L1483.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1483.radioMetadata.t_train_reference = kcg_true;
  outC->_L1483.radioMetadata.nid_em = kcg_true;
  outC->_L1483.radioMetadata.q_scale = kcg_true;
  outC->_L1483.radioMetadata.d_sr = kcg_true;
  outC->_L1483.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1483.radioMetadata.d_ref = kcg_true;
  outC->_L1483.radioMetadata.q_dir = kcg_true;
  outC->_L1483.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1483.radioMetadata.m_version = kcg_true;
  outC->_L1483.BG_Common_Header.valid = kcg_true;
  outC->_L1483.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1483.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1483.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1483.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1483.BG_Common_Header.m_mcount = 0;
  outC->_L1483.BG_Common_Header.nid_c = 0;
  outC->_L1483.BG_Common_Header.nid_bg = 0;
  outC->_L1483.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1483.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1483.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1483.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1483.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1483.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1483.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1483.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1483.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1483.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1483.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1483.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1483.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1483.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1483.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1483.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1483.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1483.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1483.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1483.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1483.Radio_Common_Header.radioDevice = 0;
  outC->_L1483.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1483.Radio_Common_Header.nid_message = 0;
  outC->_L1483.Radio_Common_Header.t_train = 0;
  outC->_L1483.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1483.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1483.Radio_Common_Header.t_train_reference = 0;
  outC->_L1483.Radio_Common_Header.nid_em = 0;
  outC->_L1483.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1483.Radio_Common_Header.d_sr = 0;
  outC->_L1483.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1483.Radio_Common_Header.d_ref = 0;
  outC->_L1483.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1483.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1483.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i75 = 0; i75 < 30; i75++) {
    outC->_L1483.packets.PacketHeaders[i75].nid_packet = 0;
    outC->_L1483.packets.PacketHeaders[i75].q_dir = Q_DIR_Reverse;
    outC->_L1483.packets.PacketHeaders[i75].valid = kcg_true;
    outC->_L1483.packets.PacketHeaders[i75].startAddress = 0;
    outC->_L1483.packets.PacketHeaders[i75].endAddress = 0;
  }
  for (i76 = 0; i76 < 500; i76++) {
    outC->_L1483.packets.PacketData[i76] = 0;
  }
  outC->_L1483.sendingRBC.valid = kcg_true;
  outC->_L1483.sendingRBC.nid_c = 0;
  outC->_L1483.sendingRBC.rbc_id = 0;
  outC->_L1483.sendingRBC.device_id = 0;
  outC->_L1482 = kcg_true;
  outC->_L1481 = kcg_true;
  outC->_L1479.valid = kcg_true;
  outC->_L1479.whichMode = M_MODE_Full_Supervision;
  outC->_L1479.SH_Req_RefusedByRBC = kcg_true;
  outC->_L1479.LevelNeedsAck = kcg_true;
  outC->_L1471.valid = kcg_true;
  outC->_L1471.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1471.radioMetadata.t_train_reference = kcg_true;
  outC->_L1471.radioMetadata.nid_em = kcg_true;
  outC->_L1471.radioMetadata.q_scale = kcg_true;
  outC->_L1471.radioMetadata.d_sr = kcg_true;
  outC->_L1471.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1471.radioMetadata.d_ref = kcg_true;
  outC->_L1471.radioMetadata.q_dir = kcg_true;
  outC->_L1471.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1471.radioMetadata.m_version = kcg_true;
  outC->_L1471.BG_Common_Header.valid = kcg_true;
  outC->_L1471.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1471.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1471.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1471.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1471.BG_Common_Header.m_mcount = 0;
  outC->_L1471.BG_Common_Header.nid_c = 0;
  outC->_L1471.BG_Common_Header.nid_bg = 0;
  outC->_L1471.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1471.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1471.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1471.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1471.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1471.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1471.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1471.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1471.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1471.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1471.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1471.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1471.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1471.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1471.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1471.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1471.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1471.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1471.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1471.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1471.Radio_Common_Header.radioDevice = 0;
  outC->_L1471.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1471.Radio_Common_Header.nid_message = 0;
  outC->_L1471.Radio_Common_Header.t_train = 0;
  outC->_L1471.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1471.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1471.Radio_Common_Header.t_train_reference = 0;
  outC->_L1471.Radio_Common_Header.nid_em = 0;
  outC->_L1471.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1471.Radio_Common_Header.d_sr = 0;
  outC->_L1471.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1471.Radio_Common_Header.d_ref = 0;
  outC->_L1471.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1471.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1471.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i77 = 0; i77 < 30; i77++) {
    outC->_L1471.packets.PacketHeaders[i77].nid_packet = 0;
    outC->_L1471.packets.PacketHeaders[i77].q_dir = Q_DIR_Reverse;
    outC->_L1471.packets.PacketHeaders[i77].valid = kcg_true;
    outC->_L1471.packets.PacketHeaders[i77].startAddress = 0;
    outC->_L1471.packets.PacketHeaders[i77].endAddress = 0;
  }
  for (i78 = 0; i78 < 500; i78++) {
    outC->_L1471.packets.PacketData[i78] = 0;
  }
  outC->_L1471.sendingRBC.valid = kcg_true;
  outC->_L1471.sendingRBC.nid_c = 0;
  outC->_L1471.sendingRBC.rbc_id = 0;
  outC->_L1471.sendingRBC.device_id = 0;
  outC->_L1467.Mess_15 = kcg_true;
  outC->_L1467.Mess_16 = kcg_true;
  outC->_L1467.Mess_2 = kcg_true;
  outC->_L1467.Mess_27 = kcg_true;
  outC->_L1467.Mess_28 = kcg_true;
  outC->_L1467.Mess_6 = kcg_true;
  for (i79 = 0; i79 < 5; i79++) {
    outC->_L1466.train_packets.P_12[i79].valid = kcg_true;
    outC->_L1466.train_packets.P_12[i79].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_12[i79].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_12[i79].v_main = 0;
    outC->_L1466.train_packets.P_12[i79].v_loa = 0;
    outC->_L1466.train_packets.P_12[i79].t_loa = 0;
    outC->_L1466.train_packets.P_12[i79].l_section = 0;
    outC->_L1466.train_packets.P_12[i79].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1466.train_packets.P_12[i79].t_sectiontimer_k = 0;
    outC->_L1466.train_packets.P_12[i79].d_sectiontimerstoploc_k = 0;
    outC->_L1466.train_packets.P_12[i79].l_endsection = 0;
    outC->_L1466.train_packets.P_12[i79].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1466.train_packets.P_12[i79].t_sectiontimer = 0;
    outC->_L1466.train_packets.P_12[i79].d_sectiontimerstoploc = 0;
    outC->_L1466.train_packets.P_12[i79].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1466.train_packets.P_12[i79].t_endtimer = 0;
    outC->_L1466.train_packets.P_12[i79].d_endtimerstartloc = 0;
    outC->_L1466.train_packets.P_12[i79].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1466.train_packets.P_12[i79].d_dp = 0;
    outC->_L1466.train_packets.P_12[i79].v_releasedp = 0;
    outC->_L1466.train_packets.P_12[i79].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1466.train_packets.P_12[i79].d_startol = 0;
    outC->_L1466.train_packets.P_12[i79].t_ol = 0;
    outC->_L1466.train_packets.P_12[i79].d_ol = 0;
    outC->_L1466.train_packets.P_12[i79].v_releaseol = 0;
  }
  outC->_L1466.train_packets.P_135.valid = kcg_true;
  outC->_L1466.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_137.valid = kcg_true;
  outC->_L1466.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1466.train_packets.P_138.valid = kcg_true;
  outC->_L1466.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1466.train_packets.P_138.d_startreverse = 0;
  outC->_L1466.train_packets.P_138.l_reversearea = 0;
  outC->_L1466.train_packets.P_139.valid = kcg_true;
  outC->_L1466.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1466.train_packets.P_139.d_reverse = 0;
  outC->_L1466.train_packets.P_139.v_reverse = 0;
  for (i80 = 0; i80 < 5; i80++) {
    outC->_L1466.train_packets.P_15[i80].valid = kcg_true;
    outC->_L1466.train_packets.P_15[i80].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_15[i80].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_15[i80].v_loa = 0;
    outC->_L1466.train_packets.P_15[i80].t_loa = 0;
    outC->_L1466.train_packets.P_15[i80].l_section = 0;
    outC->_L1466.train_packets.P_15[i80].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1466.train_packets.P_15[i80].t_sectiontimer_k = 0;
    outC->_L1466.train_packets.P_15[i80].d_sectiontimerstoploc_k = 0;
    outC->_L1466.train_packets.P_15[i80].l_endsection = 0;
    outC->_L1466.train_packets.P_15[i80].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1466.train_packets.P_15[i80].t_sectiontimer = 0;
    outC->_L1466.train_packets.P_15[i80].d_sectiontimerstoploc = 0;
    outC->_L1466.train_packets.P_15[i80].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1466.train_packets.P_15[i80].t_endtimer = 0;
    outC->_L1466.train_packets.P_15[i80].d_endtimerstartloc = 0;
    outC->_L1466.train_packets.P_15[i80].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1466.train_packets.P_15[i80].d_dp = 0;
    outC->_L1466.train_packets.P_15[i80].v_releasedp = 0;
    outC->_L1466.train_packets.P_15[i80].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1466.train_packets.P_15[i80].d_startol = 0;
    outC->_L1466.train_packets.P_15[i80].t_ol = 0;
    outC->_L1466.train_packets.P_15[i80].d_ol = 0;
    outC->_L1466.train_packets.P_15[i80].v_releaseol = 0;
  }
  for (i81 = 0; i81 < 7; i81++) {
    outC->_L1466.train_packets.P_21[i81].valid = kcg_true;
    outC->_L1466.train_packets.P_21[i81].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_21[i81].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_21[i81].d_gradient = 0;
    outC->_L1466.train_packets.P_21[i81].q_gdir = Q_GDIR_downhill;
    outC->_L1466.train_packets.P_21[i81].g_a = 0;
  }
  outC->_L1466.train_packets.P_27.valid = kcg_true;
  outC->_L1466.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1466.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1466.train_packets.P_27.d_static = 0;
  outC->_L1466.train_packets.P_27.v_static = 0;
  outC->_L1466.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i82 = 0; i82 < 7; i82++) {
    outC->_L1466.train_packets.P_27.diffArray[i82].valid = kcg_true;
    outC->_L1466.train_packets.P_27.diffArray[i82].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1466.train_packets.P_27.diffArray[i82].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1466.train_packets.P_27.diffArray[i82].nc_diff = 0;
    outC->_L1466.train_packets.P_27.diffArray[i82].v_diff = 0;
  }
  for (i84 = 0; i84 < 7; i84++) {
    outC->_L1466.train_packets.P_27.SSPArray[i84].valid = kcg_true;
    outC->_L1466.train_packets.P_27.SSPArray[i84].d_static = 0;
    outC->_L1466.train_packets.P_27.SSPArray[i84].v_static = 0;
    outC->_L1466.train_packets.P_27.SSPArray[i84].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i83 = 0; i83 < 7; i83++) {
      outC->_L1466.train_packets.P_27.SSPArray[i84].diffArray[i83].valid =
        kcg_true;
      outC->_L1466.train_packets.P_27.SSPArray[i84].diffArray[i83].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1466.train_packets.P_27.SSPArray[i84].diffArray[i83].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1466.train_packets.P_27.SSPArray[i84].diffArray[i83].nc_diff = 0;
      outC->_L1466.train_packets.P_27.SSPArray[i84].diffArray[i83].v_diff = 0;
    }
  }
  for (i85 = 0; i85 < 7; i85++) {
    outC->_L1466.train_packets.P_41[i85].valid = kcg_true;
    outC->_L1466.train_packets.P_41[i85].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_41[i85].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_41[i85].d_leveltr = 0;
    outC->_L1466.train_packets.P_41[i85].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1466.train_packets.P_41[i85].nid_ntc = 0;
    outC->_L1466.train_packets.P_41[i85].l_ackleveltr = 0;
  }
  for (i86 = 0; i86 < 7; i86++) {
    outC->_L1466.train_packets.P_46[i86].valid = kcg_true;
    outC->_L1466.train_packets.P_46[i86].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_46[i86].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1466.train_packets.P_46[i86].nid_ntc = 0;
  }
  for (i87 = 0; i87 < 7; i87++) {
    outC->_L1466.train_packets.P_63[i87].valid = kcg_true;
    outC->_L1466.train_packets.P_63[i87].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_63[i87].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1466.train_packets.P_63[i87].nid_c = 0;
    outC->_L1466.train_packets.P_63[i87].nid_bg = 0;
  }
  for (i88 = 0; i88 < 3; i88++) {
    outC->_L1466.train_packets.P_80[i88].valid = kcg_true;
    outC->_L1466.train_packets.P_80[i88].q_dir = Q_DIR_Reverse;
    outC->_L1466.train_packets.P_80[i88].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1466.train_packets.P_80[i88].d_mamode = 0;
    outC->_L1466.train_packets.P_80[i88].m_mamode = M_MAMODE_On_Sight;
    outC->_L1466.train_packets.P_80[i88].v_mamode = 0;
    outC->_L1466.train_packets.P_80[i88].l_mamode = 0;
    outC->_L1466.train_packets.P_80[i88].l_ackmamode = 0;
    outC->_L1466.train_packets.P_80[i88].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1466.train_packets.LRBG = 0;
  outC->_L1466.train_packets.referenceLocation = 0;
  outC->_L1466.train_messages.Mess_15 = kcg_true;
  outC->_L1466.train_messages.Mess_16 = kcg_true;
  outC->_L1466.train_messages.Mess_2 = kcg_true;
  outC->_L1466.train_messages.Mess_27 = kcg_true;
  outC->_L1466.train_messages.Mess_28 = kcg_true;
  outC->_L1466.train_messages.Mess_6 = kcg_true;
  outC->_L1466.p12 = kcg_true;
  outC->_L1466.p15 = kcg_true;
  outC->_L1466.p21 = kcg_true;
  outC->_L1466.p27 = kcg_true;
  for (i89 = 0; i89 < 5; i89++) {
    outC->_L1462.train_packets.P_12[i89].valid = kcg_true;
    outC->_L1462.train_packets.P_12[i89].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_12[i89].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_12[i89].v_main = 0;
    outC->_L1462.train_packets.P_12[i89].v_loa = 0;
    outC->_L1462.train_packets.P_12[i89].t_loa = 0;
    outC->_L1462.train_packets.P_12[i89].l_section = 0;
    outC->_L1462.train_packets.P_12[i89].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1462.train_packets.P_12[i89].t_sectiontimer_k = 0;
    outC->_L1462.train_packets.P_12[i89].d_sectiontimerstoploc_k = 0;
    outC->_L1462.train_packets.P_12[i89].l_endsection = 0;
    outC->_L1462.train_packets.P_12[i89].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1462.train_packets.P_12[i89].t_sectiontimer = 0;
    outC->_L1462.train_packets.P_12[i89].d_sectiontimerstoploc = 0;
    outC->_L1462.train_packets.P_12[i89].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1462.train_packets.P_12[i89].t_endtimer = 0;
    outC->_L1462.train_packets.P_12[i89].d_endtimerstartloc = 0;
    outC->_L1462.train_packets.P_12[i89].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1462.train_packets.P_12[i89].d_dp = 0;
    outC->_L1462.train_packets.P_12[i89].v_releasedp = 0;
    outC->_L1462.train_packets.P_12[i89].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1462.train_packets.P_12[i89].d_startol = 0;
    outC->_L1462.train_packets.P_12[i89].t_ol = 0;
    outC->_L1462.train_packets.P_12[i89].d_ol = 0;
    outC->_L1462.train_packets.P_12[i89].v_releaseol = 0;
  }
  outC->_L1462.train_packets.P_135.valid = kcg_true;
  outC->_L1462.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_137.valid = kcg_true;
  outC->_L1462.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1462.train_packets.P_138.valid = kcg_true;
  outC->_L1462.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1462.train_packets.P_138.d_startreverse = 0;
  outC->_L1462.train_packets.P_138.l_reversearea = 0;
  outC->_L1462.train_packets.P_139.valid = kcg_true;
  outC->_L1462.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1462.train_packets.P_139.d_reverse = 0;
  outC->_L1462.train_packets.P_139.v_reverse = 0;
  for (i90 = 0; i90 < 5; i90++) {
    outC->_L1462.train_packets.P_15[i90].valid = kcg_true;
    outC->_L1462.train_packets.P_15[i90].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_15[i90].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_15[i90].v_loa = 0;
    outC->_L1462.train_packets.P_15[i90].t_loa = 0;
    outC->_L1462.train_packets.P_15[i90].l_section = 0;
    outC->_L1462.train_packets.P_15[i90].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1462.train_packets.P_15[i90].t_sectiontimer_k = 0;
    outC->_L1462.train_packets.P_15[i90].d_sectiontimerstoploc_k = 0;
    outC->_L1462.train_packets.P_15[i90].l_endsection = 0;
    outC->_L1462.train_packets.P_15[i90].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1462.train_packets.P_15[i90].t_sectiontimer = 0;
    outC->_L1462.train_packets.P_15[i90].d_sectiontimerstoploc = 0;
    outC->_L1462.train_packets.P_15[i90].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1462.train_packets.P_15[i90].t_endtimer = 0;
    outC->_L1462.train_packets.P_15[i90].d_endtimerstartloc = 0;
    outC->_L1462.train_packets.P_15[i90].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1462.train_packets.P_15[i90].d_dp = 0;
    outC->_L1462.train_packets.P_15[i90].v_releasedp = 0;
    outC->_L1462.train_packets.P_15[i90].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1462.train_packets.P_15[i90].d_startol = 0;
    outC->_L1462.train_packets.P_15[i90].t_ol = 0;
    outC->_L1462.train_packets.P_15[i90].d_ol = 0;
    outC->_L1462.train_packets.P_15[i90].v_releaseol = 0;
  }
  for (i91 = 0; i91 < 7; i91++) {
    outC->_L1462.train_packets.P_21[i91].valid = kcg_true;
    outC->_L1462.train_packets.P_21[i91].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_21[i91].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_21[i91].d_gradient = 0;
    outC->_L1462.train_packets.P_21[i91].q_gdir = Q_GDIR_downhill;
    outC->_L1462.train_packets.P_21[i91].g_a = 0;
  }
  outC->_L1462.train_packets.P_27.valid = kcg_true;
  outC->_L1462.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1462.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1462.train_packets.P_27.d_static = 0;
  outC->_L1462.train_packets.P_27.v_static = 0;
  outC->_L1462.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i92 = 0; i92 < 7; i92++) {
    outC->_L1462.train_packets.P_27.diffArray[i92].valid = kcg_true;
    outC->_L1462.train_packets.P_27.diffArray[i92].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1462.train_packets.P_27.diffArray[i92].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1462.train_packets.P_27.diffArray[i92].nc_diff = 0;
    outC->_L1462.train_packets.P_27.diffArray[i92].v_diff = 0;
  }
  for (i94 = 0; i94 < 7; i94++) {
    outC->_L1462.train_packets.P_27.SSPArray[i94].valid = kcg_true;
    outC->_L1462.train_packets.P_27.SSPArray[i94].d_static = 0;
    outC->_L1462.train_packets.P_27.SSPArray[i94].v_static = 0;
    outC->_L1462.train_packets.P_27.SSPArray[i94].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i93 = 0; i93 < 7; i93++) {
      outC->_L1462.train_packets.P_27.SSPArray[i94].diffArray[i93].valid =
        kcg_true;
      outC->_L1462.train_packets.P_27.SSPArray[i94].diffArray[i93].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1462.train_packets.P_27.SSPArray[i94].diffArray[i93].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1462.train_packets.P_27.SSPArray[i94].diffArray[i93].nc_diff = 0;
      outC->_L1462.train_packets.P_27.SSPArray[i94].diffArray[i93].v_diff = 0;
    }
  }
  for (i95 = 0; i95 < 7; i95++) {
    outC->_L1462.train_packets.P_41[i95].valid = kcg_true;
    outC->_L1462.train_packets.P_41[i95].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_41[i95].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_41[i95].d_leveltr = 0;
    outC->_L1462.train_packets.P_41[i95].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1462.train_packets.P_41[i95].nid_ntc = 0;
    outC->_L1462.train_packets.P_41[i95].l_ackleveltr = 0;
  }
  for (i96 = 0; i96 < 7; i96++) {
    outC->_L1462.train_packets.P_46[i96].valid = kcg_true;
    outC->_L1462.train_packets.P_46[i96].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_46[i96].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1462.train_packets.P_46[i96].nid_ntc = 0;
  }
  for (i97 = 0; i97 < 7; i97++) {
    outC->_L1462.train_packets.P_63[i97].valid = kcg_true;
    outC->_L1462.train_packets.P_63[i97].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_63[i97].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1462.train_packets.P_63[i97].nid_c = 0;
    outC->_L1462.train_packets.P_63[i97].nid_bg = 0;
  }
  for (i98 = 0; i98 < 3; i98++) {
    outC->_L1462.train_packets.P_80[i98].valid = kcg_true;
    outC->_L1462.train_packets.P_80[i98].q_dir = Q_DIR_Reverse;
    outC->_L1462.train_packets.P_80[i98].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1462.train_packets.P_80[i98].d_mamode = 0;
    outC->_L1462.train_packets.P_80[i98].m_mamode = M_MAMODE_On_Sight;
    outC->_L1462.train_packets.P_80[i98].v_mamode = 0;
    outC->_L1462.train_packets.P_80[i98].l_mamode = 0;
    outC->_L1462.train_packets.P_80[i98].l_ackmamode = 0;
    outC->_L1462.train_packets.P_80[i98].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1462.train_packets.LRBG = 0;
  outC->_L1462.train_packets.referenceLocation = 0;
  outC->_L1462.train_messages.Mess_15 = kcg_true;
  outC->_L1462.train_messages.Mess_16 = kcg_true;
  outC->_L1462.train_messages.Mess_2 = kcg_true;
  outC->_L1462.train_messages.Mess_27 = kcg_true;
  outC->_L1462.train_messages.Mess_28 = kcg_true;
  outC->_L1462.train_messages.Mess_6 = kcg_true;
  outC->_L1462.p12 = kcg_true;
  outC->_L1462.p15 = kcg_true;
  outC->_L1462.p21 = kcg_true;
  outC->_L1462.p27 = kcg_true;
  outC->_L1461.P12_received = kcg_true;
  outC->_L1461.P15_received = kcg_true;
  outC->_L1461.P21_received = kcg_true;
  outC->_L1461.P27_received = kcg_true;
  outC->_L1457 = kcg_true;
  outC->_L1456 = kcg_true;
  outC->_L1449 = kcg_true;
  outC->_L1444 = kcg_true;
  outC->_L1443.valid = kcg_true;
  outC->_L1443.validatedByDriver = kcg_true;
  outC->_L1443.RBCsystemVersionOnboard = kcg_true;
  outC->_L1443.validatedbyRBC = kcg_true;
  outC->_L1443.waitingForRBCResponse = kcg_true;
  outC->_L1443.driverIsModificationTrainData = kcg_true;
  outC->_L1443.timeStampValidateToRBC = 0;
  outC->_L1441.linkedBGError = kcg_true;
  outC->_L1441.unlinkedBGError = kcg_true;
  outC->_L1441.BG_versionIncompatible = kcg_true;
  outC->_L1441.radioSequenceError = kcg_true;
  outC->_L1441.tNvContactError = kcg_true;
  outC->_L1441.otherTimingError = kcg_true;
  outC->_L1441.radioMessageConsistencyError = kcg_true;
  outC->_L1441.nid_c = 0;
  outC->_L1441.nid_errorbg = 0;
  outC->_L1363 = 0;
  outC->_L1362.valid = kcg_true;
  outC->_L1362.targetSpeed = 0;
  outC->_L1362.permittedSpeed = 0;
  outC->_L1362.releaseSpeed = 0;
  outC->_L1362.locationBrakeTarget = 0;
  outC->_L1362.location_brake_curve_starting_point = 0;
  outC->_L1362.interventionSpeed = 0;
  outC->_L1362.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1362.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L1362.distanceIndicationPoint = 0;
  outC->_L1354.trackAheadFree = kcg_true;
  outC->_L1354.driverSelectsStart = kcg_true;
  outC->_L1349.trackAheadFree = kcg_true;
  outC->_L1349.driverSelectsStart = kcg_true;
  outC->_L1347.valid = kcg_true;
  outC->_L1347.nid_packet = 0;
  outC->_L1347.q_dir = Q_DIR_Reverse;
  outC->_L1347.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1347.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1347.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1347.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L1347.a_nvmaxredadh1 = 0.0;
  outC->_L1347.a_nvmaxredadh2 = 0.0;
  outC->_L1347.a_nvmaxredadh3 = 0.0;
  outC->_L1347.m_nvavadh = 0.0;
  outC->_L1347.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1347.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L1347.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L1347.a_nvp12 = 0.0;
  outC->_L1347.a_nvp23 = 0.0;
  outC->_L1347.v_nvkvint = 0;
  outC->_L1347.m_nvkvint_12 = 0.0;
  outC->_L1347.m_nvkvint_23 = 0.0;
  outC->_L1347.n_iter_n = 0;
  for (i99 = 0; i99 < 32; i99++) {
    outC->_L1347.n_iter_n_list[i99].valid = kcg_true;
    outC->_L1347.n_iter_n_list[i99].v_nvkvint_n = 0;
    outC->_L1347.n_iter_n_list[i99].m_nvkvint_n_12 = 0.0;
    outC->_L1347.n_iter_n_list[i99].m_nvkvint_n_23 = 0.0;
  }
  outC->_L1347.n_iter_k = 0;
  for (i101 = 0; i101 < 32; i101++) {
    outC->_L1347.n_iter_k_list[i101].valid = kcg_true;
    outC->_L1347.n_iter_k_list[i101].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->_L1347.n_iter_k_list[i101].a_nvp12_k = 0.0;
    outC->_L1347.n_iter_k_list[i101].a_nvp23_k = 0.0;
    outC->_L1347.n_iter_k_list[i101].v_nvkvint_k = 0;
    outC->_L1347.n_iter_k_list[i101].m_nvkvint_k_12 = 0.0;
    outC->_L1347.n_iter_k_list[i101].m_nvkvint_k_23 = 0.0;
    outC->_L1347.n_iter_k_list[i101].n_iter_k_m = 0;
    for (i100 = 0; i100 < 32; i100++) {
      outC->_L1347.n_iter_k_list[i101].n_iter_k_m_list[i100].valid = kcg_true;
      outC->_L1347.n_iter_k_list[i101].n_iter_k_m_list[i100].v_nvkvint_k_m = 0;
      outC->_L1347.n_iter_k_list[i101].n_iter_k_m_list[i100].m_nvkvint_km_12 =
        0.0;
      outC->_L1347.n_iter_k_list[i101].n_iter_k_m_list[i100].m_nvkvint_km_23 =
        0.0;
    }
  }
  outC->_L1347.l_nvkrint = L_NVKRINT_0m;
  outC->_L1347.m_nvkrint = 0.0;
  outC->_L1347.n_iter_l = 0;
  for (i102 = 0; i102 < 32; i102++) {
    outC->_L1347.n_iter_l_list[i102].valid = kcg_true;
    outC->_L1347.n_iter_l_list[i102].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L1347.n_iter_l_list[i102].m_nvkrint_l = 0.0;
  }
  outC->_L1347.m_nvktint = 0.0;
  outC->_L1346.q_nvlocacc = 0;
  outC->_L1346.v_nvlimsuperv = 0;
  outC->_L1345.valid = kcg_true;
  outC->_L1345.q_dir = Q_DIR_Reverse;
  outC->_L1345.d_validnv = 0;
  for (i103 = 0; i103 < 7; i103++) {
    outC->_L1345.nid_cArray[i103].valid = kcg_true;
    outC->_L1345.nid_cArray[i103].nid_c = 0;
  }
  outC->_L1345.v_nvshunt = 0;
  outC->_L1345.v_nvstff = 0;
  outC->_L1345.v_nvonsight = 0;
  outC->_L1345.v_nvlimsuperv = 0;
  outC->_L1345.v_nvunfit = 0;
  outC->_L1345.v_nvrel = 0;
  outC->_L1345.d_nvroll = 0;
  outC->_L1345.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1345.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1345.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1345.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1345.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L1345.v_nvallowovtrp = 0;
  outC->_L1345.v_nvsupovtrp = 0;
  outC->_L1345.d_nvovtrp = 0;
  outC->_L1345.t_nvovtrp = 0;
  outC->_L1345.d_nvpotrp = 0;
  outC->_L1345.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1345.t_nvcontact = 0;
  outC->_L1345.m_nvderun = M_NVDERUN_No;
  outC->_L1345.d_nvstff = 0;
  outC->_L1345.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1345.a_nvmaxredadh1 = 0.0;
  outC->_L1345.a_nvmaxredadh2 = 0.0;
  outC->_L1345.a_nvmaxredadh3 = 0.0;
  outC->_L1345.q_nvlocacc = 0;
  outC->_L1345.m_nvavadh = 0.0;
  outC->_L1345.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1345.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (i105 = 0; i105 < 7; i105++) {
    outC->_L1345.nvkvintsetArray[i105].valid = kcg_true;
    outC->_L1345.nvkvintsetArray[i105].q_nvkvintset =
      Q_NVKVINTSET_Freight_trains;
    outC->_L1345.nvkvintsetArray[i105].a_nvp12 = 0.0;
    outC->_L1345.nvkvintsetArray[i105].a_nvp23 = 0.0;
    for (i104 = 0; i104 < 7; i104++) {
      outC->_L1345.nvkvintsetArray[i105].nvkintArray[i104].valid = kcg_true;
      outC->_L1345.nvkvintsetArray[i105].nvkintArray[i104].v_nvkvint = 0;
      outC->_L1345.nvkvintsetArray[i105].nvkintArray[i104].m_nvkvint12 = 0.0;
      outC->_L1345.nvkvintsetArray[i105].nvkintArray[i104].m_nvkvint23 = 0.0;
    }
  }
  for (i106 = 0; i106 < 7; i106++) {
    outC->_L1345.nvkrintArray[i106].valid = kcg_true;
    outC->_L1345.nvkrintArray[i106].l_nvkrint = L_NVKRINT_0m;
    outC->_L1345.nvkrintArray[i106].m_nvkrint = 0.0;
  }
  outC->_L1345.m_nvktint = 0.0;
  outC->_L1343 = 0;
  outC->_L1342.valid = kcg_true;
  outC->_L1342.packet1.NID_PACKET = 0;
  outC->_L1342.packet1.L_PACKET = 0;
  outC->_L1342.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1342.packet1.NID_LRBG = 0;
  outC->_L1342.packet1.NID_PRVLRBG = 0;
  outC->_L1342.packet1.D_LRBG = 0;
  outC->_L1342.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1342.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1342.packet1.L_DOUBTOVER = 0;
  outC->_L1342.packet1.L_DOUBTUNDER = 0;
  outC->_L1342.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1342.packet1.L_TRAININT = 0;
  outC->_L1342.packet1.V_TRAIN = 0;
  outC->_L1342.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1342.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1342.packet1.level = M_LEVEL_Level_0;
  outC->_L1342.packet1.NID_NTC = 0;
  outC->_L1341.valid = kcg_true;
  outC->_L1341.packet0.NID_PACKET = 0;
  outC->_L1341.packet0.L_PACKET = 0;
  outC->_L1341.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1341.packet0.NID_LRBG = 0;
  outC->_L1341.packet0.D_LRBG = 0;
  outC->_L1341.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1341.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1341.packet0.L_DOUBTOVER = 0;
  outC->_L1341.packet0.L_DOUBTUNDER = 0;
  outC->_L1341.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1341.packet0.L_TRAININT = 0;
  outC->_L1341.packet0.V_TRAIN = 0;
  outC->_L1341.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1341.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1341.packet0.level = M_LEVEL_Level_0;
  outC->_L1341.packet0.NID_NTC = 0;
  outC->_L1340.nid_engine = 0;
  outC->_L1340.nid_operational = 0;
  outC->_L1340.l_train = 0;
  outC->_L1340.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L1340.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L1340.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L1340.d_frontend_2_rearend.nominal = 0;
  outC->_L1340.d_frontend_2_rearend.d_min = 0;
  outC->_L1340.d_frontend_2_rearend.d_max = 0;
  outC->_L1340.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L1340.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L1340.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L1340.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L1340.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L1340.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L1339.valid = kcg_true;
  outC->_L1339.timestamp = 0;
  outC->_L1339.odo.o_nominal = 0;
  outC->_L1339.odo.o_min = 0;
  outC->_L1339.odo.o_max = 0;
  outC->_L1339.speed.v_safeNominal = 0;
  outC->_L1339.speed.v_rawNominal = 0;
  outC->_L1339.speed.v_lower = 0;
  outC->_L1339.speed.v_upper = 0;
  outC->_L1339.acceleration = 0;
  outC->_L1339.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1339.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1338 = 0;
  outC->_L1337.present = kcg_true;
  outC->_L1337.header.present = kcg_true;
  outC->_L1337.header.nid_message = 0;
  outC->_L1337.header.t_train = 0;
  outC->_L1337.header.nid_engine = 0;
  outC->_L1337.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1337.header.xT_TRAIN = 0;
  outC->_L1337.header.xNID_EM = 0;
  outC->_L1337.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1337.header.xNID_TEXTMESSAGE = 0;
  outC->_L1337.packets.p0.valid = kcg_true;
  outC->_L1337.packets.p0.packet0.NID_PACKET = 0;
  outC->_L1337.packets.p0.packet0.L_PACKET = 0;
  outC->_L1337.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1337.packets.p0.packet0.NID_LRBG = 0;
  outC->_L1337.packets.p0.packet0.D_LRBG = 0;
  outC->_L1337.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1337.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1337.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->_L1337.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->_L1337.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1337.packets.p0.packet0.L_TRAININT = 0;
  outC->_L1337.packets.p0.packet0.V_TRAIN = 0;
  outC->_L1337.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1337.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1337.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L1337.packets.p0.packet0.NID_NTC = 0;
  outC->_L1337.packets.p1.valid = kcg_true;
  outC->_L1337.packets.p1.packet1.NID_PACKET = 0;
  outC->_L1337.packets.p1.packet1.L_PACKET = 0;
  outC->_L1337.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1337.packets.p1.packet1.NID_LRBG = 0;
  outC->_L1337.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->_L1337.packets.p1.packet1.D_LRBG = 0;
  outC->_L1337.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1337.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1337.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->_L1337.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->_L1337.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1337.packets.p1.packet1.L_TRAININT = 0;
  outC->_L1337.packets.p1.packet1.V_TRAIN = 0;
  outC->_L1337.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1337.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1337.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L1337.packets.p1.packet1.NID_NTC = 0;
  outC->_L1337.packets.p3.valid = kcg_true;
  outC->_L1337.packets.p3.number = 0;
  for (i108 = 0; i108 < 1; i108++) {
    outC->_L1337.packets.p3.aNID_RADIO[i108].valid = kcg_true;
    for (i107 = 0; i107 < 15; i107++) {
      outC->_L1337.packets.p3.aNID_RADIO[i108].telephoneNumber[i107] = 0;
    }
  }
  outC->_L1337.packets.p4.valid = kcg_true;
  outC->_L1337.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1337.packets.p5.valid = kcg_true;
  outC->_L1337.packets.p5.TrainRunningNumber = 0;
  outC->_L1337.packets.p9.valid = kcg_true;
  outC->_L1337.packets.p9.transitionInformation = 0;
  outC->_L1337.packets.p11.valid = kcg_true;
  outC->_L1337.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1337.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1337.packets.p11.l_train = 0;
  outC->_L1337.packets.p11.v_maxtrain = 0;
  outC->_L1337.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1337.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1337.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1337.packets.p11.n_axle = 0;
  outC->_L1337.packets.p11.nIter_tractionIdentity = 0;
  for (i109 = 0; i109 < 4; i109++) {
    outC->_L1337.packets.p11.tractionIdentity[i109].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1337.packets.p11.tractionIdentity[i109].nid_ctraction = 0;
  }
  outC->_L1337.packets.p11.nIter_ntc = 0;
  for (i110 = 0; i110 < 5; i110++) {
    outC->_L1337.packets.p11.nid_ntc[i110] = 0;
  }
  for (i111 = 0; i111 < 110; i111++) {
    outC->_L1335[i111].valid = kcg_true;
    outC->_L1335[i111].Loc_Abs = 0;
    outC->_L1335[i111].Loc_LRBG = 0;
    outC->_L1335[i111].MRS = 0;
  }
  for (i112 = 0; i112 < 110; i112++) {
    outC->_L1334[i112].valid = kcg_true;
    outC->_L1334[i112].Loc_Abs = 0;
    outC->_L1334[i112].Loc_LRBG = 0;
    outC->_L1334[i112].MRS = 0;
  }
  outC->_L1333.valid = kcg_true;
  outC->_L1333.acknowledgedByDriver = kcg_true;
  outC->_L1333.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1333.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1333.trainLength = 0;
  outC->_L1333.brakePerctage = 0;
  outC->_L1333.maxTrainSpeed = 0;
  outC->_L1333.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1333.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1333.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1333.axleNumber = 0;
  outC->_L1333.numberNationalSystems = 0;
  for (i113 = 0; i113 < 5; i113++) {
    outC->_L1333.nationSystems[i113] = 0;
  }
  outC->_L1333.numberTractionSystems = 0;
  for (i114 = 0; i114 < 4; i114++) {
    outC->_L1333.tractionSystem[i114].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1333.tractionSystem[i114].nid_ctraction = 0;
  }
  outC->_L767.P12_received = kcg_true;
  outC->_L767.P15_received = kcg_true;
  outC->_L767.P21_received = kcg_true;
  outC->_L767.P27_received = kcg_true;
  outC->_L1330 = 0;
  outC->_L1328 = 0;
  outC->_L1324 = 0;
  outC->_L1321.valid = kcg_true;
  outC->_L1321.packet1.NID_PACKET = 0;
  outC->_L1321.packet1.L_PACKET = 0;
  outC->_L1321.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1321.packet1.NID_LRBG = 0;
  outC->_L1321.packet1.NID_PRVLRBG = 0;
  outC->_L1321.packet1.D_LRBG = 0;
  outC->_L1321.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1321.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1321.packet1.L_DOUBTOVER = 0;
  outC->_L1321.packet1.L_DOUBTUNDER = 0;
  outC->_L1321.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1321.packet1.L_TRAININT = 0;
  outC->_L1321.packet1.V_TRAIN = 0;
  outC->_L1321.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1321.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1321.packet1.level = M_LEVEL_Level_0;
  outC->_L1321.packet1.NID_NTC = 0;
  outC->_L1320 = kcg_true;
  for (i115 = 0; i115 < 50; i115++) {
    outC->_L1319.GradientProfile[i115].valid = kcg_true;
    outC->_L1319.GradientProfile[i115].begin_section = 0;
    outC->_L1319.GradientProfile[i115].end_section = 0;
    outC->_L1319.GradientProfile[i115].gradient = 0;
  }
  outC->_L1319.Gradient_profile_updated = kcg_true;
  for (i116 = 0; i116 < 110; i116++) {
    outC->_L1319.MRSP[i116].valid = kcg_true;
    outC->_L1319.MRSP[i116].Loc_Abs = 0;
    outC->_L1319.MRSP[i116].Loc_LRBG = 0;
    outC->_L1319.MRSP[i116].MRS = 0;
  }
  outC->_L1319.MRSP_updated = kcg_true;
  outC->_L1315.valid = kcg_true;
  outC->_L1315.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1315.radioMetadata.t_train_reference = kcg_true;
  outC->_L1315.radioMetadata.nid_em = kcg_true;
  outC->_L1315.radioMetadata.q_scale = kcg_true;
  outC->_L1315.radioMetadata.d_sr = kcg_true;
  outC->_L1315.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1315.radioMetadata.d_ref = kcg_true;
  outC->_L1315.radioMetadata.q_dir = kcg_true;
  outC->_L1315.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1315.radioMetadata.m_version = kcg_true;
  outC->_L1315.BG_Common_Header.valid = kcg_true;
  outC->_L1315.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1315.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1315.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1315.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1315.BG_Common_Header.m_mcount = 0;
  outC->_L1315.BG_Common_Header.nid_c = 0;
  outC->_L1315.BG_Common_Header.nid_bg = 0;
  outC->_L1315.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1315.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1315.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1315.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1315.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1315.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1315.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1315.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1315.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1315.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1315.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1315.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1315.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1315.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1315.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1315.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1315.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1315.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1315.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1315.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1315.Radio_Common_Header.radioDevice = 0;
  outC->_L1315.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1315.Radio_Common_Header.nid_message = 0;
  outC->_L1315.Radio_Common_Header.t_train = 0;
  outC->_L1315.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1315.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1315.Radio_Common_Header.t_train_reference = 0;
  outC->_L1315.Radio_Common_Header.nid_em = 0;
  outC->_L1315.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1315.Radio_Common_Header.d_sr = 0;
  outC->_L1315.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1315.Radio_Common_Header.d_ref = 0;
  outC->_L1315.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1315.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1315.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i117 = 0; i117 < 30; i117++) {
    outC->_L1315.packets.PacketHeaders[i117].nid_packet = 0;
    outC->_L1315.packets.PacketHeaders[i117].q_dir = Q_DIR_Reverse;
    outC->_L1315.packets.PacketHeaders[i117].valid = kcg_true;
    outC->_L1315.packets.PacketHeaders[i117].startAddress = 0;
    outC->_L1315.packets.PacketHeaders[i117].endAddress = 0;
  }
  for (i118 = 0; i118 < 500; i118++) {
    outC->_L1315.packets.PacketData[i118] = 0;
  }
  outC->_L1315.sendingRBC.valid = kcg_true;
  outC->_L1315.sendingRBC.nid_c = 0;
  outC->_L1315.sendingRBC.rbc_id = 0;
  outC->_L1315.sendingRBC.device_id = 0;
  outC->_L1313.valid = kcg_true;
  outC->_L1313.packet1.NID_PACKET = 0;
  outC->_L1313.packet1.L_PACKET = 0;
  outC->_L1313.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1313.packet1.NID_LRBG = 0;
  outC->_L1313.packet1.NID_PRVLRBG = 0;
  outC->_L1313.packet1.D_LRBG = 0;
  outC->_L1313.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1313.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1313.packet1.L_DOUBTOVER = 0;
  outC->_L1313.packet1.L_DOUBTUNDER = 0;
  outC->_L1313.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1313.packet1.L_TRAININT = 0;
  outC->_L1313.packet1.V_TRAIN = 0;
  outC->_L1313.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1313.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1313.packet1.level = M_LEVEL_Level_0;
  outC->_L1313.packet1.NID_NTC = 0;
  for (i120 = 0; i120 < 5; i120++) {
    outC->_L1314[i120].Message.valid = kcg_true;
    outC->_L1314[i120].Message.nid_message = 0;
    outC->_L1314[i120].Message.l_message = 0;
    outC->_L1314[i120].Message.t_train = 0;
    outC->_L1314[i120].Message.nid_engine = 0;
    outC->_L1314[i120].Message.field1 = 0;
    outC->_L1314[i120].Message.field2 = 0;
    outC->_L1314[i120].Message.field3 = 0;
    for (i119 = 0; i119 < 50; i119++) {
      outC->_L1314[i120].OptionalPackets[i119] = 0;
    }
  }
  outC->_L1302 = kcg_true;
  outC->_L1301 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1294 = kcg_true;
  outC->_L1295.valid = kcg_true;
  outC->_L1295.timestamp = 0;
  outC->_L1295.odo.o_nominal = 0;
  outC->_L1295.odo.o_min = 0;
  outC->_L1295.odo.o_max = 0;
  outC->_L1295.speed.v_safeNominal = 0;
  outC->_L1295.speed.v_rawNominal = 0;
  outC->_L1295.speed.v_lower = 0;
  outC->_L1295.speed.v_upper = 0;
  outC->_L1295.acceleration = 0;
  outC->_L1295.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1295.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1296 = kcg_true;
  outC->_L1297 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1299 = kcg_true;
  outC->_L1300.trainStandStill = kcg_true;
  outC->_L1300.driverRequestModify = kcg_true;
  outC->_L1300.communicationSessionEstablished = kcg_true;
  outC->_L1300.safeRadioConnectionLost = kcg_true;
  outC->_L1300.approachingRBCarea = kcg_true;
  outC->_L1300.MoRCreadyFlag = kcg_true;
  outC->_L163.valid = kcg_true;
  outC->_L163.isolation_status = on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L1280 = 0;
  outC->_L1279 = 0;
  outC->_L1278.valid = kcg_true;
  outC->_L1278.nid_packet = 0;
  outC->_L1278.q_dir = Q_DIR_Reverse;
  outC->_L1278.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1278.d_validnv = 0;
  outC->_L1278.nid_c = 0;
  outC->_L1278.n_iter_nid_c = 0;
  for (i121 = 0; i121 < 32; i121++) {
    outC->_L1278.nid_c_list[i121].valid = kcg_true;
    outC->_L1278.nid_c_list[i121].nid_c = 0;
  }
  outC->_L1278.v_nvshunt = 0;
  outC->_L1278.v_nvstff = 0;
  outC->_L1278.v_nvonsight = 0;
  outC->_L1278.v_nvlimsuperv = 0;
  outC->_L1278.v_nvunfit = 0;
  outC->_L1278.v_nvrel = 0;
  outC->_L1278.d_nvroll = 0;
  outC->_L1278.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1278.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1278.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1278.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1278.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L1278.v_nvallowovtrp = 0;
  outC->_L1278.v_nvsupovtrp = 0;
  outC->_L1278.d_nvovtrp = 0;
  outC->_L1278.t_nvovtrp = 0;
  outC->_L1278.d_nvpotrp = 0;
  outC->_L1278.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1278.t_nvcontact = 0;
  outC->_L1278.m_nvderun = M_NVDERUN_No;
  outC->_L1278.d_nvstff = 0;
  outC->_L1278.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1278.a_nvmaxredadh1 = 0.0;
  outC->_L1278.a_nvmaxredadh2 = 0.0;
  outC->_L1278.a_nvmaxredadh3 = 0.0;
  outC->_L1278.q_nvlocacc = 0;
  outC->_L1278.m_nvavadh = 0.0;
  outC->_L1278.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1278.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L1278.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L1278.a_nvp12 = 0.0;
  outC->_L1278.a_nvp23 = 0.0;
  outC->_L1278.v_nvkvint = 0;
  outC->_L1278.m_nvkvint_12 = 0.0;
  outC->_L1278.m_nvkvint_23 = 0.0;
  outC->_L1278.n_iter_n = 0;
  for (i122 = 0; i122 < 32; i122++) {
    outC->_L1278.n_iter_n_list[i122].valid = kcg_true;
    outC->_L1278.n_iter_n_list[i122].v_nvkvint_n = 0;
    outC->_L1278.n_iter_n_list[i122].m_nvkvint_n_12 = 0.0;
    outC->_L1278.n_iter_n_list[i122].m_nvkvint_n_23 = 0.0;
  }
  outC->_L1278.n_iter_k = 0;
  for (i124 = 0; i124 < 32; i124++) {
    outC->_L1278.n_iter_k_list[i124].valid = kcg_true;
    outC->_L1278.n_iter_k_list[i124].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->_L1278.n_iter_k_list[i124].a_nvp12_k = 0.0;
    outC->_L1278.n_iter_k_list[i124].a_nvp23_k = 0.0;
    outC->_L1278.n_iter_k_list[i124].v_nvkvint_k = 0;
    outC->_L1278.n_iter_k_list[i124].m_nvkvint_k_12 = 0.0;
    outC->_L1278.n_iter_k_list[i124].m_nvkvint_k_23 = 0.0;
    outC->_L1278.n_iter_k_list[i124].n_iter_k_m = 0;
    for (i123 = 0; i123 < 32; i123++) {
      outC->_L1278.n_iter_k_list[i124].n_iter_k_m_list[i123].valid = kcg_true;
      outC->_L1278.n_iter_k_list[i124].n_iter_k_m_list[i123].v_nvkvint_k_m = 0;
      outC->_L1278.n_iter_k_list[i124].n_iter_k_m_list[i123].m_nvkvint_km_12 =
        0.0;
      outC->_L1278.n_iter_k_list[i124].n_iter_k_m_list[i123].m_nvkvint_km_23 =
        0.0;
    }
  }
  outC->_L1278.l_nvkrint = L_NVKRINT_0m;
  outC->_L1278.m_nvkrint = 0.0;
  outC->_L1278.n_iter_l = 0;
  for (i125 = 0; i125 < 32; i125++) {
    outC->_L1278.n_iter_l_list[i125].valid = kcg_true;
    outC->_L1278.n_iter_l_list[i125].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L1278.n_iter_l_list[i125].m_nvkrint_l = 0.0;
  }
  outC->_L1278.m_nvktint = 0.0;
  outC->_L1277.valid = kcg_true;
  outC->_L1277.q_dir = Q_DIR_Reverse;
  outC->_L1277.d_validnv = 0;
  for (i126 = 0; i126 < 7; i126++) {
    outC->_L1277.nid_cArray[i126].valid = kcg_true;
    outC->_L1277.nid_cArray[i126].nid_c = 0;
  }
  outC->_L1277.v_nvshunt = 0;
  outC->_L1277.v_nvstff = 0;
  outC->_L1277.v_nvonsight = 0;
  outC->_L1277.v_nvlimsuperv = 0;
  outC->_L1277.v_nvunfit = 0;
  outC->_L1277.v_nvrel = 0;
  outC->_L1277.d_nvroll = 0;
  outC->_L1277.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1277.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1277.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1277.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1277.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L1277.v_nvallowovtrp = 0;
  outC->_L1277.v_nvsupovtrp = 0;
  outC->_L1277.d_nvovtrp = 0;
  outC->_L1277.t_nvovtrp = 0;
  outC->_L1277.d_nvpotrp = 0;
  outC->_L1277.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1277.t_nvcontact = 0;
  outC->_L1277.m_nvderun = M_NVDERUN_No;
  outC->_L1277.d_nvstff = 0;
  outC->_L1277.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1277.a_nvmaxredadh1 = 0.0;
  outC->_L1277.a_nvmaxredadh2 = 0.0;
  outC->_L1277.a_nvmaxredadh3 = 0.0;
  outC->_L1277.q_nvlocacc = 0;
  outC->_L1277.m_nvavadh = 0.0;
  outC->_L1277.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1277.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (i128 = 0; i128 < 7; i128++) {
    outC->_L1277.nvkvintsetArray[i128].valid = kcg_true;
    outC->_L1277.nvkvintsetArray[i128].q_nvkvintset =
      Q_NVKVINTSET_Freight_trains;
    outC->_L1277.nvkvintsetArray[i128].a_nvp12 = 0.0;
    outC->_L1277.nvkvintsetArray[i128].a_nvp23 = 0.0;
    for (i127 = 0; i127 < 7; i127++) {
      outC->_L1277.nvkvintsetArray[i128].nvkintArray[i127].valid = kcg_true;
      outC->_L1277.nvkvintsetArray[i128].nvkintArray[i127].v_nvkvint = 0;
      outC->_L1277.nvkvintsetArray[i128].nvkintArray[i127].m_nvkvint12 = 0.0;
      outC->_L1277.nvkvintsetArray[i128].nvkintArray[i127].m_nvkvint23 = 0.0;
    }
  }
  for (i129 = 0; i129 < 7; i129++) {
    outC->_L1277.nvkrintArray[i129].valid = kcg_true;
    outC->_L1277.nvkrintArray[i129].l_nvkrint = L_NVKRINT_0m;
    outC->_L1277.nvkrintArray[i129].m_nvkrint = 0.0;
  }
  outC->_L1277.m_nvktint = 0.0;
  outC->_L1276.valid = kcg_true;
  outC->_L1276.Level = MA_L1_TrackAtlasTypes;
  outC->_L1276.q_dir = Q_DIR_Reverse;
  outC->_L1276.v_main = 0;
  outC->_L1276.v_loa = 0;
  outC->_L1276.t_loa_unlimited = kcg_true;
  outC->_L1276.t_loa = 0;
  outC->_L1276.n_iter = 0;
  for (i130 = 0; i130 < 10; i130++) {
    outC->_L1276.sections[i130].valid = kcg_true;
    outC->_L1276.sections[i130].q_endsection = kcg_true;
    outC->_L1276.sections[i130].l_section = 0;
    outC->_L1276.sections[i130].q_sectiontimer = kcg_true;
    outC->_L1276.sections[i130].t_sectiontimer = 0;
    outC->_L1276.sections[i130].d_sectiontimerstoploc = 0;
  }
  outC->_L1276.q_dangerpoint = kcg_true;
  outC->_L1276.dangerpoint.d_DP_or_OL = 0;
  outC->_L1276.dangerpoint.v_release = 0;
  outC->_L1276.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1276.q_overlap = kcg_true;
  outC->_L1276.overlap.d_DP_or_OL = 0;
  outC->_L1276.overlap.v_release = 0;
  outC->_L1276.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1276.q_endtimer = kcg_true;
  outC->_L1276.endtimer_t.t_endtimer = 0;
  outC->_L1276.endtimer_t.d_endtimerstoploc = 0;
  outC->_L1275.freshMA = kcg_true;
  outC->_L1275.MA.valid = kcg_true;
  outC->_L1275.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L1275.MA.q_dir = Q_DIR_Reverse;
  outC->_L1275.MA.v_main = 0;
  outC->_L1275.MA.v_loa = 0;
  outC->_L1275.MA.t_loa_unlimited = kcg_true;
  outC->_L1275.MA.t_loa = 0;
  outC->_L1275.MA.n_iter = 0;
  for (i131 = 0; i131 < 10; i131++) {
    outC->_L1275.MA.sections[i131].valid = kcg_true;
    outC->_L1275.MA.sections[i131].q_endsection = kcg_true;
    outC->_L1275.MA.sections[i131].l_section = 0;
    outC->_L1275.MA.sections[i131].q_sectiontimer = kcg_true;
    outC->_L1275.MA.sections[i131].t_sectiontimer = 0;
    outC->_L1275.MA.sections[i131].d_sectiontimerstoploc = 0;
  }
  outC->_L1275.MA.q_dangerpoint = kcg_true;
  outC->_L1275.MA.dangerpoint.d_DP_or_OL = 0;
  outC->_L1275.MA.dangerpoint.v_release = 0;
  outC->_L1275.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1275.MA.q_overlap = kcg_true;
  outC->_L1275.MA.overlap.d_DP_or_OL = 0;
  outC->_L1275.MA.overlap.v_release = 0;
  outC->_L1275.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1275.MA.q_endtimer = kcg_true;
  outC->_L1275.MA.endtimer_t.t_endtimer = 0;
  outC->_L1275.MA.endtimer_t.d_endtimerstoploc = 0;
  outC->_L1275.freshGradientProfile = kcg_true;
  for (i132 = 0; i132 < 50; i132++) {
    outC->_L1275.GradientProfile[i132].valid = kcg_true;
    outC->_L1275.GradientProfile[i132].Loc_Absolute = 0;
    outC->_L1275.GradientProfile[i132].Loc_LRBG = 0;
    outC->_L1275.GradientProfile[i132].Gradient = 0;
    outC->_L1275.GradientProfile[i132].L_Gradient = 0;
  }
  outC->_L1275.freshMRSP = kcg_true;
  for (i133 = 0; i133 < 110; i133++) {
    outC->_L1275.MRSP[i133].valid = kcg_true;
    outC->_L1275.MRSP[i133].Loc_Abs = 0;
    outC->_L1275.MRSP[i133].Loc_LRBG = 0;
    outC->_L1275.MRSP[i133].MRS = 0;
  }
  outC->_L1273.valid = kcg_true;
  outC->_L1273.q_dir = Q_DIR_Reverse;
  outC->_L1273.d_validnv = 0;
  for (i134 = 0; i134 < 7; i134++) {
    outC->_L1273.nid_cArray[i134].valid = kcg_true;
    outC->_L1273.nid_cArray[i134].nid_c = 0;
  }
  outC->_L1273.v_nvshunt = 0;
  outC->_L1273.v_nvstff = 0;
  outC->_L1273.v_nvonsight = 0;
  outC->_L1273.v_nvlimsuperv = 0;
  outC->_L1273.v_nvunfit = 0;
  outC->_L1273.v_nvrel = 0;
  outC->_L1273.d_nvroll = 0;
  outC->_L1273.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1273.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1273.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1273.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1273.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L1273.v_nvallowovtrp = 0;
  outC->_L1273.v_nvsupovtrp = 0;
  outC->_L1273.d_nvovtrp = 0;
  outC->_L1273.t_nvovtrp = 0;
  outC->_L1273.d_nvpotrp = 0;
  outC->_L1273.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1273.t_nvcontact = 0;
  outC->_L1273.m_nvderun = M_NVDERUN_No;
  outC->_L1273.d_nvstff = 0;
  outC->_L1273.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1273.a_nvmaxredadh1 = 0.0;
  outC->_L1273.a_nvmaxredadh2 = 0.0;
  outC->_L1273.a_nvmaxredadh3 = 0.0;
  outC->_L1273.q_nvlocacc = 0;
  outC->_L1273.m_nvavadh = 0.0;
  outC->_L1273.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1273.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (i136 = 0; i136 < 7; i136++) {
    outC->_L1273.nvkvintsetArray[i136].valid = kcg_true;
    outC->_L1273.nvkvintsetArray[i136].q_nvkvintset =
      Q_NVKVINTSET_Freight_trains;
    outC->_L1273.nvkvintsetArray[i136].a_nvp12 = 0.0;
    outC->_L1273.nvkvintsetArray[i136].a_nvp23 = 0.0;
    for (i135 = 0; i135 < 7; i135++) {
      outC->_L1273.nvkvintsetArray[i136].nvkintArray[i135].valid = kcg_true;
      outC->_L1273.nvkvintsetArray[i136].nvkintArray[i135].v_nvkvint = 0;
      outC->_L1273.nvkvintsetArray[i136].nvkintArray[i135].m_nvkvint12 = 0.0;
      outC->_L1273.nvkvintsetArray[i136].nvkintArray[i135].m_nvkvint23 = 0.0;
    }
  }
  for (i137 = 0; i137 < 7; i137++) {
    outC->_L1273.nvkrintArray[i137].valid = kcg_true;
    outC->_L1273.nvkrintArray[i137].l_nvkrint = L_NVKRINT_0m;
    outC->_L1273.nvkrintArray[i137].m_nvkrint = 0.0;
  }
  outC->_L1273.m_nvktint = 0.0;
  outC->_L1272.valid = kcg_true;
  outC->_L1272.q_dir = Q_DIR_Reverse;
  outC->_L1272.d_validnv = 0;
  for (i138 = 0; i138 < 7; i138++) {
    outC->_L1272.nid_cArray[i138].valid = kcg_true;
    outC->_L1272.nid_cArray[i138].nid_c = 0;
  }
  outC->_L1272.v_nvshunt = 0;
  outC->_L1272.v_nvstff = 0;
  outC->_L1272.v_nvonsight = 0;
  outC->_L1272.v_nvlimsuperv = 0;
  outC->_L1272.v_nvunfit = 0;
  outC->_L1272.v_nvrel = 0;
  outC->_L1272.d_nvroll = 0;
  outC->_L1272.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1272.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1272.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1272.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1272.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L1272.v_nvallowovtrp = 0;
  outC->_L1272.v_nvsupovtrp = 0;
  outC->_L1272.d_nvovtrp = 0;
  outC->_L1272.t_nvovtrp = 0;
  outC->_L1272.d_nvpotrp = 0;
  outC->_L1272.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1272.t_nvcontact = 0;
  outC->_L1272.m_nvderun = M_NVDERUN_No;
  outC->_L1272.d_nvstff = 0;
  outC->_L1272.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1272.a_nvmaxredadh1 = 0.0;
  outC->_L1272.a_nvmaxredadh2 = 0.0;
  outC->_L1272.a_nvmaxredadh3 = 0.0;
  outC->_L1272.q_nvlocacc = 0;
  outC->_L1272.m_nvavadh = 0.0;
  outC->_L1272.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1272.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (i140 = 0; i140 < 7; i140++) {
    outC->_L1272.nvkvintsetArray[i140].valid = kcg_true;
    outC->_L1272.nvkvintsetArray[i140].q_nvkvintset =
      Q_NVKVINTSET_Freight_trains;
    outC->_L1272.nvkvintsetArray[i140].a_nvp12 = 0.0;
    outC->_L1272.nvkvintsetArray[i140].a_nvp23 = 0.0;
    for (i139 = 0; i139 < 7; i139++) {
      outC->_L1272.nvkvintsetArray[i140].nvkintArray[i139].valid = kcg_true;
      outC->_L1272.nvkvintsetArray[i140].nvkintArray[i139].v_nvkvint = 0;
      outC->_L1272.nvkvintsetArray[i140].nvkintArray[i139].m_nvkvint12 = 0.0;
      outC->_L1272.nvkvintsetArray[i140].nvkintArray[i139].m_nvkvint23 = 0.0;
    }
  }
  for (i141 = 0; i141 < 7; i141++) {
    outC->_L1272.nvkrintArray[i141].valid = kcg_true;
    outC->_L1272.nvkrintArray[i141].l_nvkrint = L_NVKRINT_0m;
    outC->_L1272.nvkrintArray[i141].m_nvkrint = 0.0;
  }
  outC->_L1272.m_nvktint = 0.0;
  outC->_L1265 = 0;
  outC->_L1266 = 0;
  outC->_L1267 = 0;
  outC->_L1262 = 0;
  outC->_L1261 = kcg_true;
  outC->_L1260.valid = kcg_true;
  outC->_L1260.acknowledgedByDriver = kcg_true;
  outC->_L1260.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1260.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1260.trainLength = 0;
  outC->_L1260.brakePerctage = 0;
  outC->_L1260.maxTrainSpeed = 0;
  outC->_L1260.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1260.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1260.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1260.axleNumber = 0;
  outC->_L1260.numberNationalSystems = 0;
  for (i142 = 0; i142 < 5; i142++) {
    outC->_L1260.nationSystems[i142] = 0;
  }
  outC->_L1260.numberTractionSystems = 0;
  for (i143 = 0; i143 < 4; i143++) {
    outC->_L1260.tractionSystem[i143].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1260.tractionSystem[i143].nid_ctraction = 0;
  }
  outC->_L1259.compatibleModeAndLevel = kcg_true;
  outC->_L1259.level = M_LEVEL_Level_0;
  outC->_L1259.newLevel = kcg_true;
  outC->_L1259.Mode = M_MODE_Full_Supervision;
  outC->_L1259.newMode = kcg_true;
  outC->_L1258.valid = kcg_true;
  outC->_L1258.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1258.radioMetadata.t_train_reference = kcg_true;
  outC->_L1258.radioMetadata.nid_em = kcg_true;
  outC->_L1258.radioMetadata.q_scale = kcg_true;
  outC->_L1258.radioMetadata.d_sr = kcg_true;
  outC->_L1258.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1258.radioMetadata.d_ref = kcg_true;
  outC->_L1258.radioMetadata.q_dir = kcg_true;
  outC->_L1258.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1258.radioMetadata.m_version = kcg_true;
  outC->_L1258.BG_Common_Header.valid = kcg_true;
  outC->_L1258.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1258.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1258.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1258.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1258.BG_Common_Header.m_mcount = 0;
  outC->_L1258.BG_Common_Header.nid_c = 0;
  outC->_L1258.BG_Common_Header.nid_bg = 0;
  outC->_L1258.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1258.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1258.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1258.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1258.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1258.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1258.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1258.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1258.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1258.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1258.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1258.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1258.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1258.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1258.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1258.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1258.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1258.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1258.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1258.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1258.Radio_Common_Header.radioDevice = 0;
  outC->_L1258.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1258.Radio_Common_Header.nid_message = 0;
  outC->_L1258.Radio_Common_Header.t_train = 0;
  outC->_L1258.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1258.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1258.Radio_Common_Header.t_train_reference = 0;
  outC->_L1258.Radio_Common_Header.nid_em = 0;
  outC->_L1258.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1258.Radio_Common_Header.d_sr = 0;
  outC->_L1258.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1258.Radio_Common_Header.d_ref = 0;
  outC->_L1258.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1258.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1258.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i144 = 0; i144 < 30; i144++) {
    outC->_L1258.packets.PacketHeaders[i144].nid_packet = 0;
    outC->_L1258.packets.PacketHeaders[i144].q_dir = Q_DIR_Reverse;
    outC->_L1258.packets.PacketHeaders[i144].valid = kcg_true;
    outC->_L1258.packets.PacketHeaders[i144].startAddress = 0;
    outC->_L1258.packets.PacketHeaders[i144].endAddress = 0;
  }
  for (i145 = 0; i145 < 500; i145++) {
    outC->_L1258.packets.PacketData[i145] = 0;
  }
  outC->_L1258.sendingRBC.valid = kcg_true;
  outC->_L1258.sendingRBC.nid_c = 0;
  outC->_L1258.sendingRBC.rbc_id = 0;
  outC->_L1258.sendingRBC.device_id = 0;
  outC->_L1250 = kcg_true;
  outC->_L1251.nid_engine = 0;
  outC->_L1251.nid_operational = 0;
  outC->_L1251.l_train = 0;
  outC->_L1251.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L1251.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L1251.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L1251.d_frontend_2_rearend.nominal = 0;
  outC->_L1251.d_frontend_2_rearend.d_min = 0;
  outC->_L1251.d_frontend_2_rearend.d_max = 0;
  outC->_L1251.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L1251.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L1251.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L1251.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L1251.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L1251.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L1252.valid = kcg_true;
  outC->_L1252.BG_Header.valid = kcg_true;
  outC->_L1252.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1252.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1252.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1252.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1252.BG_Header.m_mcount = 0;
  outC->_L1252.BG_Header.nid_c = 0;
  outC->_L1252.BG_Header.nid_bg = 0;
  outC->_L1252.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1252.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1252.BG_Header.bgPosition.timestamp = 0;
  outC->_L1252.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1252.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1252.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1252.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1252.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1252.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1252.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1252.BG_Header.bgPosition.acceleration = 0;
  outC->_L1252.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1252.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1252.BG_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1252.BG_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1252.BG_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1252.BG_Header.q_nvlocacc = 0;
  outC->_L1252.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1252.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1252.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (i146 = 0; i146 < 33; i146++) {
    outC->_L1252.linkedBGs[i146].valid = kcg_true;
    outC->_L1252.linkedBGs[i146].nid_LRBG = 0;
    outC->_L1252.linkedBGs[i146].q_dir = Q_DIR_Reverse;
    outC->_L1252.linkedBGs[i146].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1252.linkedBGs[i146].d_link = 0;
    outC->_L1252.linkedBGs[i146].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1252.linkedBGs[i146].nid_c = 0;
    outC->_L1252.linkedBGs[i146].nid_bg = 0;
    outC->_L1252.linkedBGs[i146].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1252.linkedBGs[i146].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L1252.linkedBGs[i146].q_locacc = 0;
  }
  outC->_L1253.valid = kcg_true;
  outC->_L1253.timestamp = 0;
  outC->_L1253.odo.o_nominal = 0;
  outC->_L1253.odo.o_min = 0;
  outC->_L1253.odo.o_max = 0;
  outC->_L1253.speed.v_safeNominal = 0;
  outC->_L1253.speed.v_rawNominal = 0;
  outC->_L1253.speed.v_lower = 0;
  outC->_L1253.speed.v_upper = 0;
  outC->_L1253.acceleration = 0;
  outC->_L1253.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1253.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1256.outOfMemSpace = kcg_true;
  outC->_L1256.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1256.positionCalculation_inconsistent = kcg_true;
  outC->_L1256.linkedBGMissed = kcg_true;
  outC->_L1256.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1256.BG_LinkingConsistencyError = kcg_true;
  outC->_L1256.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1256.doubleRepositioningError = kcg_true;
  outC->_L1256.bg.valid = kcg_true;
  outC->_L1256.bg.nid_c = 0;
  outC->_L1256.bg.nid_bg = 0;
  outC->_L1256.bg.q_link = Q_LINK_Unlinked;
  outC->_L1256.bg.location.nominal = 0;
  outC->_L1256.bg.location.d_min = 0;
  outC->_L1256.bg.location.d_max = 0;
  outC->_L1256.bg.seqNoOnTrack = 0;
  outC->_L1256.bg.infoFromLinking.valid = kcg_true;
  outC->_L1256.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1256.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1256.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1256.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1256.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1256.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L1256.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L1256.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L1256.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1256.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1256.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1256.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1256.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1256.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1256.bg.infoFromPassing.valid = kcg_true;
  outC->_L1256.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1256.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1256.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1256.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1256.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1256.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1256.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1256.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1256.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1256.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1256.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1256.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1256.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1256.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i147 = 0; i147 < 33; i147++) {
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].valid = kcg_true;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].nid_LRBG = 0;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].q_dir = Q_DIR_Reverse;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].d_link = 0;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].nid_c = 0;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].nid_bg = 0;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1256.bg.infoFromPassing.linkedBGs[i147].q_locacc = 0;
  }
  outC->_L1256.bg.missed = kcg_true;
  for (i149 = 0; i149 < 41; i149++) {
    outC->_L1255[i149].valid = kcg_true;
    outC->_L1255[i149].nid_c = 0;
    outC->_L1255[i149].nid_bg = 0;
    outC->_L1255[i149].q_link = Q_LINK_Unlinked;
    outC->_L1255[i149].location.nominal = 0;
    outC->_L1255[i149].location.d_min = 0;
    outC->_L1255[i149].location.d_max = 0;
    outC->_L1255[i149].seqNoOnTrack = 0;
    outC->_L1255[i149].infoFromLinking.valid = kcg_true;
    outC->_L1255[i149].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->_L1255[i149].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->_L1255[i149].infoFromLinking.expectedLocation.nominal = 0;
    outC->_L1255[i149].infoFromLinking.expectedLocation.d_min = 0;
    outC->_L1255[i149].infoFromLinking.expectedLocation.d_max = 0;
    outC->_L1255[i149].infoFromLinking.d_link.nominal = 0;
    outC->_L1255[i149].infoFromLinking.d_link.d_min = 0;
    outC->_L1255[i149].infoFromLinking.d_link.d_max = 0;
    outC->_L1255[i149].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L1255[i149].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->_L1255[i149].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L1255[i149].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1255[i149].infoFromLinking.linkingInfo.d_link = 0;
    outC->_L1255[i149].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1255[i149].infoFromLinking.linkingInfo.nid_c = 0;
    outC->_L1255[i149].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->_L1255[i149].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1255[i149].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1255[i149].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->_L1255[i149].infoFromPassing.valid = kcg_true;
    outC->_L1255[i149].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L1255[i149].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1255[i149].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1255[i149].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L1255[i149].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1255[i149].infoFromPassing.BG_Header.m_mcount = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.nid_c = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.nid_bg = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1255[i149].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1255[i149].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->_L1255[i149].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->_L1255[i149].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->_L1255[i149].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->_L1255[i149].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1255[i149].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1255[i149].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i148 = 0; i148 < 33; i148++) {
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].valid = kcg_true;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].nid_LRBG = 0;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].q_dir = Q_DIR_Reverse;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].d_link = 0;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].nid_c = 0;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].nid_bg = 0;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L1255[i149].infoFromPassing.linkedBGs[i148].q_locacc = 0;
    }
    outC->_L1255[i149].missed = kcg_true;
  }
  outC->_L1254.valid = kcg_true;
  outC->_L1254.timestamp = 0;
  outC->_L1254.trainPositionIsUnknown = kcg_true;
  outC->_L1254.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1254.trainPosition.nominal = 0;
  outC->_L1254.trainPosition.d_min = 0;
  outC->_L1254.trainPosition.d_max = 0;
  outC->_L1254.estimatedFrontEndPosition = 0;
  outC->_L1254.minSafeFrontEndPosition = 0;
  outC->_L1254.maxSafeFrontEndPostion = 0;
  outC->_L1254.LRBG.valid = kcg_true;
  outC->_L1254.LRBG.nid_c = 0;
  outC->_L1254.LRBG.nid_bg = 0;
  outC->_L1254.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1254.LRBG.location.nominal = 0;
  outC->_L1254.LRBG.location.d_min = 0;
  outC->_L1254.LRBG.location.d_max = 0;
  outC->_L1254.LRBG.seqNoOnTrack = 0;
  outC->_L1254.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1254.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1254.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1254.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1254.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1254.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1254.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1254.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1254.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1254.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1254.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1254.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i150 = 0; i150 < 33; i150++) {
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].valid = kcg_true;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].nid_LRBG = 0;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].q_dir = Q_DIR_Reverse;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].d_link = 0;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].nid_c = 0;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].nid_bg = 0;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1254.LRBG.infoFromPassing.linkedBGs[i150].q_locacc = 0;
  }
  outC->_L1254.LRBG.missed = kcg_true;
  outC->_L1254.prvLRBG.valid = kcg_true;
  outC->_L1254.prvLRBG.nid_c = 0;
  outC->_L1254.prvLRBG.nid_bg = 0;
  outC->_L1254.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1254.prvLRBG.location.nominal = 0;
  outC->_L1254.prvLRBG.location.d_min = 0;
  outC->_L1254.prvLRBG.location.d_max = 0;
  outC->_L1254.prvLRBG.seqNoOnTrack = 0;
  outC->_L1254.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1254.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1254.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1254.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1254.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1254.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1254.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1254.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1254.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1254.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1254.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i151 = 0; i151 < 33; i151++) {
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].valid = kcg_true;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].nid_LRBG = 0;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].q_dir = Q_DIR_Reverse;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].d_link = 0;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].nid_c = 0;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].nid_bg = 0;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1254.prvLRBG.infoFromPassing.linkedBGs[i151].q_locacc = 0;
  }
  outC->_L1254.prvLRBG.missed = kcg_true;
  outC->_L1254.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1254.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1254.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1254.linkingIsUsedOnboard = kcg_true;
  outC->_L1254.estimatedRearEndPosition = 0;
  outC->_L1254.minSafeRearEndPosition = 0;
  outC->_L1254.maxSafeRearEndPosition = 0;
  outC->_L1245.valid = kcg_true;
  outC->_L1245.nid_packet = 0;
  outC->_L1245.q_dir = Q_DIR_Reverse;
  outC->_L1245.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1245.d_validnv = 0;
  outC->_L1245.nid_c = 0;
  outC->_L1245.n_iter_nid_c = 0;
  for (i152 = 0; i152 < 32; i152++) {
    outC->_L1245.nid_c_list[i152].valid = kcg_true;
    outC->_L1245.nid_c_list[i152].nid_c = 0;
  }
  outC->_L1245.v_nvshunt = 0;
  outC->_L1245.v_nvstff = 0;
  outC->_L1245.v_nvonsight = 0;
  outC->_L1245.v_nvlimsuperv = 0;
  outC->_L1245.v_nvunfit = 0;
  outC->_L1245.v_nvrel = 0;
  outC->_L1245.d_nvroll = 0;
  outC->_L1245.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1245.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1245.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1245.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1245.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L1245.v_nvallowovtrp = 0;
  outC->_L1245.v_nvsupovtrp = 0;
  outC->_L1245.d_nvovtrp = 0;
  outC->_L1245.t_nvovtrp = 0;
  outC->_L1245.d_nvpotrp = 0;
  outC->_L1245.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1245.t_nvcontact = 0;
  outC->_L1245.m_nvderun = M_NVDERUN_No;
  outC->_L1245.d_nvstff = 0;
  outC->_L1245.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1245.a_nvmaxredadh1 = 0.0;
  outC->_L1245.a_nvmaxredadh2 = 0.0;
  outC->_L1245.a_nvmaxredadh3 = 0.0;
  outC->_L1245.q_nvlocacc = 0;
  outC->_L1245.m_nvavadh = 0.0;
  outC->_L1245.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1245.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L1245.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L1245.a_nvp12 = 0.0;
  outC->_L1245.a_nvp23 = 0.0;
  outC->_L1245.v_nvkvint = 0;
  outC->_L1245.m_nvkvint_12 = 0.0;
  outC->_L1245.m_nvkvint_23 = 0.0;
  outC->_L1245.n_iter_n = 0;
  for (i153 = 0; i153 < 32; i153++) {
    outC->_L1245.n_iter_n_list[i153].valid = kcg_true;
    outC->_L1245.n_iter_n_list[i153].v_nvkvint_n = 0;
    outC->_L1245.n_iter_n_list[i153].m_nvkvint_n_12 = 0.0;
    outC->_L1245.n_iter_n_list[i153].m_nvkvint_n_23 = 0.0;
  }
  outC->_L1245.n_iter_k = 0;
  for (i155 = 0; i155 < 32; i155++) {
    outC->_L1245.n_iter_k_list[i155].valid = kcg_true;
    outC->_L1245.n_iter_k_list[i155].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->_L1245.n_iter_k_list[i155].a_nvp12_k = 0.0;
    outC->_L1245.n_iter_k_list[i155].a_nvp23_k = 0.0;
    outC->_L1245.n_iter_k_list[i155].v_nvkvint_k = 0;
    outC->_L1245.n_iter_k_list[i155].m_nvkvint_k_12 = 0.0;
    outC->_L1245.n_iter_k_list[i155].m_nvkvint_k_23 = 0.0;
    outC->_L1245.n_iter_k_list[i155].n_iter_k_m = 0;
    for (i154 = 0; i154 < 32; i154++) {
      outC->_L1245.n_iter_k_list[i155].n_iter_k_m_list[i154].valid = kcg_true;
      outC->_L1245.n_iter_k_list[i155].n_iter_k_m_list[i154].v_nvkvint_k_m = 0;
      outC->_L1245.n_iter_k_list[i155].n_iter_k_m_list[i154].m_nvkvint_km_12 =
        0.0;
      outC->_L1245.n_iter_k_list[i155].n_iter_k_m_list[i154].m_nvkvint_km_23 =
        0.0;
    }
  }
  outC->_L1245.l_nvkrint = L_NVKRINT_0m;
  outC->_L1245.m_nvkrint = 0.0;
  outC->_L1245.n_iter_l = 0;
  for (i156 = 0; i156 < 32; i156++) {
    outC->_L1245.n_iter_l_list[i156].valid = kcg_true;
    outC->_L1245.n_iter_l_list[i156].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L1245.n_iter_l_list[i156].m_nvkrint_l = 0.0;
  }
  outC->_L1245.m_nvktint = 0.0;
  for (i157 = 0; i157 < 5; i157++) {
    outC->_L1246.train_packets.P_12[i157].valid = kcg_true;
    outC->_L1246.train_packets.P_12[i157].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_12[i157].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_12[i157].v_main = 0;
    outC->_L1246.train_packets.P_12[i157].v_loa = 0;
    outC->_L1246.train_packets.P_12[i157].t_loa = 0;
    outC->_L1246.train_packets.P_12[i157].l_section = 0;
    outC->_L1246.train_packets.P_12[i157].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1246.train_packets.P_12[i157].t_sectiontimer_k = 0;
    outC->_L1246.train_packets.P_12[i157].d_sectiontimerstoploc_k = 0;
    outC->_L1246.train_packets.P_12[i157].l_endsection = 0;
    outC->_L1246.train_packets.P_12[i157].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1246.train_packets.P_12[i157].t_sectiontimer = 0;
    outC->_L1246.train_packets.P_12[i157].d_sectiontimerstoploc = 0;
    outC->_L1246.train_packets.P_12[i157].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1246.train_packets.P_12[i157].t_endtimer = 0;
    outC->_L1246.train_packets.P_12[i157].d_endtimerstartloc = 0;
    outC->_L1246.train_packets.P_12[i157].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1246.train_packets.P_12[i157].d_dp = 0;
    outC->_L1246.train_packets.P_12[i157].v_releasedp = 0;
    outC->_L1246.train_packets.P_12[i157].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1246.train_packets.P_12[i157].d_startol = 0;
    outC->_L1246.train_packets.P_12[i157].t_ol = 0;
    outC->_L1246.train_packets.P_12[i157].d_ol = 0;
    outC->_L1246.train_packets.P_12[i157].v_releaseol = 0;
  }
  outC->_L1246.train_packets.P_135.valid = kcg_true;
  outC->_L1246.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_137.valid = kcg_true;
  outC->_L1246.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1246.train_packets.P_138.valid = kcg_true;
  outC->_L1246.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1246.train_packets.P_138.d_startreverse = 0;
  outC->_L1246.train_packets.P_138.l_reversearea = 0;
  outC->_L1246.train_packets.P_139.valid = kcg_true;
  outC->_L1246.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1246.train_packets.P_139.d_reverse = 0;
  outC->_L1246.train_packets.P_139.v_reverse = 0;
  for (i158 = 0; i158 < 5; i158++) {
    outC->_L1246.train_packets.P_15[i158].valid = kcg_true;
    outC->_L1246.train_packets.P_15[i158].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_15[i158].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_15[i158].v_loa = 0;
    outC->_L1246.train_packets.P_15[i158].t_loa = 0;
    outC->_L1246.train_packets.P_15[i158].l_section = 0;
    outC->_L1246.train_packets.P_15[i158].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1246.train_packets.P_15[i158].t_sectiontimer_k = 0;
    outC->_L1246.train_packets.P_15[i158].d_sectiontimerstoploc_k = 0;
    outC->_L1246.train_packets.P_15[i158].l_endsection = 0;
    outC->_L1246.train_packets.P_15[i158].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1246.train_packets.P_15[i158].t_sectiontimer = 0;
    outC->_L1246.train_packets.P_15[i158].d_sectiontimerstoploc = 0;
    outC->_L1246.train_packets.P_15[i158].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1246.train_packets.P_15[i158].t_endtimer = 0;
    outC->_L1246.train_packets.P_15[i158].d_endtimerstartloc = 0;
    outC->_L1246.train_packets.P_15[i158].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1246.train_packets.P_15[i158].d_dp = 0;
    outC->_L1246.train_packets.P_15[i158].v_releasedp = 0;
    outC->_L1246.train_packets.P_15[i158].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1246.train_packets.P_15[i158].d_startol = 0;
    outC->_L1246.train_packets.P_15[i158].t_ol = 0;
    outC->_L1246.train_packets.P_15[i158].d_ol = 0;
    outC->_L1246.train_packets.P_15[i158].v_releaseol = 0;
  }
  for (i159 = 0; i159 < 7; i159++) {
    outC->_L1246.train_packets.P_21[i159].valid = kcg_true;
    outC->_L1246.train_packets.P_21[i159].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_21[i159].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_21[i159].d_gradient = 0;
    outC->_L1246.train_packets.P_21[i159].q_gdir = Q_GDIR_downhill;
    outC->_L1246.train_packets.P_21[i159].g_a = 0;
  }
  outC->_L1246.train_packets.P_27.valid = kcg_true;
  outC->_L1246.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1246.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1246.train_packets.P_27.d_static = 0;
  outC->_L1246.train_packets.P_27.v_static = 0;
  outC->_L1246.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i160 = 0; i160 < 7; i160++) {
    outC->_L1246.train_packets.P_27.diffArray[i160].valid = kcg_true;
    outC->_L1246.train_packets.P_27.diffArray[i160].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1246.train_packets.P_27.diffArray[i160].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1246.train_packets.P_27.diffArray[i160].nc_diff = 0;
    outC->_L1246.train_packets.P_27.diffArray[i160].v_diff = 0;
  }
  for (i162 = 0; i162 < 7; i162++) {
    outC->_L1246.train_packets.P_27.SSPArray[i162].valid = kcg_true;
    outC->_L1246.train_packets.P_27.SSPArray[i162].d_static = 0;
    outC->_L1246.train_packets.P_27.SSPArray[i162].v_static = 0;
    outC->_L1246.train_packets.P_27.SSPArray[i162].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i161 = 0; i161 < 7; i161++) {
      outC->_L1246.train_packets.P_27.SSPArray[i162].diffArray[i161].valid =
        kcg_true;
      outC->_L1246.train_packets.P_27.SSPArray[i162].diffArray[i161].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1246.train_packets.P_27.SSPArray[i162].diffArray[i161].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1246.train_packets.P_27.SSPArray[i162].diffArray[i161].nc_diff =
        0;
      outC->_L1246.train_packets.P_27.SSPArray[i162].diffArray[i161].v_diff = 0;
    }
  }
  for (i163 = 0; i163 < 7; i163++) {
    outC->_L1246.train_packets.P_41[i163].valid = kcg_true;
    outC->_L1246.train_packets.P_41[i163].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_41[i163].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_41[i163].d_leveltr = 0;
    outC->_L1246.train_packets.P_41[i163].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1246.train_packets.P_41[i163].nid_ntc = 0;
    outC->_L1246.train_packets.P_41[i163].l_ackleveltr = 0;
  }
  for (i164 = 0; i164 < 7; i164++) {
    outC->_L1246.train_packets.P_46[i164].valid = kcg_true;
    outC->_L1246.train_packets.P_46[i164].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_46[i164].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1246.train_packets.P_46[i164].nid_ntc = 0;
  }
  for (i165 = 0; i165 < 7; i165++) {
    outC->_L1246.train_packets.P_63[i165].valid = kcg_true;
    outC->_L1246.train_packets.P_63[i165].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_63[i165].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1246.train_packets.P_63[i165].nid_c = 0;
    outC->_L1246.train_packets.P_63[i165].nid_bg = 0;
  }
  for (i166 = 0; i166 < 3; i166++) {
    outC->_L1246.train_packets.P_80[i166].valid = kcg_true;
    outC->_L1246.train_packets.P_80[i166].q_dir = Q_DIR_Reverse;
    outC->_L1246.train_packets.P_80[i166].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1246.train_packets.P_80[i166].d_mamode = 0;
    outC->_L1246.train_packets.P_80[i166].m_mamode = M_MAMODE_On_Sight;
    outC->_L1246.train_packets.P_80[i166].v_mamode = 0;
    outC->_L1246.train_packets.P_80[i166].l_mamode = 0;
    outC->_L1246.train_packets.P_80[i166].l_ackmamode = 0;
    outC->_L1246.train_packets.P_80[i166].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1246.train_packets.LRBG = 0;
  outC->_L1246.train_packets.referenceLocation = 0;
  outC->_L1246.train_messages.Mess_15 = kcg_true;
  outC->_L1246.train_messages.Mess_16 = kcg_true;
  outC->_L1246.train_messages.Mess_2 = kcg_true;
  outC->_L1246.train_messages.Mess_27 = kcg_true;
  outC->_L1246.train_messages.Mess_28 = kcg_true;
  outC->_L1246.train_messages.Mess_6 = kcg_true;
  outC->_L1246.p12 = kcg_true;
  outC->_L1246.p15 = kcg_true;
  outC->_L1246.p21 = kcg_true;
  outC->_L1246.p27 = kcg_true;
  for (i167 = 0; i167 < 50; i167++) {
    outC->_L1247.GradientProfile[i167].valid = kcg_true;
    outC->_L1247.GradientProfile[i167].begin_section = 0;
    outC->_L1247.GradientProfile[i167].end_section = 0;
    outC->_L1247.GradientProfile[i167].gradient = 0;
  }
  outC->_L1247.Gradient_profile_updated = kcg_true;
  for (i168 = 0; i168 < 110; i168++) {
    outC->_L1247.MRSP[i168].valid = kcg_true;
    outC->_L1247.MRSP[i168].Loc_Abs = 0;
    outC->_L1247.MRSP[i168].Loc_LRBG = 0;
    outC->_L1247.MRSP[i168].MRS = 0;
  }
  outC->_L1247.MRSP_updated = kcg_true;
  outC->_L1248.freshMA = kcg_true;
  outC->_L1248.MA.valid = kcg_true;
  outC->_L1248.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L1248.MA.q_dir = Q_DIR_Reverse;
  outC->_L1248.MA.v_main = 0;
  outC->_L1248.MA.v_loa = 0;
  outC->_L1248.MA.t_loa_unlimited = kcg_true;
  outC->_L1248.MA.t_loa = 0;
  outC->_L1248.MA.n_iter = 0;
  for (i169 = 0; i169 < 10; i169++) {
    outC->_L1248.MA.sections[i169].valid = kcg_true;
    outC->_L1248.MA.sections[i169].q_endsection = kcg_true;
    outC->_L1248.MA.sections[i169].l_section = 0;
    outC->_L1248.MA.sections[i169].q_sectiontimer = kcg_true;
    outC->_L1248.MA.sections[i169].t_sectiontimer = 0;
    outC->_L1248.MA.sections[i169].d_sectiontimerstoploc = 0;
  }
  outC->_L1248.MA.q_dangerpoint = kcg_true;
  outC->_L1248.MA.dangerpoint.d_DP_or_OL = 0;
  outC->_L1248.MA.dangerpoint.v_release = 0;
  outC->_L1248.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1248.MA.q_overlap = kcg_true;
  outC->_L1248.MA.overlap.d_DP_or_OL = 0;
  outC->_L1248.MA.overlap.v_release = 0;
  outC->_L1248.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1248.MA.q_endtimer = kcg_true;
  outC->_L1248.MA.endtimer_t.t_endtimer = 0;
  outC->_L1248.MA.endtimer_t.d_endtimerstoploc = 0;
  outC->_L1248.freshGradientProfile = kcg_true;
  for (i170 = 0; i170 < 50; i170++) {
    outC->_L1248.GradientProfile[i170].valid = kcg_true;
    outC->_L1248.GradientProfile[i170].Loc_Absolute = 0;
    outC->_L1248.GradientProfile[i170].Loc_LRBG = 0;
    outC->_L1248.GradientProfile[i170].Gradient = 0;
    outC->_L1248.GradientProfile[i170].L_Gradient = 0;
  }
  outC->_L1248.freshMRSP = kcg_true;
  for (i171 = 0; i171 < 110; i171++) {
    outC->_L1248.MRSP[i171].valid = kcg_true;
    outC->_L1248.MRSP[i171].Loc_Abs = 0;
    outC->_L1248.MRSP[i171].Loc_LRBG = 0;
    outC->_L1248.MRSP[i171].MRS = 0;
  }
  outC->_L1249.valid = kcg_true;
  outC->_L1249.Level = MA_L1_TrackAtlasTypes;
  outC->_L1249.q_dir = Q_DIR_Reverse;
  outC->_L1249.v_main = 0;
  outC->_L1249.v_loa = 0;
  outC->_L1249.t_loa_unlimited = kcg_true;
  outC->_L1249.t_loa = 0;
  outC->_L1249.n_iter = 0;
  for (i172 = 0; i172 < 10; i172++) {
    outC->_L1249.sections[i172].valid = kcg_true;
    outC->_L1249.sections[i172].q_endsection = kcg_true;
    outC->_L1249.sections[i172].l_section = 0;
    outC->_L1249.sections[i172].q_sectiontimer = kcg_true;
    outC->_L1249.sections[i172].t_sectiontimer = 0;
    outC->_L1249.sections[i172].d_sectiontimerstoploc = 0;
  }
  outC->_L1249.q_dangerpoint = kcg_true;
  outC->_L1249.dangerpoint.d_DP_or_OL = 0;
  outC->_L1249.dangerpoint.v_release = 0;
  outC->_L1249.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1249.q_overlap = kcg_true;
  outC->_L1249.overlap.d_DP_or_OL = 0;
  outC->_L1249.overlap.v_release = 0;
  outC->_L1249.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1249.q_endtimer = kcg_true;
  outC->_L1249.endtimer_t.t_endtimer = 0;
  outC->_L1249.endtimer_t.d_endtimerstoploc = 0;
  outC->_L1244 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1243 = kcg_true;
  outC->_L1242 = kcg_true;
  outC->_L1241 = kcg_true;
  outC->_L1240.valid = kcg_true;
  outC->_L1240.deskOpen = kcg_true;
  outC->_L1240.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1240.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1234.valid = kcg_true;
  outC->_L1234.systemTime = 0;
  outC->_L1234.acknowledged = kcg_true;
  outC->_L1232.valid = kcg_true;
  outC->_L1232.systemTime = 0;
  outC->_L1232.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L1230.valid = kcg_true;
  outC->_L1230.validatedByDriver = kcg_true;
  outC->_L1230.RBCsystemVersionOnboard = kcg_true;
  outC->_L1230.validatedbyRBC = kcg_true;
  outC->_L1230.waitingForRBCResponse = kcg_true;
  outC->_L1230.driverIsModificationTrainData = kcg_true;
  outC->_L1230.timeStampValidateToRBC = 0;
  outC->_L1229.EoM_Procedure_req = kcg_true;
  outC->_L1229.Clean_BG_List_SH_Area = kcg_true;
  outC->_L1229.MA_Req = kcg_true;
  outC->_L1229.Req_for_SH_from_Driver = kcg_true;
  outC->_L1229.Connection_to_RBC_req = kcg_true;
  outC->_L1229.Position_Repport_Needed = kcg_true;
  outC->_L1228 = kcg_true;
  for (i174 = 0; i174 < 5; i174++) {
    outC->_L1225[i174].Message.valid = kcg_true;
    outC->_L1225[i174].Message.nid_message = 0;
    outC->_L1225[i174].Message.l_message = 0;
    outC->_L1225[i174].Message.t_train = 0;
    outC->_L1225[i174].Message.nid_engine = 0;
    outC->_L1225[i174].Message.field1 = 0;
    outC->_L1225[i174].Message.field2 = 0;
    outC->_L1225[i174].Message.field3 = 0;
    for (i173 = 0; i173 < 50; i173++) {
      outC->_L1225[i174].OptionalPackets[i173] = 0;
    }
  }
  outC->_L1224 = kcg_true;
  outC->_L1223.valid = kcg_true;
  outC->_L1223.acknowledgedByDriver = kcg_true;
  outC->_L1223.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1223.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1223.trainLength = 0;
  outC->_L1223.brakePerctage = 0;
  outC->_L1223.maxTrainSpeed = 0;
  outC->_L1223.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1223.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1223.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1223.axleNumber = 0;
  outC->_L1223.numberNationalSystems = 0;
  for (i175 = 0; i175 < 5; i175++) {
    outC->_L1223.nationSystems[i175] = 0;
  }
  outC->_L1223.numberTractionSystems = 0;
  for (i176 = 0; i176 < 4; i176++) {
    outC->_L1223.tractionSystem[i176].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1223.tractionSystem[i176].nid_ctraction = 0;
  }
  outC->_L1219.valid = kcg_true;
  outC->_L1219.packet0.NID_PACKET = 0;
  outC->_L1219.packet0.L_PACKET = 0;
  outC->_L1219.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1219.packet0.NID_LRBG = 0;
  outC->_L1219.packet0.D_LRBG = 0;
  outC->_L1219.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1219.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1219.packet0.L_DOUBTOVER = 0;
  outC->_L1219.packet0.L_DOUBTUNDER = 0;
  outC->_L1219.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1219.packet0.L_TRAININT = 0;
  outC->_L1219.packet0.V_TRAIN = 0;
  outC->_L1219.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1219.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1219.packet0.level = M_LEVEL_Level_0;
  outC->_L1219.packet0.NID_NTC = 0;
  outC->_L1218 = 0;
  outC->_L1215.trainStandStill = kcg_true;
  outC->_L1215.driverRequestModify = kcg_true;
  outC->_L1215.communicationSessionEstablished = kcg_true;
  outC->_L1215.safeRadioConnectionLost = kcg_true;
  outC->_L1215.approachingRBCarea = kcg_true;
  outC->_L1215.MoRCreadyFlag = kcg_true;
  outC->_L1213.brakeTrigger = kcg_true;
  outC->_L1213.driverRequestModify = kcg_true;
  outC->_L1213.shortenLocationBasedInformation = kcg_true;
  outC->_L1213.deleteMA = kcg_true;
  outC->_L1213.trainLengthIncreased = kcg_true;
  outC->_L1210.valid = kcg_true;
  outC->_L1210.validatedByDriver = kcg_true;
  outC->_L1210.RBCsystemVersionOnboard = kcg_true;
  outC->_L1210.validatedbyRBC = kcg_true;
  outC->_L1210.waitingForRBCResponse = kcg_true;
  outC->_L1210.driverIsModificationTrainData = kcg_true;
  outC->_L1210.timeStampValidateToRBC = 0;
  outC->_L1209.valid = kcg_true;
  outC->_L1209.systemTime = 0;
  outC->_L1209.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1209.l_train = 0;
  outC->_L1209.m_brakeperct = 0;
  outC->_L1209.v_maxTrain = 0;
  outC->_L1209.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L1209.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L1209.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1208.valid = kcg_true;
  outC->_L1208.acknowledgedByDriver = kcg_true;
  outC->_L1208.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1208.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1208.trainLength = 0;
  outC->_L1208.brakePerctage = 0;
  outC->_L1208.maxTrainSpeed = 0;
  outC->_L1208.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1208.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1208.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1208.axleNumber = 0;
  outC->_L1208.numberNationalSystems = 0;
  for (i177 = 0; i177 < 5; i177++) {
    outC->_L1208.nationSystems[i177] = 0;
  }
  outC->_L1208.numberTractionSystems = 0;
  for (i178 = 0; i178 < 4; i178++) {
    outC->_L1208.tractionSystem[i178].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1208.tractionSystem[i178].nid_ctraction = 0;
  }
  outC->_L1207.valid = kcg_true;
  outC->_L1207.info.train_status.valid = kcg_true;
  outC->_L1207.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L1207.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.valid = kcg_true;
  outC->_L1207.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1207.info.brake_pressure.valid = kcg_true;
  outC->_L1207.info.brake_pressure.pressure = 0;
  outC->_L1207.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L1207.info.train_data_info.valid = kcg_true;
  outC->_L1207.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L1207.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1207.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1207.info.train_data_info.trainLength = 0;
  outC->_L1207.info.train_data_info.brakePerctage = 0;
  outC->_L1207.info.train_data_info.maxTrainSpeed = 0;
  outC->_L1207.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1207.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1207.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1207.info.train_data_info.axleNumber = 0;
  outC->_L1207.info.train_data_info.numberNationalSystems = 0;
  for (i179 = 0; i179 < 5; i179++) {
    outC->_L1207.info.train_data_info.nationSystems[i179] = 0;
  }
  outC->_L1207.info.train_data_info.numberTractionSystems = 0;
  for (i180 = 0; i180 < 4; i180++) {
    outC->_L1207.info.train_data_info.tractionSystem[i180].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1207.info.train_data_info.tractionSystem[i180].nid_ctraction = 0;
  }
  outC->_L1207.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->_L1207.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L1207.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->_L1207.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->_L1206 = kcg_true;
  outC->_L1204.valid = kcg_true;
  outC->_L1204.acknowledgedByDriver = kcg_true;
  outC->_L1204.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1204.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1204.trainLength = 0;
  outC->_L1204.brakePerctage = 0;
  outC->_L1204.maxTrainSpeed = 0;
  outC->_L1204.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1204.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1204.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1204.axleNumber = 0;
  outC->_L1204.numberNationalSystems = 0;
  for (i181 = 0; i181 < 5; i181++) {
    outC->_L1204.nationSystems[i181] = 0;
  }
  outC->_L1204.numberTractionSystems = 0;
  for (i182 = 0; i182 < 4; i182++) {
    outC->_L1204.tractionSystem[i182].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1204.tractionSystem[i182].nid_ctraction = 0;
  }
  outC->_L1205.brakeTrigger = kcg_true;
  outC->_L1205.driverRequestModify = kcg_true;
  outC->_L1205.shortenLocationBasedInformation = kcg_true;
  outC->_L1205.deleteMA = kcg_true;
  outC->_L1205.trainLengthIncreased = kcg_true;
  outC->_L1203 = 0;
  outC->_L1202.valid = kcg_true;
  outC->_L1202.m_pantograph_cm = pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L1202.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L1202.m_mainpowerswitch_cm = open_main_power_swicth_TIU_Types_Pkg;
  outC->_L1202.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L1200.compatibleModeAndLevel = kcg_true;
  outC->_L1200.level = M_LEVEL_Level_0;
  outC->_L1200.newLevel = kcg_true;
  outC->_L1200.Mode = M_MODE_Full_Supervision;
  outC->_L1200.newMode = kcg_true;
  outC->_L166.valid = kcg_true;
  outC->_L166.m_regenerativebrake_cm = brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L166.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L166.m_magneticshoebrake_cm = brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L1199 = kcg_true;
  outC->_L1197 = kcg_true;
  outC->_L1195.pendingL1Transition = kcg_true;
  outC->_L1195.pendingL12L3Transition = kcg_true;
  outC->_L1195.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L1195.emergencyStopAccepted = kcg_true;
  outC->_L1195.lastAckTextMessageId = 0;
  outC->_L1195.pendingNTCTransition = kcg_true;
  outC->_L1195.SPPAndGradientOnBoard = kcg_true;
  outC->_L1195.MACoverNotFullLength = kcg_true;
  outC->_L1193 = kcg_true;
  outC->_L1191.DMI_Active = kcg_true;
  outC->_L1191.DMI_Error = kcg_true;
  outC->_L1191.DMI_DriverIdValidated = kcg_true;
  outC->_L1191.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L1191.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L1191.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L1191.DMI_TrainDataValidated = kcg_true;
  outC->_L1191.DMI_StartReceived = kcg_true;
  outC->_L1191.DMI_Identifier.valid = kcg_true;
  outC->_L1191.DMI_Identifier.systemTime = 0;
  outC->_L1191.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L1191.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L1191.DMI_Identifier.l_name = 0;
  for (i183 = 0; i183 < 255; i183++) {
    outC->_L1191.DMI_Identifier.DMI_name[i183] = ' ';
  }
  outC->_L1191.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1189.valid = kcg_true;
  outC->_L1189.systemTime = 0;
  outC->_L1189.m_request = Start_of_mission_DMI_Types_Pkg;
  for (i184 = 0; i184 < 31; i184++) {
    outC->_L1187[i184].valid = kcg_true;
    outC->_L1187[i184].dmi_textMessageID = 0;
    outC->_L1187[i184].timeStamp = 0;
    outC->_L1187[i184].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1187[i184].context = con_undefined_DMI_Types_Pkg;
    outC->_L1187[i184].nid_textmessage = 0;
    outC->_L1187[i184].whichLevel = M_LEVEL_Level_0;
    outC->_L1187[i184].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L1185 = kcg_true;
  for (i185 = 0; i185 < 31; i185++) {
    outC->_L1183[i185].valid = kcg_true;
    outC->_L1183[i185].dmi_textMessageID = 0;
    outC->_L1183[i185].timeStamp = 0;
    outC->_L1183[i185].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1183[i185].context = con_undefined_DMI_Types_Pkg;
    outC->_L1183[i185].nid_textmessage = 0;
    outC->_L1183[i185].whichLevel = M_LEVEL_Level_0;
    outC->_L1183[i185].whichMode = M_MODE_Full_Supervision;
  }
  for (i186 = 0; i186 < 31; i186++) {
    outC->_L1182[i186].valid = kcg_true;
    outC->_L1182[i186].dmi_textMessageID = 0;
    outC->_L1182[i186].timeStamp = 0;
    outC->_L1182[i186].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1182[i186].context = con_undefined_DMI_Types_Pkg;
    outC->_L1182[i186].nid_textmessage = 0;
    outC->_L1182[i186].whichLevel = M_LEVEL_Level_0;
    outC->_L1182[i186].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L1181 = 0;
  for (i187 = 0; i187 < 31; i187++) {
    outC->_L1179[i187].valid = kcg_true;
    outC->_L1179[i187].dmi_textMessageID = 0;
    outC->_L1179[i187].timeStamp = 0;
    outC->_L1179[i187].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->_L1179[i187].context = con_undefined_DMI_Types_Pkg;
    outC->_L1179[i187].nid_textmessage = 0;
    outC->_L1179[i187].whichLevel = M_LEVEL_Level_0;
    outC->_L1179[i187].whichMode = M_MODE_Full_Supervision;
  }
  outC->_L1177 = Q_DIRTRAIN_Reverse;
  outC->_L1176.valid = kcg_true;
  outC->_L1176.timestamp = 0;
  outC->_L1176.trainPositionIsUnknown = kcg_true;
  outC->_L1176.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1176.trainPosition.nominal = 0;
  outC->_L1176.trainPosition.d_min = 0;
  outC->_L1176.trainPosition.d_max = 0;
  outC->_L1176.estimatedFrontEndPosition = 0;
  outC->_L1176.minSafeFrontEndPosition = 0;
  outC->_L1176.maxSafeFrontEndPostion = 0;
  outC->_L1176.LRBG.valid = kcg_true;
  outC->_L1176.LRBG.nid_c = 0;
  outC->_L1176.LRBG.nid_bg = 0;
  outC->_L1176.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1176.LRBG.location.nominal = 0;
  outC->_L1176.LRBG.location.d_min = 0;
  outC->_L1176.LRBG.location.d_max = 0;
  outC->_L1176.LRBG.seqNoOnTrack = 0;
  outC->_L1176.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1176.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1176.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1176.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1176.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1176.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1176.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1176.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1176.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1176.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1176.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1176.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i188 = 0; i188 < 33; i188++) {
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].valid = kcg_true;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].nid_LRBG = 0;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].q_dir = Q_DIR_Reverse;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].d_link = 0;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].nid_c = 0;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].nid_bg = 0;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1176.LRBG.infoFromPassing.linkedBGs[i188].q_locacc = 0;
  }
  outC->_L1176.LRBG.missed = kcg_true;
  outC->_L1176.prvLRBG.valid = kcg_true;
  outC->_L1176.prvLRBG.nid_c = 0;
  outC->_L1176.prvLRBG.nid_bg = 0;
  outC->_L1176.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1176.prvLRBG.location.nominal = 0;
  outC->_L1176.prvLRBG.location.d_min = 0;
  outC->_L1176.prvLRBG.location.d_max = 0;
  outC->_L1176.prvLRBG.seqNoOnTrack = 0;
  outC->_L1176.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1176.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1176.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1176.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1176.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1176.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1176.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1176.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1176.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1176.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1176.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i189 = 0; i189 < 33; i189++) {
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].valid = kcg_true;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].nid_LRBG = 0;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].q_dir = Q_DIR_Reverse;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].d_link = 0;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].nid_c = 0;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].nid_bg = 0;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1176.prvLRBG.infoFromPassing.linkedBGs[i189].q_locacc = 0;
  }
  outC->_L1176.prvLRBG.missed = kcg_true;
  outC->_L1176.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1176.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1176.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1176.linkingIsUsedOnboard = kcg_true;
  outC->_L1176.estimatedRearEndPosition = 0;
  outC->_L1176.minSafeRearEndPosition = 0;
  outC->_L1176.maxSafeRearEndPosition = 0;
  for (i190 = 0; i190 < 8; i190++) {
    outC->_L1168[i190].valid = kcg_true;
    outC->_L1168[i190].nidBG = 0;
    outC->_L1168[i190].location.nominal = 0;
    outC->_L1168[i190].location.d_min = 0;
    outC->_L1168[i190].location.d_max = 0;
  }
  outC->_L1166.currMode = M_MODE_Full_Supervision;
  outC->_L1166.currLevel = M_LEVEL_Level_0;
  outC->_L1166.levelTransitionBorderPassed = kcg_true;
  outC->_L1159.valid = kcg_true;
  outC->_L1159.packet0.NID_PACKET = 0;
  outC->_L1159.packet0.L_PACKET = 0;
  outC->_L1159.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1159.packet0.NID_LRBG = 0;
  outC->_L1159.packet0.D_LRBG = 0;
  outC->_L1159.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1159.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1159.packet0.L_DOUBTOVER = 0;
  outC->_L1159.packet0.L_DOUBTUNDER = 0;
  outC->_L1159.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1159.packet0.L_TRAININT = 0;
  outC->_L1159.packet0.V_TRAIN = 0;
  outC->_L1159.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1159.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1159.packet0.level = M_LEVEL_Level_0;
  outC->_L1159.packet0.NID_NTC = 0;
  outC->_L1154 = kcg_true;
  outC->_L1153 = kcg_true;
  outC->_L1152 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1149 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1133 = kcg_true;
  outC->_L1132.valid = kcg_true;
  outC->_L1132.nid_c = 0;
  outC->_L1132.nid_bg = 0;
  outC->_L1132.q_link = Q_LINK_Unlinked;
  outC->_L1132.location.nominal = 0;
  outC->_L1132.location.d_min = 0;
  outC->_L1132.location.d_max = 0;
  outC->_L1132.seqNoOnTrack = 0;
  outC->_L1132.infoFromLinking.valid = kcg_true;
  outC->_L1132.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1132.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1132.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1132.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1132.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1132.infoFromLinking.d_link.nominal = 0;
  outC->_L1132.infoFromLinking.d_link.d_min = 0;
  outC->_L1132.infoFromLinking.d_link.d_max = 0;
  outC->_L1132.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1132.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1132.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1132.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1132.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1132.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1132.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1132.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1132.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1132.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1132.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1132.infoFromPassing.valid = kcg_true;
  outC->_L1132.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1132.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1132.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1132.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1132.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1132.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1132.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1132.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1132.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1132.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1132.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1132.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1132.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1132.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1132.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1132.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1132.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i191 = 0; i191 < 33; i191++) {
    outC->_L1132.infoFromPassing.linkedBGs[i191].valid = kcg_true;
    outC->_L1132.infoFromPassing.linkedBGs[i191].nid_LRBG = 0;
    outC->_L1132.infoFromPassing.linkedBGs[i191].q_dir = Q_DIR_Reverse;
    outC->_L1132.infoFromPassing.linkedBGs[i191].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1132.infoFromPassing.linkedBGs[i191].d_link = 0;
    outC->_L1132.infoFromPassing.linkedBGs[i191].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1132.infoFromPassing.linkedBGs[i191].nid_c = 0;
    outC->_L1132.infoFromPassing.linkedBGs[i191].nid_bg = 0;
    outC->_L1132.infoFromPassing.linkedBGs[i191].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1132.infoFromPassing.linkedBGs[i191].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1132.infoFromPassing.linkedBGs[i191].q_locacc = 0;
  }
  outC->_L1132.missed = kcg_true;
  outC->_L1131.valid = kcg_true;
  outC->_L1131.timestamp = 0;
  outC->_L1131.trainPositionIsUnknown = kcg_true;
  outC->_L1131.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1131.trainPosition.nominal = 0;
  outC->_L1131.trainPosition.d_min = 0;
  outC->_L1131.trainPosition.d_max = 0;
  outC->_L1131.estimatedFrontEndPosition = 0;
  outC->_L1131.minSafeFrontEndPosition = 0;
  outC->_L1131.maxSafeFrontEndPostion = 0;
  outC->_L1131.LRBG.valid = kcg_true;
  outC->_L1131.LRBG.nid_c = 0;
  outC->_L1131.LRBG.nid_bg = 0;
  outC->_L1131.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1131.LRBG.location.nominal = 0;
  outC->_L1131.LRBG.location.d_min = 0;
  outC->_L1131.LRBG.location.d_max = 0;
  outC->_L1131.LRBG.seqNoOnTrack = 0;
  outC->_L1131.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1131.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1131.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1131.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1131.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1131.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1131.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1131.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1131.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1131.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1131.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1131.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i192 = 0; i192 < 33; i192++) {
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].valid = kcg_true;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].nid_LRBG = 0;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].q_dir = Q_DIR_Reverse;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].d_link = 0;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].nid_c = 0;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].nid_bg = 0;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1131.LRBG.infoFromPassing.linkedBGs[i192].q_locacc = 0;
  }
  outC->_L1131.LRBG.missed = kcg_true;
  outC->_L1131.prvLRBG.valid = kcg_true;
  outC->_L1131.prvLRBG.nid_c = 0;
  outC->_L1131.prvLRBG.nid_bg = 0;
  outC->_L1131.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1131.prvLRBG.location.nominal = 0;
  outC->_L1131.prvLRBG.location.d_min = 0;
  outC->_L1131.prvLRBG.location.d_max = 0;
  outC->_L1131.prvLRBG.seqNoOnTrack = 0;
  outC->_L1131.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1131.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1131.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1131.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1131.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1131.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1131.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1131.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1131.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1131.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1131.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i193 = 0; i193 < 33; i193++) {
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].valid = kcg_true;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].nid_LRBG = 0;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].q_dir = Q_DIR_Reverse;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].d_link = 0;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].nid_c = 0;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].nid_bg = 0;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1131.prvLRBG.infoFromPassing.linkedBGs[i193].q_locacc = 0;
  }
  outC->_L1131.prvLRBG.missed = kcg_true;
  outC->_L1131.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1131.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1131.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1131.linkingIsUsedOnboard = kcg_true;
  outC->_L1131.estimatedRearEndPosition = 0;
  outC->_L1131.minSafeRearEndPosition = 0;
  outC->_L1131.maxSafeRearEndPosition = 0;
  outC->_L1117.number = 0;
  for (i194 = 0; i194 < 32; i194++) {
    outC->_L1117.levelList[i194].level = M_LEVEL_Level_0;
    outC->_L1117.levelList[i194].nid_stm = 0;
  }
  outC->_L1107 = kcg_true;
  outC->_L1104 = kcg_true;
  outC->_L1103 = kcg_true;
  outC->_L1099 = 0;
  outC->_L1095.valid = kcg_true;
  outC->_L1095.whichMode = M_MODE_Full_Supervision;
  outC->_L1095.SH_Req_RefusedByRBC = kcg_true;
  outC->_L1095.LevelNeedsAck = kcg_true;
  outC->_L1092 = kcg_true;
  outC->_L1091 = kcg_true;
  outC->_L1088.NTC = kcg_true;
  outC->_L1088.L0 = kcg_true;
  outC->_L1088.L1 = kcg_true;
  outC->_L1088.L2 = kcg_true;
  outC->_L1088.L3 = kcg_true;
  outC->_L1087 = kcg_true;
  outC->_L1086 = kcg_true;
  outC->_L1080 = kcg_true;
  outC->_L1079.NTC = kcg_true;
  outC->_L1079.L0 = kcg_true;
  outC->_L1079.L1 = kcg_true;
  outC->_L1079.L2 = kcg_true;
  outC->_L1079.L3 = kcg_true;
  outC->_L1078.is_set = kcg_true;
  outC->_L1078.transition.level = M_LEVEL_Level_0;
  outC->_L1078.transition.position = 0;
  outC->_L1078.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L1078.transition.immediateAck = kcg_true;
  outC->_L1078.transition.AckLength = 0;
  outC->_L1078.LRBG = 0;
  outC->_L1078.referenceLocation = 0;
  outC->_L1077 = CabUndefined_TIU_Types_Pkg;
  outC->_L1076.valid = kcg_true;
  outC->_L1076.deskOpen = kcg_true;
  outC->_L1076.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1076.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1060 = kcg_true;
  outC->_L1057.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L1057.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L1057.Override_Function_Active = kcg_true;
  outC->_L1057.EOA_Antenna_Overpass = kcg_true;
  outC->_L1057.EOA_Front_End = kcg_true;
  outC->_L1057.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->_L1056.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L1056.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L1056.Override_Function_Active = kcg_true;
  outC->_L1056.EOA_Antenna_Overpass = kcg_true;
  outC->_L1056.EOA_Front_End = kcg_true;
  outC->_L1056.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->_L1048.train_status.valid = kcg_true;
  outC->_L1048.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L1048.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L1048.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L1048.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L1048.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L1048.brake_status.valid = kcg_true;
  outC->_L1048.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1048.brake_pressure.valid = kcg_true;
  outC->_L1048.brake_pressure.pressure = 0;
  outC->_L1048.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L1048.train_data_info.valid = kcg_true;
  outC->_L1048.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L1048.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1048.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1048.train_data_info.trainLength = 0;
  outC->_L1048.train_data_info.brakePerctage = 0;
  outC->_L1048.train_data_info.maxTrainSpeed = 0;
  outC->_L1048.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1048.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1048.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1048.train_data_info.axleNumber = 0;
  outC->_L1048.train_data_info.numberNationalSystems = 0;
  for (i195 = 0; i195 < 5; i195++) {
    outC->_L1048.train_data_info.nationSystems[i195] = 0;
  }
  outC->_L1048.train_data_info.numberTractionSystems = 0;
  for (i196 = 0; i196 < 4; i196++) {
    outC->_L1048.train_data_info.tractionSystem[i196].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1048.train_data_info.tractionSystem[i196].nid_ctraction = 0;
  }
  outC->_L1048.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->_L1048.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L1048.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->_L1048.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->_L1047 = kcg_true;
  outC->_L1045.outOfMemSpace = kcg_true;
  outC->_L1045.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1045.positionCalculation_inconsistent = kcg_true;
  outC->_L1045.linkedBGMissed = kcg_true;
  outC->_L1045.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1045.BG_LinkingConsistencyError = kcg_true;
  outC->_L1045.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1045.doubleRepositioningError = kcg_true;
  outC->_L1045.bg.valid = kcg_true;
  outC->_L1045.bg.nid_c = 0;
  outC->_L1045.bg.nid_bg = 0;
  outC->_L1045.bg.q_link = Q_LINK_Unlinked;
  outC->_L1045.bg.location.nominal = 0;
  outC->_L1045.bg.location.d_min = 0;
  outC->_L1045.bg.location.d_max = 0;
  outC->_L1045.bg.seqNoOnTrack = 0;
  outC->_L1045.bg.infoFromLinking.valid = kcg_true;
  outC->_L1045.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1045.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1045.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1045.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1045.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1045.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L1045.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L1045.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L1045.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1045.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1045.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1045.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1045.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1045.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1045.bg.infoFromPassing.valid = kcg_true;
  outC->_L1045.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1045.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1045.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1045.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1045.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1045.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1045.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1045.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1045.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1045.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1045.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1045.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1045.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1045.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i197 = 0; i197 < 33; i197++) {
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].valid = kcg_true;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].nid_LRBG = 0;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].q_dir = Q_DIR_Reverse;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].d_link = 0;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].nid_c = 0;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].nid_bg = 0;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1045.bg.infoFromPassing.linkedBGs[i197].q_locacc = 0;
  }
  outC->_L1045.bg.missed = kcg_true;
  outC->_L1044 = 0;
  outC->_L1043 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1042 = kcg_true;
  outC->_L1041 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1040.valid = kcg_true;
  outC->_L1040.timestamp = 0;
  outC->_L1040.odo.o_nominal = 0;
  outC->_L1040.odo.o_min = 0;
  outC->_L1040.odo.o_max = 0;
  outC->_L1040.speed.v_safeNominal = 0;
  outC->_L1040.speed.v_rawNominal = 0;
  outC->_L1040.speed.v_lower = 0;
  outC->_L1040.speed.v_upper = 0;
  outC->_L1040.acceleration = 0;
  outC->_L1040.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1040.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1039.valid = kcg_true;
  outC->_L1039.timestamp = 0;
  outC->_L1039.trainPositionIsUnknown = kcg_true;
  outC->_L1039.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1039.trainPosition.nominal = 0;
  outC->_L1039.trainPosition.d_min = 0;
  outC->_L1039.trainPosition.d_max = 0;
  outC->_L1039.estimatedFrontEndPosition = 0;
  outC->_L1039.minSafeFrontEndPosition = 0;
  outC->_L1039.maxSafeFrontEndPostion = 0;
  outC->_L1039.LRBG.valid = kcg_true;
  outC->_L1039.LRBG.nid_c = 0;
  outC->_L1039.LRBG.nid_bg = 0;
  outC->_L1039.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1039.LRBG.location.nominal = 0;
  outC->_L1039.LRBG.location.d_min = 0;
  outC->_L1039.LRBG.location.d_max = 0;
  outC->_L1039.LRBG.seqNoOnTrack = 0;
  outC->_L1039.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1039.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1039.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1039.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1039.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1039.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1039.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1039.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1039.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1039.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1039.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1039.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i198 = 0; i198 < 33; i198++) {
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].valid = kcg_true;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].nid_LRBG = 0;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].q_dir = Q_DIR_Reverse;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].d_link = 0;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].nid_c = 0;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].nid_bg = 0;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1039.LRBG.infoFromPassing.linkedBGs[i198].q_locacc = 0;
  }
  outC->_L1039.LRBG.missed = kcg_true;
  outC->_L1039.prvLRBG.valid = kcg_true;
  outC->_L1039.prvLRBG.nid_c = 0;
  outC->_L1039.prvLRBG.nid_bg = 0;
  outC->_L1039.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1039.prvLRBG.location.nominal = 0;
  outC->_L1039.prvLRBG.location.d_min = 0;
  outC->_L1039.prvLRBG.location.d_max = 0;
  outC->_L1039.prvLRBG.seqNoOnTrack = 0;
  outC->_L1039.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1039.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1039.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1039.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1039.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1039.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1039.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1039.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1039.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1039.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1039.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i199 = 0; i199 < 33; i199++) {
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].valid = kcg_true;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].nid_LRBG = 0;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].q_dir = Q_DIR_Reverse;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].d_link = 0;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].nid_c = 0;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].nid_bg = 0;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1039.prvLRBG.infoFromPassing.linkedBGs[i199].q_locacc = 0;
  }
  outC->_L1039.prvLRBG.missed = kcg_true;
  outC->_L1039.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1039.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1039.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1039.linkingIsUsedOnboard = kcg_true;
  outC->_L1039.estimatedRearEndPosition = 0;
  outC->_L1039.minSafeRearEndPosition = 0;
  outC->_L1039.maxSafeRearEndPosition = 0;
  outC->_L1038.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L1038.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L1038.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L1038.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1038.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L1038.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L1038.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1038.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L1038.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1038.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L1038.PositionErrors.bg.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.nid_c = 0;
  outC->_L1038.PositionErrors.bg.nid_bg = 0;
  outC->_L1038.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L1038.PositionErrors.bg.location.nominal = 0;
  outC->_L1038.PositionErrors.bg.location.d_min = 0;
  outC->_L1038.PositionErrors.bg.location.d_max = 0;
  outC->_L1038.PositionErrors.bg.seqNoOnTrack = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1038.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1038.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i200 = 0; i200 < 33; i200++) {
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].valid =
      kcg_true;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].nid_LRBG = 0;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].q_dir =
      Q_DIR_Reverse;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].d_link = 0;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].nid_c = 0;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].nid_bg = 0;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1038.PositionErrors.bg.infoFromPassing.linkedBGs[i200].q_locacc = 0;
  }
  outC->_L1038.PositionErrors.bg.missed = kcg_true;
  outC->_L1038.Train_Position.valid = kcg_true;
  outC->_L1038.Train_Position.timestamp = 0;
  outC->_L1038.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L1038.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1038.Train_Position.trainPosition.nominal = 0;
  outC->_L1038.Train_Position.trainPosition.d_min = 0;
  outC->_L1038.Train_Position.trainPosition.d_max = 0;
  outC->_L1038.Train_Position.estimatedFrontEndPosition = 0;
  outC->_L1038.Train_Position.minSafeFrontEndPosition = 0;
  outC->_L1038.Train_Position.maxSafeFrontEndPostion = 0;
  outC->_L1038.Train_Position.LRBG.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.nid_c = 0;
  outC->_L1038.Train_Position.LRBG.nid_bg = 0;
  outC->_L1038.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1038.Train_Position.LRBG.location.nominal = 0;
  outC->_L1038.Train_Position.LRBG.location.d_min = 0;
  outC->_L1038.Train_Position.LRBG.location.d_max = 0;
  outC->_L1038.Train_Position.LRBG.seqNoOnTrack = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1038.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1038.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i201 = 0; i201 < 33; i201++) {
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].valid =
      kcg_true;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].nid_LRBG =
      0;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].q_dir =
      Q_DIR_Reverse;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].d_link = 0;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].nid_c = 0;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].nid_bg = 0;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1038.Train_Position.LRBG.infoFromPassing.linkedBGs[i201].q_locacc =
      0;
  }
  outC->_L1038.Train_Position.LRBG.missed = kcg_true;
  outC->_L1038.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L1038.Train_Position.prvLRBG.nid_c = 0;
  outC->_L1038.Train_Position.prvLRBG.nid_bg = 0;
  outC->_L1038.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1038.Train_Position.prvLRBG.location.nominal = 0;
  outC->_L1038.Train_Position.prvLRBG.location.d_min = 0;
  outC->_L1038.Train_Position.prvLRBG.location.d_max = 0;
  outC->_L1038.Train_Position.prvLRBG.seqNoOnTrack = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1038.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1038.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i202 = 0; i202 < 33; i202++) {
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].valid =
      kcg_true;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].nid_LRBG =
      0;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].q_dir =
      Q_DIR_Reverse;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].d_link =
      0;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].nid_c =
      0;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].nid_bg =
      0;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1038.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i202].q_locacc =
      0;
  }
  outC->_L1038.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L1038.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1038.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1038.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1038.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L1038.Train_Position.estimatedRearEndPosition = 0;
  outC->_L1038.Train_Position.minSafeRearEndPosition = 0;
  outC->_L1038.Train_Position.maxSafeRearEndPosition = 0;
  outC->_L1038.Train_Speed = 0;
  outC->_L1038.Train_Standstill = kcg_true;
  outC->_L1037 = 0;
  outC->_L1032 = kcg_true;
  outC->_L1031 = kcg_true;
  outC->_L1030 = kcg_true;
  outC->_L1029 = kcg_true;
  outC->_L1023 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1024 = kcg_true;
  outC->_L1025 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1026 = kcg_true;
  outC->_L1027 = kcg_true;
  outC->_L1028.valid = kcg_true;
  outC->_L1028.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1028.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1022 = kcg_true;
  outC->_L1021 = kcg_true;
  outC->_L1020 = kcg_true;
  outC->_L1019 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1018 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1017 = kcg_true;
  outC->_L1016.valid = kcg_true;
  outC->_L1016.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1016.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1015 = kcg_true;
  outC->_L1009 = kcg_true;
  outC->_L1007 = kcg_true;
  outC->_L1006.valid = kcg_true;
  outC->_L1006.deskOpen = kcg_true;
  outC->_L1006.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1006.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1005 = M_LEVEL_Level_0;
  outC->_L1003.compatibleModeAndLevel = kcg_true;
  outC->_L1003.level = M_LEVEL_Level_0;
  outC->_L1003.newLevel = kcg_true;
  outC->_L1003.Mode = M_MODE_Full_Supervision;
  outC->_L1003.newMode = kcg_true;
  outC->_L1002 = M_MODE_Full_Supervision;
  outC->_L996 = M_LEVEL_Level_0;
  outC->_L995 = M_MODE_Full_Supervision;
  outC->_L994.compatibleModeAndLevel = kcg_true;
  outC->_L994.level = M_LEVEL_Level_0;
  outC->_L994.newLevel = kcg_true;
  outC->_L994.Mode = M_MODE_Full_Supervision;
  outC->_L994.newMode = kcg_true;
  outC->_L993.compatibleModeAndLevel = kcg_true;
  outC->_L993.level = M_LEVEL_Level_0;
  outC->_L993.newLevel = kcg_true;
  outC->_L993.Mode = M_MODE_Full_Supervision;
  outC->_L993.newMode = kcg_true;
  outC->_L988.compatibleModeAndLevel = kcg_true;
  outC->_L988.level = M_LEVEL_Level_0;
  outC->_L988.newLevel = kcg_true;
  outC->_L988.Mode = M_MODE_Full_Supervision;
  outC->_L988.newMode = kcg_true;
  outC->_L984.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L984.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L984.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L984.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L984.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L984.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L984.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L984.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L984.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L984.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L984.PositionErrors.bg.valid = kcg_true;
  outC->_L984.PositionErrors.bg.nid_c = 0;
  outC->_L984.PositionErrors.bg.nid_bg = 0;
  outC->_L984.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L984.PositionErrors.bg.location.nominal = 0;
  outC->_L984.PositionErrors.bg.location.d_min = 0;
  outC->_L984.PositionErrors.bg.location.d_max = 0;
  outC->_L984.PositionErrors.bg.seqNoOnTrack = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L984.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L984.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L984.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L984.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i203 = 0; i203 < 33; i203++) {
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].valid =
      kcg_true;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].nid_LRBG = 0;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].q_dir =
      Q_DIR_Reverse;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].d_link = 0;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].nid_c = 0;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].nid_bg = 0;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L984.PositionErrors.bg.infoFromPassing.linkedBGs[i203].q_locacc = 0;
  }
  outC->_L984.PositionErrors.bg.missed = kcg_true;
  outC->_L984.Train_Position.valid = kcg_true;
  outC->_L984.Train_Position.timestamp = 0;
  outC->_L984.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L984.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L984.Train_Position.trainPosition.nominal = 0;
  outC->_L984.Train_Position.trainPosition.d_min = 0;
  outC->_L984.Train_Position.trainPosition.d_max = 0;
  outC->_L984.Train_Position.estimatedFrontEndPosition = 0;
  outC->_L984.Train_Position.minSafeFrontEndPosition = 0;
  outC->_L984.Train_Position.maxSafeFrontEndPostion = 0;
  outC->_L984.Train_Position.LRBG.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.nid_c = 0;
  outC->_L984.Train_Position.LRBG.nid_bg = 0;
  outC->_L984.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L984.Train_Position.LRBG.location.nominal = 0;
  outC->_L984.Train_Position.LRBG.location.d_min = 0;
  outC->_L984.Train_Position.LRBG.location.d_max = 0;
  outC->_L984.Train_Position.LRBG.seqNoOnTrack = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L984.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L984.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i204 = 0; i204 < 33; i204++) {
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].valid =
      kcg_true;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].nid_LRBG =
      0;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].q_dir =
      Q_DIR_Reverse;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].d_link = 0;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].nid_c = 0;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].nid_bg = 0;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L984.Train_Position.LRBG.infoFromPassing.linkedBGs[i204].q_locacc =
      0;
  }
  outC->_L984.Train_Position.LRBG.missed = kcg_true;
  outC->_L984.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L984.Train_Position.prvLRBG.nid_c = 0;
  outC->_L984.Train_Position.prvLRBG.nid_bg = 0;
  outC->_L984.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L984.Train_Position.prvLRBG.location.nominal = 0;
  outC->_L984.Train_Position.prvLRBG.location.d_min = 0;
  outC->_L984.Train_Position.prvLRBG.location.d_max = 0;
  outC->_L984.Train_Position.prvLRBG.seqNoOnTrack = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L984.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L984.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i205 = 0; i205 < 33; i205++) {
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].valid =
      kcg_true;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].nid_LRBG =
      0;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].q_dir =
      Q_DIR_Reverse;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].d_link =
      0;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].nid_c =
      0;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].nid_bg =
      0;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L984.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i205].q_locacc =
      0;
  }
  outC->_L984.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L984.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L984.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L984.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L984.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L984.Train_Position.estimatedRearEndPosition = 0;
  outC->_L984.Train_Position.minSafeRearEndPosition = 0;
  outC->_L984.Train_Position.maxSafeRearEndPosition = 0;
  outC->_L984.Train_Speed = 0;
  outC->_L984.Train_Standstill = kcg_true;
  outC->_L982.valid = kcg_true;
  outC->_L982.DriverAck.valid = kcg_true;
  outC->_L982.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L982.DriverAck.acknowledgement = kcg_true;
  outC->_L982.DriverRequest.valid = kcg_true;
  outC->_L982.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L982.DriverRequest.Req_NL = kcg_true;
  outC->_L982.DriverRequest.Req_Override = kcg_true;
  outC->_L982.DriverRequest.Req_SH = kcg_true;
  outC->_L982.DriverRequest.Req_Start = kcg_true;
  outC->_L982.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L982.LevelAck = kcg_true;
  outC->_L981.compatibleModeAndLevel = kcg_true;
  outC->_L981.level = M_LEVEL_Level_0;
  outC->_L981.newLevel = kcg_true;
  outC->_L981.Mode = M_MODE_Full_Supervision;
  outC->_L981.newMode = kcg_true;
  outC->_L978 = 0;
  outC->_L973.compatibleModeAndLevel = kcg_true;
  outC->_L973.level = M_LEVEL_Level_0;
  outC->_L973.newLevel = kcg_true;
  outC->_L973.Mode = M_MODE_Full_Supervision;
  outC->_L973.newMode = kcg_true;
  outC->_L974.EoM_Procedure_req = kcg_true;
  outC->_L974.Clean_BG_List_SH_Area = kcg_true;
  outC->_L974.MA_Req = kcg_true;
  outC->_L974.Req_for_SH_from_Driver = kcg_true;
  outC->_L974.Connection_to_RBC_req = kcg_true;
  outC->_L974.Position_Repport_Needed = kcg_true;
  outC->_L975 = kcg_true;
  outC->_L976 = kcg_true;
  outC->_L977.LevelTransition.is_set = kcg_true;
  outC->_L977.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->_L977.LevelTransition.transition.position = 0;
  outC->_L977.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L977.LevelTransition.transition.immediateAck = kcg_true;
  outC->_L977.LevelTransition.transition.AckLength = 0;
  outC->_L977.LevelTransition.LRBG = 0;
  outC->_L977.LevelTransition.referenceLocation = 0;
  outC->_L977.IsAvailableForUse = kcg_true;
  outC->_L971.nid_engine = 0;
  outC->_L971.nid_operational = 0;
  outC->_L971.l_train = 0;
  outC->_L971.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L971.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L971.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L971.d_frontend_2_rearend.nominal = 0;
  outC->_L971.d_frontend_2_rearend.d_min = 0;
  outC->_L971.d_frontend_2_rearend.d_max = 0;
  outC->_L971.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L971.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L971.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L971.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L971.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L971.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L965 = 0;
  outC->_L963 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L961.nid_ntc = 0;
  outC->_L961.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L955 = kcg_true;
  outC->_L953.minSafeRearEndPassed = kcg_true;
  outC->_L953.maxSafeFrontEndPassed = kcg_true;
  outC->_L952.valid = kcg_true;
  outC->_L952.acknowledgedByDriver = kcg_true;
  outC->_L952.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L952.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L952.trainLength = 0;
  outC->_L952.brakePerctage = 0;
  outC->_L952.maxTrainSpeed = 0;
  outC->_L952.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L952.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L952.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L952.axleNumber = 0;
  outC->_L952.numberNationalSystems = 0;
  for (i206 = 0; i206 < 5; i206++) {
    outC->_L952.nationSystems[i206] = 0;
  }
  outC->_L952.numberTractionSystems = 0;
  for (i207 = 0; i207 < 4; i207++) {
    outC->_L952.tractionSystem[i207].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L952.tractionSystem[i207].nid_ctraction = 0;
  }
  outC->_L951.valid = kcg_true;
  outC->_L951.systemTime = 0;
  outC->_L951.trainRunningNumber = 0;
  outC->_L950.nid_engine = 0;
  outC->_L950.nid_operational = 0;
  outC->_L950.l_train = 0;
  outC->_L950.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L950.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L950.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L950.d_frontend_2_rearend.nominal = 0;
  outC->_L950.d_frontend_2_rearend.d_min = 0;
  outC->_L950.d_frontend_2_rearend.d_max = 0;
  outC->_L950.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L950.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L950.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L950.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L950.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L950.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L949.valid = kcg_true;
  outC->_L949.q_dir = Q_DIR_Reverse;
  outC->_L949.d_validnv = 0;
  for (i208 = 0; i208 < 7; i208++) {
    outC->_L949.nid_cArray[i208].valid = kcg_true;
    outC->_L949.nid_cArray[i208].nid_c = 0;
  }
  outC->_L949.v_nvshunt = 0;
  outC->_L949.v_nvstff = 0;
  outC->_L949.v_nvonsight = 0;
  outC->_L949.v_nvlimsuperv = 0;
  outC->_L949.v_nvunfit = 0;
  outC->_L949.v_nvrel = 0;
  outC->_L949.d_nvroll = 0;
  outC->_L949.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L949.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L949.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L949.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L949.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L949.v_nvallowovtrp = 0;
  outC->_L949.v_nvsupovtrp = 0;
  outC->_L949.d_nvovtrp = 0;
  outC->_L949.t_nvovtrp = 0;
  outC->_L949.d_nvpotrp = 0;
  outC->_L949.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L949.t_nvcontact = 0;
  outC->_L949.m_nvderun = M_NVDERUN_No;
  outC->_L949.d_nvstff = 0;
  outC->_L949.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L949.a_nvmaxredadh1 = 0.0;
  outC->_L949.a_nvmaxredadh2 = 0.0;
  outC->_L949.a_nvmaxredadh3 = 0.0;
  outC->_L949.q_nvlocacc = 0;
  outC->_L949.m_nvavadh = 0.0;
  outC->_L949.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L949.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (i210 = 0; i210 < 7; i210++) {
    outC->_L949.nvkvintsetArray[i210].valid = kcg_true;
    outC->_L949.nvkvintsetArray[i210].q_nvkvintset =
      Q_NVKVINTSET_Freight_trains;
    outC->_L949.nvkvintsetArray[i210].a_nvp12 = 0.0;
    outC->_L949.nvkvintsetArray[i210].a_nvp23 = 0.0;
    for (i209 = 0; i209 < 7; i209++) {
      outC->_L949.nvkvintsetArray[i210].nvkintArray[i209].valid = kcg_true;
      outC->_L949.nvkvintsetArray[i210].nvkintArray[i209].v_nvkvint = 0;
      outC->_L949.nvkvintsetArray[i210].nvkintArray[i209].m_nvkvint12 = 0.0;
      outC->_L949.nvkvintsetArray[i210].nvkintArray[i209].m_nvkvint23 = 0.0;
    }
  }
  for (i211 = 0; i211 < 7; i211++) {
    outC->_L949.nvkrintArray[i211].valid = kcg_true;
    outC->_L949.nvkrintArray[i211].l_nvkrint = L_NVKRINT_0m;
    outC->_L949.nvkrintArray[i211].m_nvkrint = 0.0;
  }
  outC->_L949.m_nvktint = 0.0;
  outC->_L948.nid_engine = 0;
  outC->_L948.nid_operational = 0;
  outC->_L948.l_train = 0;
  outC->_L948.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L948.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L948.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L948.d_frontend_2_rearend.nominal = 0;
  outC->_L948.d_frontend_2_rearend.d_min = 0;
  outC->_L948.d_frontend_2_rearend.d_max = 0;
  outC->_L948.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L948.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L948.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L948.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L948.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L948.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L947.nid_engine = 0;
  outC->_L947.nid_operational = 0;
  outC->_L947.l_train = 0;
  outC->_L947.d_baliseAntenna_2_frontend.nominal = 0;
  outC->_L947.d_baliseAntenna_2_frontend.d_min = 0;
  outC->_L947.d_baliseAntenna_2_frontend.d_max = 0;
  outC->_L947.d_frontend_2_rearend.nominal = 0;
  outC->_L947.d_frontend_2_rearend.d_min = 0;
  outC->_L947.d_frontend_2_rearend.d_max = 0;
  outC->_L947.locationAccuracy_DefaultValue.nominal = 0;
  outC->_L947.locationAccuracy_DefaultValue.d_min = 0;
  outC->_L947.locationAccuracy_DefaultValue.d_max = 0;
  outC->_L947.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->_L947.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->_L947.centerDetectionAcc_DefaultValue.d_max = 0;
  outC->_L939 = 0;
  outC->_L938 = 0;
  outC->_L937 = 0;
  outC->_L928 = kcg_true;
  outC->_L929 = kcg_true;
  outC->_L930 = msrc_undefined_Common_Types_Pkg;
  outC->_L931 = kcg_true;
  outC->_L932 = msrc_undefined_Common_Types_Pkg;
  outC->_L935 = 0;
  outC->_L914.valid = kcg_true;
  outC->_L914.timestamp = 0;
  outC->_L914.odo.o_nominal = 0;
  outC->_L914.odo.o_min = 0;
  outC->_L914.odo.o_max = 0;
  outC->_L914.speed.v_safeNominal = 0;
  outC->_L914.speed.v_rawNominal = 0;
  outC->_L914.speed.v_lower = 0;
  outC->_L914.speed.v_upper = 0;
  outC->_L914.acceleration = 0;
  outC->_L914.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L914.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L910.valid = kcg_true;
  outC->_L910.timestamp = 0;
  outC->_L910.odo.o_nominal = 0;
  outC->_L910.odo.o_min = 0;
  outC->_L910.odo.o_max = 0;
  outC->_L910.speed.v_safeNominal = 0;
  outC->_L910.speed.v_rawNominal = 0;
  outC->_L910.speed.v_lower = 0;
  outC->_L910.speed.v_upper = 0;
  outC->_L910.acceleration = 0;
  outC->_L910.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L910.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L906.valid = kcg_true;
  outC->_L906.timestamp = 0;
  outC->_L906.odo.o_nominal = 0;
  outC->_L906.odo.o_min = 0;
  outC->_L906.odo.o_max = 0;
  outC->_L906.speed.v_safeNominal = 0;
  outC->_L906.speed.v_rawNominal = 0;
  outC->_L906.speed.v_lower = 0;
  outC->_L906.speed.v_upper = 0;
  outC->_L906.acceleration = 0;
  outC->_L906.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L906.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L905 = 0;
  outC->_L904 = 0;
  outC->_L903 = kcg_true;
  outC->_L899.valid = kcg_true;
  outC->_L899.acknowledgedByDriver = kcg_true;
  outC->_L899.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L899.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L899.trainLength = 0;
  outC->_L899.brakePerctage = 0;
  outC->_L899.maxTrainSpeed = 0;
  outC->_L899.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L899.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L899.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L899.axleNumber = 0;
  outC->_L899.numberNationalSystems = 0;
  for (i212 = 0; i212 < 5; i212++) {
    outC->_L899.nationSystems[i212] = 0;
  }
  outC->_L899.numberTractionSystems = 0;
  for (i213 = 0; i213 < 4; i213++) {
    outC->_L899.tractionSystem[i213].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L899.tractionSystem[i213].nid_ctraction = 0;
  }
  outC->_L896.valid = kcg_true;
  outC->_L896.location_LOA = 0;
  outC->_L896.v_LOA = 0;
  outC->_L895.valid = kcg_true;
  outC->_L895.location_LOA = 0;
  outC->_L895.v_LOA = 0;
  outC->_L891 = 0;
  outC->_L893 = kcg_true;
  outC->_L894.valid = kcg_true;
  outC->_L894.nid_c = 0;
  outC->_L894.nid_c_valid = kcg_true;
  outC->_L890.valid = kcg_true;
  outC->_L890.nid_c = 0;
  outC->_L890.nid_c_valid = kcg_true;
  outC->_L889 = 0;
  outC->_L888.valid = kcg_true;
  outC->_L888.timestamp = 0;
  outC->_L888.odo.o_nominal = 0;
  outC->_L888.odo.o_min = 0;
  outC->_L888.odo.o_max = 0;
  outC->_L888.speed.v_safeNominal = 0;
  outC->_L888.speed.v_rawNominal = 0;
  outC->_L888.speed.v_lower = 0;
  outC->_L888.speed.v_upper = 0;
  outC->_L888.acceleration = 0;
  outC->_L888.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L888.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L885 = kcg_true;
  outC->_L844 = kcg_true;
  outC->_L843 = kcg_true;
  outC->_L838 = kcg_true;
  outC->_L836 = kcg_true;
  outC->_L837.outOfMemSpace = kcg_true;
  outC->_L837.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L837.positionCalculation_inconsistent = kcg_true;
  outC->_L837.linkedBGMissed = kcg_true;
  outC->_L837.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L837.BG_LinkingConsistencyError = kcg_true;
  outC->_L837.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L837.doubleRepositioningError = kcg_true;
  outC->_L837.bg.valid = kcg_true;
  outC->_L837.bg.nid_c = 0;
  outC->_L837.bg.nid_bg = 0;
  outC->_L837.bg.q_link = Q_LINK_Unlinked;
  outC->_L837.bg.location.nominal = 0;
  outC->_L837.bg.location.d_min = 0;
  outC->_L837.bg.location.d_max = 0;
  outC->_L837.bg.seqNoOnTrack = 0;
  outC->_L837.bg.infoFromLinking.valid = kcg_true;
  outC->_L837.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L837.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L837.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L837.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L837.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L837.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L837.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L837.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L837.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L837.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L837.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L837.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L837.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L837.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L837.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L837.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L837.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L837.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L837.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L837.bg.infoFromPassing.valid = kcg_true;
  outC->_L837.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L837.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L837.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L837.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L837.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L837.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L837.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L837.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L837.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L837.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L837.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L837.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L837.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L837.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i214 = 0; i214 < 33; i214++) {
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].valid = kcg_true;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].nid_LRBG = 0;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].q_dir = Q_DIR_Reverse;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].d_link = 0;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].nid_c = 0;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].nid_bg = 0;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L837.bg.infoFromPassing.linkedBGs[i214].q_locacc = 0;
  }
  outC->_L837.bg.missed = kcg_true;
  outC->_L835 = kcg_true;
  outC->_L834.outOfMemSpace = kcg_true;
  outC->_L834.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L834.positionCalculation_inconsistent = kcg_true;
  outC->_L834.linkedBGMissed = kcg_true;
  outC->_L834.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L834.BG_LinkingConsistencyError = kcg_true;
  outC->_L834.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L834.doubleRepositioningError = kcg_true;
  outC->_L834.bg.valid = kcg_true;
  outC->_L834.bg.nid_c = 0;
  outC->_L834.bg.nid_bg = 0;
  outC->_L834.bg.q_link = Q_LINK_Unlinked;
  outC->_L834.bg.location.nominal = 0;
  outC->_L834.bg.location.d_min = 0;
  outC->_L834.bg.location.d_max = 0;
  outC->_L834.bg.seqNoOnTrack = 0;
  outC->_L834.bg.infoFromLinking.valid = kcg_true;
  outC->_L834.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L834.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L834.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L834.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L834.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L834.bg.infoFromLinking.d_link.nominal = 0;
  outC->_L834.bg.infoFromLinking.d_link.d_min = 0;
  outC->_L834.bg.infoFromLinking.d_link.d_max = 0;
  outC->_L834.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L834.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L834.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L834.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L834.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L834.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L834.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L834.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L834.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L834.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L834.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L834.bg.infoFromPassing.valid = kcg_true;
  outC->_L834.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L834.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L834.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L834.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L834.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L834.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L834.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L834.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L834.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L834.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L834.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L834.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L834.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L834.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i215 = 0; i215 < 33; i215++) {
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].valid = kcg_true;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].nid_LRBG = 0;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].q_dir = Q_DIR_Reverse;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].d_link = 0;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].nid_c = 0;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].nid_bg = 0;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L834.bg.infoFromPassing.linkedBGs[i215].q_locacc = 0;
  }
  outC->_L834.bg.missed = kcg_true;
  outC->_L833 = kcg_true;
  outC->_L832 = kcg_true;
  outC->_L831 = kcg_true;
  outC->_L830 = kcg_true;
  outC->_L829.nid_ntc = 0;
  outC->_L829.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L828.minSafeRearEndPassed = kcg_true;
  outC->_L828.maxSafeFrontEndPassed = kcg_true;
  outC->_L827.linkedBGError = kcg_true;
  outC->_L827.unlinkedBGError = kcg_true;
  outC->_L827.BG_versionIncompatible = kcg_true;
  outC->_L827.radioSequenceError = kcg_true;
  outC->_L827.tNvContactError = kcg_true;
  outC->_L827.otherTimingError = kcg_true;
  outC->_L827.radioMessageConsistencyError = kcg_true;
  outC->_L827.nid_c = 0;
  outC->_L827.nid_errorbg = 0;
  outC->_L816.train_status.valid = kcg_true;
  outC->_L816.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L816.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L816.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L816.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L816.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L816.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L816.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L816.brake_status.valid = kcg_true;
  outC->_L816.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L816.brake_pressure.valid = kcg_true;
  outC->_L816.brake_pressure.pressure = 0;
  outC->_L816.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L816.train_data_info.valid = kcg_true;
  outC->_L816.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L816.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L816.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L816.train_data_info.trainLength = 0;
  outC->_L816.train_data_info.brakePerctage = 0;
  outC->_L816.train_data_info.maxTrainSpeed = 0;
  outC->_L816.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L816.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L816.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L816.train_data_info.axleNumber = 0;
  outC->_L816.train_data_info.numberNationalSystems = 0;
  for (i216 = 0; i216 < 5; i216++) {
    outC->_L816.train_data_info.nationSystems[i216] = 0;
  }
  outC->_L816.train_data_info.numberTractionSystems = 0;
  for (i217 = 0; i217 < 4; i217++) {
    outC->_L816.train_data_info.tractionSystem[i217].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L816.train_data_info.tractionSystem[i217].nid_ctraction = 0;
  }
  outC->_L816.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->_L816.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L816.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->_L816.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->_L815.valid = kcg_true;
  outC->_L815.deskOpen = kcg_true;
  outC->_L815.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L815.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L818.valid = kcg_true;
  outC->_L818.info.train_status.valid = kcg_true;
  outC->_L818.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L818.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L818.info.brake_status.valid = kcg_true;
  outC->_L818.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L818.info.brake_pressure.valid = kcg_true;
  outC->_L818.info.brake_pressure.pressure = 0;
  outC->_L818.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L818.info.train_data_info.valid = kcg_true;
  outC->_L818.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L818.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L818.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L818.info.train_data_info.trainLength = 0;
  outC->_L818.info.train_data_info.brakePerctage = 0;
  outC->_L818.info.train_data_info.maxTrainSpeed = 0;
  outC->_L818.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L818.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L818.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L818.info.train_data_info.axleNumber = 0;
  outC->_L818.info.train_data_info.numberNationalSystems = 0;
  for (i218 = 0; i218 < 5; i218++) {
    outC->_L818.info.train_data_info.nationSystems[i218] = 0;
  }
  outC->_L818.info.train_data_info.numberTractionSystems = 0;
  for (i219 = 0; i219 < 4; i219++) {
    outC->_L818.info.train_data_info.tractionSystem[i219].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L818.info.train_data_info.tractionSystem[i219].nid_ctraction = 0;
  }
  outC->_L818.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->_L818.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L818.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->_L818.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->_L813 = kcg_true;
  outC->_L812.newSessionEstablished = kcg_true;
  outC->_L807.valid = kcg_true;
  outC->_L807.timestamp = 0;
  outC->_L807.trainPositionIsUnknown = kcg_true;
  outC->_L807.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L807.trainPosition.nominal = 0;
  outC->_L807.trainPosition.d_min = 0;
  outC->_L807.trainPosition.d_max = 0;
  outC->_L807.estimatedFrontEndPosition = 0;
  outC->_L807.minSafeFrontEndPosition = 0;
  outC->_L807.maxSafeFrontEndPostion = 0;
  outC->_L807.LRBG.valid = kcg_true;
  outC->_L807.LRBG.nid_c = 0;
  outC->_L807.LRBG.nid_bg = 0;
  outC->_L807.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L807.LRBG.location.nominal = 0;
  outC->_L807.LRBG.location.d_min = 0;
  outC->_L807.LRBG.location.d_max = 0;
  outC->_L807.LRBG.seqNoOnTrack = 0;
  outC->_L807.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L807.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L807.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L807.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L807.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L807.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L807.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L807.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L807.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L807.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L807.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L807.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L807.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L807.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L807.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L807.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L807.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L807.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L807.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L807.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L807.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L807.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i220 = 0; i220 < 33; i220++) {
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].valid = kcg_true;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].nid_LRBG = 0;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].q_dir = Q_DIR_Reverse;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].d_link = 0;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].nid_c = 0;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].nid_bg = 0;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L807.LRBG.infoFromPassing.linkedBGs[i220].q_locacc = 0;
  }
  outC->_L807.LRBG.missed = kcg_true;
  outC->_L807.prvLRBG.valid = kcg_true;
  outC->_L807.prvLRBG.nid_c = 0;
  outC->_L807.prvLRBG.nid_bg = 0;
  outC->_L807.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L807.prvLRBG.location.nominal = 0;
  outC->_L807.prvLRBG.location.d_min = 0;
  outC->_L807.prvLRBG.location.d_max = 0;
  outC->_L807.prvLRBG.seqNoOnTrack = 0;
  outC->_L807.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L807.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L807.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L807.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L807.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L807.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L807.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L807.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L807.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L807.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L807.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i221 = 0; i221 < 33; i221++) {
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].valid = kcg_true;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].nid_LRBG = 0;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].q_dir = Q_DIR_Reverse;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].d_link = 0;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].nid_c = 0;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].nid_bg = 0;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L807.prvLRBG.infoFromPassing.linkedBGs[i221].q_locacc = 0;
  }
  outC->_L807.prvLRBG.missed = kcg_true;
  outC->_L807.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L807.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L807.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L807.linkingIsUsedOnboard = kcg_true;
  outC->_L807.estimatedRearEndPosition = 0;
  outC->_L807.minSafeRearEndPosition = 0;
  outC->_L807.maxSafeRearEndPosition = 0;
  for (i223 = 0; i223 < 41; i223++) {
    outC->_L806[i223].valid = kcg_true;
    outC->_L806[i223].nid_c = 0;
    outC->_L806[i223].nid_bg = 0;
    outC->_L806[i223].q_link = Q_LINK_Unlinked;
    outC->_L806[i223].location.nominal = 0;
    outC->_L806[i223].location.d_min = 0;
    outC->_L806[i223].location.d_max = 0;
    outC->_L806[i223].seqNoOnTrack = 0;
    outC->_L806[i223].infoFromLinking.valid = kcg_true;
    outC->_L806[i223].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->_L806[i223].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->_L806[i223].infoFromLinking.expectedLocation.nominal = 0;
    outC->_L806[i223].infoFromLinking.expectedLocation.d_min = 0;
    outC->_L806[i223].infoFromLinking.expectedLocation.d_max = 0;
    outC->_L806[i223].infoFromLinking.d_link.nominal = 0;
    outC->_L806[i223].infoFromLinking.d_link.d_min = 0;
    outC->_L806[i223].infoFromLinking.d_link.d_max = 0;
    outC->_L806[i223].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L806[i223].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->_L806[i223].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L806[i223].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L806[i223].infoFromLinking.linkingInfo.d_link = 0;
    outC->_L806[i223].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L806[i223].infoFromLinking.linkingInfo.nid_c = 0;
    outC->_L806[i223].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->_L806[i223].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L806[i223].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L806[i223].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->_L806[i223].infoFromPassing.valid = kcg_true;
    outC->_L806[i223].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L806[i223].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L806[i223].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L806[i223].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L806[i223].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L806[i223].infoFromPassing.BG_Header.m_mcount = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.nid_c = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.nid_bg = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L806[i223].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L806[i223].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->_L806[i223].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->_L806[i223].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->_L806[i223].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->_L806[i223].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L806[i223].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L806[i223].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i222 = 0; i222 < 33; i222++) {
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].valid = kcg_true;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].nid_LRBG = 0;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].q_dir = Q_DIR_Reverse;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].d_link = 0;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].nid_c = 0;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].nid_bg = 0;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L806[i223].infoFromPassing.linkedBGs[i222].q_locacc = 0;
    }
    outC->_L806[i223].missed = kcg_true;
  }
  for (i224 = 0; i224 < 8; i224++) {
    outC->_L805[i224].valid = kcg_true;
    outC->_L805[i224].nidBG = 0;
    outC->_L805[i224].location.nominal = 0;
    outC->_L805[i224].location.d_min = 0;
    outC->_L805[i224].location.d_max = 0;
  }
  outC->_L797 = 0;
  for (i226 = 0; i226 < 41; i226++) {
    outC->_L794[i226].valid = kcg_true;
    outC->_L794[i226].nid_c = 0;
    outC->_L794[i226].nid_bg = 0;
    outC->_L794[i226].q_link = Q_LINK_Unlinked;
    outC->_L794[i226].location.nominal = 0;
    outC->_L794[i226].location.d_min = 0;
    outC->_L794[i226].location.d_max = 0;
    outC->_L794[i226].seqNoOnTrack = 0;
    outC->_L794[i226].infoFromLinking.valid = kcg_true;
    outC->_L794[i226].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->_L794[i226].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->_L794[i226].infoFromLinking.expectedLocation.nominal = 0;
    outC->_L794[i226].infoFromLinking.expectedLocation.d_min = 0;
    outC->_L794[i226].infoFromLinking.expectedLocation.d_max = 0;
    outC->_L794[i226].infoFromLinking.d_link.nominal = 0;
    outC->_L794[i226].infoFromLinking.d_link.d_min = 0;
    outC->_L794[i226].infoFromLinking.d_link.d_max = 0;
    outC->_L794[i226].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L794[i226].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->_L794[i226].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L794[i226].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L794[i226].infoFromLinking.linkingInfo.d_link = 0;
    outC->_L794[i226].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L794[i226].infoFromLinking.linkingInfo.nid_c = 0;
    outC->_L794[i226].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->_L794[i226].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L794[i226].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L794[i226].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->_L794[i226].infoFromPassing.valid = kcg_true;
    outC->_L794[i226].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L794[i226].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L794[i226].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L794[i226].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L794[i226].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L794[i226].infoFromPassing.BG_Header.m_mcount = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.nid_c = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.nid_bg = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L794[i226].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L794[i226].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->_L794[i226].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->_L794[i226].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->_L794[i226].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->_L794[i226].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L794[i226].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L794[i226].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i225 = 0; i225 < 33; i225++) {
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].valid = kcg_true;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].nid_LRBG = 0;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].q_dir = Q_DIR_Reverse;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].d_link = 0;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].nid_c = 0;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].nid_bg = 0;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L794[i226].infoFromPassing.linkedBGs[i225].q_locacc = 0;
    }
    outC->_L794[i226].missed = kcg_true;
  }
  outC->_L792.valid = kcg_true;
  outC->_L792.systemTimeMsgReceived = 0;
  outC->_L792.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L792.btm_msg.present = kcg_true;
  outC->_L792.btm_msg.checkResult = kcg_true;
  outC->_L792.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L792.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L792.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L792.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L792.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L792.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L792.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L792.btm_msg.api_header.m_mcount = 0;
  outC->_L792.btm_msg.api_header.nid_c = 0;
  outC->_L792.btm_msg.api_header.nid_bg = 0;
  outC->_L792.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L792.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L792.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L792.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L792.rtm_msg.present = kcg_true;
  outC->_L792.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L792.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L792.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L792.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L792.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L792.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L792.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L792.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L792.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L792.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L792.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L792.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i227 = 0; i227 < 30; i227++) {
    outC->_L792.packets.PacketHeaders[i227].nid_packet = 0;
    outC->_L792.packets.PacketHeaders[i227].q_dir = Q_DIR_Reverse;
    outC->_L792.packets.PacketHeaders[i227].valid = kcg_true;
    outC->_L792.packets.PacketHeaders[i227].startAddress = 0;
    outC->_L792.packets.PacketHeaders[i227].endAddress = 0;
  }
  for (i228 = 0; i228 < 500; i228++) {
    outC->_L792.packets.PacketData[i228] = 0;
  }
  outC->_L786.valid = kcg_true;
  outC->_L786.mobileDeviceNo = 0;
  outC->_L786.nid_c = 0;
  outC->_L786.nid_RBC = 0;
  outC->_L786.nid_radio = 0;
  outC->_L786.nid_mn = 0;
  outC->_L785.registration.valid = kcg_true;
  outC->_L785.registration.mobileDeviceNo = 0;
  outC->_L785.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L785.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L785.registration.nid_mn = 0;
  outC->_L785.connection.valid = kcg_true;
  outC->_L785.connection.mobileDeviceNo = 0;
  outC->_L785.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L785.connection.nid_radio = 0;
  outC->_L785.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L785.connection.connectionLost = kcg_true;
  outC->_L785.connection.isInRadioHole = kcg_true;
  outC->_L785.session.valid = kcg_true;
  outC->_L785.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L785.session.nid_c = 0;
  outC->_L785.session.nid_rbc = 0;
  outC->_L785.session.nid_radio = 0;
  outC->_L783 = 0;
  outC->_L777 = kcg_true;
  outC->_L776 = kcg_true;
  outC->_L772.valid = kcg_true;
  outC->_L772.timestamp = 0;
  outC->_L772.trainPositionIsUnknown = kcg_true;
  outC->_L772.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L772.trainPosition.nominal = 0;
  outC->_L772.trainPosition.d_min = 0;
  outC->_L772.trainPosition.d_max = 0;
  outC->_L772.estimatedFrontEndPosition = 0;
  outC->_L772.minSafeFrontEndPosition = 0;
  outC->_L772.maxSafeFrontEndPostion = 0;
  outC->_L772.LRBG.valid = kcg_true;
  outC->_L772.LRBG.nid_c = 0;
  outC->_L772.LRBG.nid_bg = 0;
  outC->_L772.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L772.LRBG.location.nominal = 0;
  outC->_L772.LRBG.location.d_min = 0;
  outC->_L772.LRBG.location.d_max = 0;
  outC->_L772.LRBG.seqNoOnTrack = 0;
  outC->_L772.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L772.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L772.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L772.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L772.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L772.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L772.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L772.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L772.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L772.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L772.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L772.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L772.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L772.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L772.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L772.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L772.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L772.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L772.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L772.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L772.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L772.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i229 = 0; i229 < 33; i229++) {
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].valid = kcg_true;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].nid_LRBG = 0;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].q_dir = Q_DIR_Reverse;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].d_link = 0;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].nid_c = 0;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].nid_bg = 0;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L772.LRBG.infoFromPassing.linkedBGs[i229].q_locacc = 0;
  }
  outC->_L772.LRBG.missed = kcg_true;
  outC->_L772.prvLRBG.valid = kcg_true;
  outC->_L772.prvLRBG.nid_c = 0;
  outC->_L772.prvLRBG.nid_bg = 0;
  outC->_L772.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L772.prvLRBG.location.nominal = 0;
  outC->_L772.prvLRBG.location.d_min = 0;
  outC->_L772.prvLRBG.location.d_max = 0;
  outC->_L772.prvLRBG.seqNoOnTrack = 0;
  outC->_L772.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L772.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L772.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L772.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L772.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L772.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L772.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L772.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L772.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L772.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L772.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i230 = 0; i230 < 33; i230++) {
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].valid = kcg_true;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].nid_LRBG = 0;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].q_dir = Q_DIR_Reverse;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].d_link = 0;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].nid_c = 0;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].nid_bg = 0;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L772.prvLRBG.infoFromPassing.linkedBGs[i230].q_locacc = 0;
  }
  outC->_L772.prvLRBG.missed = kcg_true;
  outC->_L772.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L772.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L772.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L772.linkingIsUsedOnboard = kcg_true;
  outC->_L772.estimatedRearEndPosition = 0;
  outC->_L772.minSafeRearEndPosition = 0;
  outC->_L772.maxSafeRearEndPosition = 0;
  outC->_L763.valid = kcg_true;
  outC->_L763.source = msrc_undefined_Common_Types_Pkg;
  outC->_L763.radioMetadata.t_train_reference = kcg_true;
  outC->_L763.radioMetadata.nid_em = kcg_true;
  outC->_L763.radioMetadata.q_scale = kcg_true;
  outC->_L763.radioMetadata.d_sr = kcg_true;
  outC->_L763.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L763.radioMetadata.d_ref = kcg_true;
  outC->_L763.radioMetadata.q_dir = kcg_true;
  outC->_L763.radioMetadata.d_emergencystop = kcg_true;
  outC->_L763.radioMetadata.m_version = kcg_true;
  outC->_L763.BG_Common_Header.valid = kcg_true;
  outC->_L763.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L763.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L763.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L763.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L763.BG_Common_Header.m_mcount = 0;
  outC->_L763.BG_Common_Header.nid_c = 0;
  outC->_L763.BG_Common_Header.nid_bg = 0;
  outC->_L763.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L763.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L763.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L763.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L763.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L763.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L763.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L763.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L763.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L763.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L763.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L763.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L763.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L763.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L763.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L763.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L763.BG_Common_Header.q_nvlocacc = 0;
  outC->_L763.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L763.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L763.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L763.Radio_Common_Header.radioDevice = 0;
  outC->_L763.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L763.Radio_Common_Header.nid_message = 0;
  outC->_L763.Radio_Common_Header.t_train = 0;
  outC->_L763.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L763.Radio_Common_Header.nid_lrbg = 0;
  outC->_L763.Radio_Common_Header.t_train_reference = 0;
  outC->_L763.Radio_Common_Header.nid_em = 0;
  outC->_L763.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L763.Radio_Common_Header.d_sr = 0;
  outC->_L763.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L763.Radio_Common_Header.d_ref = 0;
  outC->_L763.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L763.Radio_Common_Header.d_emergencystop = 0;
  outC->_L763.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i231 = 0; i231 < 30; i231++) {
    outC->_L763.packets.PacketHeaders[i231].nid_packet = 0;
    outC->_L763.packets.PacketHeaders[i231].q_dir = Q_DIR_Reverse;
    outC->_L763.packets.PacketHeaders[i231].valid = kcg_true;
    outC->_L763.packets.PacketHeaders[i231].startAddress = 0;
    outC->_L763.packets.PacketHeaders[i231].endAddress = 0;
  }
  for (i232 = 0; i232 < 500; i232++) {
    outC->_L763.packets.PacketData[i232] = 0;
  }
  outC->_L763.sendingRBC.valid = kcg_true;
  outC->_L763.sendingRBC.nid_c = 0;
  outC->_L763.sendingRBC.rbc_id = 0;
  outC->_L763.sendingRBC.device_id = 0;
  outC->_L764 = kcg_true;
  outC->_L765 = kcg_true;
  outC->_L766.linkedBGError = kcg_true;
  outC->_L766.unlinkedBGError = kcg_true;
  outC->_L766.BG_versionIncompatible = kcg_true;
  outC->_L766.radioSequenceError = kcg_true;
  outC->_L766.tNvContactError = kcg_true;
  outC->_L766.otherTimingError = kcg_true;
  outC->_L766.radioMessageConsistencyError = kcg_true;
  outC->_L766.nid_c = 0;
  outC->_L766.nid_errorbg = 0;
  outC->_L741 = kcg_true;
  outC->_L753.is_set = kcg_true;
  outC->_L753.transition.level = M_LEVEL_Level_0;
  outC->_L753.transition.position = 0;
  outC->_L753.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L753.transition.immediateAck = kcg_true;
  outC->_L753.transition.AckLength = 0;
  outC->_L753.LRBG = 0;
  outC->_L753.referenceLocation = 0;
  outC->_L752.valid = kcg_true;
  outC->_L752.DriverAck.valid = kcg_true;
  outC->_L752.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L752.DriverAck.acknowledgement = kcg_true;
  outC->_L752.DriverRequest.valid = kcg_true;
  outC->_L752.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L752.DriverRequest.Req_NL = kcg_true;
  outC->_L752.DriverRequest.Req_Override = kcg_true;
  outC->_L752.DriverRequest.Req_SH = kcg_true;
  outC->_L752.DriverRequest.Req_Start = kcg_true;
  outC->_L752.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L752.LevelAck = kcg_true;
  outC->_L751.valid = kcg_true;
  outC->_L751.systemTime = 0;
  outC->_L751.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L750.valid = kcg_true;
  outC->_L750.systemTime = 0;
  outC->_L750.acknowledged = kcg_true;
  outC->_L749.valid = kcg_true;
  outC->_L749.systemTime = 0;
  outC->_L749.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L749.l_train = 0;
  outC->_L749.m_brakeperct = 0;
  outC->_L749.v_maxTrain = 0;
  outC->_L749.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L749.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L749.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L748.valid = kcg_true;
  outC->_L748.systemTime = 0;
  outC->_L748.DMI_nid_icon_identifier = 0;
  outC->_L747.valid = kcg_true;
  outC->_L747.systemTime = 0;
  outC->_L746.valid = kcg_true;
  outC->_L746.systemTime = 0;
  outC->_L746.trainRunningNumber = 0;
  outC->_L745.valid = kcg_true;
  outC->_L745.systemTime = 0;
  for (i233 = 0; i233 < 9; i233++) {
    outC->_L745.driverIdentifier[i233] = ' ';
  }
  outC->_L744 = kcg_true;
  outC->_L743.valid = kcg_true;
  outC->_L743.systemTime = 0;
  outC->_L743.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L743.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L743.l_name = 0;
  for (i234 = 0; i234 < 255; i234++) {
    outC->_L743.DMI_name[i234] = ' ';
  }
  outC->_L743.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L742.DMI_Active = kcg_true;
  outC->_L742.DMI_Error = kcg_true;
  outC->_L742.DMI_DriverIdValidated = kcg_true;
  outC->_L742.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L742.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L742.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L742.DMI_TrainDataValidated = kcg_true;
  outC->_L742.DMI_StartReceived = kcg_true;
  outC->_L742.DMI_Identifier.valid = kcg_true;
  outC->_L742.DMI_Identifier.systemTime = 0;
  outC->_L742.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L742.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L742.DMI_Identifier.l_name = 0;
  for (i235 = 0; i235 < 255; i235++) {
    outC->_L742.DMI_Identifier.DMI_name[i235] = ' ';
  }
  outC->_L742.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i236 = 0; i236 < 311; i236++) {
    outC->_L735[i236] = 0;
  }
  outC->_L721 = 0;
  outC->_L719 = 0;
  outC->_L718 = 0;
  outC->_L711 = 0.0;
  outC->_L710 = 0.0;
  outC->_L709 = 0;
  outC->_L699.valid = kcg_true;
  outC->_L699.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L699.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L652.valid = kcg_true;
  outC->_L652.targetSpeed = 0;
  outC->_L652.permittedSpeed = 0;
  outC->_L652.releaseSpeed = 0;
  outC->_L652.locationBrakeTarget = 0;
  outC->_L652.location_brake_curve_starting_point = 0;
  outC->_L652.interventionSpeed = 0;
  outC->_L652.sup_status = CSM_DMI_Types_Pkg;
  outC->_L652.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L652.distanceIndicationPoint = 0;
  outC->_L647.valid = kcg_true;
  outC->_L647.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L647.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L639.valid = kcg_true;
  outC->_L639.timestamp = 0;
  outC->_L639.trainPositionIsUnknown = kcg_true;
  outC->_L639.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L639.trainPosition.nominal = 0;
  outC->_L639.trainPosition.d_min = 0;
  outC->_L639.trainPosition.d_max = 0;
  outC->_L639.estimatedFrontEndPosition = 0;
  outC->_L639.minSafeFrontEndPosition = 0;
  outC->_L639.maxSafeFrontEndPostion = 0;
  outC->_L639.LRBG.valid = kcg_true;
  outC->_L639.LRBG.nid_c = 0;
  outC->_L639.LRBG.nid_bg = 0;
  outC->_L639.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L639.LRBG.location.nominal = 0;
  outC->_L639.LRBG.location.d_min = 0;
  outC->_L639.LRBG.location.d_max = 0;
  outC->_L639.LRBG.seqNoOnTrack = 0;
  outC->_L639.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L639.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L639.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L639.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L639.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L639.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L639.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L639.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L639.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L639.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L639.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L639.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L639.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L639.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L639.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L639.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L639.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L639.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L639.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L639.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L639.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L639.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i237 = 0; i237 < 33; i237++) {
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].valid = kcg_true;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].nid_LRBG = 0;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].q_dir = Q_DIR_Reverse;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].d_link = 0;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].nid_c = 0;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].nid_bg = 0;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L639.LRBG.infoFromPassing.linkedBGs[i237].q_locacc = 0;
  }
  outC->_L639.LRBG.missed = kcg_true;
  outC->_L639.prvLRBG.valid = kcg_true;
  outC->_L639.prvLRBG.nid_c = 0;
  outC->_L639.prvLRBG.nid_bg = 0;
  outC->_L639.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L639.prvLRBG.location.nominal = 0;
  outC->_L639.prvLRBG.location.d_min = 0;
  outC->_L639.prvLRBG.location.d_max = 0;
  outC->_L639.prvLRBG.seqNoOnTrack = 0;
  outC->_L639.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L639.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L639.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L639.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L639.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L639.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L639.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L639.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L639.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L639.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L639.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i238 = 0; i238 < 33; i238++) {
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].valid = kcg_true;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].nid_LRBG = 0;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].q_dir = Q_DIR_Reverse;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].d_link = 0;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].nid_c = 0;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].nid_bg = 0;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L639.prvLRBG.infoFromPassing.linkedBGs[i238].q_locacc = 0;
  }
  outC->_L639.prvLRBG.missed = kcg_true;
  outC->_L639.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L639.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L639.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L639.linkingIsUsedOnboard = kcg_true;
  outC->_L639.estimatedRearEndPosition = 0;
  outC->_L639.minSafeRearEndPosition = 0;
  outC->_L639.maxSafeRearEndPosition = 0;
  outC->_L632.valid = kcg_true;
  outC->_L632.targetSpeed = 0;
  outC->_L632.permittedSpeed = 0;
  outC->_L632.releaseSpeed = 0;
  outC->_L632.locationBrakeTarget = 0;
  outC->_L632.location_brake_curve_starting_point = 0;
  outC->_L632.interventionSpeed = 0;
  outC->_L632.sup_status = CSM_DMI_Types_Pkg;
  outC->_L632.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L632.distanceIndicationPoint = 0;
  outC->_L633.targetType = EoA_TargetManagement_types;
  outC->_L633.distance = 0;
  outC->_L633.speed = 0;
  outC->_L633.valid = kcg_true;
  outC->_L634.valid = kcg_true;
  outC->_L634.estimatedSpeed = 0;
  outC->_L634.valid_v_est = kcg_true;
  outC->_L634.permittedSpeed = 0;
  outC->_L634.valid_v_permitted = kcg_true;
  outC->_L634.releaseSpeed = 0;
  outC->_L634.valid_v_release = kcg_true;
  outC->_L634.mrdtSpeed = 0;
  outC->_L634.valid_v_mrdt = kcg_true;
  outC->_L634.sbiSpeed = 0;
  outC->_L634.valid_v_sbi = kcg_true;
  outC->_L634.targetDistance = 0;
  outC->_L634.valid_targetDistance = kcg_true;
  outC->_L634.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L634.sdmType = CSM_SDM_Types_Pkg;
  outC->_L634.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L634.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L634.revokedSB = kcg_true;
  outC->_L634.triggeredSB = kcg_true;
  outC->_L634.revokedEB = kcg_true;
  outC->_L634.triggeredEB = kcg_true;
  outC->_L634.revokedTCO = kcg_true;
  outC->_L634.triggeredTCO = kcg_true;
  outC->_L634.ebCmd = kcg_true;
  outC->_L635.valid = kcg_true;
  outC->_L635.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L635.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L636 = kcg_true;
  outC->_L637 = kcg_true;
  outC->_L624 = kcg_true;
  outC->_L601 = kcg_true;
  outC->_L600 = kcg_true;
  outC->_L578 = kcg_true;
  outC->_L568.DMI_Active = kcg_true;
  outC->_L568.DMI_Error = kcg_true;
  outC->_L568.DMI_DriverIdValidated = kcg_true;
  outC->_L568.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L568.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L568.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L568.DMI_TrainDataValidated = kcg_true;
  outC->_L568.DMI_StartReceived = kcg_true;
  outC->_L568.DMI_Identifier.valid = kcg_true;
  outC->_L568.DMI_Identifier.systemTime = 0;
  outC->_L568.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L568.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L568.DMI_Identifier.l_name = 0;
  for (i239 = 0; i239 < 255; i239++) {
    outC->_L568.DMI_Identifier.DMI_name[i239] = ' ';
  }
  outC->_L568.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L541.valid = kcg_true;
  outC->_L541.system_clock = 0;
  outC->_L541.trainID.number = 0;
  outC->_L541.trainID.dig1 = 0;
  outC->_L541.trainID.dig2 = 0;
  outC->_L541.trainID.dig3 = 0;
  outC->_L541.trainID.dig4 = 0;
  outC->_L541.trainID.dig5 = 0;
  outC->_L541.trainLength.number = 0;
  outC->_L541.trainLength.dig1 = 0;
  outC->_L541.trainLength.dig2 = 0;
  outC->_L541.trainLength.dig3 = 0;
  outC->_L541.trainLength.dig4 = 0;
  outC->_L541.brakeModel.number = 0;
  outC->_L541.brakeModel.dig1 = 0;
  outC->_L541.brakeModel.dig2 = 0;
  outC->_L541.brakeModel.dig3 = 0;
  outC->_L541.vmax.number = 0;
  outC->_L541.vmax.dig1 = 0;
  outC->_L541.vmax.dig2 = 0;
  outC->_L541.vmax.dig3 = 0;
  outC->_L541.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L541.airTightSystem.number = 0;
  outC->_L541.airTightSystem.dig1 = 0;
  outC->_L541.airTightSystem.dig2 = 0;
  outC->_L541.airTightSystem.dig3 = 0;
  outC->_L541.mLoadingGauge.number = 0;
  outC->_L541.mLoadingGauge.dig1 = 0;
  outC->_L541.mLoadingGauge.dig2 = 0;
  outC->_L541.mLoadingGauge.dig3 = 0;
  outC->_L538.valid = kcg_true;
  outC->_L538.timestamp = 0;
  outC->_L538.trainPositionIsUnknown = kcg_true;
  outC->_L538.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L538.trainPosition.nominal = 0;
  outC->_L538.trainPosition.d_min = 0;
  outC->_L538.trainPosition.d_max = 0;
  outC->_L538.estimatedFrontEndPosition = 0;
  outC->_L538.minSafeFrontEndPosition = 0;
  outC->_L538.maxSafeFrontEndPostion = 0;
  outC->_L538.LRBG.valid = kcg_true;
  outC->_L538.LRBG.nid_c = 0;
  outC->_L538.LRBG.nid_bg = 0;
  outC->_L538.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L538.LRBG.location.nominal = 0;
  outC->_L538.LRBG.location.d_min = 0;
  outC->_L538.LRBG.location.d_max = 0;
  outC->_L538.LRBG.seqNoOnTrack = 0;
  outC->_L538.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L538.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L538.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L538.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L538.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L538.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L538.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L538.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L538.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L538.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L538.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L538.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L538.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L538.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L538.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L538.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L538.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L538.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L538.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L538.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L538.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L538.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i240 = 0; i240 < 33; i240++) {
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].valid = kcg_true;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].nid_LRBG = 0;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].q_dir = Q_DIR_Reverse;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].d_link = 0;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].nid_c = 0;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].nid_bg = 0;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L538.LRBG.infoFromPassing.linkedBGs[i240].q_locacc = 0;
  }
  outC->_L538.LRBG.missed = kcg_true;
  outC->_L538.prvLRBG.valid = kcg_true;
  outC->_L538.prvLRBG.nid_c = 0;
  outC->_L538.prvLRBG.nid_bg = 0;
  outC->_L538.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L538.prvLRBG.location.nominal = 0;
  outC->_L538.prvLRBG.location.d_min = 0;
  outC->_L538.prvLRBG.location.d_max = 0;
  outC->_L538.prvLRBG.seqNoOnTrack = 0;
  outC->_L538.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L538.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L538.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L538.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L538.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L538.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->_L538.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->_L538.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L538.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L538.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L538.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i241 = 0; i241 < 33; i241++) {
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].valid = kcg_true;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].nid_LRBG = 0;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].q_dir = Q_DIR_Reverse;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].d_link = 0;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].nid_c = 0;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].nid_bg = 0;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L538.prvLRBG.infoFromPassing.linkedBGs[i241].q_locacc = 0;
  }
  outC->_L538.prvLRBG.missed = kcg_true;
  outC->_L538.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L538.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L538.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L538.linkingIsUsedOnboard = kcg_true;
  outC->_L538.estimatedRearEndPosition = 0;
  outC->_L538.minSafeRearEndPosition = 0;
  outC->_L538.maxSafeRearEndPosition = 0;
  outC->_L523.DMI_Active = kcg_true;
  outC->_L523.DMI_Error = kcg_true;
  outC->_L523.DMI_DriverIdValidated = kcg_true;
  outC->_L523.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L523.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L523.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L523.DMI_TrainDataValidated = kcg_true;
  outC->_L523.DMI_StartReceived = kcg_true;
  outC->_L523.DMI_Identifier.valid = kcg_true;
  outC->_L523.DMI_Identifier.systemTime = 0;
  outC->_L523.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L523.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L523.DMI_Identifier.l_name = 0;
  for (i242 = 0; i242 < 255; i242++) {
    outC->_L523.DMI_Identifier.DMI_name[i242] = ' ';
  }
  outC->_L523.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L489.valid = kcg_true;
  outC->_L489.system_clock = 0;
  outC->_L489.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L487.valid = kcg_true;
  outC->_L487.deskOpen = kcg_true;
  outC->_L487.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L487.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L484.registration.valid = kcg_true;
  outC->_L484.registration.mobileDeviceNo = 0;
  outC->_L484.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L484.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L484.registration.nid_mn = 0;
  outC->_L484.connection.valid = kcg_true;
  outC->_L484.connection.mobileDeviceNo = 0;
  outC->_L484.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L484.connection.nid_radio = 0;
  outC->_L484.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L484.connection.connectionLost = kcg_true;
  outC->_L484.connection.isInRadioHole = kcg_true;
  outC->_L484.session.valid = kcg_true;
  outC->_L484.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L484.session.nid_c = 0;
  outC->_L484.session.nid_rbc = 0;
  outC->_L484.session.nid_radio = 0;
  outC->_L472.valid = kcg_true;
  outC->_L472.system_clock = 0;
  outC->_L472.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L473.valid = kcg_true;
  outC->_L473.messageSource = msrc_undefined_Common_Types_Pkg;
  outC->_L473.Radio_Common_Header.radioDevice = 0;
  outC->_L473.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L473.Radio_Common_Header.nid_message = 0;
  outC->_L473.Radio_Common_Header.t_train = 0;
  outC->_L473.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L473.Radio_Common_Header.nid_lrbg = 0;
  outC->_L473.Radio_Common_Header.t_train_reference = 0;
  outC->_L473.Radio_Common_Header.nid_em = 0;
  outC->_L473.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L473.Radio_Common_Header.d_sr = 0;
  outC->_L473.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L473.Radio_Common_Header.d_ref = 0;
  outC->_L473.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L473.Radio_Common_Header.d_emergencystop = 0;
  outC->_L473.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L473.p42.valid = kcg_true;
  outC->_L473.p42.q_dir = Q_DIR_Reverse;
  outC->_L473.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L473.p42.nid_c = 0;
  outC->_L473.p42.nid_rbc = 0;
  outC->_L473.p42.nid_radio = 0;
  outC->_L473.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L473.p45.valid = kcg_true;
  outC->_L473.p45.q_dir = Q_DIR_Reverse;
  outC->_L473.p45.nid_mn = 0;
  outC->_L473.sendingRBC.valid = kcg_true;
  outC->_L473.sendingRBC.nid_c = 0;
  outC->_L473.sendingRBC.rbc_id = 0;
  outC->_L473.sendingRBC.device_id = 0;
  outC->_L474 = kcg_true;
  outC->_L475 = kcg_true;
  outC->_L476 = kcg_true;
  outC->_L478 = kcg_true;
  outC->_L327.valid = kcg_true;
  outC->_L327.cab_is_active = kcg_true;
  outC->_L327.system_clock = 0;
  outC->_L325.valid = kcg_true;
  outC->_L325.system_clock = 0;
  outC->_L325.nid_mn = 0;
  outC->_L324.valid = kcg_true;
  outC->_L324.systemTime = 0;
  for (i243 = 0; i243 < 9; i243++) {
    outC->_L324.driverIdentifier[i243] = ' ';
  }
  outC->_L322.valid = kcg_true;
  outC->_L322.systemTime = 0;
  outC->_L322.trainRunningNumber = 0;
  outC->_L320.valid = kcg_true;
  outC->_L320.systemTime = 0;
  outC->_L320.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L318.valid = kcg_true;
  outC->_L318.deskOpen = kcg_true;
  outC->_L318.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L318.activeCab = CabUndefined_TIU_Types_Pkg;
  for (i244 = 0; i244 < 999; i244++) {
    outC->_L171[i244] = 0;
  }
  outC->_L169.valid = kcg_true;
  outC->_L169.d_test_current.now = 0;
  outC->_L169.d_test_current.distance = 0;
  outC->_L169.m_current.no_restriction = kcg_true;
  outC->_L169.m_current.restriction = 0;
  outC->_L168.valid = kcg_true;
  outC->_L168.door_control_info = 0;
  outC->_L167.valid = kcg_true;
  outC->_L167.d_test_traction.now = 0;
  outC->_L167.d_test_traction.distance = 0;
  outC->_L167.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L167.m_voltage.NID_ctraction = 0;
  outC->_L162.valid = kcg_true;
  outC->_L162.emergencyBrakeActive = kcg_true;
  outC->_L162.isolationStatus = kcg_true;
  outC->_L161.valid = kcg_true;
  outC->_L161.info.isolation_status.valid = kcg_true;
  outC->_L161.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L161.info.brake_command.valid = kcg_true;
  outC->_L161.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.brake_inhibition.valid = kcg_true;
  outC->_L161.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L161.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L161.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L161.info.type_I_train_commands.valid = kcg_true;
  outC->_L161.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L161.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L161.info.change_traction_system.valid = kcg_true;
  outC->_L161.info.change_traction_system.d_test_traction.now = 0;
  outC->_L161.info.change_traction_system.d_test_traction.distance = 0;
  outC->_L161.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L161.info.change_traction_system.m_voltage.NID_ctraction = 0;
  outC->_L161.info.passenger_door_control_info.valid = kcg_true;
  outC->_L161.info.passenger_door_control_info.door_control_info = 0;
  outC->_L161.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L161.info.change_of_allowed_current_consumption.d_test_current.now = 0;
  outC->_L161.info.change_of_allowed_current_consumption.d_test_current.distance =
    0;
  outC->_L161.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L161.info.change_of_allowed_current_consumption.m_current.restriction =
    0;
  outC->MoRC_HO_EventsAndPhases.atPowerUp = kcg_true;
  outC->MoRC_HO_EventsAndPhases.atPowerDown = kcg_true;
  outC->MoRC_HO_EventsAndPhases.atStartOfMission = kcg_true;
  outC->MoRC_HO_EventsAndPhases.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->MoRC_HO_EventsAndPhases.driverHasManuallyChangedLevel_to_2_or_3 =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontPassesStartOfAnnouncedRadioHole =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontReachesEndOfAnnouncedRadioHole =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontInsideInAnAnnouncedRadioHole =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontPassesALevelTransitionBorder =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->MoRC_HO_EventsAndPhases.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.isPartOfAnOngoingStartOfMissionProcedure =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->MoRC_HO_EventsAndPhases.endOfMissionIsExecuted = kcg_true;
  outC->MoRC_HO_EventsAndPhases.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.errorConditionRequiringTerminationDetected =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainIsRejectedByRBC_duringStartOfMission =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.driverClosesTheDeskduringStartOfMission =
    kcg_true;
  outC->MoRC_HO_EventsAndPhases.trainExitedFromAnRBCArea = kcg_true;
  outC->MoRC_HO_EventsAndPhases.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->MoRC_HO_EventsAndPhases.level_1_isLeft = kcg_true;
  outC->MoRC_RadioStatus_2.registration.valid = kcg_true;
  outC->MoRC_RadioStatus_2.registration.mobileDeviceNo = 0;
  outC->MoRC_RadioStatus_2.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_2.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_2.registration.nid_mn = 0;
  outC->MoRC_RadioStatus_2.connection.valid = kcg_true;
  outC->MoRC_RadioStatus_2.connection.mobileDeviceNo = 0;
  outC->MoRC_RadioStatus_2.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_2.connection.nid_radio = 0;
  outC->MoRC_RadioStatus_2.connection.settingUpConnectionHasFailed = kcg_true;
  outC->MoRC_RadioStatus_2.connection.connectionLost = kcg_true;
  outC->MoRC_RadioStatus_2.connection.isInRadioHole = kcg_true;
  outC->MoRC_RadioStatus_2.session.valid = kcg_true;
  outC->MoRC_RadioStatus_2.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->MoRC_RadioStatus_2.session.nid_c = 0;
  outC->MoRC_RadioStatus_2.session.nid_rbc = 0;
  outC->MoRC_RadioStatus_2.session.nid_radio = 0;
  outC->MoRC_safeRadioConnectionStatus_toDriver.valid = kcg_true;
  outC->MoRC_safeRadioConnectionStatus_toDriver.indicator =
    srci_noConnection_RCM_Session_Types_Pkg;
  for (i246 = 0; i246 < 5; i246++) {
    outC->TM_to_MsgOut[i246].Message.valid = kcg_true;
    outC->TM_to_MsgOut[i246].Message.nid_message = 0;
    outC->TM_to_MsgOut[i246].Message.l_message = 0;
    outC->TM_to_MsgOut[i246].Message.t_train = 0;
    outC->TM_to_MsgOut[i246].Message.nid_engine = 0;
    outC->TM_to_MsgOut[i246].Message.field1 = 0;
    outC->TM_to_MsgOut[i246].Message.field2 = 0;
    outC->TM_to_MsgOut[i246].Message.field3 = 0;
    for (i245 = 0; i245 < 50; i245++) {
      outC->TM_to_MsgOut[i246].OptionalPackets[i245] = 0;
    }
  }
  outC->MoRC_P3ng.valid = kcg_true;
  outC->MoRC_P3ng.nid_packet = 0;
  outC->MoRC_P3ng.l_packet = 0;
  outC->MoRC_P3ng.n_iter = 0;
  for (i247 = 0; i247 < 5; i247++) {
    outC->MoRC_P3ng.nid_radio[i247] = 0;
  }
  for (i249 = 0; i249 < 5; i249++) {
    outC->TA_bus2RTM[i249].Message.valid = kcg_true;
    outC->TA_bus2RTM[i249].Message.nid_message = 0;
    outC->TA_bus2RTM[i249].Message.l_message = 0;
    outC->TA_bus2RTM[i249].Message.t_train = 0;
    outC->TA_bus2RTM[i249].Message.nid_engine = 0;
    outC->TA_bus2RTM[i249].Message.field1 = 0;
    outC->TA_bus2RTM[i249].Message.field2 = 0;
    outC->TA_bus2RTM[i249].Message.field3 = 0;
    for (i248 = 0; i248 < 50; i248++) {
      outC->TA_bus2RTM[i249].OptionalPackets[i248] = 0;
    }
  }
  for (i251 = 0; i251 < 5; i251++) {
    outC->td_out2Radio[i251].Message.valid = kcg_true;
    outC->td_out2Radio[i251].Message.nid_message = 0;
    outC->td_out2Radio[i251].Message.l_message = 0;
    outC->td_out2Radio[i251].Message.t_train = 0;
    outC->td_out2Radio[i251].Message.nid_engine = 0;
    outC->td_out2Radio[i251].Message.field1 = 0;
    outC->td_out2Radio[i251].Message.field2 = 0;
    outC->td_out2Radio[i251].Message.field3 = 0;
    for (i250 = 0; i250 < 50; i250++) {
      outC->td_out2Radio[i251].OptionalPackets[i250] = 0;
    }
  }
  outC->ML_AnnouncedLevelTransitions.LevelTransition.is_set = kcg_true;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.level =
    M_LEVEL_Level_0;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.position = 0;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.immediateAck =
    kcg_true;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.transition.AckLength = 0;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.LRBG = 0;
  outC->ML_AnnouncedLevelTransitions.LevelTransition.referenceLocation = 0;
  outC->ML_AnnouncedLevelTransitions.IsAvailableForUse = kcg_true;
  outC->TA_tripTrain = kcg_true;
  outC->TA_ces_revoked = kcg_true;
  outC->TA_ces_accepted = kcg_true;
  outC->MSG_trackMessageByPassFilter.valid = kcg_true;
  outC->MSG_trackMessageByPassFilter.source = msrc_undefined_Common_Types_Pkg;
  outC->MSG_trackMessageByPassFilter.radioMetadata.t_train_reference = kcg_true;
  outC->MSG_trackMessageByPassFilter.radioMetadata.nid_em = kcg_true;
  outC->MSG_trackMessageByPassFilter.radioMetadata.q_scale = kcg_true;
  outC->MSG_trackMessageByPassFilter.radioMetadata.d_sr = kcg_true;
  outC->MSG_trackMessageByPassFilter.radioMetadata.t_sh_rqst = kcg_true;
  outC->MSG_trackMessageByPassFilter.radioMetadata.d_ref = kcg_true;
  outC->MSG_trackMessageByPassFilter.radioMetadata.q_dir = kcg_true;
  outC->MSG_trackMessageByPassFilter.radioMetadata.d_emergencystop = kcg_true;
  outC->MSG_trackMessageByPassFilter.radioMetadata.m_version = kcg_true;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.valid = kcg_true;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.m_mcount = 0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.nid_c = 0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.nid_bg = 0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.timestamp = 0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.odo.o_nominal =
    0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.speed.v_lower =
    0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.speed.v_upper =
    0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.acceleration =
    0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.q_nvlocacc = 0;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->MSG_trackMessageByPassFilter.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.radioDevice = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.receivedSystemTime = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.nid_message = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.t_train = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.nid_lrbg = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.t_train_reference = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.nid_em = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.d_sr = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.t_sh_rqst = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.d_ref = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.d_emergencystop = 0;
  outC->MSG_trackMessageByPassFilter.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i252 = 0; i252 < 30; i252++) {
    outC->MSG_trackMessageByPassFilter.packets.PacketHeaders[i252].nid_packet =
      0;
    outC->MSG_trackMessageByPassFilter.packets.PacketHeaders[i252].q_dir =
      Q_DIR_Reverse;
    outC->MSG_trackMessageByPassFilter.packets.PacketHeaders[i252].valid =
      kcg_true;
    outC->MSG_trackMessageByPassFilter.packets.PacketHeaders[i252].startAddress =
      0;
    outC->MSG_trackMessageByPassFilter.packets.PacketHeaders[i252].endAddress =
      0;
  }
  for (i253 = 0; i253 < 500; i253++) {
    outC->MSG_trackMessageByPassFilter.packets.PacketData[i253] = 0;
  }
  outC->MSG_trackMessageByPassFilter.sendingRBC.valid = kcg_true;
  outC->MSG_trackMessageByPassFilter.sendingRBC.nid_c = 0;
  outC->MSG_trackMessageByPassFilter.sendingRBC.rbc_id = 0;
  outC->MSG_trackMessageByPassFilter.sendingRBC.device_id = 0;
  outC->MSG_toML.P12_received = kcg_true;
  outC->MSG_toML.P15_received = kcg_true;
  outC->MSG_toML.P21_received = kcg_true;
  outC->MSG_toML.P27_received = kcg_true;
  outC->TA_fromDriver.trackAheadFree = kcg_true;
  outC->TA_fromDriver.driverSelectsStart = kcg_true;
  for (i254 = 0; i254 < 5; i254++) {
    outC->TA_forModeLevel.train_packets.P_12[i254].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_12[i254].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_12[i254].q_scale =
      Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_12[i254].v_main = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].v_loa = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].t_loa = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].l_section = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_forModeLevel.train_packets.P_12[i254].t_sectiontimer_k = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].d_sectiontimerstoploc_k = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].l_endsection = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_forModeLevel.train_packets.P_12[i254].t_sectiontimer = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].d_sectiontimerstoploc = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->TA_forModeLevel.train_packets.P_12[i254].t_endtimer = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].d_endtimerstartloc = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->TA_forModeLevel.train_packets.P_12[i254].d_dp = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].v_releasedp = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->TA_forModeLevel.train_packets.P_12[i254].d_startol = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].t_ol = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].d_ol = 0;
    outC->TA_forModeLevel.train_packets.P_12[i254].v_releaseol = 0;
  }
  outC->TA_forModeLevel.train_packets.P_135.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_137.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->TA_forModeLevel.train_packets.P_138.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_forModeLevel.train_packets.P_138.d_startreverse = 0;
  outC->TA_forModeLevel.train_packets.P_138.l_reversearea = 0;
  outC->TA_forModeLevel.train_packets.P_139.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_forModeLevel.train_packets.P_139.d_reverse = 0;
  outC->TA_forModeLevel.train_packets.P_139.v_reverse = 0;
  for (i255 = 0; i255 < 5; i255++) {
    outC->TA_forModeLevel.train_packets.P_15[i255].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_15[i255].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_15[i255].q_scale =
      Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_15[i255].v_loa = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].t_loa = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].l_section = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_forModeLevel.train_packets.P_15[i255].t_sectiontimer_k = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].d_sectiontimerstoploc_k = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].l_endsection = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_forModeLevel.train_packets.P_15[i255].t_sectiontimer = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].d_sectiontimerstoploc = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->TA_forModeLevel.train_packets.P_15[i255].t_endtimer = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].d_endtimerstartloc = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->TA_forModeLevel.train_packets.P_15[i255].d_dp = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].v_releasedp = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->TA_forModeLevel.train_packets.P_15[i255].d_startol = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].t_ol = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].d_ol = 0;
    outC->TA_forModeLevel.train_packets.P_15[i255].v_releaseol = 0;
  }
  for (i256 = 0; i256 < 7; i256++) {
    outC->TA_forModeLevel.train_packets.P_21[i256].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_21[i256].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_21[i256].q_scale =
      Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_21[i256].d_gradient = 0;
    outC->TA_forModeLevel.train_packets.P_21[i256].q_gdir = Q_GDIR_downhill;
    outC->TA_forModeLevel.train_packets.P_21[i256].g_a = 0;
  }
  outC->TA_forModeLevel.train_packets.P_27.valid = kcg_true;
  outC->TA_forModeLevel.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->TA_forModeLevel.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_forModeLevel.train_packets.P_27.d_static = 0;
  outC->TA_forModeLevel.train_packets.P_27.v_static = 0;
  outC->TA_forModeLevel.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i257 = 0; i257 < 7; i257++) {
    outC->TA_forModeLevel.train_packets.P_27.diffArray[i257].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_27.diffArray[i257].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->TA_forModeLevel.train_packets.P_27.diffArray[i257].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->TA_forModeLevel.train_packets.P_27.diffArray[i257].nc_diff = 0;
    outC->TA_forModeLevel.train_packets.P_27.diffArray[i257].v_diff = 0;
  }
  for (i259 = 0; i259 < 7; i259++) {
    outC->TA_forModeLevel.train_packets.P_27.SSPArray[i259].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_27.SSPArray[i259].d_static = 0;
    outC->TA_forModeLevel.train_packets.P_27.SSPArray[i259].v_static = 0;
    outC->TA_forModeLevel.train_packets.P_27.SSPArray[i259].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i258 = 0; i258 < 7; i258++) {
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[i259].diffArray[i258].valid =
        kcg_true;
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[i259].diffArray[i258].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[i259].diffArray[i258].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[i259].diffArray[i258].nc_diff =
        0;
      outC->TA_forModeLevel.train_packets.P_27.SSPArray[i259].diffArray[i258].v_diff =
        0;
    }
  }
  for (i260 = 0; i260 < 7; i260++) {
    outC->TA_forModeLevel.train_packets.P_41[i260].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_41[i260].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_41[i260].q_scale =
      Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_41[i260].d_leveltr = 0;
    outC->TA_forModeLevel.train_packets.P_41[i260].m_leveltr =
      M_LEVELTR_Level_0;
    outC->TA_forModeLevel.train_packets.P_41[i260].nid_ntc = 0;
    outC->TA_forModeLevel.train_packets.P_41[i260].l_ackleveltr = 0;
  }
  for (i261 = 0; i261 < 7; i261++) {
    outC->TA_forModeLevel.train_packets.P_46[i261].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_46[i261].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_46[i261].m_leveltr =
      M_LEVELTR_Level_0;
    outC->TA_forModeLevel.train_packets.P_46[i261].nid_ntc = 0;
  }
  for (i262 = 0; i262 < 7; i262++) {
    outC->TA_forModeLevel.train_packets.P_63[i262].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_63[i262].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_63[i262].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->TA_forModeLevel.train_packets.P_63[i262].nid_c = 0;
    outC->TA_forModeLevel.train_packets.P_63[i262].nid_bg = 0;
  }
  for (i263 = 0; i263 < 3; i263++) {
    outC->TA_forModeLevel.train_packets.P_80[i263].valid = kcg_true;
    outC->TA_forModeLevel.train_packets.P_80[i263].q_dir = Q_DIR_Reverse;
    outC->TA_forModeLevel.train_packets.P_80[i263].q_scale =
      Q_SCALE_10_cm_scale;
    outC->TA_forModeLevel.train_packets.P_80[i263].d_mamode = 0;
    outC->TA_forModeLevel.train_packets.P_80[i263].m_mamode = M_MAMODE_On_Sight;
    outC->TA_forModeLevel.train_packets.P_80[i263].v_mamode = 0;
    outC->TA_forModeLevel.train_packets.P_80[i263].l_mamode = 0;
    outC->TA_forModeLevel.train_packets.P_80[i263].l_ackmamode = 0;
    outC->TA_forModeLevel.train_packets.P_80[i263].q_mamode =
      Q_MAMODE_as_the_EOA;
  }
  outC->TA_forModeLevel.train_packets.LRBG = 0;
  outC->TA_forModeLevel.train_packets.referenceLocation = 0;
  outC->TA_forModeLevel.train_messages.Mess_15 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_16 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_2 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_27 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_28 = kcg_true;
  outC->TA_forModeLevel.train_messages.Mess_6 = kcg_true;
  outC->TA_forModeLevel.p12 = kcg_true;
  outC->TA_forModeLevel.p15 = kcg_true;
  outC->TA_forModeLevel.p21 = kcg_true;
  outC->TA_forModeLevel.p27 = kcg_true;
  outC->EVC_t_Train = 0;
  outC->TA_MA_onboard.valid = kcg_true;
  outC->TA_MA_onboard.Level = MA_L1_TrackAtlasTypes;
  outC->TA_MA_onboard.q_dir = Q_DIR_Reverse;
  outC->TA_MA_onboard.v_main = 0;
  outC->TA_MA_onboard.v_loa = 0;
  outC->TA_MA_onboard.t_loa_unlimited = kcg_true;
  outC->TA_MA_onboard.t_loa = 0;
  outC->TA_MA_onboard.n_iter = 0;
  for (i264 = 0; i264 < 10; i264++) {
    outC->TA_MA_onboard.sections[i264].valid = kcg_true;
    outC->TA_MA_onboard.sections[i264].q_endsection = kcg_true;
    outC->TA_MA_onboard.sections[i264].l_section = 0;
    outC->TA_MA_onboard.sections[i264].q_sectiontimer = kcg_true;
    outC->TA_MA_onboard.sections[i264].t_sectiontimer = 0;
    outC->TA_MA_onboard.sections[i264].d_sectiontimerstoploc = 0;
  }
  outC->TA_MA_onboard.q_dangerpoint = kcg_true;
  outC->TA_MA_onboard.dangerpoint.d_DP_or_OL = 0;
  outC->TA_MA_onboard.dangerpoint.v_release = 0;
  outC->TA_MA_onboard.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->TA_MA_onboard.q_overlap = kcg_true;
  outC->TA_MA_onboard.overlap.d_DP_or_OL = 0;
  outC->TA_MA_onboard.overlap.v_release = 0;
  outC->TA_MA_onboard.overlap.calc_v_release_onboard = kcg_true;
  outC->TA_MA_onboard.q_endtimer = kcg_true;
  outC->TA_MA_onboard.endtimer_t.t_endtimer = 0;
  outC->TA_MA_onboard.endtimer_t.d_endtimerstoploc = 0;
  outC->TA_forSupervision.freshMA = kcg_true;
  outC->TA_forSupervision.MA.valid = kcg_true;
  outC->TA_forSupervision.MA.Level = MA_L1_TrackAtlasTypes;
  outC->TA_forSupervision.MA.q_dir = Q_DIR_Reverse;
  outC->TA_forSupervision.MA.v_main = 0;
  outC->TA_forSupervision.MA.v_loa = 0;
  outC->TA_forSupervision.MA.t_loa_unlimited = kcg_true;
  outC->TA_forSupervision.MA.t_loa = 0;
  outC->TA_forSupervision.MA.n_iter = 0;
  for (i265 = 0; i265 < 10; i265++) {
    outC->TA_forSupervision.MA.sections[i265].valid = kcg_true;
    outC->TA_forSupervision.MA.sections[i265].q_endsection = kcg_true;
    outC->TA_forSupervision.MA.sections[i265].l_section = 0;
    outC->TA_forSupervision.MA.sections[i265].q_sectiontimer = kcg_true;
    outC->TA_forSupervision.MA.sections[i265].t_sectiontimer = 0;
    outC->TA_forSupervision.MA.sections[i265].d_sectiontimerstoploc = 0;
  }
  outC->TA_forSupervision.MA.q_dangerpoint = kcg_true;
  outC->TA_forSupervision.MA.dangerpoint.d_DP_or_OL = 0;
  outC->TA_forSupervision.MA.dangerpoint.v_release = 0;
  outC->TA_forSupervision.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->TA_forSupervision.MA.q_overlap = kcg_true;
  outC->TA_forSupervision.MA.overlap.d_DP_or_OL = 0;
  outC->TA_forSupervision.MA.overlap.v_release = 0;
  outC->TA_forSupervision.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->TA_forSupervision.MA.q_endtimer = kcg_true;
  outC->TA_forSupervision.MA.endtimer_t.t_endtimer = 0;
  outC->TA_forSupervision.MA.endtimer_t.d_endtimerstoploc = 0;
  outC->TA_forSupervision.freshGradientProfile = kcg_true;
  for (i266 = 0; i266 < 50; i266++) {
    outC->TA_forSupervision.GradientProfile[i266].valid = kcg_true;
    outC->TA_forSupervision.GradientProfile[i266].Loc_Absolute = 0;
    outC->TA_forSupervision.GradientProfile[i266].Loc_LRBG = 0;
    outC->TA_forSupervision.GradientProfile[i266].Gradient = 0;
    outC->TA_forSupervision.GradientProfile[i266].L_Gradient = 0;
  }
  outC->TA_forSupervision.freshMRSP = kcg_true;
  for (i267 = 0; i267 < 110; i267++) {
    outC->TA_forSupervision.MRSP[i267].valid = kcg_true;
    outC->TA_forSupervision.MRSP[i267].Loc_Abs = 0;
    outC->TA_forSupervision.MRSP[i267].Loc_LRBG = 0;
    outC->TA_forSupervision.MRSP[i267].MRS = 0;
  }
  for (i268 = 0; i268 < 50; i268++) {
    outC->TA_toDMI.GradientProfile[i268].valid = kcg_true;
    outC->TA_toDMI.GradientProfile[i268].begin_section = 0;
    outC->TA_toDMI.GradientProfile[i268].end_section = 0;
    outC->TA_toDMI.GradientProfile[i268].gradient = 0;
  }
  outC->TA_toDMI.Gradient_profile_updated = kcg_true;
  for (i269 = 0; i269 < 110; i269++) {
    outC->TA_toDMI.MRSP[i269].valid = kcg_true;
    outC->TA_toDMI.MRSP[i269].Loc_Abs = 0;
    outC->TA_toDMI.MRSP[i269].Loc_LRBG = 0;
    outC->TA_toDMI.MRSP[i269].MRS = 0;
  }
  outC->TA_toDMI.MRSP_updated = kcg_true;
  outC->TA_nationalValues.valid = kcg_true;
  outC->TA_nationalValues.nid_packet = 0;
  outC->TA_nationalValues.q_dir = Q_DIR_Reverse;
  outC->TA_nationalValues.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_nationalValues.d_validnv = 0;
  outC->TA_nationalValues.nid_c = 0;
  outC->TA_nationalValues.n_iter_nid_c = 0;
  for (i270 = 0; i270 < 32; i270++) {
    outC->TA_nationalValues.nid_c_list[i270].valid = kcg_true;
    outC->TA_nationalValues.nid_c_list[i270].nid_c = 0;
  }
  outC->TA_nationalValues.v_nvshunt = 0;
  outC->TA_nationalValues.v_nvstff = 0;
  outC->TA_nationalValues.v_nvonsight = 0;
  outC->TA_nationalValues.v_nvlimsuperv = 0;
  outC->TA_nationalValues.v_nvunfit = 0;
  outC->TA_nationalValues.v_nvrel = 0;
  outC->TA_nationalValues.d_nvroll = 0;
  outC->TA_nationalValues.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->TA_nationalValues.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->TA_nationalValues.q_nvguiperm = Q_NVGUIPERM_No;
  outC->TA_nationalValues.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->TA_nationalValues.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->TA_nationalValues.v_nvallowovtrp = 0;
  outC->TA_nationalValues.v_nvsupovtrp = 0;
  outC->TA_nationalValues.d_nvovtrp = 0;
  outC->TA_nationalValues.t_nvovtrp = 0;
  outC->TA_nationalValues.d_nvpotrp = 0;
  outC->TA_nationalValues.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->TA_nationalValues.t_nvcontact = 0;
  outC->TA_nationalValues.m_nvderun = M_NVDERUN_No;
  outC->TA_nationalValues.d_nvstff = 0;
  outC->TA_nationalValues.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->TA_nationalValues.a_nvmaxredadh1 = 0.0;
  outC->TA_nationalValues.a_nvmaxredadh2 = 0.0;
  outC->TA_nationalValues.a_nvmaxredadh3 = 0.0;
  outC->TA_nationalValues.q_nvlocacc = 0;
  outC->TA_nationalValues.m_nvavadh = 0.0;
  outC->TA_nationalValues.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->TA_nationalValues.q_nvkint =
    Q_NVKINT_No_integrated_correction_factors_follow;
  outC->TA_nationalValues.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->TA_nationalValues.a_nvp12 = 0.0;
  outC->TA_nationalValues.a_nvp23 = 0.0;
  outC->TA_nationalValues.v_nvkvint = 0;
  outC->TA_nationalValues.m_nvkvint_12 = 0.0;
  outC->TA_nationalValues.m_nvkvint_23 = 0.0;
  outC->TA_nationalValues.n_iter_n = 0;
  for (i271 = 0; i271 < 32; i271++) {
    outC->TA_nationalValues.n_iter_n_list[i271].valid = kcg_true;
    outC->TA_nationalValues.n_iter_n_list[i271].v_nvkvint_n = 0;
    outC->TA_nationalValues.n_iter_n_list[i271].m_nvkvint_n_12 = 0.0;
    outC->TA_nationalValues.n_iter_n_list[i271].m_nvkvint_n_23 = 0.0;
  }
  outC->TA_nationalValues.n_iter_k = 0;
  for (i273 = 0; i273 < 32; i273++) {
    outC->TA_nationalValues.n_iter_k_list[i273].valid = kcg_true;
    outC->TA_nationalValues.n_iter_k_list[i273].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->TA_nationalValues.n_iter_k_list[i273].a_nvp12_k = 0.0;
    outC->TA_nationalValues.n_iter_k_list[i273].a_nvp23_k = 0.0;
    outC->TA_nationalValues.n_iter_k_list[i273].v_nvkvint_k = 0;
    outC->TA_nationalValues.n_iter_k_list[i273].m_nvkvint_k_12 = 0.0;
    outC->TA_nationalValues.n_iter_k_list[i273].m_nvkvint_k_23 = 0.0;
    outC->TA_nationalValues.n_iter_k_list[i273].n_iter_k_m = 0;
    for (i272 = 0; i272 < 32; i272++) {
      outC->TA_nationalValues.n_iter_k_list[i273].n_iter_k_m_list[i272].valid =
        kcg_true;
      outC->TA_nationalValues.n_iter_k_list[i273].n_iter_k_m_list[i272].v_nvkvint_k_m =
        0;
      outC->TA_nationalValues.n_iter_k_list[i273].n_iter_k_m_list[i272].m_nvkvint_km_12 =
        0.0;
      outC->TA_nationalValues.n_iter_k_list[i273].n_iter_k_m_list[i272].m_nvkvint_km_23 =
        0.0;
    }
  }
  outC->TA_nationalValues.l_nvkrint = L_NVKRINT_0m;
  outC->TA_nationalValues.m_nvkrint = 0.0;
  outC->TA_nationalValues.n_iter_l = 0;
  for (i274 = 0; i274 < 32; i274++) {
    outC->TA_nationalValues.n_iter_l_list[i274].valid = kcg_true;
    outC->TA_nationalValues.n_iter_l_list[i274].l_nvkrint_l = L_NVKRINT_0m;
    outC->TA_nationalValues.n_iter_l_list[i274].m_nvkrint_l = 0.0;
  }
  outC->TA_nationalValues.m_nvktint = 0.0;
  outC->EVC_cabIsOpen = kcg_true;
  outC->DMI_TrainDataAck.valid = kcg_true;
  outC->DMI_TrainDataAck.systemTime = 0;
  outC->DMI_TrainDataAck.acknowledged = kcg_true;
  outC->td_trigger.brakeTrigger = kcg_true;
  outC->td_trigger.driverRequestModify = kcg_true;
  outC->td_trigger.shortenLocationBasedInformation = kcg_true;
  outC->td_trigger.deleteMA = kcg_true;
  outC->td_trigger.trainLengthIncreased = kcg_true;
  outC->EVC_nidEngine = 0;
  outC->MSG_MACoverNotFullLength = kcg_true;
  outC->DMI_driverRequest.valid = kcg_true;
  outC->DMI_driverRequest.systemTime = 0;
  outC->DMI_driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->MSG_badBGPassedtoDMI = kcg_true;
  for (i275 = 0; i275 < 31; i275++) {
    outC->transport_TextMessageStatusList[i275].valid = kcg_true;
    outC->transport_TextMessageStatusList[i275].dmi_textMessageID = 0;
    outC->transport_TextMessageStatusList[i275].timeStamp = 0;
    outC->transport_TextMessageStatusList[i275].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->transport_TextMessageStatusList[i275].context =
      con_undefined_DMI_Types_Pkg;
    outC->transport_TextMessageStatusList[i275].nid_textmessage = 0;
    outC->transport_TextMessageStatusList[i275].whichLevel = M_LEVEL_Level_0;
    outC->transport_TextMessageStatusList[i275].whichMode =
      M_MODE_Full_Supervision;
  }
  outC->MSG_BGcheck_applySB = kcg_true;
  outC->EVC_ownVersion =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->DMI_updateLevels = kcg_true;
  outC->ML_ERTMS_capabiities.NTC = kcg_true;
  outC->ML_ERTMS_capabiities.L0 = kcg_true;
  outC->ML_ERTMS_capabiities.L1 = kcg_true;
  outC->ML_ERTMS_capabiities.L2 = kcg_true;
  outC->ML_ERTMS_capabiities.L3 = kcg_true;
  outC->ML_driverLevelTransition.is_set = kcg_true;
  outC->ML_driverLevelTransition.transition.level = M_LEVEL_Level_0;
  outC->ML_driverLevelTransition.transition.position = 0;
  outC->ML_driverLevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->ML_driverLevelTransition.transition.immediateAck = kcg_true;
  outC->ML_driverLevelTransition.transition.AckLength = 0;
  outC->ML_driverLevelTransition.LRBG = 0;
  outC->ML_driverLevelTransition.referenceLocation = 0;
  outC->EVC_SystemFault = kcg_true;
  outC->SMD_DataForML.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->SMD_DataForML.Estim_Front_End_Rear_SSP = kcg_true;
  outC->SMD_DataForML.Override_Function_Active = kcg_true;
  outC->SMD_DataForML.EOA_Antenna_Overpass = kcg_true;
  outC->SMD_DataForML.EOA_Front_End = kcg_true;
  outC->SMD_DataForML.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->TIU_InputMessage.train_status.valid = kcg_true;
  outC->TIU_InputMessage.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.valid = kcg_true;
  outC->TIU_InputMessage.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->TIU_InputMessage.brake_pressure.valid = kcg_true;
  outC->TIU_InputMessage.brake_pressure.pressure = 0;
  outC->TIU_InputMessage.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->TIU_InputMessage.train_data_info.valid = kcg_true;
  outC->TIU_InputMessage.train_data_info.acknowledgedByDriver = kcg_true;
  outC->TIU_InputMessage.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->TIU_InputMessage.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->TIU_InputMessage.train_data_info.trainLength = 0;
  outC->TIU_InputMessage.train_data_info.brakePerctage = 0;
  outC->TIU_InputMessage.train_data_info.maxTrainSpeed = 0;
  outC->TIU_InputMessage.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->TIU_InputMessage.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->TIU_InputMessage.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->TIU_InputMessage.train_data_info.axleNumber = 0;
  outC->TIU_InputMessage.train_data_info.numberNationalSystems = 0;
  for (i276 = 0; i276 < 5; i276++) {
    outC->TIU_InputMessage.train_data_info.nationSystems[i276] = 0;
  }
  outC->TIU_InputMessage.train_data_info.numberTractionSystems = 0;
  for (i277 = 0; i277 < 4; i277++) {
    outC->TIU_InputMessage.train_data_info.tractionSystem[i277].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->TIU_InputMessage.train_data_info.tractionSystem[i277].nid_ctraction =
      0;
  }
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    0;
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    0;
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    0;
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    0;
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    0;
  outC->TIU_InputMessage.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    0;
  outC->MSG_pendingNTCTransition = kcg_true;
  outC->MSG_lastAckTextMsgId = 0;
  outC->ML_EB_Request = kcg_true;
  outC->ML_ServiceBrakeCmd = kcg_true;
  outC->ML_dataToBG_Management.EoM_Procedure_req = kcg_true;
  outC->ML_dataToBG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->ML_dataToBG_Management.MA_Req = kcg_true;
  outC->ML_dataToBG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->ML_dataToBG_Management.Connection_to_RBC_req = kcg_true;
  outC->ML_dataToBG_Management.Position_Repport_Needed = kcg_true;
  outC->ML_DataFromLocalisation.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->ML_DataFromLocalisation.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.outOfMemSpace = kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.passedBG_foundNotWhereExpected =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.positionCalculation_inconsistent =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.linkedBGMissed = kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.BGpassedInUnexpectedDirection =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.BG_LinkingConsistencyError =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.twoConsecutiveLinkedBGs_missed =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.doubleRepositioningError =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.valid = kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.nid_c = 0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.nid_bg = 0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.PositionErrors.bg.location.nominal = 0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.location.d_min = 0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.location.d_max = 0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.seqNoOnTrack = 0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.d_link.nominal =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.d_link.d_min =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.d_link.d_max =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.nid_c =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i278 = 0; i278 < 33; i278++) {
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].valid =
      kcg_true;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].nid_LRBG =
      0;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].q_dir =
      Q_DIR_Reverse;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].q_scale =
      Q_SCALE_10_cm_scale;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].d_link =
      0;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].nid_c =
      0;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].nid_bg =
      0;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->ML_DataFromLocalisation.PositionErrors.bg.infoFromPassing.linkedBGs[i278].q_locacc =
      0;
  }
  outC->ML_DataFromLocalisation.PositionErrors.bg.missed = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.valid = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.timestamp = 0;
  outC->ML_DataFromLocalisation.Train_Position.trainPositionIsUnknown =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.trainPosition.nominal = 0;
  outC->ML_DataFromLocalisation.Train_Position.trainPosition.d_min = 0;
  outC->ML_DataFromLocalisation.Train_Position.trainPosition.d_max = 0;
  outC->ML_DataFromLocalisation.Train_Position.estimatedFrontEndPosition = 0;
  outC->ML_DataFromLocalisation.Train_Position.minSafeFrontEndPosition = 0;
  outC->ML_DataFromLocalisation.Train_Position.maxSafeFrontEndPostion = 0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.valid = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.nid_c = 0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.nid_bg = 0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.location.nominal = 0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.location.d_min = 0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.location.d_max = 0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.seqNoOnTrack = 0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.d_link.nominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.d_link.d_min =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.d_link.d_max =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i279 = 0; i279 < 33; i279++) {
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].valid =
      kcg_true;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].nid_LRBG =
      0;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].q_dir =
      Q_DIR_Reverse;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].q_scale =
      Q_SCALE_10_cm_scale;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].d_link =
      0;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].nid_c =
      0;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].nid_bg =
      0;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->ML_DataFromLocalisation.Train_Position.LRBG.infoFromPassing.linkedBGs[i279].q_locacc =
      0;
  }
  outC->ML_DataFromLocalisation.Train_Position.LRBG.missed = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.valid = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.nid_c = 0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.nid_bg = 0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.location.nominal = 0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.location.d_min = 0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.location.d_max = 0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.seqNoOnTrack = 0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i280 = 0; i280 < 33; i280++) {
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].valid =
      kcg_true;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].nid_LRBG =
      0;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].q_dir =
      Q_DIR_Reverse;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].q_scale =
      Q_SCALE_10_cm_scale;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].d_link =
      0;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].nid_c =
      0;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].nid_bg =
      0;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->ML_DataFromLocalisation.Train_Position.prvLRBG.infoFromPassing.linkedBGs[i280].q_locacc =
      0;
  }
  outC->ML_DataFromLocalisation.Train_Position.prvLRBG.missed = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.nominalOrReverseToLRBG =
    Q_DLRBG_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.trainOrientationToLRBG =
    Q_DIRLRBG_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.trainRunningDirectionToLRBG =
    Q_DIRTRAIN_Reverse;
  outC->ML_DataFromLocalisation.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->ML_DataFromLocalisation.Train_Position.estimatedRearEndPosition = 0;
  outC->ML_DataFromLocalisation.Train_Position.minSafeRearEndPosition = 0;
  outC->ML_DataFromLocalisation.Train_Position.maxSafeRearEndPosition = 0;
  outC->ML_DataFromLocalisation.Train_Speed = 0;
  outC->ML_DataFromLocalisation.Train_Standstill = kcg_true;
  outC->ML_AckToDMI.valid = kcg_true;
  outC->ML_AckToDMI.whichMode = M_MODE_Full_Supervision;
  outC->ML_AckToDMI.SH_Req_RefusedByRBC = kcg_true;
  outC->ML_AckToDMI.LevelNeedsAck = kcg_true;
  outC->DMI_DMItoModes.valid = kcg_true;
  outC->DMI_DMItoModes.DriverAck.valid = kcg_true;
  outC->DMI_DMItoModes.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->DMI_DMItoModes.DriverAck.acknowledgement = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.valid = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_Exit_SH = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_NL = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_Override = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_SH = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.Req_Start = kcg_true;
  outC->DMI_DMItoModes.DriverRequest.ETCS_Isolated = kcg_true;
  outC->DMI_DMItoModes.LevelAck = kcg_true;
  outC->DMI_trainRunningNumber.valid = kcg_true;
  outC->DMI_trainRunningNumber.systemTime = 0;
  outC->DMI_trainRunningNumber.trainRunningNumber = 0;
  outC->DMI_MA.valid = kcg_true;
  outC->DMI_MA.location_LOA = 0;
  outC->DMI_MA.v_LOA = 0;
  outC->DMI_NV.valid = kcg_true;
  outC->DMI_NV.nid_c = 0;
  outC->DMI_NV.nid_c_valid = kcg_true;
  for (i281 = 0; i281 < 110; i281++) {
    outC->MRSP_profile[i281].valid = kcg_true;
    outC->MRSP_profile[i281].Loc_Abs = 0;
    outC->MRSP_profile[i281].Loc_LRBG = 0;
    outC->MRSP_profile[i281].MRS = 0;
  }
  outC->REP_safetyCriticalFailure = kcg_true;
  outC->REP_Train2TrackStatus.nid_ntc = 0;
  outC->REP_Train2TrackStatus.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->REP_trackinfo.minSafeRearEndPassed = kcg_true;
  outC->REP_trackinfo.maxSafeFrontEndPassed = kcg_true;
  outC->MSG_errors.linkedBGError = kcg_true;
  outC->MSG_errors.unlinkedBGError = kcg_true;
  outC->MSG_errors.BG_versionIncompatible = kcg_true;
  outC->MSG_errors.radioSequenceError = kcg_true;
  outC->MSG_errors.tNvContactError = kcg_true;
  outC->MSG_errors.otherTimingError = kcg_true;
  outC->MSG_errors.radioMessageConsistencyError = kcg_true;
  outC->MSG_errors.nid_c = 0;
  outC->MSG_errors.nid_errorbg = 0;
  outC->CALC_positionErrors.outOfMemSpace = kcg_true;
  outC->CALC_positionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->CALC_positionErrors.positionCalculation_inconsistent = kcg_true;
  outC->CALC_positionErrors.linkedBGMissed = kcg_true;
  outC->CALC_positionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->CALC_positionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->CALC_positionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->CALC_positionErrors.doubleRepositioningError = kcg_true;
  outC->CALC_positionErrors.bg.valid = kcg_true;
  outC->CALC_positionErrors.bg.nid_c = 0;
  outC->CALC_positionErrors.bg.nid_bg = 0;
  outC->CALC_positionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->CALC_positionErrors.bg.location.nominal = 0;
  outC->CALC_positionErrors.bg.location.d_min = 0;
  outC->CALC_positionErrors.bg.location.d_max = 0;
  outC->CALC_positionErrors.bg.seqNoOnTrack = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->CALC_positionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.d_link.nominal = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.d_link.d_min = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.d_link.d_max = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->CALC_positionErrors.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->CALC_positionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->CALC_positionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i282 = 0; i282 < 33; i282++) {
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].valid =
      kcg_true;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].nid_LRBG = 0;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].q_dir =
      Q_DIR_Reverse;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].q_scale =
      Q_SCALE_10_cm_scale;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].d_link = 0;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].nid_c = 0;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].nid_bg = 0;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->CALC_positionErrors.bg.infoFromPassing.linkedBGs[i282].q_locacc = 0;
  }
  outC->CALC_positionErrors.bg.missed = kcg_true;
  outC->MSG_nationalValues.valid = kcg_true;
  outC->MSG_nationalValues.q_dir = Q_DIR_Reverse;
  outC->MSG_nationalValues.d_validnv = 0;
  for (i283 = 0; i283 < 7; i283++) {
    outC->MSG_nationalValues.nid_cArray[i283].valid = kcg_true;
    outC->MSG_nationalValues.nid_cArray[i283].nid_c = 0;
  }
  outC->MSG_nationalValues.v_nvshunt = 0;
  outC->MSG_nationalValues.v_nvstff = 0;
  outC->MSG_nationalValues.v_nvonsight = 0;
  outC->MSG_nationalValues.v_nvlimsuperv = 0;
  outC->MSG_nationalValues.v_nvunfit = 0;
  outC->MSG_nationalValues.v_nvrel = 0;
  outC->MSG_nationalValues.d_nvroll = 0;
  outC->MSG_nationalValues.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->MSG_nationalValues.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->MSG_nationalValues.q_nvguiperm = Q_NVGUIPERM_No;
  outC->MSG_nationalValues.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->MSG_nationalValues.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->MSG_nationalValues.v_nvallowovtrp = 0;
  outC->MSG_nationalValues.v_nvsupovtrp = 0;
  outC->MSG_nationalValues.d_nvovtrp = 0;
  outC->MSG_nationalValues.t_nvovtrp = 0;
  outC->MSG_nationalValues.d_nvpotrp = 0;
  outC->MSG_nationalValues.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->MSG_nationalValues.t_nvcontact = 0;
  outC->MSG_nationalValues.m_nvderun = M_NVDERUN_No;
  outC->MSG_nationalValues.d_nvstff = 0;
  outC->MSG_nationalValues.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->MSG_nationalValues.a_nvmaxredadh1 = 0.0;
  outC->MSG_nationalValues.a_nvmaxredadh2 = 0.0;
  outC->MSG_nationalValues.a_nvmaxredadh3 = 0.0;
  outC->MSG_nationalValues.q_nvlocacc = 0;
  outC->MSG_nationalValues.m_nvavadh = 0.0;
  outC->MSG_nationalValues.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->MSG_nationalValues.q_nvkint =
    Q_NVKINT_No_integrated_correction_factors_follow;
  for (i285 = 0; i285 < 7; i285++) {
    outC->MSG_nationalValues.nvkvintsetArray[i285].valid = kcg_true;
    outC->MSG_nationalValues.nvkvintsetArray[i285].q_nvkvintset =
      Q_NVKVINTSET_Freight_trains;
    outC->MSG_nationalValues.nvkvintsetArray[i285].a_nvp12 = 0.0;
    outC->MSG_nationalValues.nvkvintsetArray[i285].a_nvp23 = 0.0;
    for (i284 = 0; i284 < 7; i284++) {
      outC->MSG_nationalValues.nvkvintsetArray[i285].nvkintArray[i284].valid =
        kcg_true;
      outC->MSG_nationalValues.nvkvintsetArray[i285].nvkintArray[i284].v_nvkvint =
        0;
      outC->MSG_nationalValues.nvkvintsetArray[i285].nvkintArray[i284].m_nvkvint12 =
        0.0;
      outC->MSG_nationalValues.nvkvintsetArray[i285].nvkintArray[i284].m_nvkvint23 =
        0.0;
    }
  }
  for (i286 = 0; i286 < 7; i286++) {
    outC->MSG_nationalValues.nvkrintArray[i286].valid = kcg_true;
    outC->MSG_nationalValues.nvkrintArray[i286].l_nvkrint = L_NVKRINT_0m;
    outC->MSG_nationalValues.nvkrintArray[i286].m_nvkrint = 0.0;
  }
  outC->MSG_nationalValues.m_nvktint = 0.0;
  outC->DMI_TrainData.valid = kcg_true;
  outC->DMI_TrainData.systemTime = 0;
  outC->DMI_TrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->DMI_TrainData.l_train = 0;
  outC->DMI_TrainData.m_brakeperct = 0;
  outC->DMI_TrainData.v_maxTrain = 0;
  outC->DMI_TrainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->DMI_TrainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->DMI_TrainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->SDM_EOA_overpassed = kcg_true;
  outC->MSG_trackMessage.valid = kcg_true;
  outC->MSG_trackMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->MSG_trackMessage.radioMetadata.t_train_reference = kcg_true;
  outC->MSG_trackMessage.radioMetadata.nid_em = kcg_true;
  outC->MSG_trackMessage.radioMetadata.q_scale = kcg_true;
  outC->MSG_trackMessage.radioMetadata.d_sr = kcg_true;
  outC->MSG_trackMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->MSG_trackMessage.radioMetadata.d_ref = kcg_true;
  outC->MSG_trackMessage.radioMetadata.q_dir = kcg_true;
  outC->MSG_trackMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->MSG_trackMessage.radioMetadata.m_version = kcg_true;
  outC->MSG_trackMessage.BG_Common_Header.valid = kcg_true;
  outC->MSG_trackMessage.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->MSG_trackMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->MSG_trackMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->MSG_trackMessage.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->MSG_trackMessage.BG_Common_Header.m_mcount = 0;
  outC->MSG_trackMessage.BG_Common_Header.nid_c = 0;
  outC->MSG_trackMessage.BG_Common_Header.nid_bg = 0;
  outC->MSG_trackMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->MSG_trackMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->MSG_trackMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->MSG_trackMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->MSG_trackMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->MSG_trackMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->MSG_trackMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->MSG_trackMessage.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->MSG_trackMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->MSG_trackMessage.Radio_Common_Header.radioDevice = 0;
  outC->MSG_trackMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->MSG_trackMessage.Radio_Common_Header.nid_message = 0;
  outC->MSG_trackMessage.Radio_Common_Header.t_train = 0;
  outC->MSG_trackMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->MSG_trackMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->MSG_trackMessage.Radio_Common_Header.t_train_reference = 0;
  outC->MSG_trackMessage.Radio_Common_Header.nid_em = 0;
  outC->MSG_trackMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->MSG_trackMessage.Radio_Common_Header.d_sr = 0;
  outC->MSG_trackMessage.Radio_Common_Header.t_sh_rqst = 0;
  outC->MSG_trackMessage.Radio_Common_Header.d_ref = 0;
  outC->MSG_trackMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->MSG_trackMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->MSG_trackMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i287 = 0; i287 < 30; i287++) {
    outC->MSG_trackMessage.packets.PacketHeaders[i287].nid_packet = 0;
    outC->MSG_trackMessage.packets.PacketHeaders[i287].q_dir = Q_DIR_Reverse;
    outC->MSG_trackMessage.packets.PacketHeaders[i287].valid = kcg_true;
    outC->MSG_trackMessage.packets.PacketHeaders[i287].startAddress = 0;
    outC->MSG_trackMessage.packets.PacketHeaders[i287].endAddress = 0;
  }
  for (i288 = 0; i288 < 500; i288++) {
    outC->MSG_trackMessage.packets.PacketData[i288] = 0;
  }
  outC->MSG_trackMessage.sendingRBC.valid = kcg_true;
  outC->MSG_trackMessage.sendingRBC.nid_c = 0;
  outC->MSG_trackMessage.sendingRBC.rbc_id = 0;
  outC->MSG_trackMessage.sendingRBC.device_id = 0;
  outC->DMI_entryRequest.valid = kcg_true;
  outC->DMI_entryRequest.system_clock = 0;
  outC->DMI_entryRequest.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->TIU_trainStatus.valid = kcg_true;
  outC->TIU_trainStatus.deskOpen = kcg_true;
  outC->TIU_trainStatus.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->TIU_trainStatus.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->IfBlock1_clock = kcg_true;
  outC->_L627_IfBlock1.compatibleModeAndLevel = kcg_true;
  outC->_L627_IfBlock1.level = M_LEVEL_Level_0;
  outC->_L627_IfBlock1.newLevel = kcg_true;
  outC->_L627_IfBlock1.Mode = M_MODE_Full_Supervision;
  outC->_L627_IfBlock1.newMode = kcg_true;
  outC->_L526_IfBlock1 = M_LEVEL_Level_0;
  outC->_L725_IfBlock1.number = 0;
  for (i289 = 0; i289 < 32; i289++) {
    outC->_L725_IfBlock1.levelList[i289].level = M_LEVEL_Level_0;
    outC->_L725_IfBlock1.levelList[i289].nid_stm = 0;
  }
  outC->_L5_IfBlock1.valid = kcg_true;
  outC->_L5_IfBlock1.lastActiveLevel = M_LEVEL_Level_0;
  outC->_L5_IfBlock1.lastActiveNTC = 0;
  outC->_L5_IfBlock1.availableLevelsList.number = 0;
  for (i290 = 0; i290 < 32; i290++) {
    outC->_L5_IfBlock1.availableLevelsList.levelList[i290].level =
      M_LEVEL_Level_0;
    outC->_L5_IfBlock1.availableLevelsList.levelList[i290].nid_stm = 0;
  }
  outC->_L4_IfBlock1.number = 0;
  for (i291 = 0; i291 < 32; i291++) {
    outC->_L4_IfBlock1.levelList[i291].level = M_LEVEL_Level_0;
    outC->_L4_IfBlock1.levelList[i291].nid_stm = 0;
  }
  outC->_L3_IfBlock1.valid = kcg_true;
  outC->_L3_IfBlock1.lastActiveLevel = M_LEVEL_Level_0;
  outC->_L3_IfBlock1.lastActiveNTC = 0;
  outC->_L3_IfBlock1.availableLevelsList.number = 0;
  for (i292 = 0; i292 < 32; i292++) {
    outC->_L3_IfBlock1.availableLevelsList.levelList[i292].level =
      M_LEVEL_Level_0;
    outC->_L3_IfBlock1.availableLevelsList.levelList[i292].nid_stm = 0;
  }
  outC->_L1_IfBlock1.valid = kcg_true;
  outC->_L1_IfBlock1.lastActiveLevel = M_LEVEL_Level_0;
  outC->_L1_IfBlock1.lastActiveNTC = 0;
  outC->_L1_IfBlock1.availableLevelsList.number = 0;
  for (i293 = 0; i293 < 32; i293++) {
    outC->_L1_IfBlock1.availableLevelsList.levelList[i293].level =
      M_LEVEL_Level_0;
    outC->_L1_IfBlock1.availableLevelsList.levelList[i293].nid_stm = 0;
  }
  outC->_L7_IfBlock1 = M_LEVEL_Level_0;
  outC->_L6_IfBlock1.valid = kcg_true;
  outC->_L6_IfBlock1.lastActiveLevel = M_LEVEL_Level_0;
  outC->_L6_IfBlock1.lastActiveNTC = 0;
  outC->_L6_IfBlock1.availableLevelsList.number = 0;
  for (i294 = 0; i294 < 32; i294++) {
    outC->_L6_IfBlock1.availableLevelsList.levelList[i294].level =
      M_LEVEL_Level_0;
    outC->_L6_IfBlock1.availableLevelsList.levelList[i294].nid_stm = 0;
  }
  outC->_L9_IfBlock1.compatibleModeAndLevel = kcg_true;
  outC->_L9_IfBlock1.level = M_LEVEL_Level_0;
  outC->_L9_IfBlock1.newLevel = kcg_true;
  outC->_L9_IfBlock1.Mode = M_MODE_Full_Supervision;
  outC->_L9_IfBlock1.newMode = kcg_true;
  outC->_L8_IfBlock1 = M_LEVEL_Level_0;
  outC->_L10_IfBlock1 = M_LEVEL_Level_0;
  outC->ck_every = kcg_true;
  outC->probe_MsgErrors.linkedBGError = kcg_true;
  outC->probe_MsgErrors.unlinkedBGError = kcg_true;
  outC->probe_MsgErrors.BG_versionIncompatible = kcg_true;
  outC->probe_MsgErrors.radioSequenceError = kcg_true;
  outC->probe_MsgErrors.tNvContactError = kcg_true;
  outC->probe_MsgErrors.otherTimingError = kcg_true;
  outC->probe_MsgErrors.radioMessageConsistencyError = kcg_true;
  outC->probe_MsgErrors.nid_c = 0;
  outC->probe_MsgErrors.nid_errorbg = 0;
  outC->probe_PositioningErrors.outOfMemSpace = kcg_true;
  outC->probe_PositioningErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->probe_PositioningErrors.positionCalculation_inconsistent = kcg_true;
  outC->probe_PositioningErrors.linkedBGMissed = kcg_true;
  outC->probe_PositioningErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->probe_PositioningErrors.BG_LinkingConsistencyError = kcg_true;
  outC->probe_PositioningErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->probe_PositioningErrors.doubleRepositioningError = kcg_true;
  outC->probe_PositioningErrors.bg.valid = kcg_true;
  outC->probe_PositioningErrors.bg.nid_c = 0;
  outC->probe_PositioningErrors.bg.nid_bg = 0;
  outC->probe_PositioningErrors.bg.q_link = Q_LINK_Unlinked;
  outC->probe_PositioningErrors.bg.location.nominal = 0;
  outC->probe_PositioningErrors.bg.location.d_min = 0;
  outC->probe_PositioningErrors.bg.location.d_max = 0;
  outC->probe_PositioningErrors.bg.seqNoOnTrack = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.valid = kcg_true;
  outC->probe_PositioningErrors.bg.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.expectedLocation.nominal = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.expectedLocation.d_min = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.expectedLocation.d_max = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.d_link.nominal = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.d_link.d_min = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.d_link.d_max = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.d_link = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.nid_c = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->probe_PositioningErrors.bg.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->probe_PositioningErrors.bg.infoFromPassing.valid = kcg_true;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.m_mcount = 0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.nid_c = 0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.nid_bg = 0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->probe_PositioningErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i295 = 0; i295 < 33; i295++) {
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].valid =
      kcg_true;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].nid_LRBG =
      0;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].q_dir =
      Q_DIR_Reverse;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].q_scale =
      Q_SCALE_10_cm_scale;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].d_link = 0;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].nid_c = 0;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].nid_bg = 0;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->probe_PositioningErrors.bg.infoFromPassing.linkedBGs[i295].q_locacc =
      0;
  }
  outC->probe_PositioningErrors.bg.missed = kcg_true;
  outC->probe_lastBG_ID = 0;
  outC->probe_lastMSG_in = 0;
  outC->probe_BG_ID = 0;
  outC->probe_MSG_in = 0;
  outC->probe_newInput = kcg_true;
  outC->probe_nid_packet1 = 0;
  outC->probe_nid_packet2 = 0;
  outC->probe_TTrain = 0;
  outC->probe_MSGout = 0;
  outC->probe_Msg_5 = 0;
  outC->probe_Msg_4 = 0;
  outC->probe_Msg_3 = 0;
  outC->probe_Msg_2 = 0;
  outC->probe_Msg_1 = 0;
  outC->probe_BG_afterCheck = 0;
  outC->probe_LRBG = 0;
  outC->probe_MSGinAfterFilter = 0;
  outC->probe_distBG = 0.0;
  outC->probe_distMsg = 0.0;
  outC->probe_Balises.isChanged = kcg_true;
  outC->probe_Balises.bg_id = 0;
  outC->probe_Balises.nid_c = 0;
  outC->probe_Balises.errors.linkedBGError = kcg_true;
  outC->probe_Balises.errors.unlinkedBGError = kcg_true;
  outC->probe_Balises.errors.BG_versionIncompatible = kcg_true;
  outC->probe_Balises.errors.radioSequenceError = kcg_true;
  outC->probe_Balises.errors.tNvContactError = kcg_true;
  outC->probe_Balises.errors.otherTimingError = kcg_true;
  outC->probe_Balises.errors.radioMessageConsistencyError = kcg_true;
  outC->probe_Balises.errors.nid_c = 0;
  outC->probe_Balises.errors.nid_errorbg = 0;
  outC->probe_Odometry.valid = kcg_true;
  outC->probe_Odometry.timestamp = 0;
  outC->probe_Odometry.odo.o_nominal = 0;
  outC->probe_Odometry.odo.o_min = 0;
  outC->probe_Odometry.odo.o_max = 0;
  outC->probe_Odometry.speed.v_safeNominal = 0;
  outC->probe_Odometry.speed.v_rawNominal = 0;
  outC->probe_Odometry.speed.v_lower = 0;
  outC->probe_Odometry.speed.v_upper = 0;
  outC->probe_Odometry.acceleration = 0;
  outC->probe_Odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->probe_Odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->init = kcg_true;
  outC->init24 = kcg_true;
  outC->_L477 = kcg_true;
  outC->ML_MemorizedLevel = M_LEVEL_Level_0;
  outC->MoRC_MN_1 = 0;
  outC->MoRC_RadioID_1 = 0;
  outC->MoRC_RadioStatus_1.registration.valid = kcg_true;
  outC->MoRC_RadioStatus_1.registration.mobileDeviceNo = 0;
  outC->MoRC_RadioStatus_1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_1.registration.nid_mn = 0;
  outC->MoRC_RadioStatus_1.connection.valid = kcg_true;
  outC->MoRC_RadioStatus_1.connection.mobileDeviceNo = 0;
  outC->MoRC_RadioStatus_1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->MoRC_RadioStatus_1.connection.nid_radio = 0;
  outC->MoRC_RadioStatus_1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->MoRC_RadioStatus_1.connection.connectionLost = kcg_true;
  outC->MoRC_RadioStatus_1.connection.isInRadioHole = kcg_true;
  outC->MoRC_RadioStatus_1.session.valid = kcg_true;
  outC->MoRC_RadioStatus_1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->MoRC_RadioStatus_1.session.nid_c = 0;
  outC->MoRC_RadioStatus_1.session.nid_rbc = 0;
  outC->MoRC_RadioStatus_1.session.nid_radio = 0;
  outC->MoRC_ready = kcg_true;
  for (i296 = 0; i296 < 5; i296++) {
    outC->TA_Packets.P_12[i296].valid = kcg_true;
    outC->TA_Packets.P_12[i296].q_dir = Q_DIR_Reverse;
    outC->TA_Packets.P_12[i296].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_Packets.P_12[i296].v_main = 0;
    outC->TA_Packets.P_12[i296].v_loa = 0;
    outC->TA_Packets.P_12[i296].t_loa = 0;
    outC->TA_Packets.P_12[i296].l_section = 0;
    outC->TA_Packets.P_12[i296].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_Packets.P_12[i296].t_sectiontimer_k = 0;
    outC->TA_Packets.P_12[i296].d_sectiontimerstoploc_k = 0;
    outC->TA_Packets.P_12[i296].l_endsection = 0;
    outC->TA_Packets.P_12[i296].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_Packets.P_12[i296].t_sectiontimer = 0;
    outC->TA_Packets.P_12[i296].d_sectiontimerstoploc = 0;
    outC->TA_Packets.P_12[i296].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->TA_Packets.P_12[i296].t_endtimer = 0;
    outC->TA_Packets.P_12[i296].d_endtimerstartloc = 0;
    outC->TA_Packets.P_12[i296].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->TA_Packets.P_12[i296].d_dp = 0;
    outC->TA_Packets.P_12[i296].v_releasedp = 0;
    outC->TA_Packets.P_12[i296].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->TA_Packets.P_12[i296].d_startol = 0;
    outC->TA_Packets.P_12[i296].t_ol = 0;
    outC->TA_Packets.P_12[i296].d_ol = 0;
    outC->TA_Packets.P_12[i296].v_releaseol = 0;
  }
  outC->TA_Packets.P_135.valid = kcg_true;
  outC->TA_Packets.P_135.q_dir = Q_DIR_Reverse;
  outC->TA_Packets.P_137.valid = kcg_true;
  outC->TA_Packets.P_137.q_dir = Q_DIR_Reverse;
  outC->TA_Packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->TA_Packets.P_138.valid = kcg_true;
  outC->TA_Packets.P_138.q_dir = Q_DIR_Reverse;
  outC->TA_Packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_Packets.P_138.d_startreverse = 0;
  outC->TA_Packets.P_138.l_reversearea = 0;
  outC->TA_Packets.P_139.valid = kcg_true;
  outC->TA_Packets.P_139.q_dir = Q_DIR_Reverse;
  outC->TA_Packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_Packets.P_139.d_reverse = 0;
  outC->TA_Packets.P_139.v_reverse = 0;
  for (i297 = 0; i297 < 5; i297++) {
    outC->TA_Packets.P_15[i297].valid = kcg_true;
    outC->TA_Packets.P_15[i297].q_dir = Q_DIR_Reverse;
    outC->TA_Packets.P_15[i297].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_Packets.P_15[i297].v_loa = 0;
    outC->TA_Packets.P_15[i297].t_loa = 0;
    outC->TA_Packets.P_15[i297].l_section = 0;
    outC->TA_Packets.P_15[i297].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_Packets.P_15[i297].t_sectiontimer_k = 0;
    outC->TA_Packets.P_15[i297].d_sectiontimerstoploc_k = 0;
    outC->TA_Packets.P_15[i297].l_endsection = 0;
    outC->TA_Packets.P_15[i297].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->TA_Packets.P_15[i297].t_sectiontimer = 0;
    outC->TA_Packets.P_15[i297].d_sectiontimerstoploc = 0;
    outC->TA_Packets.P_15[i297].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->TA_Packets.P_15[i297].t_endtimer = 0;
    outC->TA_Packets.P_15[i297].d_endtimerstartloc = 0;
    outC->TA_Packets.P_15[i297].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->TA_Packets.P_15[i297].d_dp = 0;
    outC->TA_Packets.P_15[i297].v_releasedp = 0;
    outC->TA_Packets.P_15[i297].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->TA_Packets.P_15[i297].d_startol = 0;
    outC->TA_Packets.P_15[i297].t_ol = 0;
    outC->TA_Packets.P_15[i297].d_ol = 0;
    outC->TA_Packets.P_15[i297].v_releaseol = 0;
  }
  for (i298 = 0; i298 < 7; i298++) {
    outC->TA_Packets.P_21[i298].valid = kcg_true;
    outC->TA_Packets.P_21[i298].q_dir = Q_DIR_Reverse;
    outC->TA_Packets.P_21[i298].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_Packets.P_21[i298].d_gradient = 0;
    outC->TA_Packets.P_21[i298].q_gdir = Q_GDIR_downhill;
    outC->TA_Packets.P_21[i298].g_a = 0;
  }
  outC->TA_Packets.P_27.valid = kcg_true;
  outC->TA_Packets.P_27.q_dir = Q_DIR_Reverse;
  outC->TA_Packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->TA_Packets.P_27.d_static = 0;
  outC->TA_Packets.P_27.v_static = 0;
  outC->TA_Packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (i299 = 0; i299 < 7; i299++) {
    outC->TA_Packets.P_27.diffArray[i299].valid = kcg_true;
    outC->TA_Packets.P_27.diffArray[i299].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->TA_Packets.P_27.diffArray[i299].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->TA_Packets.P_27.diffArray[i299].nc_diff = 0;
    outC->TA_Packets.P_27.diffArray[i299].v_diff = 0;
  }
  for (i301 = 0; i301 < 7; i301++) {
    outC->TA_Packets.P_27.SSPArray[i301].valid = kcg_true;
    outC->TA_Packets.P_27.SSPArray[i301].d_static = 0;
    outC->TA_Packets.P_27.SSPArray[i301].v_static = 0;
    outC->TA_Packets.P_27.SSPArray[i301].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (i300 = 0; i300 < 7; i300++) {
      outC->TA_Packets.P_27.SSPArray[i301].diffArray[i300].valid = kcg_true;
      outC->TA_Packets.P_27.SSPArray[i301].diffArray[i300].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->TA_Packets.P_27.SSPArray[i301].diffArray[i300].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->TA_Packets.P_27.SSPArray[i301].diffArray[i300].nc_diff = 0;
      outC->TA_Packets.P_27.SSPArray[i301].diffArray[i300].v_diff = 0;
    }
  }
  for (i302 = 0; i302 < 7; i302++) {
    outC->TA_Packets.P_41[i302].valid = kcg_true;
    outC->TA_Packets.P_41[i302].q_dir = Q_DIR_Reverse;
    outC->TA_Packets.P_41[i302].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_Packets.P_41[i302].d_leveltr = 0;
    outC->TA_Packets.P_41[i302].m_leveltr = M_LEVELTR_Level_0;
    outC->TA_Packets.P_41[i302].nid_ntc = 0;
    outC->TA_Packets.P_41[i302].l_ackleveltr = 0;
  }
  for (i303 = 0; i303 < 7; i303++) {
    outC->TA_Packets.P_46[i303].valid = kcg_true;
    outC->TA_Packets.P_46[i303].q_dir = Q_DIR_Reverse;
    outC->TA_Packets.P_46[i303].m_leveltr = M_LEVELTR_Level_0;
    outC->TA_Packets.P_46[i303].nid_ntc = 0;
  }
  for (i304 = 0; i304 < 7; i304++) {
    outC->TA_Packets.P_63[i304].valid = kcg_true;
    outC->TA_Packets.P_63[i304].q_dir = Q_DIR_Reverse;
    outC->TA_Packets.P_63[i304].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->TA_Packets.P_63[i304].nid_c = 0;
    outC->TA_Packets.P_63[i304].nid_bg = 0;
  }
  for (i305 = 0; i305 < 3; i305++) {
    outC->TA_Packets.P_80[i305].valid = kcg_true;
    outC->TA_Packets.P_80[i305].q_dir = Q_DIR_Reverse;
    outC->TA_Packets.P_80[i305].q_scale = Q_SCALE_10_cm_scale;
    outC->TA_Packets.P_80[i305].d_mamode = 0;
    outC->TA_Packets.P_80[i305].m_mamode = M_MAMODE_On_Sight;
    outC->TA_Packets.P_80[i305].v_mamode = 0;
    outC->TA_Packets.P_80[i305].l_mamode = 0;
    outC->TA_Packets.P_80[i305].l_ackmamode = 0;
    outC->TA_Packets.P_80[i305].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->TA_Packets.LRBG = 0;
  outC->TA_Packets.referenceLocation = 0;
  outC->rep_P1.valid = kcg_true;
  outC->rep_P1.packet1.NID_PACKET = 0;
  outC->rep_P1.packet1.L_PACKET = 0;
  outC->rep_P1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->rep_P1.packet1.NID_LRBG = 0;
  outC->rep_P1.packet1.NID_PRVLRBG = 0;
  outC->rep_P1.packet1.D_LRBG = 0;
  outC->rep_P1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->rep_P1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->rep_P1.packet1.L_DOUBTOVER = 0;
  outC->rep_P1.packet1.L_DOUBTUNDER = 0;
  outC->rep_P1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->rep_P1.packet1.L_TRAININT = 0;
  outC->rep_P1.packet1.V_TRAIN = 0;
  outC->rep_P1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->rep_P1.packet1.mode = M_MODE_Full_Supervision;
  outC->rep_P1.packet1.level = M_LEVEL_Level_0;
  outC->rep_P1.packet1.NID_NTC = 0;
  outC->td_status.valid = kcg_true;
  outC->td_status.validatedByDriver = kcg_true;
  outC->td_status.RBCsystemVersionOnboard = kcg_true;
  outC->td_status.validatedbyRBC = kcg_true;
  outC->td_status.waitingForRBCResponse = kcg_true;
  outC->td_status.driverIsModificationTrainData = kcg_true;
  outC->td_status.timeStampValidateToRBC = 0;
  outC->rep_P0.valid = kcg_true;
  outC->rep_P0.packet0.NID_PACKET = 0;
  outC->rep_P0.packet0.L_PACKET = 0;
  outC->rep_P0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->rep_P0.packet0.NID_LRBG = 0;
  outC->rep_P0.packet0.D_LRBG = 0;
  outC->rep_P0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->rep_P0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->rep_P0.packet0.L_DOUBTOVER = 0;
  outC->rep_P0.packet0.L_DOUBTUNDER = 0;
  outC->rep_P0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->rep_P0.packet0.L_TRAININT = 0;
  outC->rep_P0.packet0.V_TRAIN = 0;
  outC->rep_P0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->rep_P0.packet0.mode = M_MODE_Full_Supervision;
  outC->rep_P0.packet0.level = M_LEVEL_Level_0;
  outC->rep_P0.packet0.NID_NTC = 0;
  outC->td_events.trainStandStill = kcg_true;
  outC->td_events.driverRequestModify = kcg_true;
  outC->td_events.communicationSessionEstablished = kcg_true;
  outC->td_events.safeRadioConnectionLost = kcg_true;
  outC->td_events.approachingRBCarea = kcg_true;
  outC->td_events.MoRCreadyFlag = kcg_true;
  outC->PROC_start_ack = kcg_true;
  for (i306 = 0; i306 < 31; i306++) {
    outC->EVC_TextMessageStatusList[i306].valid = kcg_true;
    outC->EVC_TextMessageStatusList[i306].dmi_textMessageID = 0;
    outC->EVC_TextMessageStatusList[i306].timeStamp = 0;
    outC->EVC_TextMessageStatusList[i306].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->EVC_TextMessageStatusList[i306].context = con_undefined_DMI_Types_Pkg;
    outC->EVC_TextMessageStatusList[i306].nid_textmessage = 0;
    outC->EVC_TextMessageStatusList[i306].whichLevel = M_LEVEL_Level_0;
    outC->EVC_TextMessageStatusList[i306].whichMode = M_MODE_Full_Supervision;
  }
  outC->EVC_ActiveLevelList.number = 0;
  for (i307 = 0; i307 < 32; i307++) {
    outC->EVC_ActiveLevelList.levelList[i307].level = M_LEVEL_Level_0;
    outC->EVC_ActiveLevelList.levelList[i307].nid_stm = 0;
  }
  outC->EVC_PersistentData.valid = kcg_true;
  outC->EVC_PersistentData.lastActiveLevel = M_LEVEL_Level_0;
  outC->EVC_PersistentData.lastActiveNTC = 0;
  outC->EVC_PersistentData.availableLevelsList.number = 0;
  for (i308 = 0; i308 < 32; i308++) {
    outC->EVC_PersistentData.availableLevelsList.levelList[i308].level =
      M_LEVEL_Level_0;
    outC->EVC_PersistentData.availableLevelsList.levelList[i308].nid_stm = 0;
  }
  outC->MSG_EmergencyBrakeActive = kcg_true;
  outC->ML_ModeAndLevel.compatibleModeAndLevel = kcg_true;
  outC->ML_ModeAndLevel.level = M_LEVEL_Level_0;
  outC->ML_ModeAndLevel.newLevel = kcg_true;
  outC->ML_ModeAndLevel.Mode = M_MODE_Full_Supervision;
  outC->ML_ModeAndLevel.newMode = kcg_true;
  outC->EVC_currentNTC = 0;
  outC->MSG_lastRadioMsgTimestamp = 0;
  outC->MoRC_newSessionEstablished = kcg_true;
  outC->TIU_trainProperties.nid_engine = 0;
  outC->TIU_trainProperties.nid_operational = 0;
  outC->TIU_trainProperties.l_train = 0;
  outC->TIU_trainProperties.d_baliseAntenna_2_frontend.nominal = 0;
  outC->TIU_trainProperties.d_baliseAntenna_2_frontend.d_min = 0;
  outC->TIU_trainProperties.d_baliseAntenna_2_frontend.d_max = 0;
  outC->TIU_trainProperties.d_frontend_2_rearend.nominal = 0;
  outC->TIU_trainProperties.d_frontend_2_rearend.d_min = 0;
  outC->TIU_trainProperties.d_frontend_2_rearend.d_max = 0;
  outC->TIU_trainProperties.locationAccuracy_DefaultValue.nominal = 0;
  outC->TIU_trainProperties.locationAccuracy_DefaultValue.d_min = 0;
  outC->TIU_trainProperties.locationAccuracy_DefaultValue.d_max = 0;
  outC->TIU_trainProperties.centerDetectionAcc_DefaultValue.nominal = 0;
  outC->TIU_trainProperties.centerDetectionAcc_DefaultValue.d_min = 0;
  outC->TIU_trainProperties.centerDetectionAcc_DefaultValue.d_max = 0;
  for (i310 = 0; i310 < 41; i310++) {
    outC->CALC_BGs[i310].valid = kcg_true;
    outC->CALC_BGs[i310].nid_c = 0;
    outC->CALC_BGs[i310].nid_bg = 0;
    outC->CALC_BGs[i310].q_link = Q_LINK_Unlinked;
    outC->CALC_BGs[i310].location.nominal = 0;
    outC->CALC_BGs[i310].location.d_min = 0;
    outC->CALC_BGs[i310].location.d_max = 0;
    outC->CALC_BGs[i310].seqNoOnTrack = 0;
    outC->CALC_BGs[i310].infoFromLinking.valid = kcg_true;
    outC->CALC_BGs[i310].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->CALC_BGs[i310].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->CALC_BGs[i310].infoFromLinking.expectedLocation.nominal = 0;
    outC->CALC_BGs[i310].infoFromLinking.expectedLocation.d_min = 0;
    outC->CALC_BGs[i310].infoFromLinking.expectedLocation.d_max = 0;
    outC->CALC_BGs[i310].infoFromLinking.d_link.nominal = 0;
    outC->CALC_BGs[i310].infoFromLinking.d_link.d_min = 0;
    outC->CALC_BGs[i310].infoFromLinking.d_link.d_max = 0;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.d_link = 0;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.nid_c = 0;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->CALC_BGs[i310].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->CALC_BGs[i310].infoFromPassing.valid = kcg_true;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.valid = kcg_true;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.m_mcount = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.nid_c = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.nid_bg = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->CALC_BGs[i310].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i309 = 0; i309 < 33; i309++) {
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].valid = kcg_true;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].nid_LRBG = 0;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].q_dir =
        Q_DIR_Reverse;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].q_scale =
        Q_SCALE_10_cm_scale;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].d_link = 0;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].nid_c = 0;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].nid_bg = 0;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->CALC_BGs[i310].infoFromPassing.linkedBGs[i309].q_locacc = 0;
    }
    outC->CALC_BGs[i310].missed = kcg_true;
  }
  outC->MoRC_supervisingRBC_Id.valid = kcg_true;
  outC->MoRC_supervisingRBC_Id.mobileDeviceNo = 0;
  outC->MoRC_supervisingRBC_Id.nid_c = 0;
  outC->MoRC_supervisingRBC_Id.nid_RBC = 0;
  outC->MoRC_supervisingRBC_Id.nid_radio = 0;
  outC->MoRC_supervisingRBC_Id.nid_mn = 0;
  outC->td_trainData.valid = kcg_true;
  outC->td_trainData.acknowledgedByDriver = kcg_true;
  outC->td_trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->td_trainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->td_trainData.trainLength = 0;
  outC->td_trainData.brakePerctage = 0;
  outC->td_trainData.maxTrainSpeed = 0;
  outC->td_trainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->td_trainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->td_trainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->td_trainData.axleNumber = 0;
  outC->td_trainData.numberNationalSystems = 0;
  for (i311 = 0; i311 < 5; i311++) {
    outC->td_trainData.nationSystems[i311] = 0;
  }
  outC->td_trainData.numberTractionSystems = 0;
  for (i312 = 0; i312 < 4; i312++) {
    outC->td_trainData.tractionSystem[i312].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->td_trainData.tractionSystem[i312].nid_ctraction = 0;
  }
  outC->DMI_sdmToDMI.valid = kcg_true;
  outC->DMI_sdmToDMI.targetSpeed = 0;
  outC->DMI_sdmToDMI.permittedSpeed = 0;
  outC->DMI_sdmToDMI.releaseSpeed = 0;
  outC->DMI_sdmToDMI.locationBrakeTarget = 0;
  outC->DMI_sdmToDMI.location_brake_curve_starting_point = 0;
  outC->DMI_sdmToDMI.interventionSpeed = 0;
  outC->DMI_sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->DMI_sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->DMI_sdmToDMI.distanceIndicationPoint = 0;
  outC->SDM_speedSupervisionBrakeCommand.valid = kcg_true;
  outC->SDM_speedSupervisionBrakeCommand.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->SDM_speedSupervisionBrakeCommand.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->CALC_TrainPosition.valid = kcg_true;
  outC->CALC_TrainPosition.timestamp = 0;
  outC->CALC_TrainPosition.trainPositionIsUnknown = kcg_true;
  outC->CALC_TrainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->CALC_TrainPosition.trainPosition.nominal = 0;
  outC->CALC_TrainPosition.trainPosition.d_min = 0;
  outC->CALC_TrainPosition.trainPosition.d_max = 0;
  outC->CALC_TrainPosition.estimatedFrontEndPosition = 0;
  outC->CALC_TrainPosition.minSafeFrontEndPosition = 0;
  outC->CALC_TrainPosition.maxSafeFrontEndPostion = 0;
  outC->CALC_TrainPosition.LRBG.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.nid_c = 0;
  outC->CALC_TrainPosition.LRBG.nid_bg = 0;
  outC->CALC_TrainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->CALC_TrainPosition.LRBG.location.nominal = 0;
  outC->CALC_TrainPosition.LRBG.location.d_min = 0;
  outC->CALC_TrainPosition.LRBG.location.d_max = 0;
  outC->CALC_TrainPosition.LRBG.seqNoOnTrack = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->CALC_TrainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->CALC_TrainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i313 = 0; i313 < 33; i313++) {
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].valid =
      kcg_true;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].nid_LRBG = 0;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].q_dir =
      Q_DIR_Reverse;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].q_scale =
      Q_SCALE_10_cm_scale;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].d_link = 0;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].nid_c = 0;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].nid_bg = 0;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->CALC_TrainPosition.LRBG.infoFromPassing.linkedBGs[i313].q_locacc = 0;
  }
  outC->CALC_TrainPosition.LRBG.missed = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.nid_c = 0;
  outC->CALC_TrainPosition.prvLRBG.nid_bg = 0;
  outC->CALC_TrainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->CALC_TrainPosition.prvLRBG.location.nominal = 0;
  outC->CALC_TrainPosition.prvLRBG.location.d_min = 0;
  outC->CALC_TrainPosition.prvLRBG.location.d_max = 0;
  outC->CALC_TrainPosition.prvLRBG.seqNoOnTrack = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->CALC_TrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->CALC_TrainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i314 = 0; i314 < 33; i314++) {
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].valid =
      kcg_true;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].nid_LRBG =
      0;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].q_dir =
      Q_DIR_Reverse;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].q_scale =
      Q_SCALE_10_cm_scale;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].d_link = 0;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].nid_c = 0;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].nid_bg = 0;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->CALC_TrainPosition.prvLRBG.infoFromPassing.linkedBGs[i314].q_locacc =
      0;
  }
  outC->CALC_TrainPosition.prvLRBG.missed = kcg_true;
  outC->CALC_TrainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->CALC_TrainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->CALC_TrainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->CALC_TrainPosition.linkingIsUsedOnboard = kcg_true;
  outC->CALC_TrainPosition.estimatedRearEndPosition = 0;
  outC->CALC_TrainPosition.minSafeRearEndPosition = 0;
  outC->CALC_TrainPosition.maxSafeRearEndPosition = 0;
  outC->DMI_currentDMIStatus.DMI_Active = kcg_true;
  outC->DMI_currentDMIStatus.DMI_Error = kcg_true;
  outC->DMI_currentDMIStatus.DMI_DriverIdValidated = kcg_true;
  outC->DMI_currentDMIStatus.DMI_LevelSelectedByDirver = kcg_true;
  outC->DMI_currentDMIStatus.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->DMI_currentDMIStatus.DMI_TrainRunningNumberValidated = kcg_true;
  outC->DMI_currentDMIStatus.DMI_TrainDataValidated = kcg_true;
  outC->DMI_currentDMIStatus.DMI_StartReceived = kcg_true;
  outC->DMI_currentDMIStatus.DMI_Identifier.valid = kcg_true;
  outC->DMI_currentDMIStatus.DMI_Identifier.systemTime = 0;
  outC->DMI_currentDMIStatus.DMI_Identifier.DMI_Identifier =
    DMI_1_DMI_Types_Pkg;
  outC->DMI_currentDMIStatus.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->DMI_currentDMIStatus.DMI_Identifier.l_name = 0;
  for (i315 = 0; i315 < 255; i315++) {
    outC->DMI_currentDMIStatus.DMI_Identifier.DMI_name[i315] = ' ';
  }
  outC->DMI_currentDMIStatus.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->PROC_powerOff_to_MoRC = kcg_true;
  outC->PROC_statusstartofmissionongoing_to_MoRC = kcg_true;
  outC->PROC_powerUp_to_MoRC = kcg_true;
  outC->PROC_radioCmdFromProcedures.valid = kcg_true;
  outC->PROC_radioCmdFromProcedures.messageSource =
    msrc_undefined_Common_Types_Pkg;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.radioDevice = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.receivedSystemTime = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.nid_message = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.t_train = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.nid_lrbg = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.t_train_reference = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.nid_em = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.d_sr = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.t_sh_rqst = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.d_ref = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.d_emergencystop = 0;
  outC->PROC_radioCmdFromProcedures.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->PROC_radioCmdFromProcedures.p42.valid = kcg_true;
  outC->PROC_radioCmdFromProcedures.p42.q_dir = Q_DIR_Reverse;
  outC->PROC_radioCmdFromProcedures.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  outC->PROC_radioCmdFromProcedures.p42.nid_c = 0;
  outC->PROC_radioCmdFromProcedures.p42.nid_rbc = 0;
  outC->PROC_radioCmdFromProcedures.p42.nid_radio = 0;
  outC->PROC_radioCmdFromProcedures.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->PROC_radioCmdFromProcedures.p45.valid = kcg_true;
  outC->PROC_radioCmdFromProcedures.p45.q_dir = Q_DIR_Reverse;
  outC->PROC_radioCmdFromProcedures.p45.nid_mn = 0;
  outC->PROC_radioCmdFromProcedures.sendingRBC.valid = kcg_true;
  outC->PROC_radioCmdFromProcedures.sendingRBC.nid_c = 0;
  outC->PROC_radioCmdFromProcedures.sendingRBC.rbc_id = 0;
  outC->PROC_radioCmdFromProcedures.sendingRBC.device_id = 0;
  outC->debugCurrentLevel = M_LEVEL_Level_0;
  outC->debugCurrentMode = M_MODE_Full_Supervision;
  outC->debugIinterventionSpeed = 0.0;
  outC->debugPermittedSpeed = 0.0;
  outC->debugTrainPositionDeltaMin = 0;
  outC->debugTrainPositionDeltaMax = 0;
  outC->debugTrainPositionNominal = 0;
  outC->EVC_ready = kcg_true;
  outC->API_toTIU.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.valid = kcg_true;
  outC->API_toTIU.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.valid = kcg_true;
  outC->API_toTIU.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.valid = kcg_true;
  outC->API_toTIU.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.valid = kcg_true;
  outC->API_toTIU.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->API_toTIU.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.valid = kcg_true;
  outC->API_toTIU.info.change_traction_system.d_test_traction.now = 0;
  outC->API_toTIU.info.change_traction_system.d_test_traction.distance = 0;
  outC->API_toTIU.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->API_toTIU.info.change_traction_system.m_voltage.NID_ctraction = 0;
  outC->API_toTIU.info.passenger_door_control_info.valid = kcg_true;
  outC->API_toTIU.info.passenger_door_control_info.door_control_info = 0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.now =
    0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.d_test_current.distance =
    0;
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->API_toTIU.info.change_of_allowed_current_consumption.m_current.restriction =
    0;
  for (i316 = 0; i316 < 999; i316++) {
    outC->API_toDMI[i316] = 0;
  }
  outC->API_RTM_management.valid = kcg_true;
  outC->API_RTM_management.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->API_RTM_management.networkID = 0;
  outC->API_toRBC.Message.valid = kcg_true;
  outC->API_toRBC.Message.nid_message = 0;
  outC->API_toRBC.Message.l_message = 0;
  outC->API_toRBC.Message.t_train = 0;
  outC->API_toRBC.Message.nid_engine = 0;
  outC->API_toRBC.Message.field1 = 0;
  outC->API_toRBC.Message.field2 = 0;
  outC->API_toRBC.Message.field3 = 0;
  for (i317 = 0; i317 < 50; i317++) {
    outC->API_toRBC.OptionalPackets[i317] = 0;
  }
  outC->resetOut = kcg_true;
  /* 1 */ ProbeEVC_init_EnvSim(&outC->_23_Context_1);
  /* 3 */ probe_MsgOut_init_RadioSupport_Pkg(&outC->_22_Context_3);
  /* 2 */ collectRadioOutput_init_radioOutput_Pkg(&outC->_21_Context_2);
  /* 1 */ collectRadioOutput_init_radioOutput_Pkg(&outC->_20_Context_1);
  /* 3 */ checkGeneralMessage_init_trainData_pkg(&outC->_19_Context_3);
  /* 2 */ setProbes_init_xdebugSupport_Pkg(&outC->_18_Context_2);
  /* 2 */ distanceLastMSG_init_xdebugSupport_Pkg(&outC->_17_Context_2);
  /* 2 */ distanceLastBG_init_xdebugSupport_Pkg(&outC->_16_Context_2);
  /* 2 */ setProbesBalises_init_xdebugSupport_Pkg(&outC->_15_Context_2);
  /* 2 */ FlipFlopJK_init_digital(&outC->_14_Context_2);
  /* 2 */ manageDMI_Output_init_manage_DMI_Output_Pkg(&outC->_13_Context_2);
  /* 2 */ Master_Procedure_init_ManageProcedure_Pkg(&outC->_12_Context_2);
  /* 1 */ MoRC_HO_init_MoRC_HO_Pkg(&outC->_11_Context_1);
  /* 2 */
  ProvidePositionReport_init_ProvidePositionReport_Pkg(&outC->_10_Context_2);
  /* 1 */
  maintainMobileConnectionContext_init_EVC_Support_Pkg(&outC->_9_Context_1);
  /* 1 */
  maintainMobileRegistrationContext_init_EVC_Support_Pkg(&outC->_8_Context_1);
  /* 2 */ TIU_OutputIntegration_init_output_to_TIU_API_Pkg(&outC->_7_Context_2);
  /* 2 */
  SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
    &outC->_6_Context_2);
  /* 2 */ ManageLevelAndMode_init(&outC->_5_Context_2);
  /* 1 */ maintainTrainProperties_init_EVC_Support_Pkg(&outC->Context_1);
  /* 2 */ patchEmergencyBrakeMsg_init_EVC_Support_Pkg(&outC->_4_Context_2);
  /* 2 */ TrackAtlas_init_TrackAtlas(&outC->_3_Context_2);
  /* 2 */ trainData_init_trainData_pkg(&outC->_2_Context_2);
  /* 3 */ manageDMI_Input_init_manage_DMI_Input_Pkg(&outC->_1_Context_3);
  /* 3 */
  calculateTrainPosition_init_CalculateTrainPosition_Pkg(&outC->Context_3);
  /* 2 */
  Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
    &outC->Context_2);
  /* 5 */ manageTIU_input_init_input_from_TIU_API_Pkg(&outC->Context_5);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVC_reset(outC_EVC *outC)
{
  outC->init = kcg_true;
  outC->init24 = kcg_true;
  /* 1 */ ProbeEVC_reset_EnvSim(&outC->_23_Context_1);
  /* 3 */ probe_MsgOut_reset_RadioSupport_Pkg(&outC->_22_Context_3);
  /* 2 */ collectRadioOutput_reset_radioOutput_Pkg(&outC->_21_Context_2);
  /* 1 */ collectRadioOutput_reset_radioOutput_Pkg(&outC->_20_Context_1);
  /* 3 */ checkGeneralMessage_reset_trainData_pkg(&outC->_19_Context_3);
  /* 2 */ setProbes_reset_xdebugSupport_Pkg(&outC->_18_Context_2);
  /* 2 */ distanceLastMSG_reset_xdebugSupport_Pkg(&outC->_17_Context_2);
  /* 2 */ distanceLastBG_reset_xdebugSupport_Pkg(&outC->_16_Context_2);
  /* 2 */ setProbesBalises_reset_xdebugSupport_Pkg(&outC->_15_Context_2);
  /* 2 */ FlipFlopJK_reset_digital(&outC->_14_Context_2);
  /* 2 */ manageDMI_Output_reset_manage_DMI_Output_Pkg(&outC->_13_Context_2);
  /* 2 */ Master_Procedure_reset_ManageProcedure_Pkg(&outC->_12_Context_2);
  /* 1 */ MoRC_HO_reset_MoRC_HO_Pkg(&outC->_11_Context_1);
  /* 2 */
  ProvidePositionReport_reset_ProvidePositionReport_Pkg(&outC->_10_Context_2);
  /* 1 */
  maintainMobileConnectionContext_reset_EVC_Support_Pkg(&outC->_9_Context_1);
  /* 1 */
  maintainMobileRegistrationContext_reset_EVC_Support_Pkg(&outC->_8_Context_1);
  /* 2 */
  TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(&outC->_7_Context_2);
  /* 2 */
  SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
    &outC->_6_Context_2);
  /* 2 */ ManageLevelAndMode_reset(&outC->_5_Context_2);
  /* 1 */ maintainTrainProperties_reset_EVC_Support_Pkg(&outC->Context_1);
  /* 2 */ patchEmergencyBrakeMsg_reset_EVC_Support_Pkg(&outC->_4_Context_2);
  /* 2 */ TrackAtlas_reset_TrackAtlas(&outC->_3_Context_2);
  /* 2 */ trainData_reset_trainData_pkg(&outC->_2_Context_2);
  /* 3 */ manageDMI_Input_reset_manage_DMI_Input_Pkg(&outC->_1_Context_3);
  /* 3 */
  calculateTrainPosition_reset_CalculateTrainPosition_Pkg(&outC->Context_3);
  /* 2 */
  Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
    &outC->Context_2);
  /* 5 */ manageTIU_input_reset_input_from_TIU_API_Pkg(&outC->Context_5);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* EVC */
void EVC(
  /* EVC::EVC_reset */ kcg_bool _45_EVC_reset,
  /* EVC::API_Odometry */ odometry_T_Obu_BasicTypes_Pkg *API_Odometry,
  /* EVC::API_SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg API_SystemTime,
  /* EVC::API_fromTrack */ API_TrackSideInput_T_API_Msg_Pkg *API_fromTrack,
  /* EVC::API_fromDMI */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *API_fromDMI,
  /* EVC::API_fromTIU */ TIU_Input_msg_API_TIU_Pkg *API_fromTIU,
  /* EVC::API_mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *API_mobileHWStatus,
  /* EVC::API_persistentData */ ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *API_persistentData,
  outC_EVC *outC)
{
  /* EVC */
  static DataForModeAndLevel_t_TrackAtlasTypes op_call;
  /* EVC::ML_MemorizedLevel */
  static M_LEVEL _3_ML_MemorizedLevel;
  /* EVC::EVC_ActiveLevelList */
  static DMI_LevelList_T_DMI_Types_Pkg _2_EVC_ActiveLevelList;
  /* EVC::EVC_PersistentData */
  static ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg _1_EVC_PersistentData;
  /* EVC::ML_MemorizedLevel */
  static M_LEVEL ML_MemorizedLevel;
  /* EVC::EVC_ActiveLevelList */
  static DMI_LevelList_T_DMI_Types_Pkg EVC_ActiveLevelList;
  /* EVC::EVC_PersistentData */
  static ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg EVC_PersistentData;
  static TIU_commandStatus_T_TIU_Types_Pkg noname;
  static Target_T_TargetManagement_types _4_noname;
  static SDM_Commands_T_SDM_Types_Pkg _5_noname;
  static kcg_bool _6_noname;
  static kcg_bool _7_noname;
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _8_noname;
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _9_noname;
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _10_noname;
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _11_noname;
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _12_noname;
  static kcg_bool _13_noname;
  static trainData_Trigger_T_trainData_Types_pkg _14_noname;
  static kcg_bool _15_noname;
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _16_noname;
  static MovementAuthority_t_TrackAtlasTypes _17_noname;
  static P003_OBU_T_TM _18_noname;
  static MRSP_Profile_t_TrackAtlasTypes _19_noname;
  static DataForModeAndLevel_t_TrackAtlasTypes _20_noname;
  static kcg_bool _21_noname;
  static kcg_bool _22_noname;
  static kcg_bool _23_noname;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _24_noname;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _25_noname;
  static Radio_TrainTrack_Message_T_TM_transitional _26_noname;
  static ReportedBGList_T_ProvidePositionReport_Pkg _27_noname;
  static kcg_bool _28_noname;
  static M_TrainTrack_Message_T_TM_radio_messages _29_noname;
  static RadioManagement_T_API_RadioCommunication_Pkg _30_noname;
  static kcg_bool _31_noname;
  static kcg_bool _32_noname;
  static kcg_bool _33_noname;
  static kcg_bool _34_noname;
  static kcg_bool _35_noname;
  static kcg_bool _36_noname;
  static kcg_bool _37_noname;
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _38_noname;
  static NID_RADIO _39_noname;
  static NID_MN _40_noname;
  static morcStatus_T_RCM_Session_Types_Pkg _41_noname;
  static safeRadioConnectionIndication_T_RCM_Session_Types_Pkg _42_noname;
  static kcg_bool _43_noname;
  static kcg_bool _44_noname;
  /* EVC::ML_MemorizedLevel */
  static M_LEVEL last_ML_MemorizedLevel;
  /* EVC::MoRC_MN_1 */
  static NID_MN last_MoRC_MN_1;
  /* EVC::MoRC_RadioID_1 */
  static NID_RADIO last_MoRC_RadioID_1;
  /* EVC::MoRC_RadioStatus_1 */
  static morcStatus_T_RCM_Session_Types_Pkg last_MoRC_RadioStatus_1;
  /* EVC::MoRC_ready */
  static kcg_bool last_MoRC_ready;
  /* EVC::TA_Packets */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg last_TA_Packets;
  /* EVC::rep_P1 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg last_rep_P1;
  /* EVC::td_status */
  static trainDataStatus_T_trainData_Types_pkg last_td_status;
  /* EVC::rep_P0 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg last_rep_P0;
  /* EVC::td_events */
  static trainData_Events_T_trainData_Types_pkg last_td_events;
  /* EVC::PROC_start_ack */
  static kcg_bool last_PROC_start_ack;
  /* EVC::EVC_TextMessageStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg last_EVC_TextMessageStatusList;
  /* EVC::EVC_ActiveLevelList */
  static DMI_LevelList_T_DMI_Types_Pkg last_EVC_ActiveLevelList;
  /* EVC::EVC_PersistentData */
  static ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg last_EVC_PersistentData;
  /* EVC::MSG_EmergencyBrakeActive */
  static kcg_bool last_MSG_EmergencyBrakeActive;
  /* EVC::ML_ModeAndLevel */
  static T_Mode_Level_Level_And_Mode_Types_Pkg last_ML_ModeAndLevel;
  /* EVC::EVC_currentNTC */
  static NID_NTC last_EVC_currentNTC;
  /* EVC::MSG_lastRadioMsgTimestamp */
  static T_internal_Type_Obu_BasicTypes_Pkg last_MSG_lastRadioMsgTimestamp;
  /* EVC::MoRC_newSessionEstablished */
  static kcg_bool last_MoRC_newSessionEstablished;
  /* EVC::TIU_trainProperties */
  static trainProperties_T_TrainPosition_Types_Pck last_TIU_trainProperties;
  /* EVC::CALC_BGs */
  static positionedBGs_T_TrainPosition_Types_Pck last_CALC_BGs;
  /* EVC::MoRC_supervisingRBC_Id */
  static connection_ids_T_Handover_Pkg last_MoRC_supervisingRBC_Id;
  /* EVC::td_trainData */
  static trainData_T_TIU_Types_Pkg last_td_trainData;
  /* EVC::DMI_sdmToDMI */
  static speedSupervisionForDMI_T_DMI_Types_Pkg last_DMI_sdmToDMI;
  /* EVC::SDM_speedSupervisionBrakeCommand */
  static Brake_command_T_TIU_Types_Pkg last_SDM_speedSupervisionBrakeCommand;
  /* EVC::CALC_TrainPosition */
  static trainPosition_T_TrainPosition_Types_Pck last_CALC_TrainPosition;
  /* EVC::DMI_currentDMIStatus */
  static DMI_EVC_status_T_DMI_Types_Pkg last_DMI_currentDMIStatus;
  /* EVC::PROC_powerOff_to_MoRC */
  static kcg_bool last_PROC_powerOff_to_MoRC;
  /* EVC::PROC_statusstartofmissionongoing_to_MoRC */
  static kcg_bool last_PROC_statusstartofmissionongoing_to_MoRC;
  /* EVC::PROC_powerUp_to_MoRC */
  static kcg_bool last_PROC_powerUp_to_MoRC;
  /* EVC::PROC_radioCmdFromProcedures */
  static radioManagementMessage_T_Common_Types_Pkg last_PROC_radioCmdFromProcedures;
  
  outC->_L1517 = kcg_true;
  outC->ck_every = outC->_L1517;
  outC->_L777 = kcg_true;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L792, API_fromTrack);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L910, API_Odometry);
  outC->_L776 = _45_EVC_reset;
  /* last_init_ck_CALC_TrainPosition */ if (outC->init24) {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &last_CALC_TrainPosition,
      (trainPosition_T_TrainPosition_Types_Pck *) &cEmptyTrainPosition);
  }
  else {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &last_CALC_TrainPosition,
      &outC->CALC_TrainPosition);
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L772,
    &last_CALC_TrainPosition);
  /* last_init_ck_ML_ModeAndLevel */ if (outC->init24) {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &last_ML_ModeAndLevel,
      (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cMLInitialModesAndLevel);
  }
  else {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &last_ML_ModeAndLevel,
      &outC->ML_ModeAndLevel);
  }
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L993,
    &last_ML_ModeAndLevel);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L1345,
    (P3_NationalValues_T_Packet_Types_Pkg *)
      &cP3NationalValuesUtrechtAmsterdam_EVC_PermanentData_Pkg);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->MSG_nationalValues,
    &outC->_L1345);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L1277,
    &outC->MSG_nationalValues);
  outC->_L783 = outC->_L1277.t_nvcontact;
  outC->_L1244 = cOwnVersion;
  outC->EVC_ownVersion = outC->_L1244;
  outC->_L1149 = outC->EVC_ownVersion;
  /* last_init_ck_MSG_lastRadioMsgTimestamp */ if (outC->init24) {
    last_MSG_lastRadioMsgTimestamp = cTTrainUnknown1_CheckEuroradioMessage;
  }
  else {
    last_MSG_lastRadioMsgTimestamp = outC->MSG_lastRadioMsgTimestamp;
  }
  outC->_L939 = last_MSG_lastRadioMsgTimestamp;
  /* last_init_ck_MoRC_RadioStatus_1 */ if (outC->init24) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &last_MoRC_RadioStatus_1,
      (morcStatus_T_RCM_Session_Types_Pkg *)
        &cNoMoRCStatus_RCM_Session_Types_Pkg);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &last_MoRC_RadioStatus_1,
      &outC->MoRC_RadioStatus_1);
  }
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L785,
    &last_MoRC_RadioStatus_1);
  /* last_init_ck_MoRC_supervisingRBC_Id */ if (outC->init24) {
    kcg_copy_connection_ids_T_Handover_Pkg(
      &last_MoRC_supervisingRBC_Id,
      (connection_ids_T_Handover_Pkg *) &cNoSupervisingRBC);
  }
  else {
    kcg_copy_connection_ids_T_Handover_Pkg(
      &last_MoRC_supervisingRBC_Id,
      &outC->MoRC_supervisingRBC_Id);
  }
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->_L786,
    &last_MoRC_supervisingRBC_Id);
  /* last_init_ck_CALC_BGs */ if (outC->init24) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &last_CALC_BGs,
      (positionedBGs_T_TrainPosition_Types_Pck *) &cEmptyPositionedBGs);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &last_CALC_BGs,
      &outC->CALC_BGs);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L794,
    &last_CALC_BGs);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L1272,
    &outC->MSG_nationalValues);
  outC->_L797 = outC->_L1272.q_nvlocacc;
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L818, API_fromTIU);
  /* last_init_ck_td_trainData */ if (outC->init24) {
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &last_td_trainData,
      (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(&last_td_trainData, &outC->td_trainData);
  }
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1223, &last_td_trainData);
  /* 5 */
  manageTIU_input_input_from_TIU_API_Pkg(
    &outC->_L818,
    &outC->_L1223,
    &outC->Context_5);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L815,
    &outC->Context_5.outTIUStatus);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L816,
    &outC->Context_5.outTIUCurrentInfo);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->TIU_trainStatus,
    &outC->_L815);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L1006,
    &outC->TIU_trainStatus);
  outC->_L1007 = outC->_L1006.deskOpen;
  /* last_init_ck_td_status */ if (outC->init24) {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &last_td_status,
      (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &last_td_status,
      &outC->td_status);
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L1230,
    &last_td_status);
  outC->_L1009 = outC->_L1230.validatedbyRBC;
  outC->_L1481 = kcg_false;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L1443,
    &last_td_status);
  outC->_L1444 = outC->_L1443.waitingForRBCResponse;
  outC->_L1449 = kcg_false;
  outC->_L1099 = 0;
  outC->MSG_lastAckTextMsgId = outC->_L1099;
  outC->_L1037 = outC->MSG_lastAckTextMsgId;
  outC->_L1086 = kcg_false;
  outC->MSG_pendingNTCTransition = outC->_L1086;
  outC->_L1015 = outC->MSG_pendingNTCTransition;
  outC->_L1482 = kcg_false;
  outC->MSG_MACoverNotFullLength = outC->_L1086;
  outC->_L1197 = outC->MSG_MACoverNotFullLength;
  outC->_L1195.pendingL1Transition = outC->_L1481;
  outC->_L1195.pendingL12L3Transition = outC->_L1481;
  outC->_L1195.pendingAckOfTrainDataFromRBC = outC->_L1444;
  outC->_L1195.emergencyStopAccepted = outC->_L1449;
  outC->_L1195.lastAckTextMessageId = outC->_L1037;
  outC->_L1195.pendingNTCTransition = outC->_L1015;
  outC->_L1195.SPPAndGradientOnBoard = outC->_L1482;
  outC->_L1195.MACoverNotFullLength = outC->_L1197;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1523,
    &last_ML_ModeAndLevel);
  outC->_L1524 = outC->_L1523.newLevel;
  /* last_init_ck_TIU_trainProperties */ if (outC->init24) {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &last_TIU_trainProperties,
      (trainProperties_T_TrainPosition_Types_Pck *) &cEmptyTrainProperties);
  }
  else {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &last_TIU_trainProperties,
      &outC->TIU_trainProperties);
  }
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L1764,
    &last_TIU_trainProperties);
  /* 2 */
  Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
    outC->_L777,
    &outC->_L792,
    &outC->_L910,
    outC->_L776,
    &outC->_L772,
    &outC->_L993,
    outC->_L783,
    outC->_L1149,
    outC->_L939,
    &outC->_L785,
    &outC->_L786,
    &outC->_L794,
    outC->_L797,
    outC->_L1007,
    outC->_L1009,
    &outC->_L1195,
    outC->_L1524,
    &outC->_L1764,
    &outC->Context_2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L763,
    &outC->Context_2.outputMessage);
  outC->_L764 = outC->Context_2.ApplyServiceBrake;
  outC->_L765 = outC->Context_2.BadBaliseMessageToDMI;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &outC->_L766,
    &outC->Context_2.outCheckErrors);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L767,
    &outC->Context_2.forLevelManagement);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1483,
    &outC->Context_2.outputMessageForRadioAck);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L1502,
    &outC->Context_2.Data_to_From_Track_Packets_at_ML);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->MSG_trackMessage,
    &outC->_L763);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1471,
    &outC->MSG_trackMessage);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1259,
    &last_ML_ModeAndLevel);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1260, &last_td_trainData);
  outC->_L1261 = outC->_L1260.valid;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1253, API_Odometry);
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &outC->_L1252,
    (passedBG_T_BG_Types_Pkg *) &cEmptyPassedBG);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1258,
    &outC->MSG_trackMessage);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L1251,
    &last_TIU_trainProperties);
  outC->_L1250 = _45_EVC_reset;
  /* 3 */
  calculateTrainPosition_CalculateTrainPosition_Pkg(
    &outC->_L1253,
    &outC->_L1252,
    &outC->_L1258,
    &outC->_L1251,
    outC->_L1250,
    &outC->Context_3);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1254,
    &outC->Context_3.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L1255,
    &outC->Context_3.BGs);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1256,
    &outC->Context_3.errors);
  outC->_L1262 = outC->_L1260.trainLength;
  outC->_L1338 = API_SystemTime;
  /* last_init_ck_DMI_sdmToDMI */ if (outC->init24) {
    kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
      &last_DMI_sdmToDMI,
      (speedSupervisionForDMI_T_DMI_Types_Pkg *) &cEmptySpeedForDMI);
  }
  else {
    kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
      &last_DMI_sdmToDMI,
      &outC->DMI_sdmToDMI);
  }
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L1362,
    &last_DMI_sdmToDMI);
  outC->_L1363 = outC->_L1362.location_brake_curve_starting_point;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1339, API_Odometry);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->_L735, API_fromDMI);
  outC->_L741 = _45_EVC_reset;
  /* last_init_ck_EVC_TextMessageStatusList */ if (outC->init24) {
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &last_EVC_TextMessageStatusList,
      (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
        &cEmptyTestStatusList_DMI_Types_Pkg);
  }
  else {
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &last_EVC_TextMessageStatusList,
      &outC->EVC_TextMessageStatusList);
  }
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L1179,
    &last_EVC_TextMessageStatusList);
  outC->_L1181 = API_SystemTime;
  /* last_init_ck_EVC_currentNTC */ if (outC->init24) {
    last_EVC_currentNTC = cNo_STM_manage_DMI_Input_Pkg;
  }
  else {
    last_EVC_currentNTC = outC->EVC_currentNTC;
  }
  outC->_L1280 = last_EVC_currentNTC;
  /* 3 */
  manageDMI_Input_manage_DMI_Input_Pkg(
    &outC->_L735,
    outC->_L741,
    &outC->_L1179,
    outC->_L1181,
    outC->_L1280,
    &outC->_1_Context_3);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->_L742,
    &outC->_1_Context_3.currentDMIStatus);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L743,
    &outC->_1_Context_3.fromDMI_Identifier);
  outC->_L744 = outC->_1_Context_3.outUpdateLevelsDMI;
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L745,
    &outC->_1_Context_3.fromDMI_DriverIdentifier);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L746,
    &outC->_1_Context_3.fromDMI_TrainRunningNumber);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L747,
    &outC->_1_Context_3.fromDMI_RadioNetData);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L748,
    &outC->_1_Context_3.fromDMI_Icon_Ack);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L749,
    &outC->_1_Context_3.fromDMI_TrainData);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L750,
    &outC->_1_Context_3.fromDMI_TrainDataAck);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L751,
    &outC->_1_Context_3.fromDMI_AdhesionFactor);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
    &outC->_L752,
    &outC->_1_Context_3.forModesAndLevel);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L753,
    &outC->_1_Context_3.ML_levelTransition);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L1187,
    &outC->_1_Context_3.outStatusList);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L1232,
    &outC->_1_Context_3.outDriverRequest);
  outC->_L1279 = outC->_1_Context_3.updatedNTC;
  kcg_copy_Driver2MAR_T_MA_Request(&outC->_L1354, &outC->_1_Context_3.outForMA);
  kcg_copy_Driver2MAR_T_MA_Request(&outC->TA_fromDriver, &outC->_L1354);
  kcg_copy_Driver2MAR_T_MA_Request(&outC->_L1349, &outC->TA_fromDriver);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L1340,
    &last_TIU_trainProperties);
  /* last_init_ck_rep_P0 */ if (outC->init24) {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &last_rep_P0,
      (PT0_PositionReport_T_Packet_TrainTypes_Pkg *) &cNoP0);
  }
  else {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &last_rep_P0,
      &outC->rep_P0);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L1341,
    &last_rep_P0);
  /* last_init_ck_rep_P1 */ if (outC->init24) {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &last_rep_P1,
      (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *) &cNoP1);
  }
  else {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &last_rep_P1,
      &outC->rep_P1);
  }
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L1342,
    &last_rep_P1);
  outC->_L1324 = API_SystemTime;
  outC->EVC_t_Train = outC->_L1324;
  outC->_L1343 = outC->EVC_t_Train;
  kcg_copy_P203V1_OBU_T_TM_baseline2(
    &outC->_L1347,
    (P203V1_OBU_T_TM_baseline2 *) &cP203_PermanentData_EVC_PermanentData_Pkg);
  kcg_copy_P003_permanent_data_T_TM_baseline2(
    &outC->_L1346,
    (P003_permanent_data_T_TM_baseline2 *)
      &cP003_PermanentData_EVC_PermanentData_Pkg);
  outC->_L1206 = _45_EVC_reset;
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L1207, API_fromTIU);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->_L1208,
    &outC->_L1207.info.train_data_info);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_TrainData,
    &outC->_L749);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L1209,
    &outC->DMI_TrainData);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->DMI_TrainDataAck,
    &outC->_L750);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L1234,
    &outC->DMI_TrainDataAck);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->MSG_trackMessageByPassFilter,
    &outC->_L1483);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1485,
    &outC->MSG_trackMessageByPassFilter);
  /* last_init_ck_td_events */ if (outC->init24) {
    kcg_copy_trainData_Events_T_trainData_Types_pkg(
      &last_td_events,
      (trainData_Events_T_trainData_Types_pkg *) &cNoTDEvents);
  }
  else {
    kcg_copy_trainData_Events_T_trainData_Types_pkg(
      &last_td_events,
      &outC->td_events);
  }
  kcg_copy_trainData_Events_T_trainData_Types_pkg(
    &outC->_L1215,
    &last_td_events);
  outC->_L1203 = 4065801;
  outC->EVC_nidEngine = outC->_L1203;
  outC->_L1218 = outC->EVC_nidEngine;
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L1219,
    &last_rep_P0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L1321,
    &last_rep_P1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1738,
    (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *) &cNoBus_trainData_pkg);
  outC->_L1538 = outC->EVC_ownVersion;
  outC->_L1328 = outC->EVC_t_Train;
  /* 2 */
  trainData_trainData_pkg(
    outC->_L1206,
    &outC->_L1208,
    &outC->_L1209,
    &outC->_L1234,
    &outC->_L1485,
    &outC->_L1215,
    outC->_L1218,
    &outC->_L1219,
    &outC->_L1321,
    &outC->_L1738,
    outC->_L1538,
    outC->_L1328,
    &outC->_2_Context_2);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->_L1204,
    &outC->_2_Context_2.actualTrainData);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->_L1205,
    &outC->_2_Context_2.triggerFromTrainData);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L1210,
    &outC->_2_Context_2.updatedStatus);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1225,
    &outC->_2_Context_2.outMessageBus);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->td_out2Radio,
    &outC->_L1225);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1552,
    &outC->td_out2Radio);
  /* 2 */
  TrackAtlas_TrackAtlas(
    &outC->_L1471,
    &outC->_L1259,
    outC->_L1261,
    &outC->_L1254,
    outC->_L1262,
    outC->_L1338,
    outC->_L1363,
    &outC->_L1339,
    &outC->_L1349,
    &outC->_L1340,
    &outC->_L1341,
    &outC->_L1342,
    outC->_L1343,
    &outC->_L1347,
    &outC->_L1346,
    &outC->_L1552,
    &outC->_3_Context_2);
  kcg_copy_P003_OBU_T_TM(&outC->_L1245, &outC->_3_Context_2.NV_raw_out);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L1246,
    &outC->_3_Context_2.To_ModeAndLevel);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(
    &outC->_L1247,
    &outC->_3_Context_2.to_DMI);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L1248,
    &outC->_3_Context_2.to_Supervision);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L1249,
    &outC->_3_Context_2.MA_onboard_out);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->_L1335,
    &outC->_3_Context_2.MRSP);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->_L1337,
    &outC->_3_Context_2.message147);
  outC->_L1487 = outC->_3_Context_2.ces_accepted;
  outC->_L1488 = outC->_3_Context_2.ces_revoked;
  outC->_L1489 = outC->_3_Context_2.trip_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1490,
    &outC->_3_Context_2.bus_out);
  /* ck_EVC */ if (outC->ck_every) {
    /* 2 */
    patchEmergencyBrakeMsg_EVC_Support_Pkg(&outC->_L1246, &outC->_4_Context_2);
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
      &op_call,
      &outC->_4_Context_2.outToML);
  }
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(
    &outC->_L163,
    (Isolation_Status_T_TIU_Types_Pkg *) &cEmtpyIsolationStatus);
  /* last_init_ck_SDM_speedSupervisionBrakeCommand */ if (outC->init24) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &last_SDM_speedSupervisionBrakeCommand,
      (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCommand);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &last_SDM_speedSupervisionBrakeCommand,
      &outC->SDM_speedSupervisionBrakeCommand);
  }
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L949,
    &outC->MSG_nationalValues);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->CALC_TrainPosition,
    &outC->_L1254);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L639,
    &outC->CALC_TrainPosition);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L914, API_Odometry);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L950,
    &last_TIU_trainProperties);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_trainRunningNumber,
    &outC->_L746);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L951,
    &outC->DMI_trainRunningNumber);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L952, &last_td_trainData);
  outC->_L1330 = outC->EVC_nidEngine;
  /* 1 */
  maintainTrainProperties_EVC_Support_Pkg(
    &outC->_L950,
    &outC->_L951,
    &outC->_L952,
    outC->_L1330,
    &outC->Context_1);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L947,
    &outC->Context_1.UpdatedtrainProperties);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->TIU_trainProperties,
    &outC->_L947);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L948,
    &outC->TIU_trainProperties);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->td_trainData, &outC->_L1204);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1333, &outC->td_trainData);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->TA_forSupervision,
    &outC->_L1248);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L1275,
    &outC->TA_forSupervision);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->DMI_DMItoModes, &outC->_L752);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->_L982, &outC->DMI_DMItoModes);
  outC->_L1047 = kcg_false;
  outC->_L1758 = kcg_false;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1756,
    (positionErrors_T_TrainPosition_Types_Pck *) &cNoPositioningErrors);
  /* 18 */ if (outC->_L1758) {
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &outC->_L1757,
      &outC->_L1256);
  }
  else {
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &outC->_L1757,
      &outC->_L1756);
  }
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->CALC_positionErrors,
    &outC->_L1757);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1045,
    &outC->CALC_positionErrors);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1039,
    &outC->CALC_TrainPosition);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1040, API_Odometry);
  outC->_L1044 = outC->_L1040.speed.v_safeNominal;
  outC->_L1041 = outC->_L1040.motionState;
  outC->_L1043 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1042 = outC->_L1041 == outC->_L1043;
  outC->_L1038.BG_In_List_Expected_BG_In_SR = outC->_L1047;
  outC->_L1038.BG_In_List_Expected_BG_In_SH = outC->_L1047;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1038.PositionErrors,
    &outC->_L1045);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1038.Train_Position,
    &outC->_L1039);
  outC->_L1038.Train_Speed = outC->_L1044;
  outC->_L1038.Train_Standstill = outC->_L1042;
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->ML_DataFromLocalisation,
    &outC->_L1038);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->_L984,
    &outC->ML_DataFromLocalisation);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->TIU_InputMessage,
    &outC->_L816);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L1048,
    &outC->TIU_InputMessage);
  /* ck_EVC */ if (outC->ck_every) {
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->_L1510, &op_call);
  }
  else {
    kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
      &outC->_L1510,
      &outC->_L1246);
  }
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->TA_forModeLevel,
    &outC->_L1510);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L1466,
    &outC->TA_forModeLevel);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L1467,
    &outC->_L1466.train_messages);
  /* last_init_ck_TA_Packets */ if (outC->init24) {
    kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
      &last_TA_Packets,
      (T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *) &cNoPacketsForML);
  }
  else {
    kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
      &last_TA_Packets,
      &outC->TA_Packets);
  }
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->TA_Packets,
    &outC->_L1502);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L1503,
    &outC->TA_Packets);
  outC->_L1080 = kcg_false;
  outC->_L1057.Estim_front_End_overpass_SR_Dist = outC->_L1080;
  outC->_L1057.Estim_Front_End_Rear_SSP = outC->_L1080;
  outC->_L1057.Override_Function_Active = outC->_L1080;
  outC->_L1057.EOA_Antenna_Overpass = outC->_L1080;
  outC->_L1057.EOA_Front_End = outC->_L1080;
  outC->_L1057.Train_Speed_Under_Overide_Limit = outC->_L1080;
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->SMD_DataForML,
    &outC->_L1057);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->_L1056,
    &outC->SMD_DataForML);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L1076,
    &outC->TIU_trainStatus);
  outC->_L1077 = outC->_L1076.ownCab;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->ML_driverLevelTransition,
    &outC->_L753);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L1078,
    &outC->ML_driverLevelTransition);
  outC->_L1091 = kcg_true;
  outC->_L1092 = kcg_false;
  outC->_L1088.NTC = outC->_L1091;
  outC->_L1088.L0 = outC->_L1091;
  outC->_L1088.L1 = outC->_L1091;
  outC->_L1088.L2 = outC->_L1091;
  outC->_L1088.L3 = outC->_L1092;
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->ML_ERTMS_capabiities,
    &outC->_L1088);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->_L1079,
    &outC->ML_ERTMS_capabiities);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->MSG_toML,
    &outC->_L767);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L1461,
    &outC->MSG_toML);
  outC->_L1763 = kcg_false;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &outC->_L1761,
    (MSG_Errors_T_Common_Types_Pkg *) &cNoMsgErrors);
  /* 19 */ if (outC->_L1763) {
    kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L1762, &outC->_L766);
  }
  else {
    kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L1762, &outC->_L1761);
  }
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->MSG_errors, &outC->_L1762);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L1441, &outC->MSG_errors);
  outC->_L1087 = kcg_false;
  outC->EVC_SystemFault = outC->_L1087;
  outC->_L1060 = outC->EVC_SystemFault;
  outC->_L1500 = kcg_false;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &outC->_L1499.Common_Errors,
    &outC->_L1441);
  outC->_L1499.Failure_Occured = outC->_L1060;
  outC->_L1499.Continue_Shunting_Active = outC->_L1500;
  outC->_L1499.Stop_Shunting_Stored = outC->_L1500;
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(
    &outC->_L1501,
    (T_Data_From_STM_Level_And_Mode_Types_Pkg *) &cEmptyData_From_STM);
  /* last_init_ck_ML_MemorizedLevel */ if (outC->init24) {
    last_ML_MemorizedLevel = M_LEVEL_Level_0;
  }
  else {
    last_ML_MemorizedLevel = outC->ML_MemorizedLevel;
  }
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L1240,
    &outC->TIU_trainStatus);
  outC->_L1241 = outC->_L1240.valid;
  outC->_L1242 = outC->_L1240.deskOpen;
  outC->_L1243 = outC->_L1241 & outC->_L1242;
  outC->EVC_cabIsOpen = outC->_L1243;
  outC->IfBlock1_clock = outC->EVC_cabIsOpen;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->_L5_IfBlock1,
      API_persistentData);
  }
  else {
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &outC->_L627_IfBlock1,
      &last_ML_ModeAndLevel);
    outC->_L526_IfBlock1 = outC->_L627_IfBlock1.level;
    ML_MemorizedLevel = outC->_L526_IfBlock1;
  }
  /* last_init_ck_EVC_PersistentData */ if (outC->init24) {
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *)
        &cNoPersistentData);
  }
  else {
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &last_EVC_PersistentData,
      &outC->EVC_PersistentData);
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->_L3_IfBlock1,
      &last_EVC_PersistentData);
    /* 2 */ if (outC->init) {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->_L1_IfBlock1,
        &outC->_L5_IfBlock1);
    }
    else {
      kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
        &outC->_L1_IfBlock1,
        &outC->_L3_IfBlock1);
    }
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &_1_EVC_PersistentData,
      &outC->_L1_IfBlock1);
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->_L6_IfBlock1,
      &_1_EVC_PersistentData);
    outC->_L7_IfBlock1 = outC->_L6_IfBlock1.lastActiveLevel;
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &outC->_L9_IfBlock1,
      &last_ML_ModeAndLevel);
    outC->_L8_IfBlock1 = outC->_L9_IfBlock1.level;
    /* 3 */ if (outC->init) {
      outC->_L10_IfBlock1 = outC->_L7_IfBlock1;
    }
    else {
      outC->_L10_IfBlock1 = outC->_L8_IfBlock1;
    }
    _3_ML_MemorizedLevel = outC->_L10_IfBlock1;
    outC->ML_MemorizedLevel = _3_ML_MemorizedLevel;
  }
  else {
    outC->ML_MemorizedLevel = ML_MemorizedLevel;
  }
  outC->_L1755 = outC->ML_MemorizedLevel;
  /* 2 */
  ManageLevelAndMode(
    &outC->_L982,
    &outC->_L984,
    &outC->_L1048,
    &outC->_L1467,
    &outC->_L1503,
    &outC->_L1056,
    outC->_L1077,
    &outC->_L1078,
    &outC->_L1079,
    &outC->_L1461,
    &outC->_L1499,
    &outC->_L1501,
    outC->_L1755,
    &outC->_5_Context_2);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L973,
    &outC->_5_Context_2.Compatible_Mode_And_Level);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L974,
    &outC->_5_Context_2.Data_To_BG_Management);
  outC->_L975 = outC->_5_Context_2.Service_Brake_Command;
  outC->_L976 = outC->_5_Context_2.EB_Requested;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->_L977,
    &outC->_5_Context_2.announcedLevel);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L1479,
    &outC->_5_Context_2.Data_To_DMI_Ack);
  outC->ML_ServiceBrakeCmd = outC->_L975;
  outC->_L1104 = outC->ML_ServiceBrakeCmd;
  outC->MSG_BGcheck_applySB = outC->_L764;
  outC->_L1154 = outC->MSG_BGcheck_applySB;
  outC->_L1153 = outC->_L1104 | outC->_L1154;
  outC->ML_EB_Request = outC->_L976;
  outC->_L1103 = outC->ML_EB_Request;
  /* 2 */
  SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
    &outC->_L949,
    &outC->_L639,
    &outC->_L914,
    &outC->_L948,
    &outC->_L1333,
    &outC->_L1275,
    outC->_L1153,
    outC->_L1103,
    &outC->_6_Context_2);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L632,
    &outC->_6_Context_2.sdmToDMI);
  kcg_copy_Target_T_TargetManagement_types(
    &outC->_L633,
    &outC->_6_Context_2.target);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(
    &outC->_L634,
    &outC->_6_Context_2.sdmCommands);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L635,
    &outC->_6_Context_2.brakeCmd);
  outC->_L636 = outC->_6_Context_2.EOA_overpassed;
  outC->_L637 = outC->_6_Context_2.Target_Speed_Reached;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->SDM_speedSupervisionBrakeCommand,
    &outC->_L635);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L647,
    &outC->SDM_speedSupervisionBrakeCommand);
  kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(
    &outC->_L166,
    (Brake_inhibition_command_T_TIU_Types_Pkg *) &cEmptyBrakeInhibitionCommand);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &outC->_L1202,
    (Type_I_train_commands_T_TIU_Types_Pkg *) &cEmptyTrainCommand);
  kcg_copy_Change_traction_system_T_TIU_Types_Pkg(
    &outC->_L167,
    (Change_traction_system_T_TIU_Types_Pkg *) &cEmptyChangeTractionSystem);
  kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(
    &outC->_L168,
    (Passenger_door_control_info_T_TIU_Types_Pkg *) &cPassengerDoorControlInfo);
  kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
    &outC->_L169,
    (Change_of_allowed_current_consumption_T_TIU_Types_Pkg *)
      &cEmptyChangeOfAllowedCurrentConsumption);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->ML_ModeAndLevel,
    &outC->_L973);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1200,
    &outC->ML_ModeAndLevel);
  /* 2 */
  TIU_OutputIntegration_output_to_TIU_API_Pkg(
    &outC->_L163,
    &outC->_L647,
    &outC->_L166,
    &outC->_L1202,
    &outC->_L167,
    &outC->_L168,
    &outC->_L169,
    &outC->_L1200,
    &outC->_7_Context_2);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->_L161,
    &outC->_7_Context_2.outTIU_to_API);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(
    &outC->_L162,
    &outC->_7_Context_2.outCommandStatusforEVC);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(&noname, &outC->_L162);
  /* last_init_ck_DMI_currentDMIStatus */ if (outC->init24) {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &last_DMI_currentDMIStatus,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
  }
  else {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &last_DMI_currentDMIStatus,
      &outC->DMI_currentDMIStatus);
  }
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->_L568,
    &last_DMI_currentDMIStatus);
  outC->_L889 = API_SystemTime;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L318,
    &outC->TIU_trainStatus);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L888, API_Odometry);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L538,
    &outC->CALC_TrainPosition);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L699,
    &outC->SDM_speedSupervisionBrakeCommand);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->DMI_sdmToDMI,
    &outC->_L632);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L652,
    &outC->DMI_sdmToDMI);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L981,
    &outC->ML_ModeAndLevel);
  outC->_L893 = kcg_true;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(
    &outC->_L1273,
    &outC->MSG_nationalValues);
  outC->_L891 = outC->_L1273.nid_cArray[0].nid_c;
  outC->_L903 = kcg_true;
  outC->_L894.valid = outC->_L893;
  outC->_L894.nid_c = outC->_L891;
  outC->_L894.nid_c_valid = outC->_L903;
  kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(&outC->DMI_NV, &outC->_L894);
  kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(&outC->_L890, &outC->DMI_NV);
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(
    &outC->_L895,
    (movementAuthorityForDMI_T_DMI_Types_Pkg *) &cEmptyDMIMA);
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(&outC->DMI_MA, &outC->_L895);
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(&outC->_L896, &outC->DMI_MA);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1622,
    &last_ML_ModeAndLevel);
  outC->_L1623 = outC->_L1622.Mode;
  outC->_L1624 = outC->_L1622.level;
  /* last_init_ck_PROC_powerUp_to_MoRC */ if (outC->init24) {
    last_PROC_powerUp_to_MoRC = kcg_false;
  }
  else {
    last_PROC_powerUp_to_MoRC = outC->PROC_powerUp_to_MoRC;
  }
  outC->_L1676 = last_PROC_powerUp_to_MoRC;
  /* last_init_ck_PROC_powerOff_to_MoRC */ if (outC->init24) {
    last_PROC_powerOff_to_MoRC = kcg_false;
  }
  else {
    last_PROC_powerOff_to_MoRC = outC->PROC_powerOff_to_MoRC;
  }
  outC->_L1677 = last_PROC_powerOff_to_MoRC;
  outC->_L1679 = kcg_false;
  /* last_init_ck_PROC_statusstartofmissionongoing_to_MoRC */ if (outC->init24) {
    last_PROC_statusstartofmissionongoing_to_MoRC = kcg_false;
  }
  else {
    last_PROC_statusstartofmissionongoing_to_MoRC =
      outC->PROC_statusstartofmissionongoing_to_MoRC;
  }
  outC->_L1678 = last_PROC_statusstartofmissionongoing_to_MoRC;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1680,
    &last_ML_ModeAndLevel);
  outC->_L1681 = outC->_L1680.newLevel;
  outC->_L1682 = kcg_false;
  /* last_init_ck_PROC_radioCmdFromProcedures */ if (outC->init24) {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
      &last_PROC_radioCmdFromProcedures,
      (radioManagementMessage_T_Common_Types_Pkg *) &cNoRadioCmd);
  }
  else {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
      &last_PROC_radioCmdFromProcedures,
      &outC->PROC_radioCmdFromProcedures);
  }
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->_L1705,
    &last_PROC_radioCmdFromProcedures);
  outC->_L1706 = outC->_L1705.valid;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L1751,
    &outC->TIU_trainStatus);
  outC->_L1750 = outC->_L1751.deskOpen;
  outC->_L1754 = !outC->_L1750;
  outC->_L1683 = kcg_false;
  outC->_L1675.atPowerUp = outC->_L1676;
  outC->_L1675.atPowerDown = outC->_L1677;
  outC->_L1675.atStartOfMission = outC->_L1679;
  outC->_L1675.modeChangeHasToBeReportedToRBC = outC->_L1678;
  outC->_L1675.driverHasManuallyChangedLevel_to_2_or_3 = outC->_L1679;
  outC->_L1675.trainFrontPassesStartOfAnnouncedRadioHole = outC->_L1679;
  outC->_L1675.trainFrontReachesEndOfAnnouncedRadioHole = outC->_L1679;
  outC->_L1675.trainFrontInsideInAnAnnouncedRadioHole = outC->_L1679;
  outC->_L1675.trainFrontPassesALevelTransitionBorder = outC->_L1681;
  outC->_L1675.trainFrontPassesA_RBC_RBC_border = outC->_L1682;
  outC->_L1675.startOfMissionProcedureCompleted_in_level_2_or_3 = outC->_L1682;
  outC->_L1675.isPartOfAnOngoingStartOfMissionProcedure = outC->_L1706;
  outC->_L1675.startOfMissionProcedureIsGoingOn = outC->_L1678;
  outC->_L1675.endOfMissionIsExecuted = outC->_L1754;
  outC->_L1675.triggerDecisionThatNoRadioNetworkIDAvailable = outC->_L1683;
  outC->_L1675.errorConditionRequiringTerminationDetected = outC->_L1683;
  outC->_L1675.trainIsRejectedByRBC_duringStartOfMission = outC->_L1683;
  outC->_L1675.driverClosesTheDeskduringStartOfMission = outC->_L1754;
  outC->_L1675.trainExitedFromAnRBCArea = outC->_L1683;
  outC->_L1675.isInCommunicationSessionWithAnRIU = outC->_L1683;
  outC->_L1675.level_1_isLeft = outC->_L1683;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->MoRC_HO_EventsAndPhases,
    &outC->_L1675);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L1613,
    &outC->MoRC_HO_EventsAndPhases);
  kcg_copy_radioNetWorkIDs_T_MoRC_Pck(
    &outC->_L1614,
    (radioNetWorkIDs_T_MoRC_Pck *) &cEmptyRadioNetworkIds);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L1652,
    &outC->_L1614.memorizedID);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L1653,
    &outC->_L1614.ID_fromDriver);
  kcg_copy_mobileHWStatus_Type_MoRC_Pck(&outC->_L1621, API_mobileHWStatus);
  outC->_L1662 = 0;
  /* last_init_ck_MoRC_MN_1 */ if (outC->init24) {
    last_MoRC_MN_1 = 0;
  }
  else {
    last_MoRC_MN_1 = outC->MoRC_MN_1;
  }
  outC->_L1715 = last_MoRC_MN_1;
  /* 1 */
  maintainMobileRegistrationContext_EVC_Support_Pkg(
    &outC->_L1621,
    outC->_L1662,
    outC->_L1715,
    &outC->_8_Context_1);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L1661,
    &outC->_8_Context_1.MobileRegistrationContext);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L1664,
    (mobileRegistrationContext_T_RCM_Types_Pkg *)
      &cNoMobileRegistrationContext);
  outC->_L1671 = 0;
  /* last_init_ck_MoRC_RadioID_1 */ if (outC->init24) {
    last_MoRC_RadioID_1 = 0;
  }
  else {
    last_MoRC_RadioID_1 = outC->MoRC_RadioID_1;
  }
  outC->_L1716 = last_MoRC_RadioID_1;
  outC->_L1660 = kcg_false;
  /* 1 */
  maintainMobileConnectionContext_EVC_Support_Pkg(
    &outC->_L1621,
    outC->_L1671,
    outC->_L1716,
    outC->_L1660,
    &outC->_9_Context_1);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L1658,
    &outC->_9_Context_1.MobileConnectionContext);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L1663,
    (mobileConnectionContext_T_RCM_Types_Pkg *) &cNoMobileConnectionContext);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1668,
    &outC->MSG_trackMessage);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->CALC_BGs,
    &outC->_L1255);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L806,
    &outC->CALC_BGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L807,
    &outC->CALC_TrainPosition);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L906, API_Odometry);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L971,
    &outC->TIU_trainProperties);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->_L953,
    (LocationBasedEvents_T_ProvidePositionReport_Pkg *)
      &cEmptyLocationBasedEvents);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->REP_trackinfo,
    &outC->_L953);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(
    &outC->_L828,
    &outC->REP_trackinfo);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1315,
    &outC->MSG_trackMessage);
  outC->_L905 = API_SystemTime;
  /* last_init_ck_MoRC_newSessionEstablished */ if (outC->init24) {
    last_MoRC_newSessionEstablished = kcg_false;
  }
  else {
    last_MoRC_newSessionEstablished = outC->MoRC_newSessionEstablished;
  }
  outC->_L813 = last_MoRC_newSessionEstablished;
  outC->_L812.newSessionEstablished = outC->_L813;
  outC->EVC_currentNTC = outC->_L1279;
  outC->_L965 = outC->EVC_currentNTC;
  outC->_L963 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L961.nid_ntc = outC->_L965;
  outC->_L961.q_length = outC->_L963;
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->REP_Train2TrackStatus,
    &outC->_L961);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(
    &outC->_L829,
    &outC->REP_Train2TrackStatus);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1176,
    &outC->CALC_TrainPosition);
  outC->_L1177 = outC->_L1176.trainRunningDirectionToLRBG;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L834,
    &outC->CALC_positionErrors);
  outC->_L835 = outC->_L834.BG_LinkingConsistencyError;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L827, &outC->MSG_errors);
  outC->_L830 = outC->_L827.linkedBGError;
  outC->_L831 = outC->_L827.unlinkedBGError;
  outC->_L832 = outC->_L827.radioMessageConsistencyError;
  outC->_L833 = outC->_L827.radioSequenceError;
  outC->_L844 = kcg_false;
  outC->_L955 = kcg_false;
  outC->REP_safetyCriticalFailure = outC->_L955;
  outC->_L843 = outC->REP_safetyCriticalFailure;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L837,
    &outC->CALC_positionErrors);
  outC->_L836 = outC->_L837.twoConsecutiveLinkedBGs_missed;
  outC->_L838 = outC->_L837.doubleRepositioningError;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L994,
    &outC->ML_ModeAndLevel);
  outC->_L995 = outC->_L994.Mode;
  outC->_L996 = outC->_L994.level;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1521,
    &outC->ML_ModeAndLevel);
  outC->_L1522 = outC->_L1521.newLevel;
  outC->_L1166.currMode = outC->_L995;
  outC->_L1166.currLevel = outC->_L996;
  outC->_L1166.levelTransitionBorderPassed = outC->_L1522;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->_L1168,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->TA_bus2RTM,
    &outC->_L1490);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1562,
    &outC->TA_bus2RTM);
  outC->_L1543 = outC->EVC_ownVersion;
  outC->_L1542 = outC->EVC_t_Train;
  /* 2 */
  ProvidePositionReport_ProvidePositionReport_Pkg(
    &outC->_L806,
    &outC->_L807,
    &outC->_L906,
    &outC->_L971,
    &outC->_L828,
    &outC->_L1315,
    outC->_L905,
    &outC->_L812,
    &outC->_L829,
    outC->_L1177,
    outC->_L835,
    outC->_L830,
    outC->_L831,
    outC->_L832,
    outC->_L833,
    outC->_L844,
    outC->_L843,
    outC->_L836,
    outC->_L838,
    &outC->_L1166,
    &outC->_L1168,
    &outC->_L1562,
    outC->_L1543,
    outC->_L1542,
    &outC->_10_Context_2);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->_L805,
    &outC->_10_Context_2.out_reportedBGs);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L1159,
    &outC->_10_Context_2.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L1313,
    &outC->_10_Context_2.packet1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1314,
    &outC->_10_Context_2.posReport);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->TM_to_MsgOut,
    &outC->_L1314);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1673,
    &outC->TM_to_MsgOut);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1667,
    &last_CALC_TrainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L1666,
    &last_CALC_BGs);
  outC->_L1665 = outC->EVC_t_Train;
  outC->_L1629 = API_SystemTime;
  outC->_L1657 = _45_EVC_reset;
  outC->_L1669 = isAbleToManageOneSession_Handover_Pkg;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L1617,
    &outC->TIU_trainProperties);
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
    &outC->_L1670,
    (morc_configData_T_RCM_Session_Types_Pkg *)
      &cMoRC_ConfigData_EVC_PermanentData_Pkg);
  kcg_copy_P003_TM_TrainToTrack(
    &outC->_L1558,
    (P003_TM_TrainToTrack *) &cMoRC_own_P3ng_EVC_PermanentData_Pkg);
  kcg_copy_P003_TM_TrainToTrack(&outC->MoRC_P3ng, &outC->_L1558);
  kcg_copy_P003_TM_TrainToTrack(&outC->_L1632, &outC->MoRC_P3ng);
  outC->_L1631 = outC->EVC_ownVersion;
  /* 1 */
  MoRC_HO_MoRC_HO_Pkg(
    outC->_L1623,
    outC->_L1624,
    &outC->_L1613,
    &outC->_L1652,
    &outC->_L1653,
    &outC->_L1661,
    &outC->_L1664,
    &outC->_L1658,
    &outC->_L1663,
    &outC->_L1668,
    &outC->_L1673,
    &outC->_L1667,
    &outC->_L1666,
    outC->_L1665,
    outC->_L1665,
    outC->_L1629,
    outC->_L1657,
    outC->_L1669,
    &outC->_L1617,
    &outC->_L1670,
    &outC->_L1632,
    outC->_L1631,
    &outC->_11_Context_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1633,
    &outC->_11_Context_1.radioStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1634,
    &outC->_11_Context_1.radioStatus_2);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->_L1635,
    &outC->_11_Context_1.mobileConnectionCmd_1);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->_L1636,
    &outC->_11_Context_1.mobileConnectionCmd_2);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L1637,
    &outC->_11_Context_1.mobileRegistrationCmd_1);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L1638,
    &outC->_11_Context_1.mobileRegistrationCmd_2);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->_L1639,
    &outC->_11_Context_1.safeRadioIndication);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->_L1640,
    &outC->_11_Context_1.supervisingRBC);
  outC->_L1641 = outC->_11_Context_1.bufferInformationFromAcceptingRBC;
  outC->_L1642 =
    outC->_11_Context_1.trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1643,
    &outC->_11_Context_1.msgBus_2_RBC_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1644,
    &outC->_11_Context_1.msgBus_2_RBC_2);
  outC->_L1645 = outC->_11_Context_1.triggerPositionReport;
  outC->_L1646 = outC->_11_Context_1.triggerTrainData;
  outC->_L1647 = outC->_11_Context_1.rejectOrderToContactRBC_or_RIU;
  outC->_L1648 = outC->_11_Context_1.infomDriverNoCompatibleVersionSupported;
  outC->_L1649 = outC->_11_Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L1650,
    &outC->_11_Context_1.lastReceivedRadioNetworkID);
  outC->_L1651 = outC->_11_Context_1.ready;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->MoRC_RadioStatus_1,
    &outC->_L1633);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1724,
    &outC->MoRC_RadioStatus_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L899, &outC->td_trainData);
  /* fby_1_init_2 */ if (outC->init24) {
    outC->_L578 = kcg_false;
  }
  else {
    outC->_L578 = outC->_L477;
  }
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->_L523,
    &last_DMI_currentDMIStatus);
  outC->_L904 = API_SystemTime;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L988,
    &outC->ML_ModeAndLevel);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L484,
    &outC->MoRC_RadioStatus_1);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L487,
    &outC->TIU_trainStatus);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L1131,
    &outC->CALC_TrainPosition);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L1132,
    &outC->_L1131.LRBG);
  outC->_L1133 = outC->_L1132.valid;
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->DMI_driverRequest,
    &outC->_L1232);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L1189,
    &outC->DMI_driverRequest);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->_L1191,
    &last_DMI_currentDMIStatus);
  outC->_L1193 = outC->_L1191.DMI_LevelSelectedByDirver;
  /* 2 */
  Master_Procedure_ManageProcedure_Pkg(
    &outC->_L523,
    outC->_L578,
    outC->_L904,
    &outC->_L988,
    &outC->_L484,
    &outC->_L487,
    outC->_L1133,
    &outC->_L1189,
    outC->_L1193,
    &outC->_12_Context_2);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L472,
    &outC->_12_Context_2.DMI_Entry_Request_to_DMI);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->_L473,
    &outC->_12_Context_2.request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC);
  outC->_L474 = outC->_12_Context_2.powerUp_to_MoRC;
  outC->_L475 = outC->_12_Context_2.statusstartofmissionongoing_to_MoRC;
  outC->_L476 = outC->_12_Context_2.powerOff_to_MoRC;
  outC->_L477 =
    outC->_12_Context_2.request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  outC->_L478 =
    outC->_12_Context_2.request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  outC->_L624 = outC->_12_Context_2.start_ack_to_TIU;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->DMI_entryRequest,
    &outC->_L472);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L489,
    &outC->DMI_entryRequest);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L541,
    (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIEVCcodedTrainData);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->TA_toDMI, &outC->_L1247);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->_L1319, &outC->TA_toDMI);
  outC->_L1152 = outC->EVC_ownVersion;
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L327,
    (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIDisplayControl);
  /* last_init_ck_EVC_ActiveLevelList */ if (outC->init24) {
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &last_EVC_ActiveLevelList,
      (DMI_LevelList_T_DMI_Types_Pkg *) &cNo_Levels);
  }
  else {
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &last_EVC_ActiveLevelList,
      &outC->EVC_ActiveLevelList);
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->_L4_IfBlock1,
      &outC->_L1_IfBlock1.availableLevelsList);
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &_2_EVC_ActiveLevelList,
      &outC->_L4_IfBlock1);
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->EVC_ActiveLevelList,
      &_2_EVC_ActiveLevelList);
  }
  else {
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->_L725_IfBlock1,
      &last_EVC_ActiveLevelList);
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &EVC_ActiveLevelList,
      &outC->_L725_IfBlock1);
    kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
      &outC->EVC_ActiveLevelList,
      &EVC_ActiveLevelList);
  }
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(
    &outC->_L1117,
    &outC->EVC_ActiveLevelList);
  outC->DMI_updateLevels = outC->_L744;
  outC->_L1107 = outC->DMI_updateLevels;
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L325,
    (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyDMIRadioNet);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L324,
    (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIDriverIdentifier);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L322,
    (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMITrainRunningNumber);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L320,
    (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
      &cEmptyDMIAdhesionFactorData);
  outC->MSG_badBGPassedtoDMI = outC->_L765;
  outC->_L1185 = outC->MSG_badBGPassedtoDMI;
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->ML_AckToDMI,
    &outC->_L1479);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L1095,
    &outC->ML_AckToDMI);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->ML_AnnouncedLevelTransitions,
    &outC->_L977);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->_L1525,
    &outC->ML_AnnouncedLevelTransitions);
  outC->_L978 = outC->EVC_currentNTC;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->transport_TextMessageStatusList,
    &outC->_L1187);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L1183,
    &outC->transport_TextMessageStatusList);
  /* 2 */
  manageDMI_Output_manage_DMI_Output_Pkg(
    &outC->_L568,
    outC->_L889,
    &outC->_L318,
    &outC->_L888,
    &outC->_L538,
    &outC->_L699,
    &outC->_L652,
    &outC->_L981,
    &outC->_L890,
    &outC->_L896,
    &outC->_L1724,
    &outC->_L899,
    &outC->_L489,
    &outC->_L541,
    &outC->_L1319,
    outC->_L1152,
    &outC->_L327,
    &outC->_L1117,
    outC->_L1107,
    &outC->_L325,
    &outC->_L324,
    &outC->_L322,
    &outC->_L320,
    outC->_L1185,
    &outC->_L1095,
    &outC->_L1525,
    outC->_L978,
    &outC->_L1183,
    &outC->_13_Context_2);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->_L171,
    &outC->_13_Context_2.to_DMI);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->_L1182,
    &outC->_13_Context_2.outStatusList);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->PROC_radioCmdFromProcedures,
    &outC->_L473);
  outC->PROC_powerUp_to_MoRC = outC->_L474;
  outC->PROC_statusstartofmissionongoing_to_MoRC = outC->_L475;
  outC->PROC_powerOff_to_MoRC = outC->_L476;
  outC->_L601 = _45_EVC_reset;
  /* 2 */
  FlipFlopJK_digital(outC->_L578, outC->_L601, kcg_false, &outC->_14_Context_2);
  outC->_L600 = outC->_14_Context_2.FFJK_Output;
  kcg_copy_Target_T_TargetManagement_types(&_4_noname, &outC->_L633);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&_5_noname, &outC->_L634);
  _6_noname = outC->_L637;
  outC->SDM_EOA_overpassed = outC->_L636;
  /* last_init_ck_PROC_start_ack */ if (outC->init24) {
    last_PROC_start_ack = kcg_false;
  }
  else {
    last_PROC_start_ack = outC->PROC_start_ack;
  }
  outC->PROC_start_ack = outC->_L624;
  outC->_L1224 = outC->PROC_start_ack;
  outC->_L721 = outC->_L632.permittedSpeed;
  outC->_L719 = 0;
  /* 14 */ if (outC->_L1224) {
    outC->_L718 = outC->_L721;
  }
  else {
    outC->_L718 = outC->_L719;
  }
  outC->_L711 = (kcg_real) outC->_L718;
  outC->debugPermittedSpeed = outC->_L711;
  outC->_L709 = outC->_L632.interventionSpeed;
  outC->_L710 = (kcg_real) outC->_L709;
  outC->debugIinterventionSpeed = outC->_L710;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
    &outC->DMI_currentDMIStatus,
    &outC->_L742);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->API_toDMI, &outC->_L171);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->API_toTIU, &outC->_L161);
  outC->_L885 = _45_EVC_reset;
  outC->resetOut = outC->_L885;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1003,
    &outC->ML_ModeAndLevel);
  outC->_L1005 = outC->_L1003.level;
  outC->debugCurrentLevel = outC->_L1005;
  outC->_L1002 = outC->_L1003.Mode;
  outC->debugCurrentMode = outC->_L1002;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1486,
    &outC->MSG_trackMessageByPassFilter);
  outC->_L931 = outC->_L1486.valid;
  outC->_L932 = outC->_L1486.source;
  outC->_L930 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L929 = outC->_L932 == outC->_L930;
  outC->_L928 = outC->_L931 & outC->_L929;
  outC->_L935 = outC->_L1486.Radio_Common_Header.receivedSystemTime;
  outC->_L938 = last_MSG_lastRadioMsgTimestamp;
  /* 15 */ if (outC->_L928) {
    outC->_L937 = outC->_L935;
  }
  else {
    outC->_L937 = outC->_L938;
  }
  outC->MSG_lastRadioMsgTimestamp = outC->_L937;
  _7_noname = outC->_L600;
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->ML_dataToBG_Management,
    &outC->_L974);
  /* last_init_ck_MSG_EmergencyBrakeActive */ if (outC->init24) {
    last_MSG_EmergencyBrakeActive = kcg_true;
  }
  else {
    last_MSG_EmergencyBrakeActive = outC->MSG_EmergencyBrakeActive;
  }
  outC->_L1023 = release_brake_TIU_Types_Pkg;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L1028,
    &outC->SDM_speedSupervisionBrakeCommand);
  outC->_L1025 = outC->_L1028.m_emergencybrake_cm;
  outC->_L1027 = outC->_L1023 == outC->_L1025;
  outC->_L1026 = outC->_L1028.valid;
  outC->_L1024 = outC->_L1027 & outC->_L1026;
  outC->_L1032 = kcg_false;
  outC->_L1019 = apply_brake_TIU_Types_Pkg;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L1016,
    &outC->SDM_speedSupervisionBrakeCommand);
  outC->_L1018 = outC->_L1016.m_emergencybrake_cm;
  outC->_L1020 = outC->_L1019 == outC->_L1018;
  outC->_L1017 = outC->_L1016.valid;
  outC->_L1021 = outC->_L1020 & outC->_L1017;
  outC->_L1030 = kcg_true;
  outC->_L1022 = last_MSG_EmergencyBrakeActive;
  /* 16 */ if (outC->_L1021) {
    outC->_L1029 = outC->_L1030;
  }
  else {
    outC->_L1029 = outC->_L1022;
  }
  /* 17 */ if (outC->_L1024) {
    outC->_L1031 = outC->_L1032;
  }
  else {
    outC->_L1031 = outC->_L1029;
  }
  outC->MSG_EmergencyBrakeActive = outC->_L1031;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
    &outC->EVC_TextMessageStatusList,
    &outC->_L1182);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_8_noname,
    &outC->_L743);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_9_noname,
    &outC->_L745);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_10_noname,
    &outC->_L747);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_11_noname,
    &outC->_L748);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &_12_noname,
    &outC->_L751);
  /* last_init_ck_MoRC_ready */ if (outC->init24) {
    last_MoRC_ready = kcg_false;
  }
  else {
    last_MoRC_ready = outC->MoRC_ready;
  }
  outC->MoRC_ready = outC->_L1651;
  outC->_L1199 = outC->MoRC_ready;
  outC->EVC_ready = outC->_L1199;
  _13_noname = outC->_L478;
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->td_trigger,
    &outC->_L1205);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->_L1213,
    &outC->td_trigger);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(&_14_noname, &outC->_L1213);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->rep_P0,
    &outC->_L1159);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->td_status,
    &outC->_L1210);
  outC->_L1228 = outC->SDM_EOA_overpassed;
  _15_noname = outC->_L1228;
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L1229,
    &outC->ML_dataToBG_Management);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &_16_noname,
    &outC->_L1229);
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->EVC_PersistentData,
      &_1_EVC_PersistentData);
  }
  else {
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &EVC_PersistentData,
      &last_EVC_PersistentData);
    kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
      &outC->EVC_PersistentData,
      &EVC_PersistentData);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP_profile, &outC->_L1335);
  kcg_copy_P003_OBU_T_TM(&outC->TA_nationalValues, &outC->_L1245);
  outC->_L1267 = outC->_L1254.trainPosition.nominal;
  outC->debugTrainPositionNominal = outC->_L1267;
  outC->_L1265 = outC->_L1254.trainPosition.d_max;
  outC->debugTrainPositionDeltaMax = outC->_L1265;
  outC->_L1266 = outC->_L1254.trainPosition.d_min;
  outC->debugTrainPositionDeltaMin = outC->_L1266;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->TA_MA_onboard,
    &outC->_L1249);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L1276,
    &outC->TA_MA_onboard);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_17_noname, &outC->_L1276);
  kcg_copy_P003_OBU_T_TM(&outC->_L1278, &outC->TA_nationalValues);
  kcg_copy_P003_OBU_T_TM(&_18_noname, &outC->_L1278);
  outC->_L1294 = kcg_false;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1295, API_Odometry);
  outC->_L1297 = outC->_L1295.motionState;
  outC->_L1301 = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1296 = outC->_L1297 == outC->_L1301;
  outC->_L1299 = outC->_L1295.valid;
  outC->_L1302 = outC->_L1299 & outC->_L1296;
  outC->_L1457 = kcg_false;
  outC->_L1320 = last_MoRC_newSessionEstablished;
  outC->_L1456 = last_MoRC_ready;
  outC->_L1300.trainStandStill = outC->_L1302;
  outC->_L1300.driverRequestModify = outC->_L1457;
  outC->_L1300.communicationSessionEstablished = outC->_L1320;
  outC->_L1300.safeRadioConnectionLost = outC->_L1294;
  outC->_L1300.approachingRBCarea = outC->_L1294;
  outC->_L1300.MoRCreadyFlag = outC->_L1456;
  kcg_copy_trainData_Events_T_trainData_Types_pkg(
    &outC->td_events,
    &outC->_L1300);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->rep_P1,
    &outC->_L1313);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L1334, &outC->MRSP_profile);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_19_noname, &outC->_L1334);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L1462,
    &outC->TA_forModeLevel);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&_20_noname, &outC->_L1462);
  outC->TA_ces_accepted = outC->_L1487;
  outC->TA_ces_revoked = outC->_L1488;
  outC->TA_tripTrain = outC->_L1489;
  outC->_L1491 = outC->TA_ces_accepted;
  outC->_L1492 = outC->TA_ces_revoked;
  outC->_L1493 = outC->TA_tripTrain;
  _21_noname = outC->_L1491;
  _22_noname = outC->_L1492;
  _23_noname = outC->_L1493;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L1495, API_Odometry);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->probe_Odometry, &outC->_L1495);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1496,
    &outC->MSG_trackMessage);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L1497, &outC->MSG_errors);
  /* 2 */
  setProbesBalises_xdebugSupport_Pkg(
    &outC->_L1496,
    &outC->_L1497,
    &outC->_15_Context_2);
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(
    &outC->_L1498,
    &outC->_15_Context_2.baliseInformation);
  kcg_copy_probesBalises_T_xdebugSupport_Pkg(
    &outC->probe_Balises,
    &outC->_L1498);
  /* 2 */
  distanceLastBG_xdebugSupport_Pkg(
    &outC->_L1495,
    &outC->_L1496,
    &outC->_16_Context_2);
  outC->_L1511 = outC->_16_Context_2.distance;
  outC->_L1512 = outC->_16_Context_2.lastBG;
  outC->_L1516 = kcg_false;
  /* 2 */
  distanceLastMSG_xdebugSupport_Pkg(
    &outC->_L1495,
    &outC->_L1496,
    outC->_L1516,
    &outC->_17_Context_2);
  outC->_L1513 = outC->_17_Context_2.distance;
  outC->_L1514 = outC->_17_Context_2.lastMSG;
  outC->_L1515 = outC->_17_Context_2.lastLRBG;
  outC->probe_distBG = outC->_L1511;
  outC->probe_distMsg = outC->_L1513;
  outC->probe_LRBG = outC->_L1515;
  outC->probe_MSGinAfterFilter = outC->_L1514;
  outC->probe_BG_afterCheck = outC->_L1512;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1540,
    &outC->td_out2Radio);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_24_noname,
    &outC->_L1540);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1563,
    &outC->TM_to_MsgOut);
  /* 2 */
  probe_RadioOutput_RadioSupport_Pkg(
    &outC->_L1563,
    &outC->_L1564,
    &outC->_L1565,
    &outC->_L1566,
    &outC->_L1567,
    &outC->_L1568);
  outC->probe_Msg_1 = outC->_L1564;
  outC->probe_Msg_2 = outC->_L1565;
  outC->probe_Msg_3 = outC->_L1566;
  outC->probe_Msg_4 = outC->_L1567;
  outC->probe_Msg_5 = outC->_L1568;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1593, API_fromTrack);
  outC->_L1594 = kcg_false;
  /* 2 */
  setProbes_xdebugSupport_Pkg(
    &outC->_L1593,
    outC->_L1594,
    &outC->_18_Context_2);
  outC->_L1586 = outC->_18_Context_2.isChanged;
  outC->_L1587 = outC->_18_Context_2.radioMSG;
  outC->_L1588 = outC->_18_Context_2.BG_ID;
  outC->_L1589 = outC->_18_Context_2.packet_id1;
  outC->_L1590 = outC->_18_Context_2.packet_id2;
  outC->_L1591 = outC->_18_Context_2.lastRadioMSG;
  outC->_L1592 = outC->_18_Context_2.lastBG_ID;
  outC->probe_BG_ID = outC->_L1588;
  outC->probe_MSG_in = outC->_L1587;
  outC->probe_nid_packet1 = outC->_L1589;
  outC->probe_nid_packet2 = outC->_L1590;
  outC->probe_lastMSG_in = outC->_L1591;
  outC->probe_lastBG_ID = outC->_L1592;
  outC->probe_newInput = outC->_L1586;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L1596,
    &outC->td_out2Radio);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_25_noname,
    &outC->_L1596);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &_26_noname,
    &outC->_L1337);
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->MoRC_supervisingRBC_Id,
    &outC->_L1640);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->MoRC_RadioStatus_2,
    &outC->_L1634);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->MoRC_safeRadioConnectionStatus_toDriver,
    &outC->_L1639);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &_27_noname,
    &outC->_L805);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L1698,
    &outC->MSG_trackMessage);
  /* 3 */
  checkGeneralMessage_trainData_pkg(&outC->_L1698, &outC->_19_Context_3);
  outC->_L1699 = outC->_19_Context_3.genMessageReceived;
  outC->_L1700 = outC->_19_Context_3.ackRequested;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1688,
    &outC->ML_ModeAndLevel);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1759,
    &outC->MoRC_RadioStatus_1);
  outC->_L1690 = outC->EVC_ownVersion;
  outC->_L1691 = outC->EVC_t_Train;
  /* 1 */
  collectRadioOutput_radioOutput_Pkg(
    &outC->_L1643,
    outC->_L1699,
    &outC->_L1688,
    &outC->_L1759,
    &outC->_L1635,
    &outC->_L1637,
    outC->_L1690,
    outC->_L1691,
    &outC->_20_Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L1684,
    &outC->_20_Context_1.toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->_L1685,
    &outC->_20_Context_1.API_RTM_management);
  outC->_L1711 = outC->_20_Context_1.outRadio;
  outC->_L1712 = outC->_20_Context_1.outMN;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L1689,
    &outC->ML_ModeAndLevel);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1760,
    &outC->MoRC_RadioStatus_2);
  outC->_L1693 = outC->EVC_ownVersion;
  outC->_L1692 = outC->EVC_t_Train;
  /* 2 */
  collectRadioOutput_radioOutput_Pkg(
    &outC->_L1644,
    outC->_L1699,
    &outC->_L1689,
    &outC->_L1760,
    &outC->_L1636,
    &outC->_L1638,
    outC->_L1693,
    outC->_L1692,
    &outC->_21_Context_2);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L1686,
    &outC->_21_Context_2.toRBC);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->_L1687,
    &outC->_21_Context_2.API_RTM_management);
  outC->_L1713 = outC->_21_Context_2.outRadio;
  outC->_L1714 = outC->_21_Context_2.outMN;
  _28_noname = outC->_L1700;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_29_noname, &outC->_L1686);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &_30_noname,
    &outC->_L1687);
  _31_noname = outC->_L1641;
  _32_noname = outC->_L1642;
  _33_noname = outC->_L1645;
  _34_noname = outC->_L1646;
  _35_noname = outC->_L1647;
  _36_noname = outC->_L1648;
  _37_noname = outC->_L1649;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &_38_noname,
    &outC->_L1650);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &outC->_L1685);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->API_toRBC,
    &outC->_L1684);
  outC->MoRC_MN_1 = outC->_L1712;
  outC->MoRC_RadioID_1 = outC->_L1711;
  _39_noname = outC->_L1713;
  _40_noname = outC->_L1714;
  outC->_L1723 = kcg_true;
  /* 3 */
  probe_MsgOut_RadioSupport_Pkg(
    &outC->_L1684,
    outC->_L1723,
    &outC->_22_Context_3);
  outC->_L1718 = outC->_22_Context_3.Msg_0ut;
  outC->_L1719 = outC->_22_Context_3.outTTrain;
  outC->probe_TTrain = outC->_L1719;
  outC->probe_MSGout = outC->_L1718;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1720,
    &outC->MoRC_RadioStatus_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_41_noname, &outC->_L1720);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->_L1721,
    &outC->MoRC_safeRadioConnectionStatus_toDriver);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &_42_noname,
    &outC->_L1721);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1739,
    &last_MoRC_RadioStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1742,
    &outC->MoRC_RadioStatus_1);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L1740,
    &outC->_L1742.connection);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1748,
    &outC->_L1742.session);
  outC->_L1741 = outC->_L1748.phase;
  outC->_L1746 = sp_maintaining_RCM_Session_Types_Pkg;
  outC->_L1747 = outC->_L1746 == outC->_L1741;
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L1745,
    &outC->_L1739.connection);
  outC->_L1744 = !kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
      &outC->_L1740,
      &outC->_L1745);
  outC->_L1743 = outC->_L1747 & outC->_L1744;
  _43_noname = outC->_L1743;
  outC->MoRC_newSessionEstablished = outC->_L1747;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->probe_PositioningErrors,
    &outC->_L1256);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->probe_MsgErrors, &outC->_L766);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&outC->_L1766, &outC->MSG_errors);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L1767,
    &outC->CALC_positionErrors);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L1768,
    &outC->MoRC_RadioStatus_1);
  /* 1 */
  ProbeEVC_EnvSim(
    &outC->_L1766,
    &outC->_L1767,
    &outC->_L1768,
    &outC->_23_Context_1);
  outC->_L1765 = outC->_23_Context_1.dummyOut;
  _44_noname = outC->_L1765;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->init = kcg_false;
  }
  outC->init24 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVC.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

