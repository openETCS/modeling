/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelListAdapter_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::LevelListAdapter */
void LevelListAdapter_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::LevelListAdapter::DMI_evc_level_data */DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_evc_level_data,
  /* DMI_Control_Pkg::Utils::LevelListAdapter::ArrayLevelIndex_toDisplay */array_int_12 *ArrayLevelIndex_toDisplay)
{
  kcg_bool tmp;
  kcg_int i;
  /* DMI_Control_Pkg::Utils::LevelListAdapter::_L8 */ kcg_int _L8;
  /* DMI_Control_Pkg::Utils::LevelListAdapter::_L9 */ array_int_32 _L9;
  
  if (((*DMI_evc_level_data).levelList.number != 0) &
    (*DMI_evc_level_data).valid) {
    for (i = 0; i < 32; i++) {
      /* 1 */
      LevelList_Iterator_DMI_Control_Pkg_Sub_func(
        i,
        &(*DMI_evc_level_data).levelList.levelList[i],
        (*DMI_evc_level_data).levelList.number,
        &tmp,
        &_L9[i]);
      _L8 = i + 1;
      if (!tmp) {
        break;
      }
    }
  }
  else {
    _L8 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L8; i < 32; i++) {
    _L9[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_array_int_12(ArrayLevelIndex_toDisplay, (array_int_12 *) &_L9[0]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelListAdapter_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

