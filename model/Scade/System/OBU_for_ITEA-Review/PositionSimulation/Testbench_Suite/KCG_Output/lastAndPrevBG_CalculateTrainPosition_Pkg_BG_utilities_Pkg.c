/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

void lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->prvBG_loc.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->prvBG_loc.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->prvBG_loc.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->prvBG_loc.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->prvBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->prvBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->prvBG_loc.infoFromPassing.BG_Header.nid_bg = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.nid_c = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.m_mcount = 0;
  outC->prvBG_loc.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->prvBG_loc.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->prvBG_loc.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->prvBG_loc.infoFromPassing.BG_Header.valid = kcg_true;
  outC->prvBG_loc.infoFromPassing.valid = kcg_true;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->prvBG_loc.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.nid_c = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->prvBG_loc.infoFromLinking.linkingInfo.d_link = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->prvBG_loc.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->prvBG_loc.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->prvBG_loc.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->prvBG_loc.infoFromLinking.d_link.d_max = 0;
  outC->prvBG_loc.infoFromLinking.d_link.d_min = 0;
  outC->prvBG_loc.infoFromLinking.d_link.nominal = 0;
  outC->prvBG_loc.infoFromLinking.expectedLocation.d_max = 0;
  outC->prvBG_loc.infoFromLinking.expectedLocation.d_min = 0;
  outC->prvBG_loc.infoFromLinking.expectedLocation.nominal = 0;
  outC->prvBG_loc.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->prvBG_loc.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->prvBG_loc.infoFromLinking.valid = kcg_true;
  outC->prvBG_loc.seqNoOnTrack = 0;
  outC->prvBG_loc.location.d_max = 0;
  outC->prvBG_loc.location.d_min = 0;
  outC->prvBG_loc.location.nominal = 0;
  outC->prvBG_loc.q_link = Q_LINK_Unlinked;
  outC->prvBG_loc.nid_bg = 0;
  outC->prvBG_loc.nid_c = 0;
  outC->prvBG_loc.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->lastBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->lastBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->lastBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->lastBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->lastBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->lastBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->lastBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->lastBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->lastBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->lastBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->lastBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->lastBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->lastBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->lastBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->lastBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->lastBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->lastBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->lastBG.infoFromPassing.valid = kcg_true;
  outC->lastBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->lastBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->lastBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->lastBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->lastBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->lastBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->lastBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->lastBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->lastBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->lastBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->lastBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->lastBG.infoFromLinking.d_link.d_max = 0;
  outC->lastBG.infoFromLinking.d_link.d_min = 0;
  outC->lastBG.infoFromLinking.d_link.nominal = 0;
  outC->lastBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->lastBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->lastBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->lastBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->lastBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->lastBG.infoFromLinking.valid = kcg_true;
  outC->lastBG.seqNoOnTrack = 0;
  outC->lastBG.location.d_max = 0;
  outC->lastBG.location.d_min = 0;
  outC->lastBG.location.nominal = 0;
  outC->lastBG.q_link = Q_LINK_Unlinked;
  outC->lastBG.nid_bg = 0;
  outC->lastBG.nid_c = 0;
  outC->lastBG.valid = kcg_true;
  for (i = 0; i < 4; i++) {
    outC->prvBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->prvBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->prvBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->prvBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->prvBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->prvBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
  }
  outC->prvBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->prvBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->prvBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->prvBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->prvBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->prvBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->prvBG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->prvBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->prvBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->prvBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->prvBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->prvBG.infoFromPassing.valid = kcg_true;
  outC->prvBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->prvBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->prvBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->prvBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->prvBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->prvBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->prvBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->prvBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->prvBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->prvBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->prvBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->prvBG.infoFromLinking.d_link.d_max = 0;
  outC->prvBG.infoFromLinking.d_link.d_min = 0;
  outC->prvBG.infoFromLinking.d_link.nominal = 0;
  outC->prvBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->prvBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->prvBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->prvBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->prvBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->prvBG.infoFromLinking.valid = kcg_true;
  outC->prvBG.seqNoOnTrack = 0;
  outC->prvBG.location.d_max = 0;
  outC->prvBG.location.d_min = 0;
  outC->prvBG.location.nominal = 0;
  outC->prvBG.q_link = Q_LINK_Unlinked;
  outC->prvBG.nid_bg = 0;
  outC->prvBG.nid_c = 0;
  outC->prvBG.valid = kcg_true;
}


void lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->init = kcg_true;
}

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG */
void lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BG */ positionedBG_T_TrainPosition_Types_Pck *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::linked */ kcg_bool linked,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::reset */ kcg_bool reset,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::enable */ kcg_bool enable,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  Q_LINK tmp;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L10 */ positionedBG_T_TrainPosition_Types_Pck _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L17 */ positionedBG_T_TrainPosition_Types_Pck _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L23 */ kcg_bool _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L22 */ kcg_bool _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG::_L21 */ kcg_int _L21;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L17,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L10, &outC->prvBG_loc);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L17, &outC->lastBG);
  }
  if (reset) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->lastBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->prvBG_loc,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    if (linked) {
      tmp = Q_LINK_Linked;
    }
    else {
      tmp = Q_LINK_Unlinked;
    }
    if ((*BG).valid & (*BG).infoFromPassing.valid &
      (*BG).infoFromPassing.BG_Header.valid & ((*BG).q_link == tmp)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lastBG, BG);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lastBG, &_L17);
    }
    _L23 = /* 1 */
      positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &outC->lastBG,
        &_L10);
    _L22 = /* 2 */
      positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &outC->lastBG,
        &_L17);
    if (!kcg_comp_positionedBG_T_TrainPosition_Types_Pck(&_L17, &outC->lastBG) &
      outC->lastBG.valid & !_L23 & !_L22) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG_loc, &_L17);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG_loc, &_L10);
    }
  }
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->prvBG_loc,
    BGs,
    enable,
    &_L21,
    &_L22,
    &_L23);
  if (_L22) {
    if ((0 <= _L21) & (_L21 < 8)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->prvBG,
        &(*BGs)[_L21]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->prvBG,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoPositionedBG_CalculateTrainPosition_Pkg);
    }
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->prvBG,
      &outC->prvBG_loc);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

