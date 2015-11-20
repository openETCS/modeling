/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_ORIENTATION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_ORIENTATION */
Q_ORIENTATION CAST_Int_to_Q_ORIENTATION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation_int */ kcg_int q_orientation_int)
{
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */
  static Q_ORIENTATION _1_q_orientation;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::then::_L4 */
  static Q_ORIENTATION _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */
  static Q_ORIENTATION q_orientation;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else::else::_L1 */
  static Q_ORIENTATION _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */
  static Q_ORIENTATION _3_q_orientation;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else::then::_L3 */
  static Q_ORIENTATION _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else::then::_L5 */
  static kcg_bool _L57_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */
  static Q_ORIENTATION _5_q_orientation;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation_in */
  static kcg_int q_orientation_in;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */
  static Q_ORIENTATION _9_q_orientation;
  
  _L12 = q_orientation_int;
  q_orientation_in = _L12;
  IfBlock1_clock = q_orientation_in == INT_Q_ORIENTATION_reverse_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = q_orientation_in ==
      INT_Q_ORIENTATION_nominal_TM_conversions;
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
    _L4_IfBlock1 = ENUM_Q_ORIENTATION_reverse_TM_conversions;
    _1_q_orientation = _L4_IfBlock1;
    _9_q_orientation = _1_q_orientation;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_Q_ORIENTATION_nominal_TM_conversions;
      _5_q_orientation = _L3_IfBlock1;
      q_orientation = _5_q_orientation;
    }
    else {
      _L1_IfBlock1 = ENUM_Q_ORIENTATION_reverse_TM_conversions;
      _3_q_orientation = _L1_IfBlock1;
      q_orientation = _3_q_orientation;
    }
    _9_q_orientation = q_orientation;
  }
  return _9_q_orientation;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_ORIENTATION_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

