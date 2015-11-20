/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendLevelListPkg_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendLevelListPkg */
void sendLevelListPkg_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendLevelListPkg::levelList */ DMI_LevelList_T_DMI_Types_Pkg *levelList,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::UpdateLevelsRequested */ kcg_bool UpdateLevelsRequested,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendLevelListPkg::levelDataPkg */ DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *levelDataPkg)
{
  /* manage_DMI_Output_Pkg::sendLevelListPkg::_L1 */
  static DMI_LevelList_T_DMI_Types_Pkg _L1;
  /* manage_DMI_Output_Pkg::sendLevelListPkg::_L2 */
  static kcg_bool _L2;
  /* manage_DMI_Output_Pkg::sendLevelListPkg::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* manage_DMI_Output_Pkg::sendLevelListPkg::_L4 */
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L4;
  /* manage_DMI_Output_Pkg::sendLevelListPkg::_L9 */
  static kcg_bool _L9;
  /* manage_DMI_Output_Pkg::sendLevelListPkg::_L10 */
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L10;
  /* manage_DMI_Output_Pkg::sendLevelListPkg::_L17 */
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L17;
  
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&_L1, levelList);
  _L2 = UpdateLevelsRequested;
  _L3 = inSystemTime;
  _L9 = kcg_true;
  _L4.valid = _L9;
  _L4.system_clock = _L3;
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&_L4.levelList, &_L1);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L17,
    (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *)
      &cEmptyLevelData_manage_DMI_Output_Pkg);
  /* 1 */ if (_L2) {
    kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(&_L10, &_L4);
  }
  else {
    kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(&_L10, &_L17);
  }
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    levelDataPkg,
    &_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendLevelListPkg_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

