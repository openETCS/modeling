/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckLevelAndMode.h"

/* CheckLevelAndMode */
kcg_bool CheckLevelAndMode(
  /* CheckLevelAndMode::Level */M_LEVEL Level,
  /* CheckLevelAndMode::Mode */T_Mode_Level_And_Mode_Types_Pkg Mode)
{
  /* CheckLevelAndMode::_L7 */
  static kcg_bool _L7;
  /* CheckLevelAndMode::Level_Mode_Compatible */
  static kcg_bool Level_Mode_Compatible;
  
  _L7 = (Level == M_LEVEL_Level_1) | (Level == M_LEVEL_Level_2) | (Level ==
      M_LEVEL_Level_3);
  switch (Mode) {
    case UN_Level_And_Mode_Types_Pkg :
      Level_Mode_Compatible = Level == M_LEVEL_Level_0;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      Level_Mode_Compatible = Level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
      break;
    case FS_Level_And_Mode_Types_Pkg :
      Level_Mode_Compatible = _L7;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      Level_Mode_Compatible = _L7;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      Level_Mode_Compatible = _L7;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      Level_Mode_Compatible = _L7;
      break;
    case RV_Level_And_Mode_Types_Pkg :
      Level_Mode_Compatible = _L7;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      Level_Mode_Compatible = _L7;
      break;
    
    default :
      Level_Mode_Compatible = kcg_true;
  }
  return Level_Mode_Compatible;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckLevelAndMode.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

