/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
void CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool *applyServiceBrake,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool *badBaliseMessageToDMI,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool *errorUnlinkedBG)
{
  kcg_int tmp2;
  kcg_int tmp1;
  ReceivedMessage_T_Common_Types_Pkg tmp;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isComplete */ kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::isSingle */ kcg_bool isSingle;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::lastTelegram */ Telegram_T_BG_Types_Pkg lastTelegram;
  
  /* 1 */
  CheckCompleteness_CheckBGConsistency_Pkg(
    &(*trackSideForCheck).telegramHeaders,
    &IfBlock1_clock,
    &isSingle,
    &lastTelegram);
  isComplete = IfBlock1_clock ^ isSingle;
  IfBlock1_clock = isComplete & isSingle;
  if (IfBlock1_clock) {
    *errorUnlinkedBG = kcg_false;
    /* 1 */
    BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
      trackSideForCheck,
      q_nvlocacc,
      passedBG_out);
  }
  else if (isComplete) {
    *errorUnlinkedBG = kcg_false;
    tmp2 = /* 16 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        lastTelegram.telegramheader.n_pig);
    tmp1 = /* 17 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.n_pig);
    /* 2 */
    BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
      trackSideForCheck,
      q_nvlocacc,
      &tmp);
    /* 1 */
    WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
      (kcg_bool) (tmp2 > tmp1),
      &tmp,
      passedBG_out);
  }
  else {
    *errorUnlinkedBG = kcg_true;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      passedBG_out,
      (ReceivedMessage_T_Common_Types_Pkg *)
        &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
  }
  *applyServiceBrake = *errorUnlinkedBG;
  *badBaliseMessageToDMI = *errorUnlinkedBG;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CaseLinkingNotInUse_CheckBGConsistency_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

