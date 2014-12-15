/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg.h"

/* CheckBGConsistency_Pkg::CaseLinkingInUse */
void MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::bgMessage */MLRI__BG_Message_T_BG_Types_Pkg *bgMessage,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */MLRI__passedBG_T_BG_Types_Pkg *passedBG_out,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */kcg_bool *errorLinkedBG)
{
  kcg_int tmp1;
  kcg_int tmp;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isComplete */ kcg_bool isComplete;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::lastTelegram */ MLRI__Telegram_T_BG_Types_Pkg lastTelegram;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBGlocal */ MLRI__passedBG_T_BG_Types_Pkg passedBGlocal;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::isAnnounced */ kcg_bool isAnnounced;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_linkorientation_local */ MLRI__Q_LINKORIENTATION q_linkorientation_local;
  
  /* 1 */
  MLRI__CheckCompleteness_CheckBGConsistency_Pkg(
    bgMessage,
    &IfBlock1_clock,
    &else_clock_IfBlock1,
    &lastTelegram);
  /* 1 */
  MLRI__BuildPassedBG_CheckBGConsistency_Pkg_SubFunction(
    &lastTelegram,
    bgMessage,
    &passedBGlocal);
  /* 1 */
  MLRI__IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
    &passedBGlocal.BG_Header,
    storedBGs,
    &isAnnounced,
    &q_linkorientation_local);
  isComplete = IfBlock1_clock ^ else_clock_IfBlock1;
  IfBlock1_clock = isComplete & else_clock_IfBlock1 & isAnnounced;
  if (IfBlock1_clock) {
    /* 1 */
    MLRI__WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
      (kcg_bool)
        (MLRI__Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction ==
          q_linkorientation_local),
      &passedBGlocal,
      passedBG_out);
    *errorLinkedBG = kcg_false;
  }
  else {
    else_clock_IfBlock1 = isComplete & isAnnounced;
    if (else_clock_IfBlock1) {
      tmp1 = /* 16 */
        MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
          lastTelegram.telegramheader.n_pig);
      tmp = /* 17 */
        MLRI__N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
          (*bgMessage).Telegrams[0].telegramheader.n_pig);
      /* 2 */
      MLRI__WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
        (kcg_bool)
          ((tmp1 > tmp) &
            (MLRI__Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction ==
              q_linkorientation_local)),
        &passedBGlocal,
        passedBG_out);
      *errorLinkedBG = kcg_false;
    }
    else {
      MLRI__kcg_copy_passedBG_T_BG_Types_Pkg(
        passedBG_out,
        (MLRI__passedBG_T_BG_Types_Pkg *)
          &MLRI__NoPassedBG_CheckBGConsistency_Pkg);
      *errorLinkedBG = kcg_true;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CaseLinkingInUse_CheckBGConsistency_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

