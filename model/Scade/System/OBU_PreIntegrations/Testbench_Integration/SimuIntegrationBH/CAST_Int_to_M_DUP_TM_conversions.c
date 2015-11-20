/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_DUP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_DUP */
M_DUP CAST_Int_to_M_DUP_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_DUP::int_in */ kcg_int int_in)
{
  /* TM_conversions::CAST_Int_to_M_DUP::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */
  static M_DUP m_dup1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::then::_L6 */
  static M_DUP _L6_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */
  static M_DUP m_dup;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */
  static M_DUP m_dup9;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else::else::then::_L5 */
  static kcg_bool _L513_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else::else::then::_L4 */
  static M_DUP _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */
  static M_DUP m_dup7;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else::else::else::_L3 */
  static M_DUP _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */
  static M_DUP m_dup3;
  /* TM_conversions::CAST_Int_to_M_DUP::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else::then::_L5 */
  static M_DUP _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1::else::then::_L6 */
  static kcg_bool _L612_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */
  static M_DUP m_dup5;
  /* TM_conversions::CAST_Int_to_M_DUP::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_M_DUP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup_in */
  static kcg_int m_dup_in;
  /* TM_conversions::CAST_Int_to_M_DUP::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Int_to_M_DUP::_L2 */
  static kcg_int _L2;
  /* TM_conversions::CAST_Int_to_M_DUP::_L3 */
  static kcg_bool _L3;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */
  static M_DUP m_dup15;
  
  _L2 = int_in;
  m_dup_in = _L2;
  IfBlock1_clock = m_dup_in == INT_M_DUP_duplicate_of_next_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L6_IfBlock1 = ENUM_M_DUP_duplicate_of_next_TM_conversions;
    m_dup1 = _L6_IfBlock1;
    m_dup15 = m_dup1;
    _L7_IfBlock1 = kcg_false;
    error2 = _L7_IfBlock1;
    error14 = error2;
  }
  else {
    _11_else_clock_IfBlock1 = m_dup_in ==
      INT_M_DUP_duplicate_of_previous_TM_conversions;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L5_IfBlock1 = ENUM_M_DUP_duplicate_of_previous_TM_conversions;
      m_dup5 = _L5_IfBlock1;
      m_dup = m_dup5;
    }
    else {
      else_clock_IfBlock1 = m_dup_in == INT_M_DUP_no_duplicates_TM_conversions;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L4_IfBlock1 = ENUM_M_DUP_no_duplicates_TM_conversions;
        m_dup9 = _L4_IfBlock1;
        m_dup3 = m_dup9;
      }
      else {
        _L3_IfBlock1 = ENUM_M_DUP_duplicate_of_next_TM_conversions;
        m_dup7 = _L3_IfBlock1;
        m_dup3 = m_dup7;
      }
      m_dup = m_dup3;
    }
    m_dup15 = m_dup;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L612_IfBlock1 = kcg_false;
      error6 = _L612_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L513_IfBlock1 = kcg_false;
        error10 = _L513_IfBlock1;
        error4 = error10;
      }
      else {
        _L2_IfBlock1 = kcg_true;
        error8 = _L2_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    error14 = error;
  }
  _L3 = error14;
  noname = _L3;
  return m_dup15;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_DUP_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

