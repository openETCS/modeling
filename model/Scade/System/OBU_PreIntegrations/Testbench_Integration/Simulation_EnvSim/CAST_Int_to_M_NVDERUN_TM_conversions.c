/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_NVDERUN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_NVDERUN */
M_NVDERUN CAST_Int_to_M_NVDERUN_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun_int */kcg_int m_nvderun_int)
{
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */
  static M_NVDERUN m_nvderun;
  
  IfBlock1_clock = m_nvderun_int == INT_M_NVDERUN_no_TM_conversions;
  if (IfBlock1_clock) {
    m_nvderun = ENUM_M_NVDERUN_no_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = m_nvderun_int == INT_M_NVDERUN_yes_TM_conversions;
    if (else_clock_IfBlock1) {
      m_nvderun = ENUM_M_NVDERUN_yes_TM_conversions;
    }
    else {
      m_nvderun = ENUM_M_NVDERUN_yes_TM_conversions;
    }
  }
  return m_nvderun;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_NVDERUN_TM_conversions.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

