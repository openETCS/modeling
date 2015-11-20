/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_NVDERUN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_NVDERUN */
M_NVDERUN CAST_Int_to_M_NVDERUN_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun_int */ kcg_int m_nvderun_int)
{
  /* TM_conversions::CAST_Int_to_M_NVDERUN::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */
  static M_NVDERUN _1_m_nvderun;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::then::_L8 */
  static M_NVDERUN _L8_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */
  static M_NVDERUN m_nvderun;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else::else::_L1 */
  static M_NVDERUN _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */
  static M_NVDERUN _3_m_nvderun;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else::then::_L7 */
  static M_NVDERUN _L77_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */
  static M_NVDERUN _5_m_nvderun;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun_in */
  static kcg_int m_nvderun_in;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::_L21 */
  static kcg_int _L21;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::_L20 */
  static kcg_bool _L20;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */
  static M_NVDERUN _9_m_nvderun;
  
  _L21 = m_nvderun_int;
  m_nvderun_in = _L21;
  IfBlock1_clock = m_nvderun_in == INT_M_NVDERUN_no_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = kcg_false;
    error2 = _L7_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = m_nvderun_in == INT_M_NVDERUN_yes_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L6_IfBlock1 = kcg_false;
      error6 = _L6_IfBlock1;
      error = error6;
    }
    else {
      _L2_IfBlock1 = kcg_true;
      error4 = _L2_IfBlock1;
      error = error4;
    }
    error8 = error;
  }
  _L20 = error8;
  noname = _L20;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L8_IfBlock1 = ENUM_M_NVDERUN_no_TM_conversions;
    _1_m_nvderun = _L8_IfBlock1;
    _9_m_nvderun = _1_m_nvderun;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L77_IfBlock1 = ENUM_M_NVDERUN_yes_TM_conversions;
      _5_m_nvderun = _L77_IfBlock1;
      m_nvderun = _5_m_nvderun;
    }
    else {
      _L1_IfBlock1 = ENUM_M_NVDERUN_yes_TM_conversions;
      _3_m_nvderun = _L1_IfBlock1;
      m_nvderun = _3_m_nvderun;
    }
    _9_m_nvderun = m_nvderun;
  }
  return _9_m_nvderun;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_NVDERUN_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

