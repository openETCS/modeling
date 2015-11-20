/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelTR2Level_InputManagement.h"

/* InputManagement::LevelTR2Level */
M_LEVEL LevelTR2Level_InputManagement(
  /* InputManagement::LevelTR2Level::InLevelTR */M_LEVELTR InLevelTR)
{
  /* InputManagement::LevelTR2Level::OutLevel */
  static M_LEVEL OutLevel;
  
  switch (InLevelTR) {
    case M_LEVELTR_Level_0 :
      OutLevel = M_LEVEL_Level_0;
      break;
    case M_LEVELTR_Level_NTC_specified_by_NID_NTC :
      OutLevel = M_LEVEL_Level_NTC_specified_by_NID_NTC;
      break;
    case M_LEVELTR_Level_1 :
      OutLevel = M_LEVEL_Level_1;
      break;
    case M_LEVELTR_Level_2 :
      OutLevel = M_LEVEL_Level_2;
      break;
    case M_LEVELTR_Level_3 :
      OutLevel = M_LEVEL_Level_3;
      break;
    
  }
  return OutLevel;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelTR2Level_InputManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

