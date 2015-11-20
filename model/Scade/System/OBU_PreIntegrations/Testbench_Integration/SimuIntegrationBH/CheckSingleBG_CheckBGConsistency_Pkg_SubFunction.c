/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG */
kcg_bool CheckSingleBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::telegram_in */ Telegram_T_BG_Types_Pkg *telegram_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */
  static kcg_bool _1_isSingleBG;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L8 */
  static M_DUP _L8_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L5 */
  static N_PIG _L5_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L4 */
  static M_DUP _L4_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L3 */
  static N_PIG _L3_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::then::_L1 */
  static Telegram_T_BG_Types_Pkg _L1_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */
  static kcg_bool isSingleBG;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::else::_L1 */
  static kcg_bool _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */
  static kcg_bool _2_isSingleBG;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L21 */
  static kcg_bool _L21_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L20 */
  static kcg_bool _L20_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L19 */
  static N_PIG _L19_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L18 */
  static kcg_bool _L18_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L17 */
  static M_DUP _L17_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L16 */
  static kcg_bool _L16_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L14 */
  static N_PIG _L14_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L13 */
  static Telegram_T_BG_Types_Pkg _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L22 */
  static M_DUP _L22_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L23 */
  static kcg_bool _L23_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L29 */
  static M_DUP _L29_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L28 */
  static N_PIG _L28_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L27 */
  static kcg_bool _L27_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L26 */
  static kcg_bool _L26_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L25 */
  static kcg_bool _L25_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L24 */
  static N_PIG _L24_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L30 */
  static M_DUP _L30_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1::else::then::_L31 */
  static kcg_bool _L31_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */
  static kcg_bool _3_isSingleBG;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::n_total */
  static N_TOTAL n_total;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::valid */
  static kcg_bool valid;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::_L1 */
  static Telegram_T_BG_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::_L21 */
  static N_TOTAL _L21;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::_L22 */
  static kcg_bool _L22;
  /* CheckBGConsistency_Pkg::SubFunction::CheckSingleBG::isSingleBG */
  static kcg_bool _6_isSingleBG;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L1, telegram_in);
  _L21 = _L1.telegramheader.n_total;
  n_total = _L21;
  _L22 = _L1.valid;
  valid = _L22;
  IfBlock1_clock = (n_total == N_TOTAL_1_balise_in_the_group) & valid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L1_IfBlock1, telegram_in);
    _L2_IfBlock1 = /* 2 */
      CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(&_L1_IfBlock1);
    _L3_IfBlock1 = _L1_IfBlock1.telegramheader.n_pig;
    _L5_IfBlock1 = N_PIG_I_am_the_1st;
    _L6_IfBlock1 = _L3_IfBlock1 == _L5_IfBlock1;
    _L4_IfBlock1 = _L1_IfBlock1.telegramheader.m_dup;
    _L8_IfBlock1 = M_DUP_No_duplicates;
    _L9_IfBlock1 = _L4_IfBlock1 == _L8_IfBlock1;
    _L10_IfBlock1 = _L2_IfBlock1 & _L6_IfBlock1 & _L9_IfBlock1;
    _1_isSingleBG = _L10_IfBlock1;
    _6_isSingleBG = _1_isSingleBG;
  }
  else {
    else_clock_IfBlock1 = (n_total == N_TOTAL_2_balises_in_the_group) & valid;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_Telegram_T_BG_Types_Pkg(&_L13_IfBlock1, telegram_in);
      _L20_IfBlock1 = /* 6 */
        CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(&_L13_IfBlock1);
      _L19_IfBlock1 = _L13_IfBlock1.telegramheader.n_pig;
      _L14_IfBlock1 = N_PIG_I_am_the_1st;
      _L16_IfBlock1 = _L19_IfBlock1 == _L14_IfBlock1;
      _L17_IfBlock1 = _L13_IfBlock1.telegramheader.m_dup;
      _L22_IfBlock1 = M_DUP_This_balise_is_a_duplicate_of_the_next_balise;
      _L18_IfBlock1 = _L17_IfBlock1 == _L22_IfBlock1;
      _L23_IfBlock1 = _L16_IfBlock1 & _L18_IfBlock1;
      _L24_IfBlock1 = _L13_IfBlock1.telegramheader.n_pig;
      _L28_IfBlock1 = N_PIG_I_am_the_2nd;
      _L25_IfBlock1 = _L24_IfBlock1 == _L28_IfBlock1;
      _L29_IfBlock1 = _L13_IfBlock1.telegramheader.m_dup;
      _L30_IfBlock1 = M_DUP_This_balise_is_a_duplicate_of_the_previous_balise;
      _L26_IfBlock1 = _L29_IfBlock1 == _L30_IfBlock1;
      _L27_IfBlock1 = _L25_IfBlock1 & _L26_IfBlock1;
      _L31_IfBlock1 = _L23_IfBlock1 | _L27_IfBlock1;
      _L21_IfBlock1 = _L20_IfBlock1 & _L31_IfBlock1;
      _3_isSingleBG = _L21_IfBlock1;
      isSingleBG = _3_isSingleBG;
    }
    else {
      _L15_IfBlock1 = kcg_false;
      _2_isSingleBG = _L15_IfBlock1;
      isSingleBG = _2_isSingleBG;
    }
    _6_isSingleBG = isSingleBG;
  }
  return _6_isSingleBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckSingleBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

