/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_TRACKCOND_to_int_TM_conversions.h"

/* TM_conversions::CAST_D_TRACKCOND_to_int */
kcg_int CAST_D_TRACKCOND_to_int_TM_conversions(
  /* TM_conversions::CAST_D_TRACKCOND_to_int::d_trackcond */D_TRACKCOND d_trackcond)
{
  /* TM_conversions::CAST_D_TRACKCOND_to_int::d_trackcond_int */
  static kcg_int d_trackcond_int;
  
  d_trackcond_int = d_trackcond;
  return d_trackcond_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_D_TRACKCOND_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

