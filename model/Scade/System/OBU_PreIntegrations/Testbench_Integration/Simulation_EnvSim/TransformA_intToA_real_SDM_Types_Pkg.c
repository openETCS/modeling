/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformA_intToA_real_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformA_intToA_real */
A_internal_real_Type_SDM_Types_Pkg TransformA_intToA_real_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformA_intToA_real::acc_int */A_internal_Type_Obu_BasicTypes_Pkg acc_int)
{
  /* SDM_Types_Pkg::TransformA_intToA_real::acc_real */
  static A_internal_real_Type_SDM_Types_Pkg acc_real;
  
  acc_real = (kcg_real) acc_int / 100.0;
  return acc_real;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransformA_intToA_real_SDM_Types_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

