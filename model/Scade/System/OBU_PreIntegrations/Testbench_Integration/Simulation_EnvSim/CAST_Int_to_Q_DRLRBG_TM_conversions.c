/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DRLRBG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_DRLRBG */
Q_DLRBG CAST_Int_to_Q_DRLRBG_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_drlrbg_int */kcg_int q_drlrbg_int)
{
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_DRLRBG::q_dlrbg */
  static Q_DLRBG q_dlrbg;
  
  IfBlock1_clock = q_drlrbg_int == INT_Q_DLRBG_nominal_TM_conversions;
  if (IfBlock1_clock) {
    q_dlrbg = ENUM_Q_DLRBG_nominal_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = q_drlrbg_int == INT_Q_DLRBG_reverse_TM_conversions;
    if (_1_else_clock_IfBlock1) {
      q_dlrbg = ENUM_Q_DLRBG_reverse_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = q_drlrbg_int == INT_Q_DLRBG_unknown_TM_conversions;
      if (else_clock_IfBlock1) {
        q_dlrbg = ENUM_Q_DLRBG_unknown_TM_conversions;
      }
      else {
        q_dlrbg = ENUM_Q_DLRBG_unknown_TM_conversions;
      }
    }
  }
  return q_dlrbg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_DRLRBG_TM_conversions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

