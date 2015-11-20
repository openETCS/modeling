/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Set_level_data_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void Set_level_data_init_DMI_Control_Pkg_Sub_func(
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L11.valid = kcg_true;
  outC->_L11.systemTime = 0;
  outC->_L11.level.level = M_LEVEL_Level_0;
  outC->_L11.level.nid_stm = 0;
  outC->_L9.level = M_LEVEL_Level_0;
  outC->_L9.nid_stm = 0;
  outC->_L2 = 0;
  outC->_L1 = kcg_true;
  outC->dmi_level_data.valid = kcg_true;
  outC->dmi_level_data.systemTime = 0;
  outC->dmi_level_data.level.level = M_LEVEL_Level_0;
  outC->dmi_level_data.level.nid_stm = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Set_level_data_reset_DMI_Control_Pkg_Sub_func(
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Set_level_data */
void Set_level_data_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::Set_level_data::LevelDataAck */ kcg_bool LevelDataAck,
  /* DMI_Control_Pkg::Sub_func::Set_level_data::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Sub_func::Set_level_data::level */ DMI_level_T_DMI_Types_Pkg *level,
  outC_Set_level_data_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L1 = LevelDataAck;
  outC->_L2 = SystemTime;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L9, level);
  outC->_L11.valid = outC->_L1;
  outC->_L11.systemTime = outC->_L2;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L11.level, &outC->_L9);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->dmi_level_data,
    &outC->_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Set_level_data_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

