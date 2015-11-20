/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_UPDOWN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_UPDOWN */
Q_UPDOWN CAST_Int_to_Q_UPDOWN_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown_int */ kcg_int q_updown_int)
{
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN _1_q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::then::_L4 */
  static Q_UPDOWN _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::else::else::_L1 */
  static Q_UPDOWN _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN _3_q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::else::then::_L3 */
  static Q_UPDOWN _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::else::then::_L5 */
  static kcg_bool _L57_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN _5_q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown_in */
  static kcg_int q_updown_in;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN _9_q_updown;
  
  _L12 = q_updown_int;
  q_updown_in = _L12;
  IfBlock1_clock = q_updown_in == INT_Q_UPDOWN_downlink_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = q_updown_in == INT_Q_UPDOWN_uplink_TM_conversions;
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
    _L4_IfBlock1 = ENUM_Q_UPDOWN_downlink_TM_conversions;
    _1_q_updown = _L4_IfBlock1;
    _9_q_updown = _1_q_updown;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_Q_UPDOWN_uplink_TM_conversions;
      _5_q_updown = _L3_IfBlock1;
      q_updown = _5_q_updown;
    }
    else {
      _L1_IfBlock1 = ENUM_Q_UPDOWN_downlink_TM_conversions;
      _3_q_updown = _L1_IfBlock1;
      q_updown = _3_q_updown;
    }
    _9_q_updown = q_updown;
  }
  return _9_q_updown;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_UPDOWN_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

