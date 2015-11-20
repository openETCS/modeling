/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_VOLTAGE_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_VOLTAGE_to_int */
kcg_int CAST_M_VOLTAGE_to_int_TM_conversions(
  /* TM_conversions::CAST_M_VOLTAGE_to_int::m_voltage */M_VOLTAGE m_voltage)
{
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_VOLTAGE_to_int::m_voltage_int */
  static kcg_int m_voltage_int;
  
  IfBlock1_clock = m_voltage == ENUM_M_VOLTAGE_Line_not_fitted_TM_conversions;
  if (IfBlock1_clock) {
    m_voltage_int = INT_M_VOLTAGE_Line_not_fitted_TM_conversions;
  }
  else {
    _4_else_clock_IfBlock1 = m_voltage ==
      ENUM_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions;
    if (_4_else_clock_IfBlock1) {
      m_voltage_int = INT_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions;
    }
    else {
      _3_else_clock_IfBlock1 = m_voltage ==
        ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions;
      if (_3_else_clock_IfBlock1) {
        m_voltage_int = INT_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions;
      }
      else {
        _2_else_clock_IfBlock1 = m_voltage ==
          ENUM_M_VOLTAGE_DC_3_kV_TM_conversions;
        if (_2_else_clock_IfBlock1) {
          m_voltage_int = INT_M_VOLTAGE_DC_3_kV_TM_conversions;
        }
        else {
          _1_else_clock_IfBlock1 = m_voltage ==
            ENUM_M_VOLTAGE_DC_1_5_kV_TM_conversions;
          if (_1_else_clock_IfBlock1) {
            m_voltage_int = INT_M_VOLTAGE_DC_1_5_kV_TM_conversions;
          }
          else {
            else_clock_IfBlock1 = m_voltage ==
              ENUM_M_VOLTAGE_DC_600_or_750_V_TM_conversions;
            if (else_clock_IfBlock1) {
              m_voltage_int = INT_M_VOLTAGE_DC_600_or_750_V_TM_conversions;
            }
            else {
              m_voltage_int = INT_M_VOLTAGE_Line_not_fitted_TM_conversions;
            }
          }
        }
      }
    }
  }
  return m_voltage_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_VOLTAGE_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

