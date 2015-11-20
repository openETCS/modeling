/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelAdapter_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::LevelAdapter */
kcg_int LevelAdapter_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::LevelAdapter::level */DMI_level_T_DMI_Types_Pkg *level)
{
  /* DMI_Control_Pkg::Utils::LevelAdapter::LevelIndex */ kcg_int LevelIndex;
  
  if ((*level).level == M_LEVEL_Level_NTC_specified_by_NID_NTC) {
    switch ((*level).nid_stm) {
      case 1 :
        LevelIndex = cLevel_ATB_Index_DMI_Control_Pkg;
        break;
      case 2 :
        LevelIndex = 7;
        break;
      
      default :
        LevelIndex = 8;
    }
  }
  else {
    switch ((*level).level) {
      case M_LEVEL_Level_0 :
        LevelIndex = cLevel_0_Index_DMI_Control_Pkg;
        break;
      case M_LEVEL_Level_1 :
        LevelIndex = cLevel_1_Index_DMI_Control_Pkg;
        break;
      case M_LEVEL_Level_3 :
        LevelIndex = cLevel_3_Index_DMI_Control_Pkg;
        break;
      
      default :
        LevelIndex = cLevel_2_Index_DMI_Control_Pkg;
    }
  }
  return LevelIndex;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelAdapter_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

