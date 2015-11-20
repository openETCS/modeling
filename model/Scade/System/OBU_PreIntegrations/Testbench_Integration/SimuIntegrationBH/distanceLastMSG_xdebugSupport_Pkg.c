/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "distanceLastMSG_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void distanceLastMSG_init_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L21 = 0;
  outC->_L20 = 0;
  outC->_L19 = kcg_true;
  outC->_L18 = 0;
  outC->_L17 = kcg_true;
  outC->_L16 = 0;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = 0;
  outC->_L12 = 0;
  outC->_L10.radioDevice = 0;
  outC->_L10.receivedSystemTime = 0;
  outC->_L10.nid_message = 0;
  outC->_L10.t_train = 0;
  outC->_L10.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L10.nid_lrbg = 0;
  outC->_L10.t_train_reference = 0;
  outC->_L10.nid_em = 0;
  outC->_L10.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.d_sr = 0;
  outC->_L10.t_sh_rqst = 0;
  outC->_L10.d_ref = 0;
  outC->_L10.q_dir = Q_DIR_Reverse;
  outC->_L10.d_emergencystop = 0;
  outC->_L10.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = 0;
  outC->_L7 = kcg_true;
  outC->_L6 = msrc_undefined_Common_Types_Pkg;
  outC->_L5 = kcg_true;
  outC->_L4 = msrc_undefined_Common_Types_Pkg;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = 0;
  outC->_L1.BG_Common_Header.nid_c = 0;
  outC->_L1.BG_Common_Header.nid_bg = 0;
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->_L1.BG_Common_Header.q_nvlocacc = 0;
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = 0;
  outC->_L1.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1.Radio_Common_Header.nid_message = 0;
  outC->_L1.Radio_Common_Header.t_train = 0;
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1.Radio_Common_Header.t_train_reference = 0;
  outC->_L1.Radio_Common_Header.nid_em = 0;
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = 0;
  outC->_L1.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1.Radio_Common_Header.d_ref = 0;
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->_L1.packets.PacketHeaders[i].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L1.packets.PacketData[i1] = 0;
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = 0;
  outC->_L1.sendingRBC.rbc_id = 0;
  outC->_L1.sendingRBC.device_id = 0;
  outC->MSGReceived = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_IfBlock1 = 0;
  outC->_L37_IfBlock1 = 0;
  outC->_L66_IfBlock1.valid = kcg_true;
  outC->_L66_IfBlock1.timestamp = 0;
  outC->_L66_IfBlock1.odo.o_nominal = 0;
  outC->_L66_IfBlock1.odo.o_min = 0;
  outC->_L66_IfBlock1.odo.o_max = 0;
  outC->_L66_IfBlock1.speed.v_safeNominal = 0;
  outC->_L66_IfBlock1.speed.v_rawNominal = 0;
  outC->_L66_IfBlock1.speed.v_lower = 0;
  outC->_L66_IfBlock1.speed.v_upper = 0;
  outC->_L66_IfBlock1.acceleration = 0;
  outC->_L66_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L66_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_IfBlock1.o_nominal = 0;
  outC->_L5_IfBlock1.o_min = 0;
  outC->_L5_IfBlock1.o_max = 0;
  outC->_L45_IfBlock1 = 0;
  outC->_L74_IfBlock1 = 0;
  outC->_L83_IfBlock1 = 0.0;
  outC->_L92_IfBlock1 = 0.0;
  outC->_L101_IfBlock1 = 0.0;
  outC->_L11_IfBlock1 = 0;
  outC->_L12_IfBlock1 = 0;
  outC->_L13_IfBlock1 = kcg_true;
  outC->_L14_IfBlock1 = 0;
  outC->_L15_IfBlock1 = 0.0;
  outC->_L16_IfBlock1 = 0.0;
  outC->_L2_IfBlock1.valid = kcg_true;
  outC->_L2_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L2_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L2_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_IfBlock1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2_IfBlock1.BG_Common_Header.m_mcount = 0;
  outC->_L2_IfBlock1.BG_Common_Header.nid_c = 0;
  outC->_L2_IfBlock1.BG_Common_Header.nid_bg = 0;
  outC->_L2_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L2_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L2_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L2_IfBlock1.BG_Common_Header.q_nvlocacc = 0;
  outC->_L2_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_IfBlock1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_IfBlock1.Radio_Common_Header.radioDevice = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.nid_message = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.t_train = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_IfBlock1.Radio_Common_Header.nid_lrbg = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.t_train_reference = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.nid_em = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_IfBlock1.Radio_Common_Header.d_sr = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.d_ref = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_IfBlock1.Radio_Common_Header.d_emergencystop = 0;
  outC->_L2_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].nid_packet = 0;
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].valid = kcg_true;
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].startAddress = 0;
    outC->_L2_IfBlock1.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->_L2_IfBlock1.packets.PacketData[i3] = 0;
  }
  outC->_L2_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L2_IfBlock1.sendingRBC.nid_c = 0;
  outC->_L2_IfBlock1.sendingRBC.rbc_id = 0;
  outC->_L2_IfBlock1.sendingRBC.device_id = 0;
  outC->_L3_IfBlock1.radioDevice = 0;
  outC->_L3_IfBlock1.receivedSystemTime = 0;
  outC->_L3_IfBlock1.nid_message = 0;
  outC->_L3_IfBlock1.t_train = 0;
  outC->_L3_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3_IfBlock1.nid_lrbg = 0;
  outC->_L3_IfBlock1.t_train_reference = 0;
  outC->_L3_IfBlock1.nid_em = 0;
  outC->_L3_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_IfBlock1.d_sr = 0;
  outC->_L3_IfBlock1.t_sh_rqst = 0;
  outC->_L3_IfBlock1.d_ref = 0;
  outC->_L3_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L3_IfBlock1.d_emergencystop = 0;
  outC->_L3_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_IfBlock1 = 0;
  outC->_L6_IfBlock1.valid = kcg_true;
  outC->_L6_IfBlock1.timestamp = 0;
  outC->_L6_IfBlock1.odo.o_nominal = 0;
  outC->_L6_IfBlock1.odo.o_min = 0;
  outC->_L6_IfBlock1.odo.o_max = 0;
  outC->_L6_IfBlock1.speed.v_safeNominal = 0;
  outC->_L6_IfBlock1.speed.v_rawNominal = 0;
  outC->_L6_IfBlock1.speed.v_lower = 0;
  outC->_L6_IfBlock1.speed.v_upper = 0;
  outC->_L6_IfBlock1.acceleration = 0;
  outC->_L6_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_IfBlock1.o_nominal = 0;
  outC->_L7_IfBlock1.o_min = 0;
  outC->_L7_IfBlock1.o_max = 0;
  outC->_L8_IfBlock1 = 0;
  outC->_L9_IfBlock1 = 0.0;
  outC->_L10_IfBlock1 = 0;
  outC->ck_every = kcg_true;
  outC->init = kcg_true;
  outC->rem_showGeneral = kcg_true;
  outC->LRBG = 0;
  outC->MSGLocation = 0;
  outC->MSG_ID = 0;
  outC->lastLRBG = 0;
  outC->lastMSG = 0;
  outC->distance = 0.0;
  /* 1 */ countPacketsMsg_init_xdebugSupport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void distanceLastMSG_reset_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ countPacketsMsg_reset_xdebugSupport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::distanceLastMSG */
