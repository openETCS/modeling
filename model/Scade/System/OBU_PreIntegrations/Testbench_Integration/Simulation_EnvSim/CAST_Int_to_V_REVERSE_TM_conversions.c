/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_REVERSE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_REVERSE */
V_REVERSE CAST_Int_to_V_REVERSE_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_REVERSE::v_reverse_int */kcg_int v_reverse_int)
{
  /* TM_conversions::CAST_Int_to_V_REVERSE::v_reverse */
  static V_REVERSE v_reverse;
  
  v_reverse = v_reverse_int * 5;
  return v_reverse;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_REVERSE_TM_conversions.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

