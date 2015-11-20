/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DIRLRBG_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_DIRLRBG_to_int */
kcg_int CAST_Q_DIRLRBG_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg */ Q_DIRLRBG q_dirlrbg)
{
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_int */
  static kcg_int _1_q_dirlrbg_int;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_int */
  static kcg_int q_dirlrbg_int;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_int */
  static kcg_int _9_q_dirlrbg_int;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L413_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_int */
  static kcg_int _7_q_dirlrbg_int;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else::else::else::_L2 */
  static kcg_int _L214_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_int */
  static kcg_int _3_q_dirlrbg_int;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1::else::then::_L5 */
  static kcg_bool _L512_IfBlock1;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_int */
  static kcg_int _5_q_dirlrbg_int;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::error */
  static kcg_bool error15;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_in */
  static Q_DIRLRBG q_dirlrbg_in;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::_L12 */
  static Q_DIRLRBG _L12;
  /* TM_conversions::CAST_Q_DIRLRBG_to_int::q_dirlrbg_int */
  static kcg_int _16_q_dirlrbg_int;
  
  _L12 = q_dirlrbg;
  q_dirlrbg_in = _L12;
  IfBlock1_clock = q_dirlrbg_in == ENUM_Q_DIRLRBG_nominal_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error15 = error2;
  }
  else {
    _11_else_clock_IfBlock1 = q_dirlrbg_in ==
      ENUM_Q_DIRLRBG_reverse_TM_conversions;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L512_IfBlock1 = kcg_false;
      error6 = _L512_IfBlock1;
      error = error6;
    }
    else {
      else_clock_IfBlock1 = q_dirlrbg_in ==
        ENUM_Q_DIRLRBG_unknown_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L413_IfBlock1 = kcg_false;
        error10 = _L413_IfBlock1;
        error4 = error10;
      }
      else {
        _L1_IfBlock1 = kcg_true;
        error8 = _L1_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    error15 = error;
  }
  _L13 = error15;
  noname = _L13;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = INT_Q_DIRLRBG_nominal_TM_conversions;
    _1_q_dirlrbg_int = _L4_IfBlock1;
    _16_q_dirlrbg_int = _1_q_dirlrbg_int;
  }
  else {
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L3_IfBlock1 = INT_Q_DIRLRBG_reverse_TM_conversions;
      _5_q_dirlrbg_int = _L3_IfBlock1;
      q_dirlrbg_int = _5_q_dirlrbg_int;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L2_IfBlock1 = INT_Q_DIRLRBG_unknown_TM_conversions;
        _9_q_dirlrbg_int = _L2_IfBlock1;
        _3_q_dirlrbg_int = _9_q_dirlrbg_int;
      }
      else {
        _L214_IfBlock1 = INT_Q_DIRLRBG_unknown_TM_conversions;
        _7_q_dirlrbg_int = _L214_IfBlock1;
        _3_q_dirlrbg_int = _7_q_dirlrbg_int;
      }
      q_dirlrbg_int = _3_q_dirlrbg_int;
    }
    _16_q_dirlrbg_int = q_dirlrbg_int;
  }
  return _16_q_dirlrbg_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_DIRLRBG_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

