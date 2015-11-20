/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_LRBG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_LRBG */
D_LRBG CAST_Int_to_D_LRBG_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_LRBG::d_lrbg_int */kcg_int d_lrbg_int)
{
  /* TM_conversions::CAST_Int_to_D_LRBG::d_lrbg */
  static D_LRBG d_lrbg;
  
  d_lrbg = d_lrbg_int;
  return d_lrbg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_LRBG_TM_conversions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