void distanceLastMSG_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::distanceLastMSG::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* xdebugSupport_Pkg::distanceLastMSG::msg */ ReceivedMessage_T_Common_Types_Pkg *msg,
  /* xdebugSupport_Pkg::distanceLastMSG::showGeneral */ kcg_bool showGeneral,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::distanceLastMSG */
  static kcg_int op_call;
  /* xdebugSupport_Pkg::distanceLastMSG::LRBG */
  static NID_LRBG LRBG4;
  /* xdebugSupport_Pkg::distanceLastMSG::MSGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_MSGLocation;
  /* xdebugSupport_Pkg::distanceLastMSG::MSG_ID */
  static NID_BG _2_MSG_ID;
  /* xdebugSupport_Pkg::distanceLastMSG::distance */
  static kcg_real _1_distance;
  /* xdebugSupport_Pkg::distanceLastMSG::LRBG */
  static NID_LRBG LRBG;
  /* xdebugSupport_Pkg::distanceLastMSG::MSGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg MSGLocation;
  /* xdebugSupport_Pkg::distanceLastMSG::MSG_ID */
  static NID_BG MSG_ID;
  /* xdebugSupport_Pkg::distanceLastMSG::distance */
  static kcg_real distance;
  /* xdebugSupport_Pkg::distanceLastMSG::LRBG */
  static NID_LRBG last_LRBG;
  /* xdebugSupport_Pkg::distanceLastMSG::MSGLocation */
  static L_internal_Type_Obu_BasicTypes_Pkg last_MSGLocation;
  /* xdebugSupport_Pkg::distanceLastMSG::MSG_ID */
  static NID_BG last_MSG_ID;
  /* xdebugSupport_Pkg::distanceLastMSG::distance */
  static kcg_real last_distance;
  /* xdebugSupport_Pkg::distanceLastMSG::showGeneral */
  static kcg_bool last_showGeneral;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, msg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L10,
    &outC->_L1.Radio_Common_Header);
  outC->_L12 = outC->_L10.nid_message;
  outC->_L13 = cm24_General_Message_Id_Pkg;
  outC->_L11 = outC->_L12 == outC->_L13;
  outC->ck_every = outC->_L11;
  /* ck_distanceLastMSG */ if (outC->ck_every) {
    /* 1 */ countPacketsMsg_xdebugSupport_Pkg(&outC->_L1, &outC->Context_1);
    op_call = outC->Context_1.count;
  }
  outC->_L2 = outC->_L1.valid;
  outC->_L4 = outC->_L1.source;
  outC->_L6 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L5 = outC->_L4 == outC->_L6;
  outC->_L15 = !outC->_L11;
  outC->_L9 = showGeneral;
  outC->_L14 = outC->_L11 & outC->_L9;
  outC->_L20 = 0;
  /* ck_distanceLastMSG */ if (outC->ck_every) {
    outC->_L16 = op_call;
  }
  else {
    outC->_L16 = outC->_L20;
  }
  outC->_L18 = 0;
  outC->_L17 = outC->_L16 > outC->_L18;
  outC->_L19 = outC->_L15 | outC->_L14 | outC->_L17;
  outC->_L7 = outC->_L2 & outC->_L5 & outC->_L19;
  outC->MSGReceived = outC->_L7;
  outC->IfBlock1_clock = outC->MSGReceived;
  /* last_init_ck_distance */ if (outC->init) {
    last_distance = 0.0;
  }
  else {
    last_distance = outC->distance;
  }
  /* last_init_ck_MSG_ID */ if (outC->init) {
    last_MSG_ID = 0;
  }
  else {
    last_MSG_ID = outC->MSG_ID;
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
  }
  else {
    outC->_L1_IfBlock1 = last_MSG_ID;
    MSG_ID = outC->_L1_IfBlock1;
    outC->_L12_IfBlock1 = MSG_ID;
    outC->_L14_IfBlock1 = 0;
    outC->_L13_IfBlock1 = outC->_L12_IfBlock1 > outC->_L14_IfBlock1;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L66_IfBlock1, odometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L5_IfBlock1,
      &outC->_L66_IfBlock1.odo);
    outC->_L45_IfBlock1 = outC->_L5_IfBlock1.o_nominal;
  }
  /* last_init_ck_MSGLocation */ if (outC->init) {
    last_MSGLocation = 0;
  }
  else {
    last_MSGLocation = outC->MSGLocation;
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L9_IfBlock1 = 0.0;
    _1_distance = outC->_L9_IfBlock1;
    outC->distance = _1_distance;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2_IfBlock1, msg);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L3_IfBlock1,
      &outC->_L2_IfBlock1.Radio_Common_Header);
    outC->_L4_IfBlock1 = outC->_L3_IfBlock1.nid_message;
    _2_MSG_ID = outC->_L4_IfBlock1;
    outC->MSG_ID = _2_MSG_ID;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L6_IfBlock1, odometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L7_IfBlock1,
      &outC->_L6_IfBlock1.odo);
    outC->_L8_IfBlock1 = outC->_L7_IfBlock1.o_nominal;
    _3_MSGLocation = outC->_L8_IfBlock1;
    outC->MSGLocation = _3_MSGLocation;
  }
  else {
    MSGLocation = last_MSGLocation;
    outC->_L37_IfBlock1 = MSGLocation;
    outC->_L74_IfBlock1 = outC->_L45_IfBlock1 - outC->_L37_IfBlock1;
    outC->_L83_IfBlock1 = (kcg_real) outC->_L74_IfBlock1;
    outC->_L101_IfBlock1 = 100.0;
    outC->_L92_IfBlock1 = outC->_L83_IfBlock1 / outC->_L101_IfBlock1;
    outC->_L16_IfBlock1 = 0.0;
    /* 1 */ if (outC->_L13_IfBlock1) {
      outC->_L15_IfBlock1 = outC->_L92_IfBlock1;
    }
    else {
      outC->_L15_IfBlock1 = outC->_L16_IfBlock1;
    }
    distance = outC->_L15_IfBlock1;
    outC->distance = distance;
    outC->MSG_ID = MSG_ID;
    outC->MSGLocation = MSGLocation;
  }
  /* last_init_ck_LRBG */ if (outC->init) {
    last_LRBG = 0;
  }
  else {
    last_LRBG = outC->LRBG;
  }
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L10_IfBlock1 = outC->_L3_IfBlock1.nid_lrbg;
    LRBG4 = outC->_L10_IfBlock1;
    outC->LRBG = LRBG4;
  }
  else {
    outC->_L11_IfBlock1 = last_LRBG;
    LRBG = outC->_L11_IfBlock1;
    outC->LRBG = LRBG;
  }
  outC->_L8 = outC->MSG_ID;
  outC->lastMSG = outC->_L8;
  outC->_L21 = outC->LRBG;
  outC->lastLRBG = outC->_L21;
  /* last_init_ck_showGeneral */ if (outC->init) {
    last_showGeneral = kcg_false;
  }
  else {
    last_showGeneral = outC->rem_showGeneral;
  }
  outC->rem_showGeneral = showGeneral;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** distanceLastMSG_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

