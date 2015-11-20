/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_EMERGENCYSTOP */
D_EMERGENCYSTOP CAST_Int_to_D_EMERGENCYSTOP_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_EMERGENCYSTOP::d_emergencystop_int */kcg_int d_emergencystop_int)
{
  /* TM_conversions::CAST_Int_to_D_EMERGENCYSTOP::d_emergencystop */
  static D_EMERGENCYSTOP d_emergencystop;
  
  d_emergencystop = d_emergencystop_int;
  return d_emergencystop;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

