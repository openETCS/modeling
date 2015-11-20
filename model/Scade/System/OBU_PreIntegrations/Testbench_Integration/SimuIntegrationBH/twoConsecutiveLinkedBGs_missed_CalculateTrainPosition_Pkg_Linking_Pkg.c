/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void twoConsecutiveLinkedBGs_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->storedMissedBG.valid = kcg_true;
  outC->storedMissedBG.nid_c = 0;
  outC->storedMissedBG.nid_bg = 0;
  outC->storedMissedBG.q_link = Q_LINK_Unlinked;
  outC->storedMissedBG.location.nominal = 0;
  outC->storedMissedBG.location.d_min = 0;
  outC->storedMissedBG.location.d_max = 0;
  outC->storedMissedBG.seqNoOnTrack = 0;
  outC->storedMissedBG.infoFromLinking.valid = kcg_true;
  outC->storedMissedBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->storedMissedBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->storedMissedBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->storedMissedBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->storedMissedBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->storedMissedBG.infoFromLinking.d_link.nominal = 0;
  outC->storedMissedBG.infoFromLinking.d_link.d_min = 0;
  outC->storedMissedBG.infoFromLinking.d_link.d_max = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->storedMissedBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->storedMissedBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->storedMissedBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->storedMissedBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->storedMissedBG.infoFromPassing.valid = kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->storedMissedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->storedMissedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->storedMissedBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storedMissedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storedMissedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storedMissedBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->storedMissedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->storedMissedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->storedMissedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_scale =
      Q_SCALE_10_cm_scale;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->storedMissedBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->storedMissedBG.missed = kcg_true;
  outC->_L8_1.valid = kcg_true;
  outC->_L8_1.nid_c = 0;
  outC->_L8_1.nid_bg = 0;
  outC->_L8_1.q_link = Q_LINK_Unlinked;
  outC->_L8_1.location.nominal = 0;
  outC->_L8_1.location.d_min = 0;
  outC->_L8_1.location.d_max = 0;
  outC->_L8_1.seqNoOnTrack = 0;
  outC->_L8_1.infoFromLinking.valid = kcg_true;
  outC->_L8_1.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->_L8_1.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->_L8_1.infoFromLinking.expectedLocation.nominal = 0;
  outC->_L8_1.infoFromLinking.expectedLocation.d_min = 0;
  outC->_L8_1.infoFromLinking.expectedLocation.d_max = 0;
  outC->_L8_1.infoFromLinking.d_link.nominal = 0;
  outC->_L8_1.infoFromLinking.d_link.d_min = 0;
  outC->_L8_1.infoFromLinking.d_link.d_max = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8_1.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8_1.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_1.infoFromLinking.linkingInfo.d_link = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8_1.infoFromLinking.linkingInfo.nid_c = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->_L8_1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8_1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8_1.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->_L8_1.infoFromPassing.valid = kcg_true;
  outC->_L8_1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8_1.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8_1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_1.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8_1.infoFromPassing.BG_Header.m_mcount = 0;
  outC->_L8_1.infoFromPassing.BG_Header.nid_c = 0;
  outC->_L8_1.infoFromPassing.BG_Header.nid_bg = 0;
  outC->_L8_1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L8_1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L8_1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L8_1.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->_L8_1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L8_1.infoFromPassing.linkedBGs[i1].valid = kcg_true;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].nid_LRBG = 0;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].q_dir = Q_DIR_Reverse;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].d_link = 0;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].nid_c = 0;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].nid_bg = 0;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8_1.infoFromPassing.linkedBGs[i1].q_locacc = 0;
  }
  outC->_L8_1.missed = kcg_true;
  outC->secondConsecutiveBG_missed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void twoConsecutiveLinkedBGs_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed */
void twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missed */ kcg_bool missed,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::missedLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *missedLinkedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::passedBG */ positionedBG_T_TrainPosition_Types_Pck *passedBG,
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::reset */ kcg_bool reset,
  outC_twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg *outC)
{
  /* linear::Memory::Out */
  static positionedBG_T_TrainPosition_Types_Pck Out_1;
  /* linear::Memory::InitVal */
  static positionedBG_T_TrainPosition_Types_Pck InitVal_1;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_1;
  /* linear::Memory::Reset */
  static kcg_bool Reset_1;
  /* linear::Memory::M_Input */
  static positionedBG_T_TrainPosition_Types_Pck M_Input_1;
  /* linear::Memory::_L9 */
  static positionedBG_T_TrainPosition_Types_Pck _L9_1;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_1;
  /* linear::Memory::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2_1;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_1;
  /* linear::Memory::_L5 */
  static positionedBG_T_TrainPosition_Types_Pck _L5_1;
  /* linear::Memory::_L6 */
  static positionedBG_T_TrainPosition_Types_Pck _L6_1;
  /* linear::Memory::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7_1;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::storedMissedBG */
  static positionedBG_T_TrainPosition_Types_Pck last_storedMissedBG;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::linkedAnnouncedBG_passed */
  static kcg_bool linkedAnnouncedBG_passed;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L4 */
  static positionedBG_T_TrainPosition_Types_Pck _L4;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L9 */
  static positionedBG_T_TrainPosition_Types_Pck _L9;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L10 */
  static positionedBG_T_TrainPosition_Types_Pck _L10;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L12 */
  static positionedBG_T_TrainPosition_Types_Pck _L12;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L14 */
  static Q_LINK _L14;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L15 */
  static kcg_bool _L15;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L16 */
  static Q_LINK _L16;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L17 */
  static kcg_bool _L17;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L21 */
  static kcg_bool _L21;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L24 */
  static kcg_bool _L24;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L25 */
  static kcg_bool _L25;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L27 */
  static kcg_bool _L27;
  /* CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed::_L29 */
  static kcg_bool _L29;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2, missedLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &InitVal_1,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L9_1, &InitVal_1);
  /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5_1, &_L9_1);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L5_1, &outC->_L8_1);
  }
  _L6 = reset;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L12, passedBG);
  _L13 = _L12.valid;
  _L14 = _L12.q_link;
  _L16 = Q_LINK_Linked;
  _L17 = _L14 == _L16;
  _L15 = _L12.infoFromLinking.valid;
  _L21 = _L13 & _L17 & _L15;
  linkedAnnouncedBG_passed = _L21;
  _L27 = linkedAnnouncedBG_passed;
  _L29 = _L6 | _L27;
  Reset_1 = _L29;
  _L1_1 = Reset_1;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2_1, &InitVal_1);
  _L24 = missed;
  MemCond_1 = _L24;
  _L3_1 = MemCond_1;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&M_Input_1, &_L2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L6_1, &M_Input_1);
  /* 4 */ if (_L3_1) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7_1, &_L6_1);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7_1, &_L5_1);
  }
  /* 1 */ if (_L1_1) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L8_1, &_L2_1);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L8_1, &_L7_1);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&Out_1, &outC->_L8_1);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L4, &Out_1);
  /* last_init_ck_storedMissedBG */ if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_storedMissedBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_storedMissedBG,
      &outC->storedMissedBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->storedMissedBG, &_L4);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L9, &last_storedMissedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L10, missedLinkedBG);
  _L11 = /* 1 */
    positionedBGs_ids_notEqual_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L10,
      &_L9);
  _L25 = _L24 & _L11;
  outC->secondConsecutiveBG_missed = _L25;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

