/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CheckCompleteness */
void CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */ BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool *_16_isComplete,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool *_15_isSingleBG,
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg *_14_lastTelegram)
{
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */
  static Telegram_T_BG_Types_Pkg _3_lastTelegram;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */
  static kcg_bool _2_isSingleBG;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */
  static kcg_bool _1_isComplete;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::then::_L3 */
  static Telegram_T_BG_Types_Pkg _L3_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::then::_L2 */
  static BG_Message_T_BG_Types_Pkg _L2_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */
  static Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */
  static kcg_bool isSingleBG;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */
  static kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::else::_L5 */
  static kcg_bool _L513_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::else::_L6 */
  static Telegram_T_BG_Types_Pkg _L6_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */
  static kcg_bool _4_isComplete;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */
  static kcg_bool _5_isSingleBG;
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */
  static Telegram_T_BG_Types_Pkg _6_lastTelegram;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L4 */
  static BG_Message_T_BG_Types_Pkg _L4_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L3 */
  static TelegramArray_T_BG_Types_Pkg _L312_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L1 */
  static kcg_bool _L111_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L2 */
  static Telegram_T_BG_Types_Pkg _L210_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L5 */
  static kcg_int _L5_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L8 */
  static kcg_int _L8_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1::else::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */
  static kcg_bool _7_isComplete;
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */
  static kcg_bool _8_isSingleBG;
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */
  static Telegram_T_BG_Types_Pkg _9_lastTelegram;
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CheckCompleteness::numberOfBalises */
  static kcg_int numberOfBalises;
  /* CheckBGConsistency_Pkg::CheckCompleteness::nTotal */
  static kcg_int nTotal;
  /* CheckBGConsistency_Pkg::CheckCompleteness::_L1 */
  static BG_Message_T_BG_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::CheckCompleteness::_L3 */
  static kcg_int _L3;
  /* CheckBGConsistency_Pkg::CheckCompleteness::_L4 */
  static N_TOTAL _L4;
  /* CheckBGConsistency_Pkg::CheckCompleteness::_L5 */
  static kcg_int _L5;
  
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L1, bgMessage);
  _L3 = _L1.numberBalises;
  numberOfBalises = _L3;
  IfBlock1_clock = numberOfBalises == 1;
  _L4 = _L1.Telegrams[0].telegramheader.n_total;
  _L5 = /* 1 */ N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(_L4);
  nTotal = _L5;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _1_isComplete = kcg_false;
    *_16_isComplete = _1_isComplete;
    kcg_copy_BG_Message_T_BG_Types_Pkg(&_L2_IfBlock1, bgMessage);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L3_IfBlock1, &_L2_IfBlock1.Telegrams[0]);
    _L1_IfBlock1 = /* 1 */
      CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(&_L3_IfBlock1);
    _2_isSingleBG = _L1_IfBlock1;
    *_15_isSingleBG = _2_isSingleBG;
    kcg_copy_Telegram_T_BG_Types_Pkg(&_3_lastTelegram, &_L3_IfBlock1);
    kcg_copy_Telegram_T_BG_Types_Pkg(_14_lastTelegram, &_3_lastTelegram);
  }
  else {
    else_clock_IfBlock1 = !(numberOfBalises > nTotal) & (numberOfBalises > 0);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_BG_Message_T_BG_Types_Pkg(&_L4_IfBlock1, bgMessage);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_L312_IfBlock1,
        &_L4_IfBlock1.Telegrams);
      /* 1 */
      CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
        &_L312_IfBlock1,
        &_L111_IfBlock1,
        &_L210_IfBlock1,
        &_L5_IfBlock1);
      _L8_IfBlock1 = numberOfBalises;
      _L7_IfBlock1 = _L5_IfBlock1 == _L8_IfBlock1;
      _L9_IfBlock1 = _L111_IfBlock1 & _L7_IfBlock1;
      _7_isComplete = _L9_IfBlock1;
      isComplete = _7_isComplete;
    }
    else {
      _L513_IfBlock1 = kcg_false;
      _4_isComplete = _L513_IfBlock1;
      isComplete = _4_isComplete;
    }
    *_16_isComplete = isComplete;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _8_isSingleBG = kcg_false;
      isSingleBG = _8_isSingleBG;
    }
    else {
      _5_isSingleBG = _L513_IfBlock1;
      isSingleBG = _5_isSingleBG;
    }
    *_15_isSingleBG = isSingleBG;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&_9_lastTelegram, &_L210_IfBlock1);
      kcg_copy_Telegram_T_BG_Types_Pkg(&lastTelegram, &_9_lastTelegram);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_L6_IfBlock1,
        (Telegram_T_BG_Types_Pkg *) &cTelegram_CheckBGConsistency_Pkg);
      kcg_copy_Telegram_T_BG_Types_Pkg(&_6_lastTelegram, &_L6_IfBlock1);
      kcg_copy_Telegram_T_BG_Types_Pkg(&lastTelegram, &_6_lastTelegram);
    }
    kcg_copy_Telegram_T_BG_Types_Pkg(_14_lastTelegram, &lastTelegram);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckCompleteness_CheckBGConsistency_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

