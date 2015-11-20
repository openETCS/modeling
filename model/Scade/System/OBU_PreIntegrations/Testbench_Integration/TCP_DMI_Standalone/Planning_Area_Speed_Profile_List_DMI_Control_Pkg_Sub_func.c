/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List */
void Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::Loc_LRBG */DMI_speedProfileElement_T_DMI_Types_Pkg *Loc_LRBG,
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::continue */kcg_bool *_1_continue,
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::Loc_Abs_DMI */kcg_real *Loc_Abs_DMI,
  /* DMI_Control_Pkg::Sub_func::Planning_Area_Speed_Profile_List::MRSP_DMI */kcg_real *MRSP_DMI)
{
  *Loc_Abs_DMI = (kcg_real) (*Loc_LRBG).Loc_Abs / 100.0;
  *MRSP_DMI = (kcg_real) (*Loc_LRBG).MRS;
  *_1_continue = (*Loc_LRBG).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Planning_Area_Speed_Profile_List_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

