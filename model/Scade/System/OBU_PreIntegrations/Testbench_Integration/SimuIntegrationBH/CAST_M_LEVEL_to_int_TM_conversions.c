/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_LEVEL_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_LEVEL_to_int */
kcg_int CAST_M_LEVEL_to_int_TM_conversions(
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level */ M_LEVEL m_level)
{
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _1_m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::then::_L8 */
  static kcg_int _L8_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else */
  static kcg_bool _21_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _9_m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _7_m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else */
  static kcg_bool _19_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _17_m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else::then::_L1 */
  static kcg_int _L125_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else::then::_L2 */
  static kcg_bool _L226_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _15_m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else::else::_L1 */
  static kcg_bool _L127_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else::else::_L2 */
  static kcg_int _L228_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _11_m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::then::_L2 */
  static kcg_int _L224_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::then::_L1 */
  static kcg_bool _L123_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _13_m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else */
  static kcg_bool _20_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _3_m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::then::_L7 */
  static kcg_int _L722_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _5_m_level_int;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_in */
  static M_LEVEL m_level_in;
  /* TM_conversions::CAST_M_LEVEL_to_int::error */
  static kcg_bool error29;
  /* TM_conversions::CAST_M_LEVEL_to_int::_L4 */
  static M_LEVEL _L4;
  /* TM_conversions::CAST_M_LEVEL_to_int::_L7 */
  static kcg_bool _L7;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int _30_m_level_int;
  
  _L4 = m_level;
  m_level_in = _L4;
  IfBlock1_clock = m_level_in == ENUM_M_LEVEL_Level_0_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = kcg_false;
    error2 = _L7_IfBlock1;
    error29 = error2;
  }
  else {
    _21_else_clock_IfBlock1 = m_level_in == ENUM_M_LEVEL_Level_1_TM_conversions;
    /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
      _L6_IfBlock1 = kcg_false;
      error6 = _L6_IfBlock1;
      error = error6;
    }
    else {
      _20_else_clock_IfBlock1 = m_level_in ==
        ENUM_M_LEVEL_Level_2_TM_conversions;
      /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
        _L2_IfBlock1 = kcg_false;
        error10 = _L2_IfBlock1;
        error4 = error10;
      }
      else {
        _19_else_clock_IfBlock1 = m_level_in ==
          ENUM_M_LEVEL_Level_3_TM_conversions;
        /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
          _L123_IfBlock1 = kcg_false;
          error14 = _L123_IfBlock1;
          error8 = error14;
        }
        else {
          else_clock_IfBlock1 = m_level_in ==
            ENUM_M_LEVEL_Level_NTC_TM_conversions;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            _L226_IfBlock1 = kcg_false;
            error18 = _L226_IfBlock1;
            error12 = error18;
          }
          else {
            _L127_IfBlock1 = kcg_true;
            error16 = _L127_IfBlock1;
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error29 = error;
  }
  _L7 = error29;
  noname = _L7;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L8_IfBlock1 = INT_M_LEVEL_Level_0_TM_conversions;
    _1_m_level_int = _L8_IfBlock1;
    _30_m_level_int = _1_m_level_int;
  }
  else {
    /* ck_anon_activ */ if (_21_else_clock_IfBlock1) {
      _L722_IfBlock1 = INT_M_LEVEL_Level_1_TM_conversions;
      _5_m_level_int = _L722_IfBlock1;
      m_level_int = _5_m_level_int;
    }
    else {
      /* ck_anon_activ */ if (_20_else_clock_IfBlock1) {
        _L1_IfBlock1 = INT_M_LEVEL_Level_2_TM_conversions;
        _9_m_level_int = _L1_IfBlock1;
        _3_m_level_int = _9_m_level_int;
      }
      else {
        /* ck_anon_activ */ if (_19_else_clock_IfBlock1) {
          _L224_IfBlock1 = INT_M_LEVEL_Level_3_TM_conversions;
          _13_m_level_int = _L224_IfBlock1;
          _7_m_level_int = _13_m_level_int;
        }
        else {
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            _L125_IfBlock1 = INT_M_LEVEL_Level_NTC_TM_conversions;
            _17_m_level_int = _L125_IfBlock1;
            _11_m_level_int = _17_m_level_int;
          }
          else {
            _L228_IfBlock1 = INT_M_LEVEL_Level_NTC_TM_conversions;
            _15_m_level_int = _L228_IfBlock1;
            _11_m_level_int = _15_m_level_int;
          }
          _7_m_level_int = _11_m_level_int;
        }
        _3_m_level_int = _7_m_level_int;
      }
      m_level_int = _3_m_level_int;
    }
    _30_m_level_int = m_level_int;
  }
  return _30_m_level_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_LEVEL_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

