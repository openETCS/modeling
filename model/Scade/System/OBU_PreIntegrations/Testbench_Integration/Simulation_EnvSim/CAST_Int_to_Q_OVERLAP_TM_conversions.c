/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_OVERLAP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_OVERLAP */
Q_OVERLAP CAST_Int_to_Q_OVERLAP_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::q_overlap_int */kcg_int q_overlap_int)
{
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::q_overlap */
  static Q_OVERLAP q_overlap;
  
  IfBlock1_clock = q_overlap_int == INT_Q_OVERLAP_overlap_info_TM_conversions;
  if (IfBlock1_clock) {
    q_overlap = ENUM_Q_OVERLAP_overlap_info_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_overlap_int ==
      INT_Q_OVERLAP_no_overlap_info_TM_conversions;
    if (else_clock_IfBlock1) {
      q_overlap = ENUM_Q_OVERLAP_no_overlap_info_TM_conversions;
    }
    else {
      q_overlap = ENUM_Q_OVERLAP_overlap_info_TM_conversions;
    }
  }
  return q_overlap;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_OVERLAP_TM_conversions.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

