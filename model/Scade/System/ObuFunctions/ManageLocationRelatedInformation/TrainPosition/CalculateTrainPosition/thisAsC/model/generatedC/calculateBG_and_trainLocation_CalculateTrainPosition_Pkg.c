/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateBG_and_trainLocation_CalculateTrainPosition_Pkg.h"

void calculateBG_and_trainLocation_init_CalculateTrainPosition_Pkg(
  outC_calculateBG_and_trainLocation_CalculateTrainPosition_Pkg *outC)
{
  int i1;
  int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 64; i++) {
    outC->BGs_loc[i].infoFromPassing.passingSpeed = 0;
    outC->BGs_loc[i].infoFromPassing.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->BGs_loc[i].infoFromPassing.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->BGs_loc[i].infoFromPassing.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    for (i1 = 0; i1 < 32; i1++) {
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].q_locacc = 0;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].nid_bg = 0;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].nid_c = 0;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].d_link = 0;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].l_packet = 0;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].nid_packet = 0;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
      outC->BGs_loc[i].infoFromPassing.linkedBGs[i1].valid = kcg_true;
    }
    outC->BGs_loc[i].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_loc[i].infoFromPassing.BG_Header.nid_bg = 0;
    outC->BGs_loc[i].infoFromPassing.BG_Header.nid_c = 0;
    outC->BGs_loc[i].infoFromPassing.BG_Header.m_mcount = 0;
    outC->BGs_loc[i].infoFromPassing.BG_Header.m_dup = M_DUP_No_duplicates;
    outC->BGs_loc[i].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_loc[i].infoFromPassing.BG_Header.n_pig = N_PIG_I_am_the_1st;
    outC->BGs_loc[i].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_loc[i].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_loc[i].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_loc[i].infoFromPassing.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->BGs_loc[i].infoFromPassing.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->BGs_loc[i].infoFromPassing.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->BGs_loc[i].infoFromPassing.odometrystamp.o_max = 0;
    outC->BGs_loc[i].infoFromPassing.odometrystamp.o_min = 0;
    outC->BGs_loc[i].infoFromPassing.odometrystamp.o_nominal = 0;
    outC->BGs_loc[i].infoFromPassing.timestamp = 0;
    outC->BGs_loc[i].infoFromPassing.valid = kcg_true;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.nid_c = 0;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.d_link = 0;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.l_packet = 0;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.nid_packet = 0;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->BGs_loc[i].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_loc[i].infoFromLinking.d_link.d_max = 0;
    outC->BGs_loc[i].infoFromLinking.d_link.d_min = 0;
    outC->BGs_loc[i].infoFromLinking.d_link.nominal = 0;
    outC->BGs_loc[i].infoFromLinking.expectedLocation.d_max = 0;
    outC->BGs_loc[i].infoFromLinking.expectedLocation.d_min = 0;
    outC->BGs_loc[i].infoFromLinking.expectedLocation.nominal = 0;
    outC->BGs_loc[i].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->BGs_loc[i].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->BGs_loc[i].infoFromLinking.valid = kcg_true;
    outC->BGs_loc[i].seqNoOnTrack = 0;
    outC->BGs_loc[i].location.d_max = 0;
    outC->BGs_loc[i].location.d_min = 0;
    outC->BGs_loc[i].location.nominal = 0;
    outC->BGs_loc[i].q_link = Q_LINK_Unlinked;
    outC->BGs_loc[i].nid_bg = 0;
    outC->BGs_loc[i].nid_c = 0;
    outC->BGs_loc[i].valid = kcg_true;
  }
  outC->passedLinkedBG.infoFromPassing.passingSpeed = 0;
  outC->passedLinkedBG.infoFromPassing.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->passedLinkedBG.infoFromPassing.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->passedLinkedBG.infoFromPassing.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  for (i = 0; i < 32; i++) {
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].l_packet = 0;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].nid_packet = 0;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->passedLinkedBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->passedLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedLinkedBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->passedLinkedBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->passedLinkedBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->passedLinkedBG.infoFromPassing.BG_Header.m_dup = M_DUP_No_duplicates;
  outC->passedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->passedLinkedBG.infoFromPassing.BG_Header.n_pig = N_PIG_I_am_the_1st;
  outC->passedLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->passedLinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->passedLinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->passedLinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->passedLinkedBG.infoFromPassing.odometrystamp.o_max = 0;
  outC->passedLinkedBG.infoFromPassing.odometrystamp.o_min = 0;
  outC->passedLinkedBG.infoFromPassing.odometrystamp.o_nominal = 0;
  outC->passedLinkedBG.infoFromPassing.timestamp = 0;
  outC->passedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.l_packet = 0;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.nid_packet = 0;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->passedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedLinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->passedLinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->passedLinkedBG.infoFromLinking.d_link.nominal = 0;
  outC->passedLinkedBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->passedLinkedBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->passedLinkedBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->passedLinkedBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->passedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->passedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->passedLinkedBG.seqNoOnTrack = 0;
  outC->passedLinkedBG.location.d_max = 0;
  outC->passedLinkedBG.location.d_min = 0;
  outC->passedLinkedBG.location.nominal = 0;
  outC->passedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->passedLinkedBG.nid_bg = 0;
  outC->passedLinkedBG.nid_c = 0;
  outC->passedLinkedBG.valid = kcg_true;
  outC->errors.positionCalculation_inconsistent = kcg_true;
  outC->errors.passedBG_notFoundWhereExpected = kcg_true;
  outC->errors.outOfMemSpace = kcg_true;
  for (i = 0; i < 64; i++) {
    outC->BGs[i].infoFromPassing.passingSpeed = 0;
    outC->BGs[i].infoFromPassing.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
    outC->BGs[i].infoFromPassing.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->BGs[i].infoFromPassing.noCoordinateSystemHasBeenAssigned = kcg_true;
    for (i1 = 0; i1 < 32; i1++) {
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
      outC->BGs[i].infoFromPassing.linkedBGs[i1].l_packet = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].nid_packet = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
      outC->BGs[i].infoFromPassing.linkedBGs[i1].valid = kcg_true;
    }
    outC->BGs[i].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs[i].infoFromPassing.BG_Header.nid_bg = 0;
    outC->BGs[i].infoFromPassing.BG_Header.nid_c = 0;
    outC->BGs[i].infoFromPassing.BG_Header.m_mcount = 0;
    outC->BGs[i].infoFromPassing.BG_Header.m_dup = M_DUP_No_duplicates;
    outC->BGs[i].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs[i].infoFromPassing.BG_Header.n_pig = N_PIG_I_am_the_1st;
    outC->BGs[i].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs[i].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs[i].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs[i].infoFromPassing.BG_centerDetectionInaccuraccuracies.d_max = 0;
    outC->BGs[i].infoFromPassing.BG_centerDetectionInaccuraccuracies.d_min = 0;
    outC->BGs[i].infoFromPassing.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->BGs[i].infoFromPassing.odometrystamp.o_max = 0;
    outC->BGs[i].infoFromPassing.odometrystamp.o_min = 0;
    outC->BGs[i].infoFromPassing.odometrystamp.o_nominal = 0;
    outC->BGs[i].infoFromPassing.timestamp = 0;
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
    outC->BGs[i].infoFromLinking.linkingInfo.l_packet = 0;
    outC->BGs[i].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs[i].infoFromLinking.linkingInfo.nid_packet = 0;
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
  outC->trainPositionInfo.speed = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.passingSpeed = 0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  for (i = 0; i < 32; i++) {
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
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].l_packet =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_packet =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
  }
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_dup =
    M_DUP_No_duplicates;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_pig =
    N_PIG_I_am_the_1st;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.odometrystamp.o_max =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.odometrystamp.o_min =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.odometrystamp.o_nominal =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.timestamp = 0;
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
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.l_packet =
    0;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_packet =
    0;
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
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.passingSpeed = 0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  for (i = 0; i < 32; i++) {
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
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].l_packet =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_packet =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG =
      0;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[i].valid =
      kcg_true;
  }
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_dup =
    M_DUP_No_duplicates;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.n_pig =
    N_PIG_I_am_the_1st;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.odometrystamp.o_max =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.odometrystamp.o_min =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.odometrystamp.o_nominal =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.timestamp = 0;
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
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.l_packet =
    0;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_packet =
    0;
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
  prevPassedLinkedBG_init_CalculateTrainPosition_Pkg(&outC->Context_1);
  memPassedBG_init_CalculateTrainPosition_Pkg(&outC->_1_Context_1);
}


