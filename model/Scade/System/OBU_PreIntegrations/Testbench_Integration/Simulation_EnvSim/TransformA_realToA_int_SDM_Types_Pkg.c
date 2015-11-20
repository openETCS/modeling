/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformA_realToA_int_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformA_realToA_int */
A_internal_Type_Obu_BasicTypes_Pkg TransformA_realToA_int_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformA_realToA_int::acc_real */A_internal_real_Type_SDM_Types_Pkg acc_real)
{
  /* SDM_Types_Pkg::TransformA_realToA_int::acc_int */
  static A_internal_Type_Obu_BasicTypes_Pkg acc_int;
  
  acc_int = (kcg_int) (acc_real * 100.0);
  return acc_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransformA_realToA_int_SDM_Types_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

