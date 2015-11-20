/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LINKREACTION */
Q_LINKREACTION CAST_Int_to_Q_LINKREACTION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction_int */ kcg_int q_linkreaction_int)
{
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */
  static Q_LINKREACTION _1_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::then::_L2 */
  static Q_LINKREACTION _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */
  static Q_LINKREACTION q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */
  static Q_LINKREACTION _9_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else::then::_L1 */
  static Q_LINKREACTION _L113_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */
  static Q_LINKREACTION _7_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else::else::_L1 */
  static Q_LINKREACTION _L114_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else::else::_L2 */
  static kcg_bool _L215_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */
  static Q_LINKREACTION _3_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::then::_L1 */
  static Q_LINKREACTION _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::then::_L3 */
  static kcg_bool _L312_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */
  static Q_LINKREACTION _5_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction_in */
  static kcg_int q_linkreaction_in;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::_L2 */
  static kcg_int _L2;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::_L4 */
  static kcg_bool _L4;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */
  static Q_LINKREACTION _17_q_linkreaction;
  
  _L2 = q_linkreaction_int;
  q_linkreaction_in = _L2;
  IfBlock1_clock = q_linkreaction_in ==
    INT_Q_LINKREACTION_Train_trip_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = ENUM_Q_LINKREACTION_Train_trip_TM_conversions;
    _1_q_linkreaction = _L2_IfBlock1;
    _17_q_linkreaction = _1_q_linkreaction;
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error16 = error2;
  }
  else {
    _11_else_clock_IfBlock1 = q_linkreaction_in ==
      INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L1_IfBlock1 = ENUM_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
      _5_q_linkreaction = _L1_IfBlock1;
      q_linkreaction = _5_q_linkreaction;
    }
    else {
      else_clock_IfBlock1 = q_linkreaction_in ==
        INT_Q_LINKREACTION_No_Reaction_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L113_IfBlock1 = ENUM_Q_LINKREACTION_No_Reaction_TM_conversions;
        _9_q_linkreaction = _L113_IfBlock1;
        _3_q_linkreaction = _9_q_linkreaction;
      }
      else {
        _L114_IfBlock1 = ENUM_Q_LINKREACTION_Train_trip_TM_conversions;
        _7_q_linkreaction = _L114_IfBlock1;
        _3_q_linkreaction = _7_q_linkreaction;
      }
      q_linkreaction = _3_q_linkreaction;
    }
    _17_q_linkreaction = q_linkreaction;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L312_IfBlock1 = kcg_false;
      error6 = _L312_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L4_IfBlock1 = kcg_false;
        error10 = _L4_IfBlock1;
        error4 = error10;
      }
      else {
        _L215_IfBlock1 = kcg_true;
        error8 = _L215_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    error16 = error;
  }
  _L4 = error16;
  noname = _L4;
  return _17_q_linkreaction;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_Q_LINKREACTION_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

