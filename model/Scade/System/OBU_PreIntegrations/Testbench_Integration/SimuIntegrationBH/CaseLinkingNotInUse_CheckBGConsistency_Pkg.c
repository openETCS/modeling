/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
void CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool *_28_applyServiceBrake,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool *_27_badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *_26_passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool *_25_errorUnlinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */ NID_ERRORBG_BG_Types_Pkg *_24_nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */ NID_C *nid_c23)
{
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */
  static NID_C nid_c6;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg _5_nid_errorBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */
  static kcg_bool _4_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg _3_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */
  static kcg_bool _2_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */
  static kcg_bool _1_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L16 */
  static ReceivedMessage_T_Common_Types_Pkg _L16_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L15 */
  static kcg_bool _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L13 */
  static Q_NVLOCACC _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L12 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L12_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::then::_L9 */
  static ReceivedMessage_T_Common_Types_Pkg _L9_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */
  static NID_C nid_c;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg nid_errorBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */
  static kcg_bool errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */
  static kcg_bool badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */
  static kcg_bool applyServiceBrake;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::else::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::else::_L3 */
  static kcg_bool _L322_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::else::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::else::_L7 */
  static kcg_int _L7_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::else::_L6 */
  static kcg_int _L6_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */
  static kcg_bool _7_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */
  static kcg_bool _8_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg _9_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */
  static kcg_bool _10_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg _11_nid_errorBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */
  static NID_C nid_c12;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L3 */
  static ReceivedMessage_T_Common_Types_Pkg _L3_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L18 */
  static N_PIG _L18_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L16 */
  static N_PIG _L1621_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L15 */
  static kcg_int _L1520_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L14 */
  static kcg_int _L14_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L13 */
  static kcg_bool _L1319_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L23 */
  static ReceivedMessage_T_Common_Types_Pkg _L23_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L24 */
  static Q_NVLOCACC _L24_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L25 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L25_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L26 */
  static BG_Message_T_BG_Types_Pkg _L26_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else::then::_L19 */
  static Telegram_T_BG_Types_Pkg _L19_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */
  static kcg_bool _13_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */
  static kcg_bool _14_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */
  static ReceivedMessage_T_Common_Types_Pkg _15_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */
  static kcg_bool _16_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG */
  static NID_ERRORBG_BG_Types_Pkg _17_nid_errorBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c */
  static NID_C nid_c18;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isComplete */
  static kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isSingle */
  static kcg_bool isSingle;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::lastTelegram */
  static Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_errorBG_local */
  static kcg_int nid_errorBG_local;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::nid_c_local */
  static kcg_int nid_c_local;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L13 */
  static Telegram_T_BG_Types_Pkg _L13;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L12 */
  static kcg_bool _L12;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L11 */
  static kcg_bool _L11;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L15 */
  static kcg_bool _L15;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L21 */
  static BG_Message_T_BG_Types_Pkg _L21;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L20 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L20;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L24 */
  static TelegramHeader_T_BG_Types_Pkg _L24;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L23 */
  static NID_BG _L23;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::_L22 */
  static NID_C _L22;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L20, trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L21, &_L20.telegramHeaders);
  /* 1 */ CheckCompleteness_CheckBGConsistency_Pkg(&_L21, &_L11, &_L12, &_L13);
  _L15 = _L11 ^ _L12;
  isComplete = _L15;
  isSingle = _L12;
  IfBlock1_clock = isComplete & isSingle;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _1_applyServiceBrake = kcg_false;
    *_28_applyServiceBrake = _1_applyServiceBrake;
    _2_badBaliseMessageToDMI = kcg_false;
    *_27_badBaliseMessageToDMI = _2_badBaliseMessageToDMI;
  }
  else {
    else_clock_IfBlock1 = isComplete;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _13_applyServiceBrake = kcg_false;
      applyServiceBrake = _13_applyServiceBrake;
    }
    else {
      _L4_IfBlock1 = kcg_true;
      _7_applyServiceBrake = _L4_IfBlock1;
      applyServiceBrake = _7_applyServiceBrake;
    }
    *_28_applyServiceBrake = applyServiceBrake;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _14_badBaliseMessageToDMI = kcg_false;
      badBaliseMessageToDMI = _14_badBaliseMessageToDMI;
    }
    else {
      _L322_IfBlock1 = kcg_true;
      _8_badBaliseMessageToDMI = _L322_IfBlock1;
      badBaliseMessageToDMI = _8_badBaliseMessageToDMI;
    }
    *_27_badBaliseMessageToDMI = badBaliseMessageToDMI;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_9_passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
    }
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&lastTelegram, &_L13);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &_L12_IfBlock1,
      trackSideForCheck);
    _L13_IfBlock1 = q_nvlocacc;
    /* 1 */
    BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
      &_L12_IfBlock1,
      _L13_IfBlock1,
      &_L9_IfBlock1);
    _L15_IfBlock1 = kcg_true;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L16_IfBlock1, &_L9_IfBlock1);
    if (kcg_true) {
      _L16_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
        _L15_IfBlock1;
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_3_passedBG_out,
      &_L16_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      _26_passedBG_out,
      &_3_passedBG_out);
    _4_errorUnlinkedBG = kcg_false;
    *_25_errorUnlinkedBG = _4_errorUnlinkedBG;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&_L19_IfBlock1, &lastTelegram);
      _L1621_IfBlock1 = _L19_IfBlock1.telegramheader.n_pig;
      _L1520_IfBlock1 = /* 16 */
        N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L1621_IfBlock1);
      kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
        &_L25_IfBlock1,
        trackSideForCheck);
      kcg_copy_BG_Message_T_BG_Types_Pkg(
        &_L26_IfBlock1,
        &_L25_IfBlock1.telegramHeaders);
      _L18_IfBlock1 = _L26_IfBlock1.Telegrams[0].telegramheader.n_pig;
      _L14_IfBlock1 = /* 17 */
        N_PIG2int_CheckBGConsistency_Pkg_SubFunction(_L18_IfBlock1);
      _L1319_IfBlock1 = _L1520_IfBlock1 > _L14_IfBlock1;
      _L24_IfBlock1 = q_nvlocacc;
      /* 2 */
      BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
        &_L25_IfBlock1,
        _L24_IfBlock1,
        &_L3_IfBlock1);
      /* 1 */
      WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
        _L1319_IfBlock1,
        &_L3_IfBlock1,
        &_L23_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_15_passedBG_out,
        &_L23_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_15_passedBG_out);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_9_passedBG_out);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      _26_passedBG_out,
      &passedBG_out);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _16_errorUnlinkedBG = kcg_false;
      errorUnlinkedBG = _16_errorUnlinkedBG;
    }
    else {
      _L5_IfBlock1 = kcg_true;
      _10_errorUnlinkedBG = _L5_IfBlock1;
      errorUnlinkedBG = _10_errorUnlinkedBG;
    }
    *_25_errorUnlinkedBG = errorUnlinkedBG;
  }
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &_L24,
    &_L21.Telegrams[0].telegramheader);
  _L23 = _L24.nid_bg;
  nid_errorBG_local = _L23;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _5_nid_errorBG = 16383;
    *_24_nid_errorBG = _5_nid_errorBG;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _17_nid_errorBG = 16383;
      nid_errorBG = _17_nid_errorBG;
    }
    else {
      _L7_IfBlock1 = nid_errorBG_local;
      _11_nid_errorBG = _L7_IfBlock1;
      nid_errorBG = _11_nid_errorBG;
    }
    *_24_nid_errorBG = nid_errorBG;
  }
  _L22 = _L24.nid_c;
  nid_c_local = _L22;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    nid_c6 = 0;
    *nid_c23 = nid_c6;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      nid_c18 = 0;
      nid_c = nid_c18;
    }
    else {
      _L6_IfBlock1 = nid_c_local;
      nid_c12 = _L6_IfBlock1;
      nid_c = nid_c12;
    }
    *nid_c23 = nid_c;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CaseLinkingNotInUse_CheckBGConsistency_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

