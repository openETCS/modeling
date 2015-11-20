/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_level_data_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Set_level_data */
void Set_level_data_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_level_data::LevelDataAck */kcg_bool LevelDataAck,
  /* DMI_Control_Pkg::Sub_func::Set_level_data::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_level_data::level */DMI_level_T_DMI_Types_Pkg *level,
  /* DMI_Control_Pkg::Sub_func::Set_level_data::dmi_level_data */DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *dmi_level_data)
{
  (*dmi_level_data).valid = LevelDataAck;
  (*dmi_level_data).systemTime = SystemTime;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&(*dmi_level_data).level, level);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Set_level_data_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

