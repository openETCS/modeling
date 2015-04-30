/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brl_BRL_Pkg.h"

void brl_init_BRL_Pkg(outC_brl_BRL_Pkg *outC)
{
  int i1;
  int i;
  
  outC->init = kcg_true;
  outC->lastRadioMsgTimestamp = 0;
  outC->debugTrainPosition.linkingIsUsedOnboard = kcg_true;
  outC->debugTrainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->debugTrainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->debugTrainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  for (i = 0; i < 4; i++) {
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->debugTrainPosition.prvLRBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
  }
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->debugTrainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.d_link.d_max = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.d_link.d_min = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.d_link.nominal = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->debugTrainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->debugTrainPosition.prvLRBG.seqNoOnTrack = 0;
  outC->debugTrainPosition.prvLRBG.location.d_max = 0;
  outC->debugTrainPosition.prvLRBG.location.d_min = 0;
  outC->debugTrainPosition.prvLRBG.location.nominal = 0;
  outC->debugTrainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->debugTrainPosition.prvLRBG.nid_bg = 0;
  outC->debugTrainPosition.prvLRBG.nid_c = 0;
  outC->debugTrainPosition.prvLRBG.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->debugTrainPosition.LRBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->debugTrainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->debugTrainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->debugTrainPosition.LRBG.infoFromLinking.d_link.d_max = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.d_link.d_min = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.d_link.nominal = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->debugTrainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->debugTrainPosition.LRBG.seqNoOnTrack = 0;
  outC->debugTrainPosition.LRBG.location.d_max = 0;
  outC->debugTrainPosition.LRBG.location.d_min = 0;
  outC->debugTrainPosition.LRBG.location.nominal = 0;
  outC->debugTrainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->debugTrainPosition.LRBG.nid_bg = 0;
  outC->debugTrainPosition.LRBG.nid_c = 0;
  outC->debugTrainPosition.LRBG.valid = kcg_true;
  outC->debugTrainPosition.maxSafeFrontEndPostion = 0;
  outC->debugTrainPosition.minSafeFrontEndPosition = 0;
  outC->debugTrainPosition.estimatedFrontEndPosition = 0;
  outC->debugTrainPosition.trainPosition.d_max = 0;
  outC->debugTrainPosition.trainPosition.d_min = 0;
  outC->debugTrainPosition.trainPosition.nominal = 0;
  outC->debugTrainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->debugTrainPosition.trainPositionIsUnknown = kcg_true;
  outC->debugTrainPosition.timestamp = 0;
  outC->debugTrainPosition.valid = kcg_true;
  outC->ready = kcg_true;
  for (i = 0; i < 3; i++) {
    outC->MessageToRBC.packets.p11.nid_ntc[i] = 0;
  }
  outC->MessageToRBC.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 3; i++) {
    outC->MessageToRBC.packets.p11.tractionIdentity[i].nid_ctraction = 0;
    outC->MessageToRBC.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  }
  outC->MessageToRBC.packets.p11.nIter_tractionIdentity = 0;
  outC->MessageToRBC.packets.p11.n_axle = 0;
  outC->MessageToRBC.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->MessageToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->MessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->MessageToRBC.packets.p11.v_maxtrain = 0;
  outC->MessageToRBC.packets.p11.l_train = 0;
  outC->MessageToRBC.packets.p11.NC_TRAIN =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->MessageToRBC.packets.p11.NC_CDTRAIN = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->MessageToRBC.packets.p11.valid = kcg_true;
  outC->MessageToRBC.packets.p5.TrainRunningNumber = 0;
  outC->MessageToRBC.packets.p5.valid = kcg_true;
  outC->MessageToRBC.packets.p4.M_ERROR =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->MessageToRBC.packets.p4.valid = kcg_true;
  for (i = 0; i < 1; i++) {
    for (i1 = 0; i1 < 15; i1++) {
      outC->MessageToRBC.packets.p3.aNID_RADIO[i].telephoneNumber[i1] = 0;
    }
    outC->MessageToRBC.packets.p3.aNID_RADIO[i].valid = kcg_true;
  }
  outC->MessageToRBC.packets.p3.number = 0;
  outC->MessageToRBC.packets.p3.valid = kcg_true;
  outC->MessageToRBC.packets.p1.packet1.NID_NTC = 0;
  outC->MessageToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->MessageToRBC.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->MessageToRBC.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->MessageToRBC.packets.p1.packet1.V_TRAIN = 0;
  outC->MessageToRBC.packets.p1.packet1.L_TRAININT = 0;
  outC->MessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->MessageToRBC.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->MessageToRBC.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->MessageToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->MessageToRBC.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->MessageToRBC.packets.p1.packet1.D_LRBG = 0;
  outC->MessageToRBC.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->MessageToRBC.packets.p1.packet1.NID_LRBG = 0;
  outC->MessageToRBC.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->MessageToRBC.packets.p1.packet1.L_PACKET = 0;
  outC->MessageToRBC.packets.p1.packet1.NID_PACKET = 0;
  outC->MessageToRBC.packets.p1.valid = kcg_true;
  outC->MessageToRBC.packets.p0.packet0.NID_NTC = 0;
  outC->MessageToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->MessageToRBC.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->MessageToRBC.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->MessageToRBC.packets.p0.packet0.V_TRAIN = 0;
  outC->MessageToRBC.packets.p0.packet0.L_TRAININT = 0;
  outC->MessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->MessageToRBC.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->MessageToRBC.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->MessageToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->MessageToRBC.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->MessageToRBC.packets.p0.packet0.D_LRBG = 0;
  outC->MessageToRBC.packets.p0.packet0.NID_LRBG = 0;
  outC->MessageToRBC.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->MessageToRBC.packets.p0.packet0.L_PACKET = 0;
  outC->MessageToRBC.packets.p0.packet0.NID_PACKET = 0;
  outC->MessageToRBC.packets.p0.valid = kcg_true;
  outC->MessageToRBC.header.xT_TRAIN = 0.0;
  outC->MessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->MessageToRBC.header.nid_engine = 0;
  outC->MessageToRBC.header.t_train = 0.0;
  outC->MessageToRBC.header.nid_message = 0;
  outC->MessageToRBC.header.present = kcg_true;
  outC->MessageToRBC.present = kcg_true;
  outC->sessionStatus = morc_st_inactive_Radio_Types_Pkg;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
  outC->requestTheSetupOfASafeRadioConnection = kcg_true;
  outC->sessionSuccessfullyEstablished = kcg_true;
  outC->safeRadioConnectionStatus_toDriver.status = srcs_NoConnection_MoRC_Pck;
  outC->safeRadioConnectionStatus_toDriver.valid = kcg_true;
  outC->InformTheDriverThatNoConnectionWasSetup = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->orderTheRegistrationOfItsConnectedMobiles = kcg_true;
  outC->currentRadioNetworkID.nid_mn = 0;
  outC->currentRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->currentRadioNetworkID.valid = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->mobileSWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->mobileSWStatus.registeredRadioNetworkID = 0;
  outC->mobileSWStatus.connectionStatus = mswc_unregistered_MoRC_Pck;
  outC->mobileSWStatus.mobileHW_available = kcg_true;
  outC->mobileSWStatus.valid = kcg_true;
  outC->cmdsToMobile.radioNetworkID = 0;
  outC->cmdsToMobile.action = mhwa_nop_MoRC_Pck;
  outC->cmdsToMobile.valid = kcg_true;
  outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
    kcg_true;
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
  for (i = 0; i < 500; i++) {
    outC->outputMessage.packets.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->outputMessage.packets.PacketHeaders[i].endAddress = 0;
    outC->outputMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->outputMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->outputMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->outputMessage.packets.PacketHeaders[i].nid_packet = 0;
  }
  outC->outputMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outputMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outputMessage.Radio_Common_Header.d_ref = 0;
  outC->outputMessage.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->outputMessage.Radio_Common_Header.d_sr = 0;
  outC->outputMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outputMessage.Radio_Common_Header.nid_em = 0;
  outC->outputMessage.Radio_Common_Header.t_train_reference = 0.0;
  outC->outputMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outputMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outputMessage.Radio_Common_Header.t_train = 0.0;
  outC->outputMessage.Radio_Common_Header.nid_message = 0;
  outC->outputMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outputMessage.Radio_Common_Header.radioDevice = 0;
  outC->outputMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outputMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outputMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outputMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outputMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outputMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outputMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outputMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outputMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outputMessage.BG_Common_Header.nid_bg = 0;
  outC->outputMessage.BG_Common_Header.nid_c = 0;
  outC->outputMessage.BG_Common_Header.m_mcount = 0;
  outC->outputMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outputMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outputMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outputMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outputMessage.BG_Common_Header.valid = kcg_true;
  outC->outputMessage.radioMetadata.m_version = kcg_true;
  outC->outputMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outputMessage.radioMetadata.q_dir = kcg_true;
  outC->outputMessage.radioMetadata.d_ref = kcg_true;
  outC->outputMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outputMessage.radioMetadata.d_sr = kcg_true;
  outC->outputMessage.radioMetadata.q_scale = kcg_true;
  outC->outputMessage.radioMetadata.nid_em = kcg_true;
  outC->outputMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outputMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outputMessage.valid = kcg_true;
  for (i = 0; i < 3; i++) {
    outC->positionReport.packets.p11.nid_ntc[i] = 0;
  }
  outC->positionReport.packets.p11.nIter_ntc = 0;
  for (i = 0; i < 3; i++) {
    outC->positionReport.packets.p11.tractionIdentity[i].nid_ctraction = 0;
    outC->positionReport.packets.p11.tractionIdentity[i].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  }
  outC->positionReport.packets.p11.nIter_tractionIdentity = 0;
  outC->positionReport.packets.p11.n_axle = 0;
  outC->positionReport.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->positionReport.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->positionReport.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->positionReport.packets.p11.v_maxtrain = 0;
  outC->positionReport.packets.p11.l_train = 0;
  outC->positionReport.packets.p11.NC_TRAIN =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->positionReport.packets.p11.NC_CDTRAIN =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->positionReport.packets.p11.valid = kcg_true;
  outC->positionReport.packets.p5.TrainRunningNumber = 0;
  outC->positionReport.packets.p5.valid = kcg_true;
  outC->positionReport.packets.p4.M_ERROR =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->positionReport.packets.p4.valid = kcg_true;
  for (i = 0; i < 1; i++) {
    for (i1 = 0; i1 < 15; i1++) {
      outC->positionReport.packets.p3.aNID_RADIO[i].telephoneNumber[i1] = 0;
    }
    outC->positionReport.packets.p3.aNID_RADIO[i].valid = kcg_true;
  }
  outC->positionReport.packets.p3.number = 0;
  outC->positionReport.packets.p3.valid = kcg_true;
  outC->positionReport.packets.p1.packet1.NID_NTC = 0;
  outC->positionReport.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->positionReport.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->positionReport.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->positionReport.packets.p1.packet1.V_TRAIN = 0;
  outC->positionReport.packets.p1.packet1.L_TRAININT = 0;
  outC->positionReport.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->positionReport.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->positionReport.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->positionReport.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->positionReport.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->positionReport.packets.p1.packet1.D_LRBG = 0;
  outC->positionReport.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->positionReport.packets.p1.packet1.NID_LRBG = 0;
  outC->positionReport.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->positionReport.packets.p1.packet1.L_PACKET = 0;
  outC->positionReport.packets.p1.packet1.NID_PACKET = 0;
  outC->positionReport.packets.p1.valid = kcg_true;
  outC->positionReport.packets.p0.packet0.NID_NTC = 0;
  outC->positionReport.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->positionReport.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->positionReport.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->positionReport.packets.p0.packet0.V_TRAIN = 0;
  outC->positionReport.packets.p0.packet0.L_TRAININT = 0;
  outC->positionReport.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->positionReport.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->positionReport.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->positionReport.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->positionReport.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->positionReport.packets.p0.packet0.D_LRBG = 0;
  outC->positionReport.packets.p0.packet0.NID_LRBG = 0;
  outC->positionReport.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->positionReport.packets.p0.packet0.L_PACKET = 0;
  outC->positionReport.packets.p0.packet0.NID_PACKET = 0;
  outC->positionReport.packets.p0.valid = kcg_true;
  outC->positionReport.header.xT_TRAIN = 0.0;
  outC->positionReport.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->positionReport.header.nid_engine = 0;
  outC->positionReport.header.t_train = 0.0;
  outC->positionReport.header.nid_message = 0;
  outC->positionReport.header.present = kcg_true;
  outC->positionReport.present = kcg_true;
  outC->badBaliseMessageToDMI = kcg_true;
  outC->applyServiceBrake = kcg_true;
  Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
    &outC->Context_1);
  calculateTrainPosition_init_CalculateTrainPosition_Pkg(&outC->_1_Context_1);
  MoRC_Main_init_MoRC_Pck(&outC->_2_Context_1);
  ProvidePositionReport_init_ProvidePositionReport_Pkg(&outC->_3_Context_1);
}


