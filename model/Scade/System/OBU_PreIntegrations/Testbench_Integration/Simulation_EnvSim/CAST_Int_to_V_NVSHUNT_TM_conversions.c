/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVSHUNT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVSHUNT */
V_NVSHUNT CAST_Int_to_V_NVSHUNT_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVSHUNT::v_nvshunt_int */kcg_int v_nvshunt_int)
{
  /* TM_conversions::CAST_Int_to_V_NVSHUNT::v_nvshunt */
  static V_NVSHUNT v_nvshunt;
  
  v_nvshunt = v_nvshunt_int * 5;
  return v_nvshunt;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_NVSHUNT_TM_conversions.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

