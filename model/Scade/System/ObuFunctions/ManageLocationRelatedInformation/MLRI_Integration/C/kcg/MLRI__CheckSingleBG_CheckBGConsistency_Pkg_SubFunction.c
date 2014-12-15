/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG */
kcg_bool MLRI__CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::telegram_in */MLRI__Telegram_T_BG_Types_Pkg *telegram_in)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */ kcg_bool isSingleBG;
  
  IfBlock1_clock = (*telegram_in).telegramheader.n_total ==
    MLRI__N_TOTAL_1_balise_in_the_group;
  if (IfBlock1_clock) {
    tmp1 = /* 2 */
      MLRI__CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(telegram_in);
    isSingleBG = tmp1 & ((*telegram_in).telegramheader.n_pig ==
        MLRI__N_PIG_I_am_the_1st) & ((*telegram_in).telegramheader.m_dup ==
        MLRI__M_DUP_No_duplicates);
  }
  else {
    else_clock_IfBlock1 = (*telegram_in).telegramheader.n_total ==
      MLRI__N_TOTAL_2_balises_in_the_group;
    if (else_clock_IfBlock1) {
      tmp = /* 6 */
        MLRI__CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(telegram_in);
      isSingleBG = tmp & ((((*telegram_in).telegramheader.n_pig ==
              MLRI__N_PIG_I_am_the_1st) &
            ((*telegram_in).telegramheader.m_dup ==
              MLRI__M_DUP_This_balise_is_a_duplicate_of_the_next_balise)) |
          (((*telegram_in).telegramheader.n_pig == MLRI__N_PIG_I_am_the_2nd) &
            ((*telegram_in).telegramheader.m_dup ==
              MLRI__M_DUP_This_balise_is_a_duplicate_of_the_previous_balise)));
    }
    else {
      isSingleBG = kcg_false;
    }
  }
  return isSingleBG;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