void calculateBG_and_trainLocation_reset_CalculateTrainPosition_Pkg(
  outC_calculateBG_and_trainLocation_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ memPassedBG_reset_CalculateTrainPosition_Pkg(&outC->_1_Context_1);
  /* 1 */ prevPassedLinkedBG_reset_CalculateTrainPosition_Pkg(&outC->Context_1);
}

/** Calculation of the location of passed and announced BGs and the actual train position */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation */
void calculateBG_and_trainLocation_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::currentOdometry */ odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::reset */ kcg_bool reset,
  outC_calculateBG_and_trainLocation_CalculateTrainPosition_Pkg *outC)
{
  positionedBGs_T_TrainPosition_Types_Pck tmp;
  kcg_int i;
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::prevPassedLinkedBG_loc */ positionedBG_T_TrainPosition_Types_Pck prevPassedLinkedBG_loc;
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::passedPositionedBG_loc */ positionedBG_T_TrainPosition_Types_Pck passedPositionedBG_loc;
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::_L88 */ positionedBGs_T_TrainPosition_Types_Pck _L88;
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::_L146 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L146;
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::_L152 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L152;
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::_L194 */ kcg_bool _L194;
  /* CalculateTrainPosition_Pkg::calculateBG_and_trainLocation::_L193 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L193;
  
  outC->trainPositionInfo.timestamp = (*currentOdometry).timestamp;
  outC->trainPositionInfo.speed = (*currentOdometry).speed;
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &prevPassedLinkedBG_loc,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &prevPassedLinkedBG_loc,
      &outC->passedLinkedBG);
  }
  /* 1 */
  prevPassedLinkedBG_CalculateTrainPosition_Pkg(
    passedBG,
    &prevPassedLinkedBG_loc,
    reset,
    &outC->Context_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &prevPassedLinkedBG_loc,
    &outC->Context_1.previouslyPassedBG);
  if (reset) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else if (outC->init) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&tmp, &outC->BGs_loc);
  }
  outC->init = kcg_false;
  /* 1 */
  passing_a_BG_CalculateTrainPosition_Pkg(
    passedBG,
    &prevPassedLinkedBG_loc,
    &tmp,
    &passedPositionedBG_loc,
    &_L88,
    &outC->errors.outOfMemSpace,
    &_L194);
  outC->errors.passedBG_notFoundWhereExpected = _L194;
  if (reset) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs_loc,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_loc, &_L88);
  }
  for (i = 0; i < 64; i++) {
    /* 1 */
    improveUnlinkedBGLocation_CalculateTrainPosition_Pkg(
      &passedPositionedBG_loc,
      &prevPassedLinkedBG_loc,
      &outC->BGs_loc[i],
      &outC->BGs[i]);
  }
  /* 1 */
  memPassedBG_CalculateTrainPosition_Pkg(
    &passedPositionedBG_loc,
    &prevPassedLinkedBG_loc,
    reset,
    &outC->_1_Context_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedLinkedBG,
    &outC->_1_Context_1.passedLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.lastPassedLinkedBG,
    &outC->passedLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &prevPassedLinkedBG_loc,
    &outC->_1_Context_1.passedUnlinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo.lastPassedUnlinkedBG,
    &prevPassedLinkedBG_loc);
  /* 1 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg(
    &(*currentOdometry).odo,
    &outC->passedLinkedBG,
    &_L146);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG,
    &_L146);
  /* 2 */
  positionDerivedFromPassedBG_CalculateTrainPosition_Pkg(
    &(*currentOdometry).odo,
    &prevPassedLinkedBG_loc,
    &_L152);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG,
    &_L152);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &_L146,
    &_L152,
    &_L193,
    &_L194);
  outC->trainPositionInfo.valid = _L194;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->trainPositionInfo.trainPosition,
    &_L193);
  outC->errors.positionCalculation_inconsistent = !_L194;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculateBG_and_trainLocation_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

