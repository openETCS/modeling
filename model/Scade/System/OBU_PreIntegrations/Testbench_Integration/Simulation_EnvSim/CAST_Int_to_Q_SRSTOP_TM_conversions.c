/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_SRSTOP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_SRSTOP */
Q_SRSTOP CAST_Int_to_Q_SRSTOP_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_SRSTOP::q_srstop_int */kcg_int q_srstop_int)
{
  /* TM_conversions::CAST_Int_to_Q_SRSTOP::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SRSTOP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_SRSTOP::q_srstop */
  static Q_SRSTOP q_srstop;
  
  IfBlock1_clock = q_srstop_int == INT_Q_SRSTOP_go_TM_conversions;
  if (IfBlock1_clock) {
    q_srstop = ENUM_Q_SRSTOP_go_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_srstop_int == INT_Q_SRSTOP_stop_TM_conversions;
    if (else_clock_IfBlock1) {
      q_srstop = ENUM_Q_SRSTOP_stop_TM_conversions;
    }
    else {
      q_srstop = ENUM_Q_SRSTOP_stop_TM_conversions;
    }
  }
  return q_srstop;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_SRSTOP_TM_conversions.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

