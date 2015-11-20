/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_MAR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_MAR */
T_MAR CAST_Int_to_T_MAR_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_MAR::t_mar_int */kcg_int t_mar_int)
{
  /* TM_conversions::CAST_Int_to_T_MAR::t_mar */
  static T_MAR t_mar;
  
  t_mar = t_mar_int;
  return t_mar;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_T_MAR_TM_conversions.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

