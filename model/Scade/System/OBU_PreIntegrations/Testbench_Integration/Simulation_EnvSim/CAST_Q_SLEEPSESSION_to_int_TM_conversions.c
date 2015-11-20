/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_SLEEPSESSION_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_SLEEPSESSION_to_int */
kcg_int CAST_Q_SLEEPSESSION_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_SLEEPSESSION_to_int::q_sleepsession_int */Q_SLEEPSESSION q_sleepsession_int)
{
  /* TM_conversions::CAST_Q_SLEEPSESSION_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_SLEEPSESSION_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_SLEEPSESSION_to_int::d */
  static kcg_int d;
  
  IfBlock1_clock = q_sleepsession_int ==
    ENUM_Q_SLEEPSESSION_execute_TM_conversions;
  if (IfBlock1_clock) {
    d = INT_Q_SLEEPSESSION_execute_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_sleepsession_int ==
      ENUM_Q_SLEEPSESSION_ignore_TM_conversions;
    if (else_clock_IfBlock1) {
      d = INT_Q_SLEEPSESSION_ignore_TM_conversions;
    }
    else {
      d = INT_Q_SLEEPSESSION_execute_TM_conversions;
    }
  }
  return d;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_SLEEPSESSION_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

