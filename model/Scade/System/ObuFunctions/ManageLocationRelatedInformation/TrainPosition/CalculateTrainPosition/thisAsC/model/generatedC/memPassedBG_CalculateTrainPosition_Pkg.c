/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "memPassedBG_CalculateTrainPosition_Pkg.h"

void memPassedBG_init_CalculateTrainPosition_Pkg(
  outC_memPassedBG_CalculateTrainPosition_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  outC->passedUnlinkedBG.infoFromPassing.passingSpeed = 0;
  outC->passedUnlinkedBG.infoFromPassing.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->passedUnlinkedBG.infoFromPassing.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->passedUnlinkedBG.infoFromPassing.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  for (i = 0; i < 32; i++) {
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].l_packet = 0;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_packet = 0;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->passedUnlinkedBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.m_dup = M_DUP_No_duplicates;
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.n_pig = N_PIG_I_am_the_1st;
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->passedUnlinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->passedUnlinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->passedUnlinkedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->passedUnlinkedBG.infoFromPassing.odometrystamp.o_max = 0;
  outC->passedUnlinkedBG.infoFromPassing.odometrystamp.o_min = 0;
  outC->passedUnlinkedBG.infoFromPassing.odometrystamp.o_nominal = 0;
  outC->passedUnlinkedBG.infoFromPassing.timestamp = 0;
  outC->passedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.l_packet = 0;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.nid_packet = 0;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->passedUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedUnlinkedBG.infoFromLinking.d_link.d_max = 0;
  outC->passedUnlinkedBG.infoFromLinking.d_link.d_min = 0;
  outC->passedUnlinkedBG.infoFromLinking.d_link.nominal = 0;
  outC->passedUnlinkedBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->passedUnlinkedBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->passedUnlinkedBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->passedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->passedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->passedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->passedUnlinkedBG.seqNoOnTrack = 0;
  outC->passedUnlinkedBG.location.d_max = 0;
  outC->passedUnlinkedBG.location.d_min = 0;
  outC->passedUnlinkedBG.location.nominal = 0;
  outC->passedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->passedUnlinkedBG.nid_bg = 0;
  outC->passedUnlinkedBG.nid_c = 0;
  outC->passedUnlinkedBG.valid = kcg_true;
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
}


void memPassedBG_reset_CalculateTrainPosition_Pkg(
  outC_memPassedBG_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
}

/** "Remark_1" {Description = "Memorizes the passed linked and unlinked BG - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::memPassedBG */
void memPassedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::memPassedBG::passedBG */ positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::memPassedBG::prevPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *prevPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::memPassedBG::reset */ kcg_bool reset,
  outC_memPassedBG_CalculateTrainPosition_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::memPassedBG::_L8 */ kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::memPassedBG::_L13 */ kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::memPassedBG::_L22 */ positionedBG_T_TrainPosition_Types_Pck _L22;
  
  _L8 = (*passedBG).valid & (Q_LINK_Linked == (*passedBG).q_link);
  _L13 = (*passedBG).valid & ((*passedBG).q_link == Q_LINK_Unlinked);
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L22,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L22,
      &outC->passedUnlinkedBG);
  }
  if (reset) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedUnlinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedLinkedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    if (_L13 | _L8) {
      if (_L13) {
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &outC->passedUnlinkedBG,
          passedBG);
      }
      else {
        /* 1 */
        improveUnlinkedBGLocation_CalculateTrainPosition_Pkg(
          passedBG,
          prevPassedLinkedBG,
          &_L22,
          &outC->passedUnlinkedBG);
      }
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->passedUnlinkedBG,
        &_L22);
    }
    if (_L8) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->passedLinkedBG,
        passedBG);
    }
    else if (outC->init) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->passedLinkedBG,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoPositionedBG_CalculateTrainPosition_Pkg);
    }
  }
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** memPassedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

