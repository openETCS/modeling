/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CaseLinkingInUse */
void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ReceivedMessage_T_Common_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */kcg_bool *errorLinkedBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_errorBG */NID_ERRORBG_BG_Types_Pkg *nid_errorBG,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::nid_c */NID_C *nid_c)
{
  static kcg_int tmp1;
  static kcg_int tmp;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isComplete */
  static kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::lastTelegram */
  static Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBGlocal */
  static ReceivedMessage_T_Common_Types_Pkg passedBGlocal;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isAnnounced */
  static kcg_bool isAnnounced;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_linkorientation_local */
  static Q_LINKORIENTATION q_linkorientation_local;
  
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
  /* 2 */
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
    *nid_errorBG = 16383;
    *nid_c = 0;
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
      *nid_errorBG = 16383;
      *nid_c = 0;
    }
    else {
      *errorLinkedBG = kcg_true;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      *nid_errorBG =
        (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_bg;
      *nid_c =
        (*trackSideForCheck).telegramHeaders.Telegrams[0].telegramheader.nid_c;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CaseLinkingInUse_CheckBGConsistency_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

