/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_VOLTAGE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_VOLTAGE */
M_VOLTAGE CAST_Int_to_M_VOLTAGE_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage_int */ kcg_int m_voltage_int)
{
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _1_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::then::_L4 */
  static M_VOLTAGE _L4_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else */
  static kcg_bool _26_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _9_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L428_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::then::_L2 */
  static M_VOLTAGE _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _7_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else */
  static kcg_bool _24_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error18;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _17_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else::then::_L4 */
  static kcg_bool _L431_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else::then::_L2 */
  static M_VOLTAGE _L232_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error16;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _15_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else::else::else::_L2 */
  static kcg_bool _L235_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else::else::else::_L1 */
  static M_VOLTAGE _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _19_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error20;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else::else::then::_L2 */
  static M_VOLTAGE _L234_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else::else::then::_L4 */
  static kcg_bool _L433_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _21_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error22;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::else */
  static kcg_bool _23_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _11_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error12;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::then::_L2 */
  static M_VOLTAGE _L230_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else::else::then::_L4 */
  static kcg_bool _L429_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _13_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error14;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::else */
  static kcg_bool _25_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _3_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::then::_L3 */
  static M_VOLTAGE _L3_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1::else::then::_L5 */
  static kcg_bool _L527_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _5_m_voltage;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage_in */
  static kcg_int m_voltage_in;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::error */
  static kcg_bool error36;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::_L4 */
  static kcg_int _L4;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::_L5 */
  static kcg_bool _L5;
  /* TM_conversions::CAST_Int_to_M_VOLTAGE::m_voltage */
  static M_VOLTAGE _37_m_voltage;
  
  _L4 = m_voltage_int;
  m_voltage_in = _L4;
  IfBlock1_clock = m_voltage_in == INT_M_VOLTAGE_Line_not_fitted_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = ENUM_M_VOLTAGE_Line_not_fitted_TM_conversions;
    _1_m_voltage = _L4_IfBlock1;
    _37_m_voltage = _1_m_voltage;
    _L5_IfBlock1 = kcg_false;
    error2 = _L5_IfBlock1;
    error36 = error2;
  }
  else {
    _26_else_clock_IfBlock1 = m_voltage_in ==
      INT_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions;
    /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
      _L3_IfBlock1 = ENUM_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions;
      _5_m_voltage = _L3_IfBlock1;
      m_voltage = _5_m_voltage;
    }
    else {
      _25_else_clock_IfBlock1 = m_voltage_in ==
        INT_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions;
      /* ck_anon_activ */ if (_25_else_clock_IfBlock1) {
        _L2_IfBlock1 = ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions;
        _9_m_voltage = _L2_IfBlock1;
        _3_m_voltage = _9_m_voltage;
      }
      else {
        _24_else_clock_IfBlock1 = m_voltage_in ==
          INT_M_VOLTAGE_DC_3_kV_TM_conversions;
        /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
          _L230_IfBlock1 = ENUM_M_VOLTAGE_DC_3_kV_TM_conversions;
          _13_m_voltage = _L230_IfBlock1;
          _7_m_voltage = _13_m_voltage;
        }
        else {
          _23_else_clock_IfBlock1 = m_voltage_in ==
            INT_M_VOLTAGE_DC_1_5_kV_TM_conversions;
          /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
            _L232_IfBlock1 = ENUM_M_VOLTAGE_DC_1_5_kV_TM_conversions;
            _17_m_voltage = _L232_IfBlock1;
            _11_m_voltage = _17_m_voltage;
          }
          else {
            else_clock_IfBlock1 = m_voltage_in ==
              INT_M_VOLTAGE_DC_600_or_750_V_TM_conversions;
            /* ck_anon_activ */ if (else_clock_IfBlock1) {
              _L234_IfBlock1 = ENUM_M_VOLTAGE_DC_600_or_750_V_TM_conversions;
              _21_m_voltage = _L234_IfBlock1;
              _15_m_voltage = _21_m_voltage;
            }
            else {
              _L1_IfBlock1 = ENUM_M_VOLTAGE_Line_not_fitted_TM_conversions;
              _19_m_voltage = _L1_IfBlock1;
              _15_m_voltage = _19_m_voltage;
            }
            _11_m_voltage = _15_m_voltage;
          }
          _7_m_voltage = _11_m_voltage;
        }
        _3_m_voltage = _7_m_voltage;
      }
      m_voltage = _3_m_voltage;
    }
    _37_m_voltage = m_voltage;
    /* ck_anon_activ */ if (_26_else_clock_IfBlock1) {
      _L527_IfBlock1 = kcg_false;
      error6 = _L527_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_25_else_clock_IfBlock1) {
        _L428_IfBlock1 = kcg_false;
        error10 = _L428_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_24_else_clock_IfBlock1) {
          _L429_IfBlock1 = kcg_false;
          error14 = _L429_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (_23_else_clock_IfBlock1) {
            _L431_IfBlock1 = kcg_false;
            error18 = _L431_IfBlock1;
            error12 = error18;
          }
          else {
            /* ck_anon_activ */ if (else_clock_IfBlock1) {
              _L433_IfBlock1 = kcg_false;
              error22 = _L433_IfBlock1;
              error16 = error22;
            }
            else {
              _L235_IfBlock1 = kcg_true;
              error20 = _L235_IfBlock1;
              error16 = error20;
            }
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error36 = error;
  }
  _L5 = error36;
  noname = _L5;
  return _37_m_voltage;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_VOLTAGE_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

