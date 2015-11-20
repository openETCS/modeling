/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ADHESION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_ADHESION */
M_ADHESION CAST_Int_to_M_ADHESION_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion_int */ kcg_int m_adhesion_int)
{
  /* TM_conversions::CAST_Int_to_M_ADHESION::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion */
  static M_ADHESION _1_m_adhesion;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1::then::_L8 */
  static M_ADHESION _L8_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion */
  static M_ADHESION m_adhesion;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1::else::else::_L1 */
  static M_ADHESION _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion */
  static M_ADHESION _3_m_adhesion;
  /* TM_conversions::CAST_Int_to_M_ADHESION::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1::else::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1::else::then::_L7 */
  static M_ADHESION _L77_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion */
  static M_ADHESION _5_m_adhesion;
  /* TM_conversions::CAST_Int_to_M_ADHESION::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_ADHESION::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion_in */
  static kcg_int m_adhesion_in;
  /* TM_conversions::CAST_Int_to_M_ADHESION::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::_L34 */
  static kcg_bool _L34;
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion */
  static M_ADHESION _9_m_adhesion;
  
  _L1 = m_adhesion_int;
  m_adhesion_in = _L1;
  IfBlock1_clock = m_adhesion_in == INT_M_ADHESION_slippery_rail_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = kcg_false;
    error2 = _L7_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = m_adhesion_in ==
      INT_M_ADHESION_no_slippery_rail_TM_conversions;
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
  _L34 = error8;
  noname = _L34;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L8_IfBlock1 = ENUM_M_ADHESION_slippery_rail_TM_conversions;
    _1_m_adhesion = _L8_IfBlock1;
    _9_m_adhesion = _1_m_adhesion;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L77_IfBlock1 = ENUM_M_ADHESION_no_slippery_rail_TM_conversions;
      _5_m_adhesion = _L77_IfBlock1;
      m_adhesion = _5_m_adhesion;
    }
    else {
      _L1_IfBlock1 = ENUM_M_ADHESION_slippery_rail_TM_conversions;
      _3_m_adhesion = _L1_IfBlock1;
      m_adhesion = _3_m_adhesion;
    }
    _9_m_adhesion = m_adhesion;
  }
  return _9_m_adhesion;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_ADHESION_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

