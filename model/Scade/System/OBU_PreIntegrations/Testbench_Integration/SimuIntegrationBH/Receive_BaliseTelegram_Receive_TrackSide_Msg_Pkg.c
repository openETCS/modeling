/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Receive_BaliseTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->outTrackMessage_for_check.valid = kcg_true;
  outC->outTrackMessage_for_check.systemTime = 0;
  outC->outTrackMessage_for_check.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.present = kcg_true;
  for (i2 = 0; i2 < 8; i2++) {
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].valid =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].checkResult =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.m_mcount =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.nid_c =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.nid_bg =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].packets.PacketHeaders[i].nid_packet =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].packets.PacketHeaders[i].q_dir =
        Q_DIR_Reverse;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].packets.PacketHeaders[i].valid =
        kcg_true;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].packets.PacketHeaders[i].startAddress =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].packets.PacketHeaders[i].endAddress =
        0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i2].packets.PacketData[i1] =
        0;
    }
  }
  outC->outTrackMessage_for_check.telegramHeaders.numberBalises = 0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outTrackMessage_for_check.radio_Msg.present = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.consistencyError = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.header.radioDevice = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.receivedSystemTime = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_message = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.t_train = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_lrbg = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.t_train_reference = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_em = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->outTrackMessage_for_check.radio_Msg.header.d_sr = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.t_sh_rqst = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.d_ref = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->outTrackMessage_for_check.radio_Msg.header.d_emergencystop = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.t_train_reference =
    kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_emergencystop =
    kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.m_version = kcg_true;
  for (i3 = 0; i3 < 30; i3++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i3].nid_packet =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i3].q_dir =
      Q_DIR_Reverse;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i3].valid =
      kcg_true;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i3].startAddress =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i3].endAddress =
      0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketData[i4] = 0;
  }
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.valid = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.nid_c = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.rbc_id = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.device_id = 0;
  /* 1 */ BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */ BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram */
void Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::telegramPresent */
  static kcg_bool telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::centerOfBaliseDetection */
  static centerOfBalisePosition_T_BG_Types_Pkg centerOfBaliseDetection;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::decodedTelegram */
  static Telegram_T_BG_Types_Pkg decodedTelegram;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::msgType */
  static MsgSource_T_Common_Types_Pkg msgType;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::systemTimeMsgReceived */
  static T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L1 */
  static kcg_bool _L1;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L5 */
  static odometry_T_Obu_BasicTypes_Pkg _L5;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L6 */
  static BG_Message_T_BG_Types_Pkg _L6;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L7 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L7;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L13 */
  static RadioMessage_T_Radio_Types_Pkg _L13;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L17 */
  static API_TrackSideInput_T_API_Msg_Pkg _L17;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L18 */
  static kcg_bool _L18;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L19 */
  static kcg_bool _L19;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L20 */
  static kcg_bool _L20;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L22 */
  static kcg_bool _L22;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L23 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L23;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L25 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L25;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L26 */
  static TelegramHeader_T_BG_Types_Pkg _L26;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L28 */
  static Telegram_T_BG_Types_Pkg _L28;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L30 */
  static kcg_bool _L30;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L31 */
  static kcg_bool _L31;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L34 */
  static kcg_bool _L34;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L35 */
  static MsgSource_T_Common_Types_Pkg _L35;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L37 */
  static MsgSource_T_Common_Types_Pkg _L37;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L38 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L38;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L40 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L40;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L46 */
  static CompressedPackets_T_Common_Types_Pkg _L46;
  /* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram::_L55 */
  static Telegram_T_BG_Types_Pkg _L55;
  
  _L1 = reset;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L5, inActualOdometry);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L17, API_TrackSide_Msg);
  _L18 = _L17.valid;
  _L19 = _L17.btm_msg.present;
  _L20 = _L18 & _L19;
  telegramPresent = _L20;
  _L22 = telegramPresent;
  _L30 = telegramPresent;
  _L31 = _L17.btm_msg.checkResult;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L26, &_L17.btm_msg.api_header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L46, &_L17.packets);
  _L55.valid = _L30;
  _L55.checkResult = _L31;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L55.telegramheader, &_L26);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L55.packets, &_L46);
  kcg_copy_Telegram_T_BG_Types_Pkg(&decodedTelegram, &_L55);
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L28, &decodedTelegram);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L23,
    &_L17.btm_msg.centerOfBalisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &centerOfBaliseDetection,
    &_L23);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L25,
    &centerOfBaliseDetection);
  /* 1 */
  BuildBGMessage_Receive_TrackSide_Msg_Pkg(
    _L1,
    _L22,
    &_L28,
    &_L25,
    &_L5,
    &outC->Context_1);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L6, &outC->Context_1.outBGMessage);
  _L34 = _L6.present;
  _L38 = _L17.systemTimeMsgReceived;
  systemTimeMsgReceived = _L38;
  _L40 = systemTimeMsgReceived;
  _L35 = _L17.msg_type;
  msgType = _L35;
  _L37 = msgType;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(
    &_L13,
    (RadioMessage_T_Radio_Types_Pkg *) &cEmptyRadioMsg_Radio_Types_Pkg);
  _L7.valid = _L34;
  _L7.systemTime = _L40;
  _L7.msg_type = _L37;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L7.telegramHeaders, &_L6);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&_L7.radio_Msg, &_L13);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->outTrackMessage_for_check,
    &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

