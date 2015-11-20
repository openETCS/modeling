/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CheckBGConsistency_init_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->nid_c = 0;
  outC->nid_errorBG = 0;
  outC->incompatibleVersion = kcg_true;
  outC->errorUnlinkedBG = kcg_true;
  outC->errorLinkedBG = kcg_true;
  outC->badBaliseMessageToDMI = kcg_true;
  outC->applyServiceBrake = kcg_true;
  outC->passedBG_out.valid = kcg_true;
  outC->passedBG_out.source = msrc_undefined_Common_Types_Pkg;
  outC->passedBG_out.radioMetadata.t_train_reference = kcg_true;
  outC->passedBG_out.radioMetadata.nid_em = kcg_true;
  outC->passedBG_out.radioMetadata.q_scale = kcg_true;
  outC->passedBG_out.radioMetadata.d_sr = kcg_true;
  outC->passedBG_out.radioMetadata.t_sh_rqst = kcg_true;
  outC->passedBG_out.radioMetadata.d_ref = kcg_true;
  outC->passedBG_out.radioMetadata.q_dir = kcg_true;
  outC->passedBG_out.radioMetadata.d_emergencystop = kcg_true;
  outC->passedBG_out.radioMetadata.m_version = kcg_true;
  outC->passedBG_out.BG_Common_Header.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->passedBG_out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedBG_out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->passedBG_out.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->passedBG_out.BG_Common_Header.m_mcount = 0;
  outC->passedBG_out.BG_Common_Header.nid_c = 0;
  outC->passedBG_out.BG_Common_Header.nid_bg = 0;
  outC->passedBG_out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->passedBG_out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->passedBG_out.BG_Common_Header.bgPosition.timestamp = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.acceleration = 0;
  outC->passedBG_out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->passedBG_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->passedBG_out.BG_Common_Header.q_nvlocacc = 0;
  outC->passedBG_out.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedBG_out.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->passedBG_out.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->passedBG_out.Radio_Common_Header.radioDevice = 0;
  outC->passedBG_out.Radio_Common_Header.receivedSystemTime = 0;
  outC->passedBG_out.Radio_Common_Header.nid_message = 0;
  outC->passedBG_out.Radio_Common_Header.t_train = 0;
  outC->passedBG_out.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->passedBG_out.Radio_Common_Header.nid_lrbg = 0;
  outC->passedBG_out.Radio_Common_Header.t_train_reference = 0;
  outC->passedBG_out.Radio_Common_Header.nid_em = 0;
  outC->passedBG_out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->passedBG_out.Radio_Common_Header.d_sr = 0;
  outC->passedBG_out.Radio_Common_Header.t_sh_rqst = 0;
  outC->passedBG_out.Radio_Common_Header.d_ref = 0;
  outC->passedBG_out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->passedBG_out.Radio_Common_Header.d_emergencystop = 0;
  outC->passedBG_out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->passedBG_out.packets.PacketHeaders[i].nid_packet = 0;
    outC->passedBG_out.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->passedBG_out.packets.PacketHeaders[i].valid = kcg_true;
    outC->passedBG_out.packets.PacketHeaders[i].startAddress = 0;
    outC->passedBG_out.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->passedBG_out.packets.PacketData[i1] = 0;
  }
  outC->passedBG_out.sendingRBC.valid = kcg_true;
  outC->passedBG_out.sendingRBC.nid_c = 0;
  outC->passedBG_out.sendingRBC.rbc_id = 0;
  outC->passedBG_out.sendingRBC.device_id = 0;
  /* 2 */ CaseLinkingInUse_init_CheckBGConsistency_Pkg(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckBGConsistency_reset_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC)
{
  /* 2 */ CaseLinkingInUse_reset_CheckBGConsistency_Pkg(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* CheckBGConsistency_Pkg::CheckBGConsistency */
void CheckBGConsistency_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::mMode */ M_MODE mMode,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trackSide_ForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSide_ForCheck,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainVersion */ M_VERSION trainVersion,
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC)
{
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_c */
  static NID_C nid_c7;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg _6_nid_errorBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */
  static kcg_bool _5_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */
  static kcg_bool _4_errorLinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */
  static kcg_bool _3_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */
  static kcg_bool _2_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg _1_passedBG_out;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L25 */
  static NID_ERRORBG_BG_Types_Pkg _L25_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L24 */
  static NID_C _L24_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L23 */
  static Q_NVLOCACC _L23_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L22 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L22_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L20 */
  static kcg_bool _L20_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L19 */
  static ReceivedMessage_T_Common_Types_Pkg _L19_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::then::_L18 */
  static positionedBGs_T_TrainPosition_Types_Pck _L18_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_c */
  static NID_C nid_c;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg nid_errorBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */
  static kcg_bool errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */
  static kcg_bool errorLinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */
  static kcg_bool badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */
  static kcg_bool applyServiceBrake;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg passedBG_out;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg _8_passedBG_out;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */
  static kcg_bool _9_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */
  static kcg_bool _10_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */
  static kcg_bool _11_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg _12_nid_errorBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_c */
  static NID_C nid_c13;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L12 */
  static ReceivedMessage_T_Common_Types_Pkg _L12_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L11 */
  static kcg_bool _L11_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L13 */
  static kcg_bool _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L15 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L16 */
  static Q_NVLOCACC _L16_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L17 */
  static NID_C _L17_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1::else::then::_L18 */
  static NID_ERRORBG_BG_Types_Pkg _L1820_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg _14_passedBG_out;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */
  static kcg_bool _15_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */
  static kcg_bool _16_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */
  static kcg_bool _17_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg _18_nid_errorBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::nid_c */
  static NID_C nid_c19;
  static kcg_bool noname;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::startTheCheck */
  static kcg_bool startTheCheck;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::isLinked */
  static kcg_bool isLinked;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::linkingInUse */
  static kcg_bool linkingInUse;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::compatibleVersion */
  static kcg_bool compatibleVersion;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L14 */
  static kcg_bool _L14;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L24 */
  static Q_LINK _L24;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L26 */
  static kcg_bool _L26;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L27 */
  static kcg_bool _L27;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L30 */
  static kcg_bool _L30;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L31 */
  static trainPosition_T_TrainPosition_Types_Pck _L31;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L32 */
  static kcg_bool _L32;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L33 */
  static kcg_bool _L33;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L34 */
  static kcg_bool _L34;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L35 */
  static M_MODE _L35;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L39 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L39;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L51 */
  static kcg_bool _L51;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L50 */
  static kcg_bool _L50;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L54 */
  static TelegramHeader_T_BG_Types_Pkg _L54;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L55 */
  static Q_LINK _L55;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L56 */
  static M_VERSION _L56;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L57 */
  static M_VERSION _L57;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L58 */
  static kcg_bool _L58;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::_L59 */
  static kcg_bool _L59;
  
  _L35 = mMode;
  _L14 = /* 1 */ CheckMode_CheckBGConsistency_Pkg_SubFunction(_L35);
  _L24 = Q_LINK_Linked;
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L39, trackSide_ForCheck);
  _L26 = _L39.valid;
  _L27 = _L14 & _L26;
  startTheCheck = _L27;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &_L54,
    &_L39.telegramHeaders.Telegrams[0].telegramheader);
  _L55 = _L54.q_link;
  _L30 = _L55 == _L24;
  isLinked = _L30;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L31, trainPosition);
  _L32 = _L31.linkingIsUsedOnboard;
  _L33 = _L31.valid;
  _L34 = _L32 & _L33;
  linkingInUse = _L34;
  _L56 = _L54.m_version;
  _L57 = trainVersion;
  /* 1 */
  CheckMVersion_CheckBGConsistency_Pkg_SubFunction(_L56, _L57, &_L50, &_L51);
  compatibleVersion = _L51;
  IfBlock1_clock = startTheCheck & linkingInUse & isLinked & compatibleVersion;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L18_IfBlock1, storedBGs);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &_L22_IfBlock1,
      trackSide_ForCheck);
    _L23_IfBlock1 = q_nvlocacc;
    /* 2 */
    CaseLinkingInUse_CheckBGConsistency_Pkg(
      &_L18_IfBlock1,
      &_L22_IfBlock1,
      _L23_IfBlock1,
      &outC->Context_2);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L19_IfBlock1,
      &outC->Context_2.passedBG_out);
    _L20_IfBlock1 = outC->Context_2.errorLinkedBG;
    _L25_IfBlock1 = outC->Context_2.nid_errorBG;
    _L24_IfBlock1 = outC->Context_2.nid_c;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_1_passedBG_out,
      &_L19_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &_1_passedBG_out);
    _2_applyServiceBrake = kcg_false;
    outC->applyServiceBrake = _2_applyServiceBrake;
    _3_badBaliseMessageToDMI = kcg_false;
    outC->badBaliseMessageToDMI = _3_badBaliseMessageToDMI;
    _4_errorLinkedBG = _L20_IfBlock1;
    outC->errorLinkedBG = _4_errorLinkedBG;
    _5_errorUnlinkedBG = kcg_false;
    outC->errorUnlinkedBG = _5_errorUnlinkedBG;
    _6_nid_errorBG = _L25_IfBlock1;
    outC->nid_errorBG = _6_nid_errorBG;
    nid_c7 = _L24_IfBlock1;
    outC->nid_c = nid_c7;
  }
  else {
    else_clock_IfBlock1 = startTheCheck & compatibleVersion;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
        &_L15_IfBlock1,
        trackSide_ForCheck);
      _L16_IfBlock1 = q_nvlocacc;
      /* 3 */
      CaseLinkingNotInUse_CheckBGConsistency_Pkg(
        &_L15_IfBlock1,
        _L16_IfBlock1,
        &_L10_IfBlock1,
        &_L11_IfBlock1,
        &_L12_IfBlock1,
        &_L13_IfBlock1,
        &_L1820_IfBlock1,
        &_L17_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_14_passedBG_out,
        &_L12_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_14_passedBG_out);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_8_passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_8_passedBG_out);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &passedBG_out);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _15_applyServiceBrake = _L10_IfBlock1;
      applyServiceBrake = _15_applyServiceBrake;
    }
    else {
      _9_applyServiceBrake = kcg_false;
      applyServiceBrake = _9_applyServiceBrake;
    }
    outC->applyServiceBrake = applyServiceBrake;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _16_badBaliseMessageToDMI = _L11_IfBlock1;
      badBaliseMessageToDMI = _16_badBaliseMessageToDMI;
    }
    else {
      _10_badBaliseMessageToDMI = kcg_false;
      badBaliseMessageToDMI = _10_badBaliseMessageToDMI;
    }
    outC->badBaliseMessageToDMI = badBaliseMessageToDMI;
    errorLinkedBG = kcg_false;
    outC->errorLinkedBG = errorLinkedBG;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _17_errorUnlinkedBG = _L13_IfBlock1;
      errorUnlinkedBG = _17_errorUnlinkedBG;
    }
    else {
      _11_errorUnlinkedBG = kcg_false;
      errorUnlinkedBG = _11_errorUnlinkedBG;
    }
    outC->errorUnlinkedBG = errorUnlinkedBG;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _18_nid_errorBG = _L1820_IfBlock1;
      nid_errorBG = _18_nid_errorBG;
    }
    else {
      _12_nid_errorBG = 16383;
      nid_errorBG = _12_nid_errorBG;
    }
    outC->nid_errorBG = nid_errorBG;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      nid_c19 = _L17_IfBlock1;
      nid_c = nid_c19;
    }
    else {
      nid_c13 = 0;
      nid_c = nid_c13;
    }
    outC->nid_c = nid_c;
  }
  noname = _L50;
  _L58 = compatibleVersion;
  _L59 = !_L58;
  outC->incompatibleVersion = _L59;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckBGConsistency_CheckBGConsistency_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