void brl_reset_BRL_Pkg(outC_brl_BRL_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  ProvidePositionReport_reset_ProvidePositionReport_Pkg(&outC->_3_Context_1);
  /* 1 */ MoRC_Main_reset_MoRC_Pck(&outC->_2_Context_1);
  /* 1 */
  calculateTrainPosition_reset_CalculateTrainPosition_Pkg(&outC->_1_Context_1);
  /* 1 */
  Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
    &outC->Context_1);
}

/* BRL_Pkg::brl */
void brl_BRL_Pkg(
  /* BRL_Pkg::brl::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* BRL_Pkg::brl::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* BRL_Pkg::brl::mode */ M_MODE mode,
  /* BRL_Pkg::brl::level */ M_LEVEL level,
  /* BRL_Pkg::brl::leveltr */ M_LEVELTR leveltr,
  /* BRL_Pkg::brl::API_trackSide_Message */ API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* BRL_Pkg::brl::radioCmdFromProcedures */ radioManagementMessage_T_Common_Types_Pkg *radioCmdFromProcedures,
  /* BRL_Pkg::brl::reset */ kcg_bool reset,
  /* BRL_Pkg::brl::nationalValues */ P3_NationalValues_T_Packet_Types_Pkg *nationalValues,
  /* BRL_Pkg::brl::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* BRL_Pkg::brl::nid_ntc */ NID_NTC nid_ntc,
  /* BRL_Pkg::brl::q_length */ Q_LENGTH q_length,
  /* BRL_Pkg::brl::locationBasedEvents */ LocationBasedEvents_T_ProvidePositionReport_Pkg *locationBasedEvents,
  /* BRL_Pkg::brl::obuEventsAndPhases */ obuEventsAndPhases_T_MoRC_Pck *obuEventsAndPhases,
  /* BRL_Pkg::brl::radioNetworkIDs */ radioNetWorkIDs_T_MoRC_Pck *radioNetworkIDs,
  /* BRL_Pkg::brl::statusOfMobile */ mobileHWStatus_Type_MoRC_Pck *statusOfMobile,
  /* BRL_Pkg::brl::t_train */ T_TRAIN t_train,
  /* BRL_Pkg::brl::connectionStatusTimerInterval */ T_internal_Type_Obu_BasicTypes_Pkg connectionStatusTimerInterval,
  /* BRL_Pkg::brl::nid_engine */ NID_ENGINE nid_engine,
  /* BRL_Pkg::brl::onboardPhoneNumbers */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *onboardPhoneNumbers,
  /* BRL_Pkg::brl::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_brl_BRL_Pkg *outC)
{
  RBC_Communication_T_ProvidePositionReport_Pkg tmp;
  TrainToTrackStatus_T_BG_Types_Pkg tmp1;
  trainPosition_T_TrainPosition_Types_Pck tmp6;
  kcg_int tmp5;
  sessionStatus_Type_Radio_Types_Pkg tmp4;
  positionedBGs_T_TrainPosition_Types_Pck tmp3;
  radioManagementMessage_T_Common_Types_Pkg tmp2;
  /* BRL_Pkg::brl::_L35 */ ModeAndLevelStatus_T_BG_Types_Pkg _L35;
  
  _L35.m_mode = mode;
  _L35.m_level = level;
  _L35.m_leveltr = leveltr;
  if (outC->init) {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp6,
      (trainPosition_T_TrainPosition_Types_Pck *)
        &cTrainPosition_0_CalculateTrainPosition_Pkg);
    tmp5 = 0;
    tmp4 = morc_st_inactive_Radio_Types_Pkg;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &tmp3,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &tmp6,
      &outC->debugTrainPosition);
    tmp5 = outC->lastRadioMsgTimestamp;
    tmp4 = outC->sessionStatus;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp3, &outC->BGs);
  }
  /* 1 */
  Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
    kcg_false,
    API_trackSide_Message,
    currentOdometry,
    reset,
    &tmp6,
    &_L35,
    (*nationalValues).t_nvcontact,
    tmp5,
    tmp4,
    0,
    &tmp3,
    (*nationalValues).q_nvlocacc,
    &outC->Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->outputMessage,
    &outC->Context_1.outputMessage);
  outC->applyServiceBrake = outC->Context_1.ApplyServiceBrake;
  outC->badBaliseMessageToDMI = outC->Context_1.BadBaliseMessageToDMI;
  /* 1 */
  calculateTrainPosition_CalculateTrainPosition_Pkg(
    currentOdometry,
    (passedBG_T_BG_Types_Pkg *) &cpassedBGInit_BRL_Pkg,
    &outC->outputMessage,
    trainProperties,
    reset,
    &outC->_1_Context_1);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->debugTrainPosition,
    &outC->_1_Context_1.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->BGs,
    &outC->_1_Context_1.BGs);
  if ((*radioCmdFromProcedures).valid) {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
      &tmp2,
      radioCmdFromProcedures);
  }
  else {
    kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
      &tmp2,
      &outC->Context_1.outRadioManagement);
  }
  /* 1 */
  MoRC_Main_MoRC_Pck(
    currentTime,
    mode,
    level,
    obuEventsAndPhases,
    radioNetworkIDs,
    statusOfMobile,
    &tmp2,
    t_train,
    connectionStatusTimerInterval,
    nid_engine,
    onboardPhoneNumbers,
    &outC->_2_Context_1);
  outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
    outC->_2_Context_1.ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession;
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &outC->cmdsToMobile,
    &outC->_2_Context_1.cmdsToMobile);
  outC->memorizeTheLastRadioNetworkID =
    outC->_2_Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->currentRadioNetworkID,
    &outC->_2_Context_1.currentRadioNetworkID);
  outC->orderTheRegistrationOfItsConnectedMobiles =
    outC->_2_Context_1.orderTheRegistrationOfItsConnectedMobiles;
  outC->rejectOrderToContactRBC_or_RIU =
    outC->_2_Context_1.rejectOrderToContactRBC_or_RIU;
  outC->InformTheDriverThatNoConnectionWasSetup =
    outC->_2_Context_1.InformTheDriverThatNoConnectionWasSetup;
  kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck(
    &outC->safeRadioConnectionStatus_toDriver,
    &outC->_2_Context_1.safeRadioConnectionStatus_toDriver);
  kcg_copy_mobileSWStatus_Type_MoRC_Pck(
    &outC->mobileSWStatus,
    &outC->_2_Context_1.mobileSWStatus);
  outC->requestTheSetupOfASafeRadioConnection =
    outC->_2_Context_1.requestTheSetupOfASafeRadioConnection;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside =
    outC->_2_Context_1.requestReleaseOfSafeRadioConnectionWithTrackside;
  outC->sessionSuccessfullyEstablished =
    outC->_2_Context_1.sessionSuccessfullyEstablished;
  outC->sessionStatus = outC->_2_Context_1.sessionStatus;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->MessageToRBC,
    &outC->_2_Context_1.MessageToRBC);
  outC->ready = outC->_2_Context_1.ready;
  tmp1.nid_ntc = nid_ntc;
  tmp1.q_length = q_length;
  tmp.newSessionEstablished = outC->sessionSuccessfullyEstablished;
  /* 1 */
  ProvidePositionReport_ProvidePositionReport_Pkg(
    &outC->BGs,
    &outC->debugTrainPosition,
    currentOdometry,
    trainProperties,
    locationBasedEvents,
    &outC->Context_1.outPositionParams,
    currentTime,
    &tmp,
    &tmp1,
    outC->debugTrainPosition.trainOrientationToLRBG,
    outC->debugTrainPosition.trainRunningDirectionToLRBG,
    outC->_1_Context_1.errors.BG_LinkingConsistencyError,
    outC->Context_1.errorLinkedBG,
    outC->Context_1.errorUnlinkedBG,
    outC->Context_1.radioMessageConsistencyError,
    outC->Context_1.radioSequenceError,
    kcg_false,
    SafetyCriticalFailure,
    outC->_1_Context_1.errors.twoConsecutiveLinkedBGs_missed,
    outC->_1_Context_1.errors.doubleRepositioningError,
    &_L35,
    &outC->_3_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->positionReport,
    &outC->_3_Context_1.posRep);
  if (outC->outputMessage.valid & (outC->outputMessage.source ==
      msrc_Euroradio_Common_Types_Pkg)) {
    outC->lastRadioMsgTimestamp =
      outC->outputMessage.Radio_Common_Header.receivedSystemTime;
  }
  else if (outC->init) {
    outC->lastRadioMsgTimestamp = 0;
  }
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** brl_BRL_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

