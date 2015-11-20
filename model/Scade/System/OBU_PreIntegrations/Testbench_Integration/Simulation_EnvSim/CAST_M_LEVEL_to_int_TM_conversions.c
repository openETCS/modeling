/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_LEVEL_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_LEVEL_to_int */
kcg_int CAST_M_LEVEL_to_int_TM_conversions(
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level */M_LEVEL m_level)
{
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LEVEL_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_LEVEL_to_int::m_level_int */
  static kcg_int m_level_int;
  
  IfBlock1_clock = m_level == ENUM_M_LEVEL_Level_0_TM_conversions;
  if (IfBlock1_clock) {
    m_level_int = INT_M_LEVEL_Level_0_TM_conversions;
  }
  else {
    _3_else_clock_IfBlock1 = m_level == ENUM_M_LEVEL_Level_1_TM_conversions;
    if (_3_else_clock_IfBlock1) {
      m_level_int = INT_M_LEVEL_Level_1_TM_conversions;
    }
    else {
      _2_else_clock_IfBlock1 = m_level == ENUM_M_LEVEL_Level_2_TM_conversions;
      if (_2_else_clock_IfBlock1) {
        m_level_int = INT_M_LEVEL_Level_2_TM_conversions;
      }
      else {
        _1_else_clock_IfBlock1 = m_level == ENUM_M_LEVEL_Level_3_TM_conversions;
        if (_1_else_clock_IfBlock1) {
          m_level_int = INT_M_LEVEL_Level_3_TM_conversions;
        }
        else {
          else_clock_IfBlock1 = m_level ==
            ENUM_M_LEVEL_Level_NTC_TM_conversions;
          if (else_clock_IfBlock1) {
            m_level_int = INT_M_LEVEL_Level_NTC_TM_conversions;
          }
          else {
            m_level_int = INT_M_LEVEL_Level_NTC_TM_conversions;
          }
        }
      }
    }
  }
  return m_level_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_LEVEL_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

