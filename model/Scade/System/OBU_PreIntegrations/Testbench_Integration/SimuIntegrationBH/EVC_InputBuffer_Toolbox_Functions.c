/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC_InputBuffer_Toolbox_Functions.h"

#ifndef KCG_USER_DEFINED_INIT
void EVC_InputBuffer_init_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->sendRTM = kcg_true;
  outC->TrackMessageToEVC.valid = kcg_true;
  outC->TrackMessageToEVC.systemTimeMsgReceived = 0;
  outC->TrackMessageToEVC.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->TrackMessageToEVC.btm_msg.present = kcg_true;
  outC->TrackMessageToEVC.btm_msg.checkResult = kcg_true;
  outC->TrackMessageToEVC.btm_msg.api_bad_balise_received = kcg_true;
  outC->TrackMessageToEVC.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->TrackMessageToEVC.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessageToEVC.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->TrackMessageToEVC.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->TrackMessageToEVC.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->TrackMessageToEVC.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->TrackMessageToEVC.btm_msg.api_header.m_mcount = 0;
  outC->TrackMessageToEVC.btm_msg.api_header.nid_c = 0;
  outC->TrackMessageToEVC.btm_msg.api_header.nid_bg = 0;
  outC->TrackMessageToEVC.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->TrackMessageToEVC.rtm_msg.present = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i = 0; i < 30; i++) {
    outC->TrackMessageToEVC.packets.PacketHeaders[i].nid_packet = 0;
    outC->TrackMessageToEVC.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->TrackMessageToEVC.packets.PacketHeaders[i].valid = kcg_true;
    outC->TrackMessageToEVC.packets.PacketHeaders[i].startAddress = 0;
    outC->TrackMessageToEVC.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->TrackMessageToEVC.packets.PacketData[i1] = 0;
  }
  /* 2 */ TRAIN_TrackSideInputFifo_init_Toolbox_Functions_5(&outC->Context_2);
  /* 1 */ TRAIN_TrackSideInputFifo_init_Toolbox_Functions_5(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVC_InputBuffer_reset_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC)
{
  outC->init = kcg_true;
  /* 2 */ TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(&outC->Context_2);
  /* 1 */ TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::EVC_InputBuffer */
void EVC_InputBuffer_Toolbox_Functions(
  /* Toolbox::Functions::EVC_InputBuffer::BTMMessage */ API_TrackSideInput_T_API_Msg_Pkg *BTMMessage,
  /* Toolbox::Functions::EVC_InputBuffer::RTMMessage */ API_TrackSideInput_T_API_Msg_Pkg *RTMMessage,
  outC_EVC_InputBuffer_Toolbox_Functions *outC)
{
  static kcg_int noname;
  /* Toolbox::Functions::EVC_InputBuffer::sendRTM */
  static kcg_bool last_sendRTM;
  /* Toolbox::Functions::EVC_InputBuffer::sizeBTM */
  static kcg_int sizeBTM;
  /* Toolbox::Functions::EVC_InputBuffer::_L3 */
  static kcg_int _L3;
  /* Toolbox::Functions::EVC_InputBuffer::_L2 */
  static kcg_bool _L2;
  /* Toolbox::Functions::EVC_InputBuffer::_L1 */
  static API_TrackSideInput_T_API_Msg_Pkg _L1;
  /* Toolbox::Functions::EVC_InputBuffer::_L6 */
  static kcg_int _L6;
  /* Toolbox::Functions::EVC_InputBuffer::_L5 */
  static kcg_bool _L5;
  /* Toolbox::Functions::EVC_InputBuffer::_L4 */
  static API_TrackSideInput_T_API_Msg_Pkg _L4;
  /* Toolbox::Functions::EVC_InputBuffer::_L7 */
  static API_TrackSideInput_T_API_Msg_Pkg _L7;
  /* Toolbox::Functions::EVC_InputBuffer::_L8 */
  static API_TrackSideInput_T_API_Msg_Pkg _L8;
  /* Toolbox::Functions::EVC_InputBuffer::_L9 */
  static kcg_bool _L9;
  /* Toolbox::Functions::EVC_InputBuffer::_L10 */
  static kcg_bool _L10;
  /* Toolbox::Functions::EVC_InputBuffer::_L12 */
  static API_TrackSideInput_T_API_Msg_Pkg _L12;
  /* Toolbox::Functions::EVC_InputBuffer::_L13 */
  static API_TrackSideInput_T_API_Msg_Pkg _L13;
  /* Toolbox::Functions::EVC_InputBuffer::_L14 */
  static API_TrackSideInput_T_API_Msg_Pkg _L14;
  /* Toolbox::Functions::EVC_InputBuffer::_L15 */
  static kcg_bool _L15;
  /* Toolbox::Functions::EVC_InputBuffer::_L16 */
  static kcg_bool _L16;
  /* Toolbox::Functions::EVC_InputBuffer::_L17 */
  static kcg_bool _L17;
  /* Toolbox::Functions::EVC_InputBuffer::_L19 */
  static kcg_bool _L19;
  /* Toolbox::Functions::EVC_InputBuffer::_L20 */
  static kcg_int _L20;
  /* Toolbox::Functions::EVC_InputBuffer::_L21 */
  static kcg_bool _L21;
  /* Toolbox::Functions::EVC_InputBuffer::_L22 */
  static kcg_int _L22;
  /* Toolbox::Functions::EVC_InputBuffer::_L23 */
  static kcg_bool _L23;
  /* Toolbox::Functions::EVC_InputBuffer::_L27 */
  static kcg_bool _L27;
  /* Toolbox::Functions::EVC_InputBuffer::_L28 */
  static kcg_bool _L28;
  /* Toolbox::Functions::EVC_InputBuffer::_L29 */
  static kcg_bool _L29;
  /* Toolbox::Functions::EVC_InputBuffer::_L45 */
  static kcg_bool _L45;
  
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L7, RTMMessage);
  _L9 = _L7.valid;
  /* last_init_ck_sendRTM */ if (outC->init) {
    last_sendRTM = kcg_true;
  }
  else {
    last_sendRTM = outC->sendRTM;
  }
  _L27 = last_sendRTM;
  /* 1 */
  TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
    &_L7,
    _L9,
    _L27,
    &outC->Context_1);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L1, &outC->Context_1.outData);
  _L2 = outC->Context_1.outValid;
  _L3 = outC->Context_1.size;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L8, BTMMessage);
  _L10 = _L8.valid;
  _L28 = last_sendRTM;
  _L29 = !_L28;
  /* 2 */
  TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
    &_L8,
    _L10,
    _L29,
    &outC->Context_2);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L4, &outC->Context_2.outData);
  _L5 = outC->Context_2.outValid;
  _L6 = outC->Context_2.size;
  _L17 = last_sendRTM;
  /* 2 */ if (_L17) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L12, &_L1);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L12, &_L4);
  }
  _L16 = last_sendRTM;
  /* 4 */ if (_L16) {
    _L15 = _L2;
  }
  else {
    _L15 = _L5;
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &_L14,
    (API_TrackSideInput_T_API_Msg_Pkg *) &cEmtpyTrackSideInputMessage_Toolbox);
  /* 3 */ if (_L15) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L13, &_L12);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L13, &_L14);
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->TrackMessageToEVC, &_L13);
  sizeBTM = _L6;
  _L20 = sizeBTM;
  _L22 = 0;
  _L21 = _L20 == _L22;
  _L23 = kcg_true;
  _L45 = kcg_false;
  /* 6 */ if (_L21) {
    _L19 = _L23;
  }
  else {
    _L19 = _L45;
  }
  outC->sendRTM = _L19;
  noname = _L3;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVC_InputBuffer_Toolbox_Functions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

