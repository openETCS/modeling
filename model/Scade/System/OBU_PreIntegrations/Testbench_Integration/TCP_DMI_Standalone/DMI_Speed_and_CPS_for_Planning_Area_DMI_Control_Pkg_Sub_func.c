/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area */
void DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::DMI_track_atlas */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_track_atlas,
  /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::vpermitted */kcg_real *vpermitted,
  /* DMI_Control_Pkg::Sub_func::DMI_Speed_and_CPS_for_Planning_Area::fronttrain */kcg_real *fronttrain)
{
  *fronttrain = (kcg_real) (*DMI_track_atlas).location_front_train / 100.0;
  *vpermitted = (kcg_real) (*DMI_track_atlas).v_permitted;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_Speed_and_CPS_for_Planning_Area_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

