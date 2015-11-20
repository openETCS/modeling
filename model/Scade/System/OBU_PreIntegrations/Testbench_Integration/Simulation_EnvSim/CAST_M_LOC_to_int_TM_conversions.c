/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_LOC_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_LOC_to_int */
kcg_int CAST_M_LOC_to_int_TM_conversions(
  /* TM_conversions::CAST_M_LOC_to_int::m_loc */M_LOC m_loc)
{
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_LOC_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_LOC_to_int::m_loc_int */
  static kcg_int m_loc_int;
  
  IfBlock1_clock = m_loc == ENUM_M_LOC_every_LRBG_TM_conversions;
  if (IfBlock1_clock) {
    m_loc_int = INT_M_LOC_every_LRBG_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = m_loc == ENUM_M_LOC_not_when_LRBG_TM_conversions;
    if (_1_else_clock_IfBlock1) {
      m_loc_int = INT_M_LOC_not_when_LRBG_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = m_loc == ENUM_M_LOC_now_TM_conversions;
      if (else_clock_IfBlock1) {
        m_loc_int = INT_M_LOC_now_TM_conversions;
      }
      else {
        m_loc_int = INT_M_LOC_now_TM_conversions;
      }
    }
  }
  return m_loc_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_LOC_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

