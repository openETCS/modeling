/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_MARQSTREASON_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_MARQSTREASON_to_int */
kcg_int CAST_Q_MARQSTREASON_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason */ Q_MARQSTREASON q_marqstreason)
{
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _1_q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else */
  static kcg_bool _21_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _9_q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::then::_L1 */
  static kcg_int _L123_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _7_q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else */
  static kcg_bool _19_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _17_q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else::else::then::_L1 */
  static kcg_int _L126_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_bool _L227_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _15_q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else::else::else::_L1 */
  static kcg_int _L128_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else::else::else::_L2 */
  static kcg_bool _L229_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _11_q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_int _L225_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else::else::then::_L3 */
  static kcg_bool _L324_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _13_q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::else */
  static kcg_bool _20_else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _3_q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1::else::then::_L3 */
  static kcg_bool _L322_IfBlock1;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _5_q_marqstreason_int;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_in */
  static Q_MARQSTREASON q_marqstreason_in;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::error */
  static kcg_bool error30;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::_L2 */
  static Q_MARQSTREASON _L2;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::_L4 */
  static kcg_bool _L4;
  /* TM_conversions::CAST_Q_MARQSTREASON_to_int::q_marqstreason_int */
  static kcg_int _31_q_marqstreason_int;
  
  _L2 = q_marqstreason;
  q_marqstreason_in = _L2;
  IfBlock1_clock = q_marqstreason_in ==
    ENUM_Q_MARQSTREASON_driver_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = INT_Q_MARQSTREASON_driver_TM_conversions;
    _1_q_marqstreason_int = _L2_IfBlock1;
    _31_q_marqstreason_int = _1_q_marqstreason_int;
    _L3_IfBlock1 = kcg_false;
    error2 = _L3_IfBlock1;
    error30 = error2;
  }
  else {
    _21_else_clock_IfBlock1 = q_marqstreason_in ==
      ENUM_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions;
    /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
      _L1_IfBlock1 = INT_Q_MARQSTREASON_timer_preindication_LOA_TM_conversions;
      _5_q_marqstreason_int = _L1_IfBlock1;
      q_marqstreason_int = _5_q_marqstreason_int;
    }
    else {
      _20_else_clock_IfBlock1 = q_marqstreason_in ==
        ENUM_Q_MARQSTREASON_section_timer_TM_conversions;
      /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
        _L123_IfBlock1 = INT_Q_MARQSTREASON_section_timer_TM_conversions;
        _9_q_marqstreason_int = _L123_IfBlock1;
        _3_q_marqstreason_int = _9_q_marqstreason_int;
      }
      else {
        _19_else_clock_IfBlock1 = q_marqstreason_in ==
          ENUM_Q_MARQSTREASON_track_description_deleted_TM_conversions;
        /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
          _L225_IfBlock1 = INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
          _13_q_marqstreason_int = _L225_IfBlock1;
          _7_q_marqstreason_int = _13_q_marqstreason_int;
        }
        else {
          else_clock_IfBlock1 = q_marqstreason_in ==
            ENUM_Q_MARQSTREASON_TAF_TM_conversions;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            _L126_IfBlock1 =
              INT_Q_MARQSTREASON_track_description_deleted_TM_conversions;
            _17_q_marqstreason_int = _L126_IfBlock1;
            _11_q_marqstreason_int = _17_q_marqstreason_int;
          }
          else {
            _L128_IfBlock1 = INT_Q_MARQSTREASON_driver_TM_conversions;
            _15_q_marqstreason_int = _L128_IfBlock1;
            _11_q_marqstreason_int = _15_q_marqstreason_int;
          }
          _7_q_marqstreason_int = _11_q_marqstreason_int;
        }
        _3_q_marqstreason_int = _7_q_marqstreason_int;
      }
      q_marqstreason_int = _3_q_marqstreason_int;
    }
    _31_q_marqstreason_int = q_marqstreason_int;
    /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
      _L322_IfBlock1 = kcg_false;
      error6 = _L322_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
        _L4_IfBlock1 = kcg_false;
        error10 = _L4_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
          _L324_IfBlock1 = kcg_false;
          error14 = _L324_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            _L227_IfBlock1 = kcg_false;
            error18 = _L227_IfBlock1;
            error12 = error18;
          }
          else {
            _L229_IfBlock1 = kcg_true;
            error16 = _L229_IfBlock1;
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error30 = error;
  }
  _L4 = error30;
  noname = _L4;
  return _31_q_marqstreason_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Q_MARQSTREASON_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

