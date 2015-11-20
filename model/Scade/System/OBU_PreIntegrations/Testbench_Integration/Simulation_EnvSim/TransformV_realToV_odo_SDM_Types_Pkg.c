/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransformV_realToV_odo_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::TransformV_realToV_odo */
V_odometry_Type_Obu_BasicTypes_Pkg TransformV_realToV_odo_SDM_Types_Pkg(
  /* SDM_Types_Pkg::TransformV_realToV_odo::v_real */V_internal_real_Type_SDM_Types_Pkg v_real)
{
  /* SDM_Types_Pkg::TransformV_realToV_odo::v_odo */
  static V_odometry_Type_Obu_BasicTypes_Pkg v_odo;
  
  v_odo = (kcg_int) (v_real * 100.0);
  return v_odo;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TransformV_realToV_odo_SDM_Types_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

