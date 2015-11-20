/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
void CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */ TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */ kcg_bool *_7_isComplete,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */ Telegram_T_BG_Types_Pkg *_6_lastTelegram,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::inDex */ kcg_int *inDex5)
{
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
  static Telegram_T_BG_Types_Pkg acc;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::inDex */
  static kcg_int inDex3;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */
  static Telegram_T_BG_Types_Pkg _2_lastTelegram;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */
  static kcg_bool _1_isComplete;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L43 */
  static TelegramArray_T_BG_Types_Pkg _L43_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L42 */
  static kcg_int _L42_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L41 */
  static kcg_int _L41_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L39 */
  static Telegram_T_BG_Types_Pkg _L39_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L37 */
  static kcg_bool _L37_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L38 */
  static Telegram_T_BG_Types_Pkg _L38_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L16 */
  static TelegramHeader_T_BG_Types_Pkg _L16_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L36 */
  static Telegram_T_BG_Types_Pkg _L36_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L34 */
  static TelegramArray_T_BG_Types_Pkg _L34_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L33 */
  static kcg_int _L33_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L32 */
  static kcg_int _L32_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L29 */
  static kcg_bool _L29_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L26 */
  static array_172650 _L26_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L15 */
  static kcg_bool _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L14 */
  static kcg_bool _L14_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L13 */
  static kcg_bool _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L10 */
  static Telegram_T_BG_Types_Pkg _L10_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L9 */
  static kcg_int _L9_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L11 */
  static TelegramArray_T_BG_Types_Pkg _L11_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L12 */
  static Telegram_T_BG_Types_Pkg _L12_IfBlock1;
  static Telegram_T_BG_Types_Pkg _4_noname;
  static Telegram_T_BG_Types_Pkg noname;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::inDex */
  static kcg_int inDex;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */
  static Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */
  static kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::else::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  static kcg_int default_inDex;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::firstTelegramIsValid */
  static kcg_bool firstTelegramIsValid;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L15 */
  static TelegramArray_T_BG_Types_Pkg _L15;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L16 */
  static TelegramHeader_T_BG_Types_Pkg _L16;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L18 */
  static kcg_bool _L18;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L19 */
  static kcg_bool _L19;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L20 */
  static kcg_bool _L20;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L21 */
  static kcg_bool _L21;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::_L22 */
  static kcg_bool _L22;
  
  default_inDex = - 1;
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L15, telegramarray_in);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L16, &_L15[0].telegramheader);
  _L18 = /* 1 */
    CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(&_L16);
  _L19 = /* 1 */
    CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      &_L16);
  _L20 = _L18 | _L19;
  _L21 = _L15[0].valid;
  _L22 = _L20 & _L21;
  firstTelegramIsValid = _L22;
  IfBlock1_clock = firstTelegramIsValid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L34_IfBlock1, telegramarray_in);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L11_IfBlock1, telegramarray_in);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L12_IfBlock1, &_L11_IfBlock1[0]);
    kcg_copy_array_172650(&_L26_IfBlock1, (array_172650 *) &_L11_IfBlock1[1]);
    _L8_IfBlock1 = kcg_true;
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L10_IfBlock1, &_L12_IfBlock1);
    if (_L8_IfBlock1) {
      for (i = 0; i < 7; i++) {
        kcg_copy_Telegram_T_BG_Types_Pkg(&acc, &_L10_IfBlock1);
        /* 5 */
        Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
          &acc,
          &_L26_IfBlock1[i],
          &cond_iterw,
          &_L10_IfBlock1);
        _L9_IfBlock1 = i + 1;
        if (!cond_iterw) {
          break;
        }
      }
    }
    else {
      _L9_IfBlock1 = 0;
    }
    _L42_IfBlock1 = 1;
    _L32_IfBlock1 = _L9_IfBlock1 - _L42_IfBlock1;
    if ((0 <= _L32_IfBlock1) & (_L32_IfBlock1 < 8)) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_L36_IfBlock1,
        &_L34_IfBlock1[_L32_IfBlock1]);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_L36_IfBlock1,
        (Telegram_T_BG_Types_Pkg *)
          &cInConsistentTelegram_CheckBGConsistency_Pkg);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L43_IfBlock1, telegramarray_in);
    _L33_IfBlock1 = 2;
    _L41_IfBlock1 = _L9_IfBlock1 - _L33_IfBlock1;
    if ((0 <= _L41_IfBlock1) & (_L41_IfBlock1 < 8)) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_L39_IfBlock1,
        &_L43_IfBlock1[_L41_IfBlock1]);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &_L39_IfBlock1,
        (Telegram_T_BG_Types_Pkg *)
          &cInConsistentTelegram_CheckBGConsistency_Pkg);
    }
    /* 6 */
    Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
      &_L36_IfBlock1,
      &_L39_IfBlock1,
      &_L37_IfBlock1,
      &_L38_IfBlock1);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      &_L16_IfBlock1,
      &_L36_IfBlock1.telegramheader);
    _L13_IfBlock1 = /* 3 */
      CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
        &_L16_IfBlock1);
    _L14_IfBlock1 = /* 2 */
      CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
        &_L16_IfBlock1);
    _L15_IfBlock1 = _L13_IfBlock1 | _L14_IfBlock1;
    _L29_IfBlock1 = _L37_IfBlock1 & _L15_IfBlock1;
    _1_isComplete = _L29_IfBlock1;
    *_7_isComplete = _1_isComplete;
    kcg_copy_Telegram_T_BG_Types_Pkg(&_2_lastTelegram, &_L36_IfBlock1);
    kcg_copy_Telegram_T_BG_Types_Pkg(_6_lastTelegram, &_2_lastTelegram);
    inDex3 = _L9_IfBlock1;
    *inDex5 = inDex3;
    kcg_copy_Telegram_T_BG_Types_Pkg(&noname, &_L10_IfBlock1);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_4_noname, &_L38_IfBlock1);
  }
  else {
    _L1_IfBlock1 = kcg_false;
    isComplete = _L1_IfBlock1;
    *_7_isComplete = isComplete;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &lastTelegram,
      (Telegram_T_BG_Types_Pkg *)
        &cInConsistentTelegram_CheckBGConsistency_Pkg);
    kcg_copy_Telegram_T_BG_Types_Pkg(_6_lastTelegram, &lastTelegram);
    inDex = default_inDex;
    *inDex5 = inDex;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

