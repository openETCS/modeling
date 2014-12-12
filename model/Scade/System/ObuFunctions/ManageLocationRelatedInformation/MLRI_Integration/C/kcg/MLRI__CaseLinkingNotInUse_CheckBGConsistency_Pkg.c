/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
void MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::bgMessage */MLRI__BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */kcg_bool *errorUnlinkedBG)
{
  kcg_int tmp2;
  kcg_int tmp1;
  MLRI__passedBG_T_BG_Types_Pkg tmp;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isComplete */ kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::lastTelegram */ MLRI__Telegram_T_BG_Types_Pkg lastTelegram;
  
  /* 1 */
  MLRI__CheckCompleteness_CheckBGConsistency_Pkg(
    bgMessage,
    &IfBlock1_clock,
    &else_clock_IfBlock1,
    &lastTelegram);
  isComplete = IfBlock1_clock ^ else_clock_IfBlock1;
  IfBlock1_clock = isComplete & else_clock_IfBlock1;
  if (IfBlock1_clock) {
    *errorUnlinkedBG = kcg_false;
  }
  else {
    else_clock_IfBlock1 = isComplete;
    if (else_clock_IfBlock1) {
      *errorUnlinkedBG = kcg_false;
    }
    else {
      *errorUnlinkedBG = kcg_true;
    }
  }
  *applyServiceBrake = *errorUnlinkedBG;
  *badBaliseMessageToDMI = *errorUnlinkedBG;
  if (IfBlock1_clock) {
    /* 3 */
    MLRI__BuildPassedBG_CheckBGConsistency_Pkg_SubFunction(
      &lastTelegram,
      bgMessage,
      passedBG_out);
  }
  else if (else_clock_IfBlock1) {
    tmp2 = /* 16 */
      MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        lastTelegram.telegramheader.n_pig);
    tmp1 = /* 17 */
      MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        (*bgMessage).Telegrams[0].telegramheader.n_pig);
    /* 2 */
    MLRI__BuildPassedBG_CheckBGConsistency_Pkg_SubFunction(
      &lastTelegram,
      bgMessage,
      &tmp);
    /* 1 */
    MLRI__WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
      (kcg_bool) (tmp2 > tmp1),
      &tmp,
      passedBG_out);
  }
  else {
    MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(
      passedBG_out,
      (MLRI__passedBG_T_BG_Types_Pkg *)
        &MLRI__NoPassedBG_CheckBGConsistency_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CaseLinkingNotInUse_CheckBGConsistency_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

