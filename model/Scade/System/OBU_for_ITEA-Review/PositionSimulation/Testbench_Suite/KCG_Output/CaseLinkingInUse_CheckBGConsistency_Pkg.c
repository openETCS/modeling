/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CaseLinkingInUse */
void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ kcg_bool *errorLinkedBG)
{
  kcg_int tmp1;
  kcg_int tmp;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isComplete */ kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::lastTelegram */ Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBGlocal */ ReceivedMessage_T_Common_Types_Pkg passedBGlocal;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isAnnounced */ kcg_bool isAnnounced;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_linkorientation_local */ Q_LINKORIENTATION q_linkorientation_local;
  
  /* 1 */
  BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
    trackSideForCheck,
    q_nvlocacc,
    &passedBGlocal);
  /* 1 */
  IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
    &passedBGlocal.BG_Common_Header,
    storedBGs,
    &isAnnounced,
    &q_linkorientation_local);
  /* 1 */
  CheckCompleteness_CheckBGConsistency_Pkg(
    &(*trackSideForCheck).telegramHeaders,
    &IfBlock1_clock,
    &else_clock_IfBlock1,
    &lastTelegram);
  isComplete = IfBlock1_clock ^ else_clock_IfBlock1;
  IfBlock1_clock = isComplete & else_clock_IfBlock1 & isAnnounced;
  if (IfBlock1_clock) {
    *errorLinkedBG = kcg_false;
    /* 1 */
    WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
      (kcg_bool)
        (Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction ==
          q_linkorientation_local),
      &passedBGlocal,
      passedBG_out);
  }
  else {
    else_clock_IfBlock1 = isComplete & isAnnounced;
    if (else_clock_IfBlock1) {
      *errorLinkedBG = kcg_false;
      tmp1 = /* 16 */
        N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
          lastTelegram.telegramheader.n_pig);
      tmp = /* 17 */
        N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
          (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.n_pig);
      /* 2 */
      WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
        (kcg_bool)
          ((tmp1 > tmp) &
            (Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction ==
              q_linkorientation_local)),
        &passedBGlocal,
        passedBG_out);
    }
    else {
      *errorLinkedBG = kcg_true;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CaseLinkingInUse_CheckBGConsistency_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

