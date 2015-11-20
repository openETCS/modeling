/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LOC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_LOC */
M_LOC CAST_Int_to_M_LOC_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc_int */ kcg_int m_loc_int)
{
  /* TM_conversions::CAST_Int_to_M_LOC::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc */
  static M_LOC m_loc1;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::then::_L8 */
  static M_LOC _L8_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc */
  static M_LOC m_loc;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc */
  static M_LOC m_loc9;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else::else::then::_L1 */
  static M_LOC _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else::else::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc */
  static M_LOC m_loc7;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L113_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else::else::else::_L2 */
  static M_LOC _L214_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc */
  static M_LOC m_loc3;
  /* TM_conversions::CAST_Int_to_M_LOC::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1::else::then::_L7 */
  static M_LOC _L712_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc */
  static M_LOC m_loc5;
  /* TM_conversions::CAST_Int_to_M_LOC::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_M_LOC::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc_in */
  static kcg_int m_loc_in;
  /* TM_conversions::CAST_Int_to_M_LOC::error */
  static kcg_bool error15;
  /* TM_conversions::CAST_Int_to_M_LOC::_L4 */
  static kcg_int _L4;
  /* TM_conversions::CAST_Int_to_M_LOC::_L7 */
  static kcg_bool _L7;
  /* TM_conversions::CAST_Int_to_M_LOC::m_loc */
  static M_LOC m_loc16;
  
  _L4 = m_loc_int;
  m_loc_in = _L4;
  IfBlock1_clock = m_loc_in == INT_M_LOC_every_LRBG_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = kcg_false;
    error2 = _L7_IfBlock1;
    error15 = error2;
  }
  else {
    _11_else_clock_IfBlock1 = m_loc_in ==
      INT_M_LOC_not_when_LRBG_TM_conversions;
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L6_IfBlock1 = kcg_false;
      error6 = _L6_IfBlock1;
      error = error6;
    }
    else {
      else_clock_IfBlock1 = m_loc_in == INT_M_LOC_now_TM_conversions;
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
    _L8_IfBlock1 = ENUM_M_LOC_every_LRBG_TM_conversions;
    m_loc1 = _L8_IfBlock1;
    m_loc16 = m_loc1;
  }
  else {
    /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _L712_IfBlock1 = ENUM_M_LOC_not_when_LRBG_TM_conversions;
      m_loc5 = _L712_IfBlock1;
      m_loc = m_loc5;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L1_IfBlock1 = ENUM_M_LOC_now_TM_conversions;
        m_loc9 = _L1_IfBlock1;
        m_loc3 = m_loc9;
      }
      else {
        _L214_IfBlock1 = ENUM_M_LOC_now_TM_conversions;
        m_loc7 = _L214_IfBlock1;
        m_loc3 = m_loc7;
      }
      m_loc = m_loc3;
    }
    m_loc16 = m_loc;
  }
  return m_loc16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_LOC_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

