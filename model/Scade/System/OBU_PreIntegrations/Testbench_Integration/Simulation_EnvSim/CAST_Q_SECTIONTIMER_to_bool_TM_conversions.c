/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_SECTIONTIMER_to_bool_TM_conversions.h"

/* TM_conversions::CAST_Q_SECTIONTIMER_to_bool */
kcg_bool CAST_Q_SECTIONTIMER_to_bool_TM_conversions(
  /* TM_conversions::CAST_Q_SECTIONTIMER_to_bool::q_sectiontimer */Q_SECTIONTIMER q_sectiontimer)
{
  /* TM_conversions::CAST_Q_SECTIONTIMER_to_bool::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_SECTIONTIMER_to_bool::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_SECTIONTIMER_to_bool::q_sectiontimer_bool */
  static kcg_bool q_sectiontimer_bool;
  
  IfBlock1_clock = q_sectiontimer ==
    ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions;
  if (IfBlock1_clock) {
    q_sectiontimer_bool = kcg_true;
  }
  else {
    else_clock_IfBlock1 = q_sectiontimer ==
      ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions;
    if (else_clock_IfBlock1) {
      q_sectiontimer_bool = kcg_false;
    }
    else {
      q_sectiontimer_bool = kcg_true;
    }
  }
  return q_sectiontimer_bool;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_SECTIONTIMER_to_bool_TM_conversions.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

