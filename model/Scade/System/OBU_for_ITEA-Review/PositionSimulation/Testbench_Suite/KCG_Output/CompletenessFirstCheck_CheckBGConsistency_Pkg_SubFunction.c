/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
void CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */ TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */ kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */ Telegram_T_BG_Types_Pkg *lastTelegram)
{
  Telegram_T_BG_Types_Pkg tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::firstTelegramIsValid */ kcg_bool firstTelegramIsValid;
  
  firstTelegramIsValid = /* 1 */
    CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      &(*telegramarray_in)[0].telegramheader) | /* 1 */
    CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      &(*telegramarray_in)[0].telegramheader);
  if (firstTelegramIsValid) {
    kcg_copy_Telegram_T_BG_Types_Pkg(lastTelegram, &(*telegramarray_in)[0]);
    for (i = 0; i < 3; i++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&tmp1, lastTelegram);
      /* 5 */
      Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
        &tmp1,
        &(*telegramarray_in)[i + 1],
        &tmp,
        lastTelegram);
      if (!tmp) {
        break;
      }
    }
    *isComplete = /* 3 */
      CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
        &(*lastTelegram).telegramheader) | /* 2 */
      CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
        &(*lastTelegram).telegramheader);
  }
  else {
    *isComplete = kcg_false;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      lastTelegram,
      (Telegram_T_BG_Types_Pkg *)
        &cInConsistentTelegram_CheckBGConsistency_Pkg);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

