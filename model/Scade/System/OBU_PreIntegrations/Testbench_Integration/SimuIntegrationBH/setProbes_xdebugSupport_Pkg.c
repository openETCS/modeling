/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setProbes_xdebugSupport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void setProbes_init_xdebugSupport_Pkg(outC_setProbes_xdebugSupport_Pkg *outC)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->_L60 = 0;
  outC->_L59 = kcg_true;
  outC->_L58 = 0;
  outC->_L57 = kcg_true;
  outC->_L55 = 0;
  outC->_L54 = 0;
  outC->_L52 = 0;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L47 = 0;
  outC->_L46 = 0;
  outC->_L44 = 0;
  outC->_L45 = 0;
  outC->_L42 = 0;
  outC->_L39 = 0;
  outC->_L38 = 0;
  outC->_L37 = 0;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = 0;
  outC->_L32 = kcg_true;
  outC->_L31 = 0;
  outC->_L30.nid_packet = 0;
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.valid = kcg_true;
  outC->_L30.startAddress = 0;
  outC->_L30.endAddress = 0;
  outC->_L29.nid_packet = 0;
  outC->_L29.q_dir = Q_DIR_Reverse;
  outC->_L29.valid = kcg_true;
  outC->_L29.startAddress = 0;
  outC->_L29.endAddress = 0;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = 0;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = 0;
  outC->_L20 = kcg_true;
  outC->_L19 = 0;
  outC->_L18 = 0;
  outC->_L16 = 0;
  outC->_L14 = 0;
  outC->_L15.nid_packet = 0;
  outC->_L15.q_dir = Q_DIR_Reverse;
  outC->_L15.valid = kcg_true;
  outC->_L15.startAddress = 0;
  outC->_L15.endAddress = 0;
  outC->_L13 = 0;
  outC->_L12 = 0;
  outC->_L11.nid_packet = 0;
  outC->_L11.q_dir = Q_DIR_Reverse;
  outC->_L11.valid = kcg_true;
  outC->_L11.startAddress = 0;
  outC->_L11.endAddress = 0;
  for (i = 0; i < 30; i++) {
    outC->_L10[i].nid_packet = 0;
    outC->_L10[i].q_dir = Q_DIR_Reverse;
    outC->_L10[i].valid = kcg_true;
    outC->_L10[i].startAddress = 0;
    outC->_L10[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 30; i1++) {
    outC->_L9.PacketHeaders[i1].nid_packet = 0;
    outC->_L9.PacketHeaders[i1].q_dir = Q_DIR_Reverse;
    outC->_L9.PacketHeaders[i1].valid = kcg_true;
    outC->_L9.PacketHeaders[i1].startAddress = 0;
    outC->_L9.PacketHeaders[i1].endAddress = 0;
  }
  for (i2 = 0; i2 < 500; i2++) {
    outC->_L9.PacketData[i2] = 0;
  }
  outC->_L8 = 0;
  outC->_L7.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.q_media = Q_MEDIA_Balise;
  outC->_L7.n_pig = N_PIG_I_am_the_1st;
  outC->_L7.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.m_dup = M_DUP_No_duplicates;
  outC->_L7.m_mcount = 0;
  outC->_L7.nid_c = 0;
  outC->_L7.nid_bg = 0;
  outC->_L7.q_link = Q_LINK_Unlinked;
  outC->_L6.present = kcg_true;
  outC->_L6.checkResult = kcg_true;
  outC->_L6.api_bad_balise_received = kcg_true;
  outC->_L6.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.api_header.q_media = Q_MEDIA_Balise;
  outC->_L6.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L6.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L6.api_header.m_mcount = 0;
  outC->_L6.api_header.nid_c = 0;
  outC->_L6.api_header.nid_bg = 0;
  outC->_L6.api_header.q_link = Q_LINK_Unlinked;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.acceleration = 0;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L5 = 0;
  outC->_L4.radioDevice = 0;
  outC->_L4.receivedSystemTime = 0;
  outC->_L4.nid_message = 0;
  outC->_L4.t_train = 0;
  outC->_L4.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L4.nid_lrbg = 0;
  outC->_L4.t_train_reference = 0;
  outC->_L4.nid_em = 0;
  outC->_L4.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.d_sr = 0;
  outC->_L4.t_sh_rqst = 0;
  outC->_L4.d_ref = 0;
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.d_emergencystop = 0;
  outC->_L4.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.present = kcg_true;
  outC->_L2.apiConsistencyError = kcg_true;
  outC->_L2.Radio_Common_Header.radioDevice = 0;
  outC->_L2.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L2.Radio_Common_Header.nid_message = 0;
  outC->_L2.Radio_Common_Header.t_train = 0;
  outC->_L2.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.Radio_Common_Header.nid_lrbg = 0;
  outC->_L2.Radio_Common_Header.t_train_reference = 0;
  outC->_L2.Radio_Common_Header.nid_em = 0;
  outC->_L2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.Radio_Common_Header.d_sr = 0;
  outC->_L2.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L2.Radio_Common_Header.d_ref = 0;
  outC->_L2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2.Radio_Common_Header.d_emergencystop = 0;
  outC->_L2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L2.Radio_MetaData.nid_em = kcg_true;
  outC->_L2.Radio_MetaData.q_scale = kcg_true;
  outC->_L2.Radio_MetaData.d_sr = kcg_true;
  outC->_L2.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L2.Radio_MetaData.d_ref = kcg_true;
  outC->_L2.Radio_MetaData.q_dir = kcg_true;
  outC->_L2.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L2.Radio_MetaData.m_version = kcg_true;
  outC->_L2.sendingRBC_Id.valid = kcg_true;
  outC->_L2.sendingRBC_Id.nid_c = 0;
  outC->_L2.sendingRBC_Id.rbc_id = 0;
  outC->_L2.sendingRBC_Id.device_id = 0;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTimeMsgReceived = 0;
  outC->_L1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1.btm_msg.present = kcg_true;
  outC->_L1.btm_msg.checkResult = kcg_true;
  outC->_L1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1.btm_msg.api_header.m_mcount = 0;
  outC->_L1.btm_msg.api_header.nid_c = 0;
  outC->_L1.btm_msg.api_header.nid_bg = 0;
  outC->_L1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->_L1.rtm_msg.present = kcg_true;
  outC->_L1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->_L1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->_L1.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->_L1.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L1.packets.PacketHeaders[i3].nid_packet = 0;
    outC->_L1.packets.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[i3].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[i3].startAddress = 0;
    outC->_L1.packets.PacketHeaders[i3].endAddress = 0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->_L1.packets.PacketData[i4] = 0;
  }
  outC->ck_every = kcg_true;
  outC->init = kcg_true;
  outC->lastBGID = 0;
  outC->lastMsgID = 0;
  outC->bgID = 0;
  outC->msgID = 0;
  outC->lastBG_ID = 0;
  outC->lastRadioMSG = 0;
  outC->packet_id2 = 0;
  outC->packet_id1 = 0;
  outC->BG_ID = 0;
  outC->radioMSG = 0;
  outC->isChanged = kcg_true;
  /* 1 */ countPackets_init_xdebugSupport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setProbes_reset_xdebugSupport_Pkg(outC_setProbes_xdebugSupport_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ countPackets_reset_xdebugSupport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* xdebugSupport_Pkg::setProbes */
void setProbes_xdebugSupport_Pkg(
  /* xdebugSupport_Pkg::setProbes::inMsg */ API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  /* xdebugSupport_Pkg::setProbes::show24 */ kcg_bool show24,
  outC_setProbes_xdebugSupport_Pkg *outC)
{
  /* xdebugSupport_Pkg::setProbes */
  static kcg_int op_call;
  /* xdebugSupport_Pkg::setProbes::lastBGID */
  static NID_BG last_lastBGID;
  /* xdebugSupport_Pkg::setProbes::lastMsgID */
  static NID_MESSAGE last_lastMsgID;
  /* xdebugSupport_Pkg::setProbes::bgID */
  static NID_BG last_bgID;
  /* xdebugSupport_Pkg::setProbes::msgID */
  static NID_MESSAGE last_msgID;
  
  /* last_init_ck_msgID */ if (outC->init) {
    last_msgID = 0;
  }
  else {
    last_msgID = outC->msgID;
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1, inMsg);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&outC->_L2, &outC->_L1.rtm_msg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L4,
    &outC->_L2.Radio_Common_Header);
  outC->_L5 = outC->_L4.nid_message;
  outC->msgID = outC->_L5;
  outC->_L31 = outC->msgID;
  outC->_L33 = cm24_General_Message_Id_Pkg;
  outC->_L32 = outC->_L31 != outC->_L33;
  outC->_L57 = !outC->_L32;
  outC->ck_every = outC->_L57;
  /* ck_setProbes */ if (outC->ck_every) {
    /* 1 */ countPackets_xdebugSupport_Pkg(&outC->_L1, &outC->Context_1);
    op_call = outC->Context_1.count;
  }
  outC->_L18 = outC->msgID;
  outC->radioMSG = outC->_L18;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&outC->_L6, &outC->_L1.btm_msg);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L7, &outC->_L6.api_header);
  outC->_L8 = outC->_L7.nid_bg;
  /* last_init_ck_bgID */ if (outC->init) {
    last_bgID = 0;
  }
  else {
    last_bgID = outC->bgID;
  }
  outC->bgID = outC->_L8;
  outC->_L19 = outC->bgID;
  outC->BG_ID = outC->_L19;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L9, &outC->_L1.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L10, &outC->_L9.PacketHeaders);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    (MetadataElement_T_Common_Types_Pkg *)
      &cNoMetaDataElement_Common_Types_Pkg);
  outC->_L12 = 0;
  if ((0 <= outC->_L12) & (outC->_L12 < 30)) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L11,
      &outC->_L10[outC->_L12]);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L11, &outC->_L30);
  }
  outC->_L13 = outC->_L11.nid_packet;
  outC->packet_id1 = outC->_L13;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L29,
    (MetadataElement_T_Common_Types_Pkg *)
      &cNoMetaDataElement_Common_Types_Pkg);
  outC->_L16 = 1;
  if ((0 <= outC->_L16) & (outC->_L16 < 30)) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L15,
      &outC->_L10[outC->_L16]);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L15, &outC->_L29);
  }
  outC->_L14 = outC->_L15.nid_packet;
  outC->packet_id2 = outC->_L14;
  outC->_L20 = outC->_L1.valid;
  outC->_L52 = last_bgID;
  outC->_L22 = outC->bgID;
  outC->_L23 = outC->_L52 != outC->_L22;
  outC->_L54 = last_msgID;
  outC->_L26 = outC->msgID;
  outC->_L24 = outC->_L54 != outC->_L26;
  outC->_L35 = show24;
  outC->_L60 = 0;
  outC->_L58 = 0;
  /* ck_setProbes */ if (outC->ck_every) {
    outC->_L55 = op_call;
  }
  else {
    outC->_L55 = outC->_L58;
  }
  outC->_L59 = outC->_L60 > outC->_L55;
  outC->_L34 = outC->_L32 | outC->_L35 | outC->_L59;
  outC->_L36 = outC->_L24 & outC->_L34;
  outC->_L27 = outC->_L23 | outC->_L36;
  outC->_L28 = outC->_L20 & outC->_L27;
  outC->isChanged = outC->_L28;
  /* last_init_ck_lastMsgID */ if (outC->init) {
    last_lastMsgID = 0;
  }
  else {
    last_lastMsgID = outC->lastMsgID;
  }
  outC->_L37 = last_lastMsgID;
  outC->_L51 = outC->_L20 & outC->_L36;
  outC->_L39 = outC->msgID;
  /* 1 */ if (outC->_L51) {
    outC->_L38 = outC->_L39;
  }
  else {
    outC->_L38 = outC->_L37;
  }
  outC->lastMsgID = outC->_L38;
  /* last_init_ck_lastBGID */ if (outC->init) {
    last_lastBGID = 0;
  }
  else {
    last_lastBGID = outC->lastBGID;
  }
  outC->_L42 = last_lastBGID;
  outC->_L50 = outC->_L20 & outC->_L23;
  outC->_L45 = outC->bgID;
  /* 3 */ if (outC->_L50) {
    outC->_L44 = outC->_L45;
  }
  else {
    outC->_L44 = outC->_L42;
  }
  outC->lastBGID = outC->_L44;
  outC->_L47 = outC->lastMsgID;
  outC->lastRadioMSG = outC->_L47;
  outC->_L46 = outC->lastBGID;
  outC->lastBG_ID = outC->_L46;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setProbes_xdebugSupport_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

