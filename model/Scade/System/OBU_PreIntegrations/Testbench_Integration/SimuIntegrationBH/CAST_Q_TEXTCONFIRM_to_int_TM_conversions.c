/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_TEXTCONFIRM_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_TEXTCONFIRM_to_int */
kcg_int CAST_Q_TEXTCONFIRM_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm */ Q_TEXTCONFIRM q_textconfirm)
{
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int _1_q_textconfirm_int;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int q_textconfirm_int;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int _9_q_textconfirm_int;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else::then::_L1 */
  static kcg_int _L118_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int _7_q_textconfirm_int;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else::else::else::_L2 */
  static kcg_int _L222_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else::else::else::_L1 */
  static kcg_bool _L121_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int _11_q_textconfirm_int;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_int _L220_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else::else::then::_L3 */
  static kcg_bool _L319_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int _13_q_textconfirm_int;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::else */
  static kcg_bool _15_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int _3_q_textconfirm_int;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1::else::then::_L3 */
  static kcg_bool _L317_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int _5_q_textconfirm_int;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_in */
  static Q_TEXTCONFIRM q_textconfirm_in;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::error */
  static kcg_bool error23;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::_L2 */
  static Q_TEXTCONFIRM _L2;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::_L4 */
  static kcg_bool _L4;
  /* TM_conversions::CAST_Q_TEXTCONFIRM_to_int::q_textconfirm_int */
  static kcg_int _24_q_textconfirm_int;
  
  _L2 = q_textconfirm;
  q_textconfirm_in = _L2;
  IfBlock1_clock = q_textconfirm_in ==
    ENUM_Q_TEXTCONFIRM_confirmation_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = INT_Q_TEXTCONFIRM_confirmation_TM_conversions;
    _1_q_textconfirm_int = _L2_IfBlock1;
    _24_q_textconfirm_int = _1_q_textconfirm_int;
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error23 = error2;
  }
  else {
    _16_else_clock_IfBlock1 = q_textconfirm_in ==
      ENUM_Q_TEXTCONFIRM_confirmation_EB_TM_conversions;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L1_IfBlock1 = INT_Q_TEXTCONFIRM_confirmation_EB_TM_conversions;
      _5_q_textconfirm_int = _L1_IfBlock1;
      q_textconfirm_int = _5_q_textconfirm_int;
    }
    else {
      _15_else_clock_IfBlock1 = q_textconfirm_in ==
        ENUM_Q_TEXTCONFIRM_confirmation_SB_TM_conversions;
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L118_IfBlock1 = INT_Q_TEXTCONFIRM_confirmation_SB_TM_conversions;
        _9_q_textconfirm_int = _L118_IfBlock1;
        _3_q_textconfirm_int = _9_q_textconfirm_int;
      }
      else {
        else_clock_IfBlock1 = q_textconfirm_in ==
          ENUM_Q_TEXTCONFIRM_no_confirmation_TM_conversions;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L220_IfBlock1 = INT_Q_TEXTCONFIRM_no_confirmation_TM_conversions;
          _13_q_textconfirm_int = _L220_IfBlock1;
          _7_q_textconfirm_int = _13_q_textconfirm_int;
        }
        else {
          _L222_IfBlock1 = INT_Q_TEXTCONFIRM_confirmation_TM_conversions;
          _11_q_textconfirm_int = _L222_IfBlock1;
          _7_q_textconfirm_int = _11_q_textconfirm_int;
        }
        _3_q_textconfirm_int = _7_q_textconfirm_int;
      }
      q_textconfirm_int = _3_q_textconfirm_int;
    }
    _24_q_textconfirm_int = q_textconfirm_int;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _L317_IfBlock1 = kcg_false;
      error6 = _L317_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_15_else_clock_IfBlock1) {
        _L4_IfBlock1 = kcg_false;
        error10 = _L4_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L319_IfBlock1 = kcg_false;
          error14 = _L319_IfBlock1;
          error8 = error14;
        }
        else {
          _L121_IfBlock1 = kcg_true;
          error12 = _L121_IfBlock1;
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error23 = error;
  }
  _L4 = error23;
  noname = _L4;
  return _24_q_textconfirm_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_TEXTCONFIRM_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

