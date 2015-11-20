/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_SECTIONTIMER_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER */
Q_SECTIONTIMER CAST_Int_to_Q_SECTIONTIMER_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer_int */ kcg_int q_sectiontimer_int)
{
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer */
  static Q_SECTIONTIMER _1_q_sectiontimer;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1::then::_L4 */
  static Q_SECTIONTIMER _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer */
  static Q_SECTIONTIMER q_sectiontimer;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1::else::else::_L1 */
  static Q_SECTIONTIMER _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer */
  static Q_SECTIONTIMER _3_q_sectiontimer;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1::else::then::_L3 */
  static Q_SECTIONTIMER _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1::else::then::_L5 */
  static kcg_bool _L57_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer */
  static Q_SECTIONTIMER _5_q_sectiontimer;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer_in */
  static kcg_int q_sectiontimer_in;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer */
  static Q_SECTIONTIMER _9_q_sectiontimer;
  
  _L12 = q_sectiontimer_int;
  q_sectiontimer_in = _L12;
  IfBlock1_clock = q_sectiontimer_in ==
    INT_Q_SECTIONTIMER_sectiontimer_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = q_sectiontimer_in ==
      INT_Q_SECTIONTIMER_no_sectiontimer_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L57_IfBlock1 = kcg_false;
      error6 = _L57_IfBlock1;
      error = error6;
    }
    else {
      _L2_IfBlock1 = kcg_true;
      error4 = _L2_IfBlock1;
      error = error4;
    }
    error8 = error;
  }
  _L13 = error8;
  noname = _L13;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions;
    _1_q_sectiontimer = _L4_IfBlock1;
    _9_q_sectiontimer = _1_q_sectiontimer;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions;
      _5_q_sectiontimer = _L3_IfBlock1;
      q_sectiontimer = _5_q_sectiontimer;
    }
    else {
      _L1_IfBlock1 = ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions;
      _3_q_sectiontimer = _L1_IfBlock1;
      q_sectiontimer = _3_q_sectiontimer;
    }
    _9_q_sectiontimer = q_sectiontimer;
  }
  return _9_q_sectiontimer;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_SECTIONTIMER_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

