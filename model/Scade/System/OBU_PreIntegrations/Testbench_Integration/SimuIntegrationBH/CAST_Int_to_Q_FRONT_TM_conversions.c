/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_FRONT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_FRONT */
Q_FRONT CAST_Int_to_Q_FRONT_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front_int */ kcg_int q_front_int)
{
  /* TM_conversions::CAST_Int_to_Q_FRONT::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */
  static Q_FRONT _1_q_front;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::then::_L4 */
  static Q_FRONT _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */
  static Q_FRONT q_front;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::else::else::_L1 */
  static Q_FRONT _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */
  static Q_FRONT _3_q_front;
  /* TM_conversions::CAST_Int_to_Q_FRONT::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::else::then::_L3 */
  static Q_FRONT _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::else::then::_L5 */
  static kcg_bool _L57_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */
  static Q_FRONT _5_q_front;
  /* TM_conversions::CAST_Int_to_Q_FRONT::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_FRONT::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front_in */
  static kcg_int q_front_in;
  /* TM_conversions::CAST_Int_to_Q_FRONT::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_Int_to_Q_FRONT::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */
  static Q_FRONT _9_q_front;
  
  _L12 = q_front_int;
  q_front_in = _L12;
  IfBlock1_clock = q_front_in == INT_Q_FRONT_train_length_delay_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = q_front_in ==
      INT_Q_FRONT_no_train_length_delay_TM_conversions;
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
    _L4_IfBlock1 = ENUM_Q_FRONT_train_length_delay_TM_conversions;
    _1_q_front = _L4_IfBlock1;
    _9_q_front = _1_q_front;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_Q_FRONT_no_train_length_delay_TM_conversions;
      _5_q_front = _L3_IfBlock1;
      q_front = _5_q_front;
    }
    else {
      _L1_IfBlock1 = ENUM_Q_FRONT_train_length_delay_TM_conversions;
      _3_q_front = _L1_IfBlock1;
      q_front = _3_q_front;
    }
    _9_q_front = q_front;
  }
  return _9_q_front;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_FRONT_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

