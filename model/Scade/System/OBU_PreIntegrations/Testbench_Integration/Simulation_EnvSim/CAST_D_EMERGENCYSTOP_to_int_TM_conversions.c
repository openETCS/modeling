/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_EMERGENCYSTOP_to_int_TM_conversions.h"

/* TM_conversions::CAST_D_EMERGENCYSTOP_to_int */
kcg_int CAST_D_EMERGENCYSTOP_to_int_TM_conversions(
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::d_emergencystop */D_EMERGENCYSTOP d_emergencystop)
{
  /* TM_conversions::CAST_D_EMERGENCYSTOP_to_int::d_emergencystop_int */
  static kcg_int d_emergencystop_int;
  
  d_emergencystop_int = d_emergencystop;
  return d_emergencystop_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_D_EMERGENCYSTOP_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

