/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_STATIC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_STATIC */
V_STATIC CAST_Int_to_V_STATIC_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_STATIC::v_static_int */kcg_int v_static_int)
{
  /* TM_conversions::CAST_Int_to_V_STATIC::v_static */
  static V_STATIC v_static;
  
  v_static = v_static_int * 5;
  return v_static;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_STATIC_TM_conversions.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

