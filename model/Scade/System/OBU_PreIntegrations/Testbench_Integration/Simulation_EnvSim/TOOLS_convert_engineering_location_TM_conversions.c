/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_convert_engineering_location_TM_conversions.h"

/* TM_conversions::TOOLS_convert_engineering_location */
kcg_real TOOLS_convert_engineering_location_TM_conversions(
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_int */kcg_int Loc_int)
{
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_real */
  static kcg_real Loc_real;
  
  Loc_real = (kcg_real) Loc_int * DIM_scale_eng_location_TM;
  return Loc_real;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_convert_engineering_location_TM_conversions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

