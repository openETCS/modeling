/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void linkedBG_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->rem_position.nominal = 0;
  outC->rem_position.d_min = 0;
  outC->rem_position.d_max = 0;
  outC->_L2 = 0;
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
  for (i2 = 0; i2 < 41; i2++) {
    outC->BGs_out[i2].valid = kcg_true;
    outC->BGs_out[i2].nid_c = 0;
    outC->BGs_out[i2].nid_bg = 0;
    outC->BGs_out[i2].q_link = Q_LINK_Unlinked;
    outC->BGs_out[i2].location.nominal = 0;
    outC->BGs_out[i2].location.d_min = 0;
    outC->BGs_out[i2].location.d_max = 0;
    outC->BGs_out[i2].seqNoOnTrack = 0;
    outC->BGs_out[i2].infoFromLinking.valid = kcg_true;
    outC->BGs_out[i2].infoFromLinking.nid_bg_fromLinkingBG = 0;
    outC->BGs_out[i2].infoFromLinking.nid_c_fromLinkingBG = 0;
    outC->BGs_out[i2].infoFromLinking.expectedLocation.nominal = 0;
    outC->BGs_out[i2].infoFromLinking.expectedLocation.d_min = 0;
    outC->BGs_out[i2].infoFromLinking.expectedLocation.d_max = 0;
    outC->BGs_out[i2].infoFromLinking.d_link.nominal = 0;
    outC->BGs_out[i2].infoFromLinking.d_link.d_min = 0;
    outC->BGs_out[i2].infoFromLinking.d_link.d_max = 0;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.nid_LRBG = 0;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.d_link = 0;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.nid_c = 0;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.nid_bg = 0;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[i2].infoFromLinking.linkingInfo.q_locacc = 0;
    outC->BGs_out[i2].infoFromPassing.valid = kcg_true;
    outC->BGs_out[i2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[i2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[i2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[i2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[i2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[i2].infoFromPassing.BG_Header.m_mcount = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.nid_c = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.nid_bg = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.timestamp = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.acceleration = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[i2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[i2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.q_nvlocacc = 0;
    outC->BGs_out[i2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[i2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[i2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (i1 = 0; i1 < 33; i1++) {
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].valid = kcg_true;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].d_link = 0;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].nid_c = 0;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].nid_bg = 0;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[i2].infoFromPassing.linkedBGs[i1].q_locacc = 0;
    }
    outC->BGs_out[i2].missed = kcg_true;
  }
  outC->BG.valid = kcg_true;
  outC->BG.nid_c = 0;
  outC->BG.nid_bg = 0;
  outC->BG.q_link = Q_LINK_Unlinked;
  outC->BG.location.nominal = 0;
  outC->BG.location.d_min = 0;
  outC->BG.location.d_max = 0;
  outC->BG.seqNoOnTrack = 0;
  outC->BG.infoFromLinking.valid = kcg_true;
  outC->BG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->BG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->BG.infoFromLinking.expectedLocation.nominal = 0;
  outC->BG.infoFromLinking.expectedLocation.d_min = 0;
  outC->BG.infoFromLinking.expectedLocation.d_max = 0;
  outC->BG.infoFromLinking.d_link.nominal = 0;
  outC->BG.infoFromLinking.d_link.d_min = 0;
  outC->BG.infoFromLinking.d_link.d_max = 0;
  outC->BG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->BG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->BG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->BG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->BG.infoFromLinking.linkingInfo.d_link = 0;
  outC->BG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->BG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->BG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->BG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->BG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->BG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->BG.infoFromPassing.valid = kcg_true;
  outC->BG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->BG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->BG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->BG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->BG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->BG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->BG.infoFromPassing.BG_Header.nid_c = 0;
  outC->BG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->BG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->BG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->BG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->BG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->BG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->BG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->BG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->BG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->BG.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->BG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i3 = 0; i3 < 33; i3++) {
    outC->BG.infoFromPassing.linkedBGs[i3].valid = kcg_true;
    outC->BG.infoFromPassing.linkedBGs[i3].nid_LRBG = 0;
    outC->BG.infoFromPassing.linkedBGs[i3].q_dir = Q_DIR_Reverse;
    outC->BG.infoFromPassing.linkedBGs[i3].q_scale = Q_SCALE_10_cm_scale;
    outC->BG.infoFromPassing.linkedBGs[i3].d_link = 0;
    outC->BG.infoFromPassing.linkedBGs[i3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BG.infoFromPassing.linkedBGs[i3].nid_c = 0;
    outC->BG.infoFromPassing.linkedBGs[i3].nid_bg = 0;
    outC->BG.infoFromPassing.linkedBGs[i3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BG.infoFromPassing.linkedBGs[i3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BG.infoFromPassing.linkedBGs[i3].q_locacc = 0;
  }
  outC->BG.missed = kcg_true;
  outC->indexOfBG = 0;
  outC->missed = kcg_true;
  /* 1 */ FallingEdge_init_digital(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ FallingEdge_reset_digital(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed */
void linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */ LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::BGs_in */ positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::enable */ kcg_bool enable,
  outC_linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::weakenedPosition */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _1_weakenedPosition;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L12 */
  static kcg_int _L12_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L11 */
  static kcg_int _L11_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L10 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L10_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L8 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L8_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L6 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L6_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L1 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L1_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::then::_L2 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L2_IfBlock1;
  static L_internal_Type_Obu_BasicTypes_Pkg _4_noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _3_noname;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::weakenedPosition */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg weakenedPosition;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L3 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L36_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L4 */
  static kcg_int _L47_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L7 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L7_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L6 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L68_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L59_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L8 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L810_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L9 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L911_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L10 */
  static kcg_int _L1012_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L13 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L13_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L12 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1213_IfBlock1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1::else::_L11 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1114_IfBlock1;
  static L_internal_Type_Obu_BasicTypes_Pkg _2_noname;
  static L_internal_Type_Obu_BasicTypes_Pkg noname;
  static kcg_bool _5_noname;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::position */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg last_position;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::movedAhead */
  static kcg_bool movedAhead;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::weakenedPosition */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _15_weakenedPosition;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L1 */
  static kcg_bool _L1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L5 */
  static positionedBGs_T_TrainPosition_Types_Pck _L5;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L7 */
  static kcg_int _L7;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L10 */
  static positionedBG_T_TrainPosition_Types_Pck _L10;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L11 */
  static Q_LINK _L11;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L15 */
  static Q_LINK _L15;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L16 */
  static kcg_bool _L16;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L17 */
  static kcg_bool _L17;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L18 */
  static kcg_bool _L18;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L19 */
  static kcg_bool _L19;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L51 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L51;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L57 */
  static kcg_int _L57;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L56 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L56;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L55 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L55;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L54 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L54;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L53 */
  static kcg_bool _L53;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L52 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L52;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L58 */
  static kcg_bool _L58;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L59 */
  static kcg_bool _L59;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L60 */
  static kcg_bool _L60;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L62 */
  static positionedBG_T_TrainPosition_Types_Pck _L62;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L64 */
  static positionedBGs_T_TrainPosition_Types_Pck _L64;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L65 */
  static positionedBGs_T_TrainPosition_Types_Pck _L65;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L66 */
  static positionedBGs_T_TrainPosition_Types_Pck _L66;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L69 */
  static kcg_bool _L69;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L68 */
  static kcg_bool _L68;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L67 */
  static kcg_int _L67;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed::_L70 */
  static kcg_bool _L70;
  
  /* fby_1_init_2 */ if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L10,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L10, &outC->_L3);
  }
  /* fby_1_init_1 */ if (outC->init) {
    _L7 = cNoValidIndex_CalculateTrainPosition_Pkg;
  }
  else {
    _L7 = outC->_L2;
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L54, position);
  /* last_init_ck_position */ if (outC->init) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &last_position,
      (LocWithInAcc_T_Obu_BasicTypes_Pkg *)
        &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &last_position,
      &outC->rem_position);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L52, &last_position);
  /* 2 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L54, &_L52, &_L56);
  _L55 = _L56.nominal;
  _L57 = 0;
  _L53 = _L55 >= _L57;
  movedAhead = _L53;
  IfBlock1_clock = movedAhead;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L1_IfBlock1, position);
    _L3_IfBlock1 = _L1_IfBlock1.nominal;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L2_IfBlock1, &last_position);
    _L8_IfBlock1 = _L2_IfBlock1.nominal;
    _L9_IfBlock1 = _L2_IfBlock1.d_min;
    _L11_IfBlock1 = _L8_IfBlock1 + _L9_IfBlock1;
    _L12_IfBlock1 = _L11_IfBlock1 - _L3_IfBlock1;
    _L5_IfBlock1 = _L1_IfBlock1.d_max;
    _L6_IfBlock1.nominal = _L3_IfBlock1;
    _L6_IfBlock1.d_min = _L12_IfBlock1;
    _L6_IfBlock1.d_max = _L5_IfBlock1;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_1_weakenedPosition,
      &_L6_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_15_weakenedPosition,
      &_1_weakenedPosition);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L36_IfBlock1, position);
    _L1114_IfBlock1 = _L36_IfBlock1.nominal;
    _L1213_IfBlock1 = _L36_IfBlock1.d_min;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L911_IfBlock1, &last_position);
    _L59_IfBlock1 = _L911_IfBlock1.nominal;
    _L7_IfBlock1 = _L911_IfBlock1.d_max;
    _L47_IfBlock1 = _L59_IfBlock1 + _L7_IfBlock1;
    _L1012_IfBlock1 = _L47_IfBlock1 - _L1114_IfBlock1;
    _L810_IfBlock1.nominal = _L1114_IfBlock1;
    _L810_IfBlock1.d_min = _L1213_IfBlock1;
    _L810_IfBlock1.d_max = _L1012_IfBlock1;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &weakenedPosition,
      &_L810_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_15_weakenedPosition,
      &weakenedPosition);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L51, &_15_weakenedPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L5, BGs_in);
  _L6 = enable;
  /* 1 */
  posInRangeOfBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L51,
    &_L5,
    _L6,
    &_L1,
    &outC->_L2,
    &outC->_L3);
  _L59 = /* 1 */
    positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->_L3,
      &_L10);
  _L60 = _L59 & _L1;
  /* 1 */ FallingEdge_digital(_L1, &outC->Context_1);
  _L8 = outC->Context_1.FE_Output;
  _L58 = _L60 | _L8;
  _L11 = _L10.q_link;
  _L15 = Q_LINK_Linked;
  _L16 = _L11 == _L15;
  _L17 = _L10.infoFromPassing.valid;
  _L18 = !_L17;
  _L19 = _L58 & _L16 & _L18;
  outC->missed = _L19;
  outC->indexOfBG = _L7;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L62, &_L10);
  if (kcg_true) {
    _L62.missed = _L19;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG, &_L62);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = _L1_IfBlock1.d_min;
    _L10_IfBlock1 = _L2_IfBlock1.d_max;
    _3_noname = _L10_IfBlock1;
    _4_noname = _L4_IfBlock1;
  }
  else {
    _L68_IfBlock1 = _L911_IfBlock1.d_min;
    _L13_IfBlock1 = _L36_IfBlock1.d_max;
    noname = _L13_IfBlock1;
    _2_noname = _L68_IfBlock1;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L66, BGs_in);
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L62,
    &_L66,
    _L19,
    &_L67,
    &_L68,
    &_L69);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L64, &_L66);
  if ((0 <= _L67) & (_L67 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L64[_L67], &_L62);
  }
  _L70 = _L68 & _L19;
  /* 1 */ if (_L70) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L65, &_L64);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L65, &_L66);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &_L65);
  _5_noname = _L69;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->rem_position, position);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

