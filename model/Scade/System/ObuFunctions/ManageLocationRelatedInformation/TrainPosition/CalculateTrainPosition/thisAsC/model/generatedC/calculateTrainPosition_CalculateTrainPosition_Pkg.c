/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"

void calculateTrainPosition_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  int i1;
  int i;
  
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
  outC->trainPosition.speed = 0;
  outC->trainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->trainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->trainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->trainPosition.nid_PrvLRB = 0;
  outC->trainPosition.nid_LRBG = 0;
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
  calculateBG_and_trainLocation_init_CalculateTrainPosition_Pkg(
    &outC->Context_1);
}


void calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  calculateBG_and_trainLocation_reset_CalculateTrainPosition_Pkg(
    &outC->Context_1);
}

/** The main function calculating the actual train position */
/** "Remark_1" {Description = "The main function calculating the actual train position. - Description: Calculates the actual train position based on passed balise groups - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.   "} */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2014-15-22", DateM = "Modified : 2014-06-03", Version = "No 00.03.00"} */
/* CalculateTrainPosition_Pkg::calculateTrainPosition */
void calculateTrainPosition_CalculateTrainPosition_Pkg(
  inC_calculateTrainPosition_CalculateTrainPosition_Pkg *inC,
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  calculateBG_and_trainLocation_CalculateTrainPosition_Pkg(
    &inC->currentOdometry,
    &inC->passedBG,
    inC->reset,
    &outC->Context_1);
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo,
    &outC->Context_1.trainPositionInfo);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->BGs,
    &outC->Context_1.BGs);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->errors,
    &outC->Context_1.errors);
  /* 1 */
  calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
    &inC->LRBG,
    &inC->prevLRBG,
    &outC->trainPositionInfo,
    &inC->trainProperties,
    &outC->trainPosition);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** calculateTrainPosition_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

