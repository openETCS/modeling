/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_SLEEPSESSION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_SLEEPSESSION */
Q_SLEEPSESSION CAST_Int_to_Q_SLEEPSESSION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::q_sleepsession_int */ kcg_int q_sleepsession_int)
{
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::q_sleepsession */
  static Q_SLEEPSESSION _1_q_sleepsession;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1::then::_L4 */
  static Q_SLEEPSESSION _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::q_sleepsession */
  static Q_SLEEPSESSION q_sleepsession;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1::else::else::_L1 */
  static Q_SLEEPSESSION _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::q_sleepsession */
  static Q_SLEEPSESSION _3_q_sleepsession;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1::else::then::_L3 */
  static Q_SLEEPSESSION _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1::else::then::_L5 */
  static kcg_bool _L57_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::q_sleepsession */
  static Q_SLEEPSESSION _5_q_sleepsession;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::q_sleepsession_in */
  static kcg_int q_sleepsession_in;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_Q_SLEEPSESSION::q_sleepsession */
  static Q_SLEEPSESSION _9_q_sleepsession;
  
  _L12 = q_sleepsession_int;
  q_sleepsession_in = _L12;
  IfBlock1_clock = q_sleepsession_in ==
    INT_Q_SLEEPSESSION_execute_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = q_sleepsession_in ==
      INT_Q_SLEEPSESSION_ignore_TM_conversions;
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
    _L4_IfBlock1 = ENUM_Q_SLEEPSESSION_execute_TM_conversions;
    _1_q_sleepsession = _L4_IfBlock1;
    _9_q_sleepsession = _1_q_sleepsession;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_Q_SLEEPSESSION_ignore_TM_conversions;
      _5_q_sleepsession = _L3_IfBlock1;
      q_sleepsession = _5_q_sleepsession;
    }
    else {
      _L1_IfBlock1 = ENUM_Q_SLEEPSESSION_execute_TM_conversions;
      _3_q_sleepsession = _L1_IfBlock1;
      q_sleepsession = _3_q_sleepsession;
    }
    _9_q_sleepsession = q_sleepsession;
  }
  return _9_q_sleepsession;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_SLEEPSESSION_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

