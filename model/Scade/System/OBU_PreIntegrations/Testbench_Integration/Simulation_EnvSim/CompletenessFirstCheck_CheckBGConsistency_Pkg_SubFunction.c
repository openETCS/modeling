/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
void CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */Telegram_T_BG_Types_Pkg *lastTelegram,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::inDex */kcg_int *inDex)
{
  static Telegram_T_BG_Types_Pkg tmp2;
  static kcg_bool tmp1;
  static kcg_int i;
  static Telegram_T_BG_Types_Pkg tmp;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L37 */
  static kcg_bool _L37_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L38 */
  static Telegram_T_BG_Types_Pkg _L38_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::IfBlock1::then::_L10 */
  static Telegram_T_BG_Types_Pkg _L10_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::firstTelegramIsValid */
  static kcg_bool firstTelegramIsValid;
  
  firstTelegramIsValid = (/* 1 */
      CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
        &(*telegramarray_in)[0].telegramheader) | /* 1 */
      CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
        &(*telegramarray_in)[0].telegramheader)) & (*telegramarray_in)[0].valid;
  if (firstTelegramIsValid) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L10_IfBlock1, &(*telegramarray_in)[0]);
    for (i = 0; i < 7; i++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&tmp2, &_L10_IfBlock1);
      /* 5 */
      Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
        &tmp2,
        &(*telegramarray_in)[i + 1],
        &tmp1,
        &_L10_IfBlock1);
      *inDex = i + 1;
      if (!tmp1) {
        break;
      }
    }
    if ((0 <= *inDex - 1) & (*inDex - 1 < 8)) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        lastTelegram,
        &(*telegramarray_in)[*inDex - 1]);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        lastTelegram,
        (Telegram_T_BG_Types_Pkg *)
          &cInConsistentTelegram_CheckBGConsistency_Pkg);
    }
    if ((0 <= *inDex - 2) & (*inDex - 2 < 8)) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&tmp, &(*telegramarray_in)[*inDex - 2]);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &tmp,
        (Telegram_T_BG_Types_Pkg *)
          &cInConsistentTelegram_CheckBGConsistency_Pkg);
    }
    /* 6 */
    Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
      lastTelegram,
      &tmp,
      &_L37_IfBlock1,
      &_L38_IfBlock1);
    *isComplete = _L37_IfBlock1 & (/* 3 */
        CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          &(*lastTelegram).telegramheader) | /* 2 */
        CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          &(*lastTelegram).telegramheader));
  }
  else {
    *isComplete = kcg_false;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      lastTelegram,
      (Telegram_T_BG_Types_Pkg *)
        &cInConsistentTelegram_CheckBGConsistency_Pkg);
    *inDex = - 1;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

