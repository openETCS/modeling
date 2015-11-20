/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVREL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVREL */
V_NVREL CAST_Int_to_V_NVREL_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVREL::v_nvrel_int */kcg_int v_nvrel_int)
{
  /* TM_conversions::CAST_Int_to_V_NVREL::v_nvrel */
  static V_NVREL v_nvrel;
  
  v_nvrel = v_nvrel_int * 5;
  return v_nvrel;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_NVREL_TM_conversions.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

