/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CheckCompleteness_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CheckCompleteness */
void MLRI__CheckCompleteness_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckCompleteness::bgMessage */MLRI__BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isComplete */kcg_bool *isComplete,
  /* CheckBGConsistency_Pkg::CheckCompleteness::isSingleBG */kcg_bool *isSingleBG,
  /* CheckBGConsistency_Pkg::CheckCompleteness::lastTelegram */MLRI__Telegram_T_BG_Types_Pkg *lastTelegram)
{
  /* CheckBGConsistency_Pkg::CheckCompleteness::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*bgMessage).numberBalises == 1;
  if (IfBlock1_clock) {
    *isComplete = kcg_false;
    *isSingleBG = /* 1 */
      MLRI__CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
        &(*bgMessage).Telegrams[0]);
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(
      lastTelegram,
      &(*bgMessage).Telegrams[0]);
  }
  else {
    /* 1 */
    MLRI__CompletenessFirstCheck_CheckBGConsistency_Pkg_SubFunction(
      &(*bgMessage).Telegrams,
      isComplete,
      lastTelegram);
    *isSingleBG = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CheckCompleteness_CheckBGConsistency_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

