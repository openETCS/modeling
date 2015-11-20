/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->rem_LRBG.valid = kcg_true;
  outC->rem_LRBG.nid_c = 0;
  outC->rem_LRBG.nid_bg = 0;
  outC->rem_LRBG.q_link = Q_LINK_Unlinked;
  outC->rem_LRBG.location.nominal = 0;
  outC->rem_LRBG.location.d_min = 0;
  outC->rem_LRBG.location.d_max = 0;
  outC->rem_LRBG.seqNoOnTrack = 0;
  outC->rem_LRBG.infoFromLinking.valid = kcg_true;
  outC->rem_LRBG.infoFromLinking.nid_bg_fromLinkingBG = 0;
  outC->rem_LRBG.infoFromLinking.nid_c_fromLinkingBG = 0;
  outC->rem_LRBG.infoFromLinking.expectedLocation.nominal = 0;
  outC->rem_LRBG.infoFromLinking.expectedLocation.d_min = 0;
  outC->rem_LRBG.infoFromLinking.expectedLocation.d_max = 0;
  outC->rem_LRBG.infoFromLinking.d_link.nominal = 0;
  outC->rem_LRBG.infoFromLinking.d_link.d_min = 0;
  outC->rem_LRBG.infoFromLinking.d_link.d_max = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->rem_LRBG.infoFromLinking.linkingInfo.nid_LRBG = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->rem_LRBG.infoFromLinking.linkingInfo.d_link = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->rem_LRBG.infoFromLinking.linkingInfo.nid_c = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.nid_bg = 0;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->rem_LRBG.infoFromLinking.linkingInfo.q_locacc = 0;
  outC->rem_LRBG.infoFromPassing.valid = kcg_true;
  outC->rem_LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->rem_LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->rem_LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->rem_LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->rem_LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->rem_LRBG.infoFromPassing.BG_Header.m_mcount = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.nid_c = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.nid_bg = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.acceleration = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->rem_LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->rem_LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->rem_LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->rem_LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->rem_LRBG.infoFromPassing.BG_Header.q_nvlocacc = 0;
  outC->rem_LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->rem_LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->rem_LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (i = 0; i < 33; i++) {
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].valid = kcg_true;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].nid_LRBG = 0;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_dir = Q_DIR_Reverse;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_scale = Q_SCALE_10_cm_scale;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].d_link = 0;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].nid_c = 0;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].nid_bg = 0;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->rem_LRBG.infoFromPassing.linkedBGs[i].q_locacc = 0;
  }
  outC->rem_LRBG.missed = kcg_true;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::op_3_6_5_1_4_j */
void op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::LRBG */ positionedBG_T_TrainPosition_Types_Pck *LRBG,
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_3_6_5_1_4_j_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::LRBG */
  static positionedBG_T_TrainPosition_Types_Pck last_LRBG;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L2 */
  static Q_LINK _L2;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L3 */
  static kcg_bool _L3;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L4 */
  static Q_LINK _L4;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L5 */
  static NID_BG _L5;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L6 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L6;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L7 */
  static LinkedBG_T_BG_Types_Pkg _L7;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L8 */
  static NID_BG _L8;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L9 */
  static kcg_bool _L9;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L14 */
  static kcg_bool _L14;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L16 */
  static kcg_bool _L16;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L17 */
  static kcg_bool _L17;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L18 */
  static kcg_bool _L18;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L19 */
  static trainPosition_T_TrainPosition_Types_Pck _L19;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L20 */
  static kcg_bool _L20;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L21 */
  static positionedBG_T_TrainPosition_Types_Pck _L21;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L22 */
  static NID_BG _L22;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L23 */
  static NID_BG _L23;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L24 */
  static kcg_bool _L24;
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_j::_L25 */
  static kcg_bool _L25;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, LRBG);
  _L2 = _L1.q_link;
  _L4 = Q_LINK_Linked;
  _L3 = _L4 == _L2;
  _L5 = _L1.nid_bg;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L6,
    &_L1.infoFromLinking);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&_L7, &_L6.linkingInfo);
  _L8 = _L7.nid_bg;
  _L9 = _L5 == _L8;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L19, trainPos);
  _L20 = _L19.linkingIsUsedOnboard;
  _L14 = _L1.valid;
  _L17 = _L3 & _L14;
  _L18 = _L9 & _L17;
  /* 1 */ if (_L20) {
    _L16 = _L18;
  }
  else {
    _L16 = _L17;
  }
  _L23 = _L1.nid_bg;
  /* last_init_ck_LRBG */ if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_LRBG,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cPositionedBG_T_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &last_LRBG,
      &outC->rem_LRBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L21, &last_LRBG);
  _L22 = _L21.nid_bg;
  _L24 = _L23 != _L22;
  _L25 = _L16 & _L24;
  outC->trigger = _L25;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->rem_LRBG, LRBG);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_3_6_5_1_4_j_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

