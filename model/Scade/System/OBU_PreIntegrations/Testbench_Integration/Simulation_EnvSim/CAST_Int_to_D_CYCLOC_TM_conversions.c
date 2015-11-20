/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_CYCLOC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_CYCLOC */
D_CYCLOC CAST_Int_to_D_CYCLOC_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_CYCLOC::d_cycloc_int */kcg_int d_cycloc_int)
{
  /* TM_conversions::CAST_Int_to_D_CYCLOC::d_cycloc */
  static D_CYCLOC d_cycloc;
  
  d_cycloc = d_cycloc_int;
  return d_cycloc;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_CYCLOC_TM_conversions.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

