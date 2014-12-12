/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck */
void MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::telegramarray_in */MLRI__TelegramArray_T_BG_Types_Pkg *telegramarray_in,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::isComplete */kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::lastTelegram */MLRI__Telegram_T_BG_Types_Pkg *lastTelegram)
{
  MLRI__Telegram_T_BG_Types_Pkg tmp3;
  kcg_bool tmp2;
  kcg_int i;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* CheckBGConsistency_Pkg::SubFunction::CompletenessFirstCheck::firstTelegramIsValid */ kcg_bool firstTelegramIsValid;
  
  tmp1 = /* 1 */
    MLRI__CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      &(*telegramarray_in)[0].telegramheader);
  tmp = /* 1 */
    MLRI__CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
      &(*telegramarray_in)[0].telegramheader);
  firstTelegramIsValid = tmp1 | tmp;
  if (firstTelegramIsValid) {
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(
      lastTelegram,
      &(*telegramarray_in)[0]);
    for (i = 0; i < 8; i++) {
      MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(&tmp3, lastTelegram);
      /* 5 */
      MLRI__Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
        &tmp3,
        &(*telegramarray_in)[i],
        &tmp2,
        lastTelegram);
      if (!tmp2) {
        break;
      }
    }
    tmp1 = /* 3 */
      MLRI__CheckFirstTelDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
        &(*lastTelegram).telegramheader);
    tmp = /* 2 */
      MLRI__CheckFirstTelNotDup_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
        &(*lastTelegram).telegramheader);
    *isComplete = tmp1 | tmp;
  }
  else {
    *isComplete = kcg_false;
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(
      lastTelegram,
      (MLRI__Telegram_T_BG_Types_Pkg *)
        &MLRI__InConsistentTelegram1_CheckBGConsistency_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

