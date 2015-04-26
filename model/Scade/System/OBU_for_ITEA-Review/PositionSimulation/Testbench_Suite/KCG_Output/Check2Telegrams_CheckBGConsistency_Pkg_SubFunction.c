/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams */
void Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram1 */ Telegram_T_BG_Types_Pkg *telegram1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram2 */ Telegram_T_BG_Types_Pkg *telegram2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::isConsistent */ kcg_bool *isConsistent,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram_out */ Telegram_T_BG_Types_Pkg *telegram_out)
{
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::isDup */ kcg_bool isDup;
  
  isDup = (((*telegram1).telegramheader.m_dup ==
        M_DUP_This_balise_is_a_duplicate_of_the_next_balise) &
      ((*telegram2).telegramheader.m_dup ==
        M_DUP_This_balise_is_a_duplicate_of_the_previous_balise)) |
    (((*telegram1).telegramheader.m_dup ==
        M_DUP_This_balise_is_a_duplicate_of_the_previous_balise) &
      ((*telegram2).telegramheader.m_dup ==
        M_DUP_This_balise_is_a_duplicate_of_the_next_balise));
  IfBlock1_clock = (*telegram1).checkResult & (*telegram2).checkResult & !isDup;
  if (IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram1);
  }
  else {
    else_clock_IfBlock1 = (*telegram1).checkResult & (*telegram2).checkResult &
      isDup;
    if (else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram2);
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &(*telegram_out).packets,
        &(*telegram1).packets);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram1);
    }
  }
  *isConsistent = (*telegram1).valid & /* 1 */
    Check2Headers_CheckBGConsistency_Pkg_SubFunction(
      &(*telegram1).telegramheader,
      (*telegram1).checkResult,
      &(*telegram2).telegramheader,
      (*telegram2).checkResult) & (*telegram2).valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

