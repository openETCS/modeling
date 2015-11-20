/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_intToV_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_intToV_real */
V_internal_real_Type_SDM_Types_Pkg TransformV_intToV_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformV_intToV_real::v_int */V_internal_Type_Obu_BasicTypes_Pkg v_int)
{
  /* SDM_Types_Pkg::TransformV_intToV_real::v_real */
  static V_internal_real_Type_SDM_Types_Pkg v_real;
  
  v_real = (kcg_real) v_int / 3.6;
  return v_real;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransformV_intToV_real_SDM_Types_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

