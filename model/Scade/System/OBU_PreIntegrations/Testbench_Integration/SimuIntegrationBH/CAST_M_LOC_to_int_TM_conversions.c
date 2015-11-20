/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_LOC_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_LOC_to_int */
kcg_int CAST_M_LOC_to_int_TM_conversions(
  /* TM_conversions::CAST_M_LOC_to_int::m_loc */ M_LOC m_loc)
{
  /* TM_conversions::CAST_M_LOC_to_int::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_int */
  static kcg_int _1_m_loc_int;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::then::_L8 */
  static kcg_int _L8_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::error */
  static kcg_bool error;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_int */
  static kcg_int m_loc_int;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_int */
  static kcg_int _9_m_loc_int;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else::else::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else::else::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_int */
  static kcg_int _7_m_loc_int;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L113_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else::else::else::_L2 */
  static kcg_int _L214_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_int */
  static kcg_int _3_m_loc_int;
  /* TM_conversions::CAST_M_LOC_to_int::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else::then::_L7 */
  static kcg_int _L712_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_int */
  static kcg_int _5_m_loc_int;
  /* TM_conversions::CAST_M_LOC_to_int::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_in */
  static M_LOC m_loc_in;
  /* TM_conversions::CAST_M_LOC_to_int::error */
  static kcg_bool error15;
  /* TM_conversions::CAST_M_LOC_to_int::_L4 */
  static M_LOC _L4;
  /* TM_conversions::CAST_M_LOC_to_int::_L7 */
  static kcg_bool _L7;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_int */
  static kcg_int _16_m_loc_int;
  
  _L4 = m_loc;
  m_loc_in = _L4;
  IfBlock1_clock = m_loc_in == ENUM_M_LOC_every_LRBG_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = kcg_false;
    error2 = _L7_IfBlock1;
    error15 = error2;
  }
  else {
    _11_else_clock_IfBlock1 = m_loc_in ==
      ENUM_M_LOC_not_when_LRBG_TM_conversions;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L6_IfBlock1 = kcg_false;
      error6 = _L6_IfBlock1;
      error = error6;
    }
    else {
      else_clock_IfBlock1 = m_loc_in == ENUM_M_LOC_now_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L2_IfBlock1 = kcg_false;
        error10 = _L2_IfBlock1;
        error4 = error10;
      }
      else {
        _L113_IfBlock1 = kcg_true;
        error8 = _L113_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    error15 = error;
  }
  _L7 = error15;
  noname = _L7;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L8_IfBlock1 = INT_M_LOC_every_LRBG_TM_conversions;
    _1_m_loc_int = _L8_IfBlock1;
    _16_m_loc_int = _1_m_loc_int;
  }
  else {
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L712_IfBlock1 = INT_M_LOC_not_when_LRBG_TM_conversions;
      _5_m_loc_int = _L712_IfBlock1;
      m_loc_int = _5_m_loc_int;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L1_IfBlock1 = INT_M_LOC_now_TM_conversions;
        _9_m_loc_int = _L1_IfBlock1;
        _3_m_loc_int = _9_m_loc_int;
      }
      else {
        _L214_IfBlock1 = INT_M_LOC_now_TM_conversions;
        _7_m_loc_int = _L214_IfBlock1;
        _3_m_loc_int = _7_m_loc_int;
      }
      m_loc_int = _3_m_loc_int;
    }
    _16_m_loc_int = m_loc_int;
  }
  return _16_m_loc_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_LOC_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

