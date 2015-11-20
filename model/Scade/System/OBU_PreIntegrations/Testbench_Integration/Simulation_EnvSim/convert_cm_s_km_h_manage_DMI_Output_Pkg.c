/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convert_cm_s_km_h_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::convert_cm_s_km_h */
V_internal_Type_Obu_BasicTypes_Pkg convert_cm_s_km_h_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::cm_s */V_odometry_Type_Obu_BasicTypes_Pkg cm_s)
{
  /* manage_DMI_Output_Pkg::convert_cm_s_km_h::km_h */
  static V_internal_Type_Obu_BasicTypes_Pkg km_h;
  
  if (cm_s >= 0) {
    km_h = cm_s * 36 / 1000;
  }
  else {
    km_h = cm_s;
  }
  return km_h;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** convert_cm_s_km_h_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

