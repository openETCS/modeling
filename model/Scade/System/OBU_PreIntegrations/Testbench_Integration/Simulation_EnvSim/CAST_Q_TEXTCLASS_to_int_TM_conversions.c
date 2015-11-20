/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_TEXTCLASS_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_TEXTCLASS_to_int */
kcg_int CAST_Q_TEXTCLASS_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::q_textclass_int */Q_TEXTCLASS q_textclass_int)
{
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Q_TEXTCLASS_to_int::d */
  static kcg_int d;
  
  IfBlock1_clock = q_textclass_int == ENUM_Q_TEXTCLASS_important_TM_conversions;
  if (IfBlock1_clock) {
    d = INT_Q_TEXTCLASS_important_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_textclass_int ==
      ENUM_Q_TEXTCLASS_aux_TM_conversions;
    if (else_clock_IfBlock1) {
      d = INT_Q_TEXTCLASS_aux_TM_conversions;
    }
    else {
      d = INT_Q_TEXTCLASS_important_TM_conversions;
    }
  }
  return d;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_TEXTCLASS_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

