/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "prevPassedLinkedBG_CalculateTrainPosition_Pkg.h"

void prevPassedLinkedBG_init_CalculateTrainPosition_Pkg(
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  outC->previouslyPassedBG.infoFromPassing.passingSpeed = 0;
  outC->previouslyPassedBG.infoFromPassing.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->previouslyPassedBG.infoFromPassing.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->previouslyPassedBG.infoFromPassing.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  for (i = 0; i < 32; i++) {
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].l_packet = 0;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].nid_packet = 0;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->previouslyPassedBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->previouslyPassedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.m_dup =
    M_DUP_No_duplicates;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.n_pig = N_PIG_I_am_the_1st;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->previouslyPassedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->previouslyPassedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->previouslyPassedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->previouslyPassedBG.infoFromPassing.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->previouslyPassedBG.infoFromPassing.odometrystamp.o_max = 0;
  outC->previouslyPassedBG.infoFromPassing.odometrystamp.o_min = 0;
  outC->previouslyPassedBG.infoFromPassing.odometrystamp.o_nominal = 0;
  outC->previouslyPassedBG.infoFromPassing.timestamp = 0;
  outC->previouslyPassedBG.infoFromPassing.valid = kcg_true;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.l_packet = 0;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.nid_packet = 0;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->previouslyPassedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->previouslyPassedBG.infoFromLinking.d_link.d_max = 0;
  outC->previouslyPassedBG.infoFromLinking.d_link.d_min = 0;
  outC->previouslyPassedBG.infoFromLinking.d_link.nominal = 0;
  outC->previouslyPassedBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->previouslyPassedBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->previouslyPassedBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->previouslyPassedBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->previouslyPassedBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->previouslyPassedBG.infoFromLinking.valid = kcg_true;
  outC->previouslyPassedBG.seqNoOnTrack = 0;
  outC->previouslyPassedBG.location.d_max = 0;
  outC->previouslyPassedBG.location.d_min = 0;
  outC->previouslyPassedBG.location.nominal = 0;
  outC->previouslyPassedBG.q_link = Q_LINK_Unlinked;
  outC->previouslyPassedBG.nid_bg = 0;
  outC->previouslyPassedBG.nid_c = 0;
  outC->previouslyPassedBG.valid = kcg_true;
  RisingEdge_init_digital(&outC->Context_1);
}


void prevPassedLinkedBG_reset_CalculateTrainPosition_Pkg(
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
}

/** "Remark_1" {Description = "Memorizes the previously passed BG when a new BG is passed and the IDs are different. - Copyright Siemens AG, 2014 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke   The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2014-05-22", DateM = "Modified : 2014-05-22", Version = "00.02.00"} */
/* CalculateTrainPosition_Pkg::prevPassedLinkedBG */
void prevPassedLinkedBG_CalculateTrainPosition_Pkg(
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::lastPassedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *lastPassedLinkedBG,
  /* CalculateTrainPosition_Pkg::prevPassedLinkedBG::reset */ kcg_bool reset,
  outC_prevPassedLinkedBG_CalculateTrainPosition_Pkg *outC)
{
  /* 1 */
  RisingEdge_digital(
    (kcg_bool)
      ((*lastPassedLinkedBG).valid & (Q_LINK_Linked ==
          (*lastPassedLinkedBG).q_link) & !/* 1 */
        nidBG_nidc_equal_CalculateTrainPosition_Pkg(
          (*lastPassedLinkedBG).nid_c,
          (*lastPassedLinkedBG).nid_bg,
          (*passedBG).BG_Header.nid_c,
          (*passedBG).BG_Header.nid_bg) & ((*passedBG).BG_Header.q_link ==
          Q_LINK_Linked) & (*passedBG).valid),
    &outC->Context_1);
  if (reset) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->previouslyPassedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else if (outC->Context_1.RE_Output) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->previouslyPassedBG,
      lastPassedLinkedBG);
  }
  else if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->previouslyPassedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** prevPassedLinkedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

