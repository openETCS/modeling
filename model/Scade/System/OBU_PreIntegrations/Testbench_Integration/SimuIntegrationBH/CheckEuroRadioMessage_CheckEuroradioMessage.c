/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckEuroRadioMessage_CheckEuroradioMessage.h"

#ifndef KCG_USER_DEFINED_INIT
void CheckEuroRadioMessage_init_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->radioMessageConsistencyError = kcg_true;
  outC->otherTimingError = kcg_true;
  outC->tNvContactError = kcg_true;
  outC->radioSequenceError = kcg_true;
  outC->checkedMessage.valid = kcg_true;
  outC->checkedMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->checkedMessage.radioMetadata.t_train_reference = kcg_true;
  outC->checkedMessage.radioMetadata.nid_em = kcg_true;
  outC->checkedMessage.radioMetadata.q_scale = kcg_true;
  outC->checkedMessage.radioMetadata.d_sr = kcg_true;
  outC->checkedMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->checkedMessage.radioMetadata.d_ref = kcg_true;
  outC->checkedMessage.radioMetadata.q_dir = kcg_true;
  outC->checkedMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->checkedMessage.radioMetadata.m_version = kcg_true;
  outC->checkedMessage.BG_Common_Header.valid = kcg_true;
  outC->checkedMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->checkedMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->checkedMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->checkedMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->checkedMessage.BG_Common_Header.m_mcount = 0;
  outC->checkedMessage.BG_Common_Header.nid_c = 0;
  outC->checkedMessage.BG_Common_Header.nid_bg = 0;
  outC->checkedMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->checkedMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->checkedMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->checkedMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->checkedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->checkedMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->checkedMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->checkedMessage.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->checkedMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->checkedMessage.Radio_Common_Header.radioDevice = 0;
  outC->checkedMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->checkedMessage.Radio_Common_Header.nid_message = 0;
  outC->checkedMessage.Radio_Common_Header.t_train = 0;
  outC->checkedMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->checkedMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->checkedMessage.Radio_Common_Header.t_train_reference = 0;
  outC->checkedMessage.Radio_Common_Header.nid_em = 0;
  outC->checkedMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->checkedMessage.Radio_Common_Header.d_sr = 0;
  outC->checkedMessage.Radio_Common_Header.t_sh_rqst = 0;
  outC->checkedMessage.Radio_Common_Header.d_ref = 0;
  outC->checkedMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->checkedMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->checkedMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->checkedMessage.packets.PacketHeaders[i].nid_packet = 0;
    outC->checkedMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->checkedMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->checkedMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->checkedMessage.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->checkedMessage.packets.PacketData[i1] = 0;
  }
  outC->checkedMessage.sendingRBC.valid = kcg_true;
  outC->checkedMessage.sendingRBC.nid_c = 0;
  outC->checkedMessage.sendingRBC.rbc_id = 0;
  outC->checkedMessage.sendingRBC.device_id = 0;
  /* 6 */ TimingChecker_init_CheckEuroradioMessage(&outC->Context_6);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckEuroRadioMessage_reset_CheckEuroradioMessage(
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  /* 6 */ TimingChecker_reset_CheckEuroradioMessage(&outC->Context_6);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CheckEuroradioMessage::CheckEuroRadioMessage */
void CheckEuroRadioMessage_CheckEuroradioMessage(
  /* CheckEuroradioMessage::CheckEuroRadioMessage::rtmMessage */ TrackSide_ForCheck_T_Common_Types_Pkg *rtmMessage,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContact */ T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::lastRelevantEventTimestamp */ T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioStatus */ morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* CheckEuroradioMessage::CheckEuroRadioMessage::activateCheck */ kcg_bool activateCheck,
  outC_CheckEuroRadioMessage_CheckEuroradioMessage *outC)
{
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioMessageConsistencyError */
  static kcg_bool _5_radioMessageConsistencyError;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::otherTimingError */
  static kcg_bool _4_otherTimingError;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContactError */
  static kcg_bool _3_tNvContactError;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioSequenceError */
  static kcg_bool _2_radioSequenceError;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::checkedMessage */
  static ReceivedMessage_T_Common_Types_Pkg _1_checkedMessage;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L104 */
  static kcg_int _L104_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L103 */
  static kcg_int _L103_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L102 */
  static kcg_bool _L102_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L99 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L99_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L100 */
  static kcg_bool _L100_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L101 */
  static kcg_bool _L101_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L95 */
  static kcg_bool _L95_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L94 */
  static kcg_bool _L94_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L89 */
  static kcg_bool _L89_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L90 */
  static kcg_bool _L90_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L91 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L91_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L86 */
  static kcg_bool _L86_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L85 */
  static kcg_bool _L85_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L64 */
  static kcg_bool _L64_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L65 */
  static kcg_bool _L65_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L66 */
  static kcg_bool _L66_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L67 */
  static morcStatus_T_RCM_Session_Types_Pkg _L67_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L68 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L68_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L70 */
  static kcg_bool _L70_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L72 */
  static kcg_bool _L72_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L73 */
  static kcg_bool _L73_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L74 */
  static kcg_bool _L74_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L75 */
  static T_NVCONTACT _L75_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L76 */
  static ReceivedMessage_T_Common_Types_Pkg _L76_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L77 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L77_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L78 */
  static kcg_bool _L78_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L79 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L79_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L80 */
  static kcg_bool _L80_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L81 */
  static kcg_bool _L81_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L82 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L82_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L83 */
  static ReceivedMessage_T_Common_Types_Pkg _L83_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::then::_L84 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L84_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioMessageConsistencyError */
  static kcg_bool radioMessageConsistencyError;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::otherTimingError */
  static kcg_bool otherTimingError;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::tNvContactError */
  static kcg_bool tNvContactError;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::radioSequenceError */
  static kcg_bool radioSequenceError;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::checkedMessage */
  static ReceivedMessage_T_Common_Types_Pkg checkedMessage;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::else::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::else::_L2 */
  static ReceivedMessage_T_Common_Types_Pkg _L2_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1::else::_L1 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L1_IfBlock1;
  /* CheckEuroradioMessage::CheckEuroRadioMessage::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = activateCheck;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L77_IfBlock1, rtmMessage);
    /* 6 */
    ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
      &_L77_IfBlock1,
      &_L76_IfBlock1);
    _L64_IfBlock1 = /* 6 */
      CheckAllowedPacketsRadio_CheckEuroradioMessage(&_L76_IfBlock1);
    _L73_IfBlock1 = /* 6 */
      CheckMandatoryVariablesAndMA_CheckEuroradioMessage(&_L76_IfBlock1);
    _L75_IfBlock1 = tNvContact;
    _L104_IfBlock1 = 1000;
    _L103_IfBlock1 = _L75_IfBlock1 * _L104_IfBlock1;
    _L82_IfBlock1 = lastRelevantEventTimestamp;
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L67_IfBlock1, radioStatus);
    _L84_IfBlock1 = _L77_IfBlock1.systemTime;
    /* 6 */
    TimingChecker_CheckEuroradioMessage(
      _L103_IfBlock1,
      _L82_IfBlock1,
      &_L76_IfBlock1,
      &_L67_IfBlock1,
      _L84_IfBlock1,
      &outC->Context_6);
    _L85_IfBlock1 = outC->Context_6.tNvContactError;
    _L86_IfBlock1 = outC->Context_6.sequenceError;
    _L95_IfBlock1 = outC->Context_6.otherTimingError;
    _L102_IfBlock1 = _L85_IfBlock1 | _L86_IfBlock1 | _L95_IfBlock1;
    _L94_IfBlock1 = !_L102_IfBlock1;
    _L78_IfBlock1 = _L64_IfBlock1 & _L73_IfBlock1 & _L94_IfBlock1;
    /* 6 */
    BuildOutput_CheckEuroradioMessage(
      &_L76_IfBlock1,
      _L78_IfBlock1,
      &_L83_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_1_checkedMessage,
      &_L83_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->checkedMessage,
      &_1_checkedMessage);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L91_IfBlock1, rtmMessage);
    _L89_IfBlock1 = _L91_IfBlock1.valid;
    _L90_IfBlock1 = _L89_IfBlock1 & _L86_IfBlock1;
    _2_radioSequenceError = _L90_IfBlock1;
    outC->radioSequenceError = _2_radioSequenceError;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L79_IfBlock1, rtmMessage);
    _L66_IfBlock1 = _L79_IfBlock1.valid;
    _L81_IfBlock1 = _L66_IfBlock1 & _L85_IfBlock1;
    _3_tNvContactError = _L81_IfBlock1;
    outC->tNvContactError = _3_tNvContactError;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L99_IfBlock1, rtmMessage);
    _L101_IfBlock1 = _L99_IfBlock1.valid;
    _L100_IfBlock1 = _L101_IfBlock1 & _L95_IfBlock1;
    _4_otherTimingError = _L100_IfBlock1;
    outC->otherTimingError = _4_otherTimingError;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L68_IfBlock1, rtmMessage);
    _L74_IfBlock1 = _L68_IfBlock1.valid;
    _L72_IfBlock1 = !_L64_IfBlock1;
    _L70_IfBlock1 = !_L73_IfBlock1;
    _L65_IfBlock1 = _L72_IfBlock1 | _L70_IfBlock1;
    _L80_IfBlock1 = _L74_IfBlock1 & _L65_IfBlock1;
    _5_radioMessageConsistencyError = _L80_IfBlock1;
    outC->radioMessageConsistencyError = _5_radioMessageConsistencyError;
  }
  else {
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L1_IfBlock1, rtmMessage);
    /* 7 */
    ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
      &_L1_IfBlock1,
      &_L2_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&checkedMessage, &_L2_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->checkedMessage,
      &checkedMessage);
    _L3_IfBlock1 = kcg_false;
    radioSequenceError = _L3_IfBlock1;
    outC->radioSequenceError = radioSequenceError;
    tNvContactError = _L3_IfBlock1;
    outC->tNvContactError = tNvContactError;
    otherTimingError = _L3_IfBlock1;
    outC->otherTimingError = otherTimingError;
    radioMessageConsistencyError = _L3_IfBlock1;
    outC->radioMessageConsistencyError = radioMessageConsistencyError;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckEuroRadioMessage_CheckEuroradioMessage.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

