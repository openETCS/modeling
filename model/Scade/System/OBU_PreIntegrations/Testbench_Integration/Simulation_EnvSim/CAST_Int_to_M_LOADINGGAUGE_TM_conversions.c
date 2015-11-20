/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LOADINGGAUGE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_LOADINGGAUGE */
M_LOADINGGAUGE CAST_Int_to_M_LOADINGGAUGE_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::m_loadinggauge_int */kcg_int m_loadinggauge_int)
{
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_LOADINGGAUGE::m_loadinggauge */
  static M_LOADINGGAUGE m_loadinggauge;
  
  IfBlock1_clock = m_loadinggauge_int == INT_M_LOADINGGAUGE_G1_TM_conversions;
  if (IfBlock1_clock) {
    m_loadinggauge = ENUM_M_LOADINGGAUGE_G1_TM_conversions;
  }
  else {
    _3_else_clock_IfBlock1 = m_loadinggauge_int ==
      INT_M_LOADINGGAUGE_GA_TM_conversions;
    if (_3_else_clock_IfBlock1) {
      m_loadinggauge = ENUM_M_LOADINGGAUGE_GA_TM_conversions;
    }
    else {
      _2_else_clock_IfBlock1 = m_loadinggauge_int ==
        INT_M_LOADINGGAUGE_GB_TM_conversions;
      if (_2_else_clock_IfBlock1) {
        m_loadinggauge = ENUM_M_LOADINGGAUGE_GB_TM_conversions;
      }
      else {
        _1_else_clock_IfBlock1 = m_loadinggauge_int ==
          INT_M_LOADINGGAUGE_GC_TM_conversions;
        if (_1_else_clock_IfBlock1) {
          m_loadinggauge = ENUM_M_LOADINGGAUGE_GC_TM_conversions;
        }
        else {
          else_clock_IfBlock1 = m_loadinggauge_int ==
            INT_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          if (else_clock_IfBlock1) {
            m_loadinggauge = ENUM_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          }
          else {
            m_loadinggauge = ENUM_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          }
        }
      }
    }
  }
  return m_loadinggauge;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_LOADINGGAUGE_TM_conversions.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

