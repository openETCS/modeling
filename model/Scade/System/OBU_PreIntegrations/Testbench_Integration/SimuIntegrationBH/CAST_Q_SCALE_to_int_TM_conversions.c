/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_SCALE_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_SCALE_to_int */
kcg_int CAST_Q_SCALE_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_SCALE_to_int::q_scale_int */ Q_SCALE q_scale_int)
{
  /* TM_conversions::CAST_Q_SCALE_to_int::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */
  static kcg_int d1;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */
  static kcg_int d;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */
  static kcg_int d9;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else::else::then::_L1 */
  static kcg_int _L113_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */
  static kcg_int d7;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else::else::else::_L1 */
  static kcg_int _L114_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else::else::else::_L2 */
  static kcg_bool _L215_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */
  static kcg_int d3;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1::else::then::_L3 */
  static kcg_bool _L312_IfBlock1;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */
  static kcg_int d5;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Q_SCALE_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_SCALE_to_int::q_scale_in */
  static Q_SCALE q_scale_in;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_Q_SCALE_to_int::_L2 */
  static Q_SCALE _L2;
  /* TM_conversions::CAST_Q_SCALE_to_int::_L4 */
  static kcg_bool _L4;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */
  static kcg_int d17;
  
  _L2 = q_scale_int;
  q_scale_in = _L2;
  IfBlock1_clock = q_scale_in == ENUM_Q_SCALE_10cm_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = INT_Q_SCALE_10cm_TM_conversions;
    d1 = _L2_IfBlock1;
    d17 = d1;
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error16 = error2;
  }
  else {
    _11_else_clock_IfBlock1 = q_scale_in == ENUM_Q_SCALE_1m_TM_conversions;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L1_IfBlock1 = INT_Q_SCALE_1m_TM_conversions;
      d5 = _L1_IfBlock1;
      d = d5;
    }
    else {
      else_clock_IfBlock1 = q_scale_in == ENUM_Q_SCALE_10m_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L113_IfBlock1 = INT_Q_SCALE_10m_TM_conversions;
        d9 = _L113_IfBlock1;
        d3 = d9;
      }
      else {
        _L114_IfBlock1 = INT_Q_SCALE_10cm_TM_conversions;
        d7 = _L114_IfBlock1;
        d3 = d7;
      }
      d = d3;
    }
    d17 = d;
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
  return d17;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_SCALE_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

