/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelList_Iterator_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::LevelList_Iterator */
void LevelList_Iterator_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::level */DMI_level_T_DMI_Types_Pkg *level,
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::N_level */kcg_int N_level,
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::condition */kcg_bool *condition,
  /* DMI_Control_Pkg::Sub_func::LevelList_Iterator::IndexLevel */kcg_int *IndexLevel)
{
  if ((*level).level == M_LEVEL_Level_NTC_specified_by_NID_NTC) {
    switch ((*level).nid_stm) {
      case 1 :
        *IndexLevel = cLevel_ATB_Index_DMI_Control_Pkg;
        break;
      case 2 :
        *IndexLevel = 7;
        break;
      
      default :
        *IndexLevel = 8;
    }
  }
  else {
    switch ((*level).level) {
      case M_LEVEL_Level_0 :
        *IndexLevel = cLevel_0_Index_DMI_Control_Pkg;
        break;
      case M_LEVEL_Level_1 :
        *IndexLevel = cLevel_1_Index_DMI_Control_Pkg;
        break;
      case M_LEVEL_Level_3 :
        *IndexLevel = cLevel_3_Index_DMI_Control_Pkg;
        break;
      
      default :
        *IndexLevel = cLevel_2_Index_DMI_Control_Pkg;
    }
  }
  *condition = index < N_level - 1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelList_Iterator_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

