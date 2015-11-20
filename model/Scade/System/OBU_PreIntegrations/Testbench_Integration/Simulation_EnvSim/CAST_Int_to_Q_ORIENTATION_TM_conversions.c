/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_ORIENTATION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_ORIENTATION */
Q_ORIENTATION CAST_Int_to_Q_ORIENTATION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation_int */kcg_int q_orientation_int)
{
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */
  static Q_ORIENTATION q_orientation;
  
  IfBlock1_clock = q_orientation_int ==
    INT_Q_ORIENTATION_reverse_TM_conversions;
  if (IfBlock1_clock) {
    q_orientation = ENUM_Q_ORIENTATION_reverse_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_orientation_int ==
      INT_Q_ORIENTATION_nominal_TM_conversions;
    if (else_clock_IfBlock1) {
      q_orientation = ENUM_Q_ORIENTATION_nominal_TM_conversions;
    }
    else {
      q_orientation = ENUM_Q_ORIENTATION_reverse_TM_conversions;
    }
  }
  return q_orientation;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_ORIENTATION_TM_conversions.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

