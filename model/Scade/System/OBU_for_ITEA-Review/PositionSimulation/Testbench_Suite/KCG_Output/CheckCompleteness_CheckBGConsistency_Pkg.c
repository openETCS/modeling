/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckCompleteness_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CheckCompleteness */
void CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */ BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */ kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */ kcg_bool *isSingleBG,
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */ Telegram_T_BG_Types_Pkg *lastTelegram)
{
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*bgMessage).numberBalises == 1;
  if (IfBlock1_clock) {
    *isComplete = kcg_false;
    *isSingleBG = /* 1 */
      CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
        &(*bgMessage).Telegrams[0]);
    kcg_copy_Telegram_T_BG_Types_Pkg(lastTelegram, &(*bgMessage).Telegrams[0]);
  }
  else {
    *isSingleBG = kcg_false;
    /* 1 */
    CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
      &(*bgMessage).Telegrams,
      isComplete,
      lastTelegram);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckCompleteness_CheckBGConsistency_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

