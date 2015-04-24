/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPositionInfo_CalculateTrainPosition_Pkg.h"

void calculateTrainPositionInfo_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->_L71.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L71.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L71.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L71.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L71.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L71.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L71.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->_L71.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L71.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L71.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L71.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L71.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L71.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L71.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L71.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L71.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L71.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L71.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L71.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L71.infoFromPassing.valid = kcg_true;
  outC->_L71.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L71.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L71.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L71.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L71.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L71.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L71.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L71.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L71.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L71.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L71.infoFromLinking.d_link.d_max = 0;
  outC->_L71.infoFromLinking.d_link.d_min = 0;
  outC->_L71.infoFromLinking.d_link.nominal = 0;
  outC->_L71.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L71.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L71.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L71.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L71.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L71.infoFromLinking.valid = kcg_true;
  outC->_L71.seqNoOnTrack = 0;
  outC->_L71.location.d_max = 0;
  outC->_L71.location.d_min = 0;
  outC->_L71.location.nominal = 0;
  outC->_L71.q_link = Q_LINK_Unlinked;
  outC->_L71.nid_bg = 0;
  outC->_L71.nid_c = 0;
  outC->_L71.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->_L61.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->_L61.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L61.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L61.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L61.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L61.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L61.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L61.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L61.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L61.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L61.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->_L61.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L61.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L61.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L61.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L61.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L61.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L61.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L61.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L61.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L61.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L61.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L61.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L61.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L61.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L61.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L61.infoFromPassing.valid = kcg_true;
  outC->_L61.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L61.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L61.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L61.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L61.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L61.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L61.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L61.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L61.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L61.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L61.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L61.infoFromLinking.d_link.d_max = 0;
  outC->_L61.infoFromLinking.d_link.d_min = 0;
  outC->_L61.infoFromLinking.d_link.nominal = 0;
  outC->_L61.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L61.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L61.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L61.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L61.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L61.infoFromLinking.valid = kcg_true;
  outC->_L61.seqNoOnTrack = 0;
  outC->_L61.location.d_max = 0;
  outC->_L61.location.d_min = 0;
  outC->_L61.location.nominal = 0;
  outC->_L61.q_link = Q_LINK_Unlinked;
  outC->_L61.nid_bg = 0;
  outC->_L61.nid_c = 0;
  outC->_L61.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->_L62.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->_L62.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->_L62.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->_L62.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->_L62.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->_L62.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->_L62.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->_L62.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->_L62.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L62.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L62.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L62.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L62.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L62.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L62.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L62.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L62.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L62.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L62.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L62.infoFromPassing.valid = kcg_true;
  outC->_L62.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L62.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L62.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L62.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L62.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L62.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L62.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L62.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L62.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L62.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L62.infoFromLinking.d_link.d_max = 0;
  outC->_L62.infoFromLinking.d_link.d_min = 0;
  outC->_L62.infoFromLinking.d_link.nominal = 0;
  outC->_L62.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L62.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L62.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L62.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L62.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L62.infoFromLinking.valid = kcg_true;
  outC->_L62.seqNoOnTrack = 0;
  outC->_L62.location.d_max = 0;
  outC->_L62.location.d_min = 0;
  outC->_L62.location.nominal = 0;
  outC->_L62.q_link = Q_LINK_Unlinked;
  outC->_L62.nid_bg = 0;
  outC->_L62.nid_c = 0;
  outC->_L62.valid = kcg_true;
  outC->positionCalculationNotConsistent = kcg_true;
  outC->trainPositionInfo.linkingIsUsedOnboard = kcg_true;
  outC->trainPositionInfo.speed = 0;
  for (i = 0; i < 4; i++) {
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_c =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].d_link =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
  }
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.seqNoOnTrack = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_max = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_min = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.nominal = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_bg = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_c = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_c =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].d_link =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
  }
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.seqNoOnTrack = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_max = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_min = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.location.nominal = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.nid_bg = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.nid_c = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_locacc =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_bg =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_c =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].d_link =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
  }
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.nominal = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    0;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.seqNoOnTrack = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_max = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_min = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.location.nominal = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.nid_bg = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.nid_c = 0;
  outC->trainPositionInfo.prevPassedLinkedBG.valid = kcg_true;
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.d_max = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.d_min = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.nominal = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.d_max = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.d_min = 0;
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.nominal = 0;
  outC->trainPositionInfo.trainPosition.d_max = 0;
  outC->trainPositionInfo.trainPosition.d_min = 0;
  outC->trainPositionInfo.trainPosition.nominal = 0;
  outC->trainPositionInfo.timestamp = 0;
  outC->trainPositionInfo.valid = kcg_true;
  lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
  lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
  linkingIsUsed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_1_Context_1);
}


void calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  linkingIsUsed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_1_Context_1);
  /* 2 */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
  /* 1 */
  lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_1);
}

/* CalculateTrainPosition_Pkg::calculateTrainPositionInfo */
void calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::recalculateBGs */ kcg_bool recalculateBGs,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::passedBG */ positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::reset */ kcg_bool reset,
  outC_calculateTrainPositionInfo_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L7 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L7;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L8 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L8;
  /* CalculateTrainPosition_Pkg::calculateTrainPositionInfo::_L11 */ kcg_bool _L11;
  
  outC->trainPositionInfo.valid = (*currentOdometry).valid;
  outC->trainPositionInfo.timestamp = (*currentOdometry).timestamp;
  outC->trainPositionInfo.speed = (*currentOdometry).speed.v_safeNominal;
  if (recalculateBGs) {
    /* 1 */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      passedBG,
      BGs,
      kcg_true,
      reset,
      recalculateBGs,
      &outC->Context_1);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L61,
      &outC->Context_1.prvBG);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L62,
      &outC->Context_1.lastBG);
    /* 2 */
    lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      passedBG,
      BGs,
      kcg_false,
      reset,
      recalculateBGs,
      &outC->Context_2);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L71,
      &outC->Context_2.lastBG);
  }
  else if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L61,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L62,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L71,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.prevPassedLinkedBG,
    &outC->_L61);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.lastPassedLinkedBG,
    &outC->_L62);
  /* 1 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &(*currentOdometry).odo,
    &outC->_L62,
    &_L7);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG,
    &_L7);
  outC->init = kcg_false;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.lastPassedUnlinkedBG,
    &outC->_L71);
  /* 2 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &(*currentOdometry).odo,
    &outC->_L71,
    &_L8);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG,
    &_L8);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &_L7,
    &_L8,
    &outC->trainPositionInfo.trainPosition,
    &_L11);
  outC->positionCalculationNotConsistent = !_L11;
  /* 1 */
  linkingIsUsed_CalculateTrainPosition_Pkg_Linking_Pkg(
    currentOdometry,
    BGs,
    recalculateBGs,
    &outC->_1_Context_1);
  outC->trainPositionInfo.linkingIsUsedOnboard =
    outC->_1_Context_1.linkingIsUsed;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculateTrainPositionInfo_CalculateTrainPosition_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

