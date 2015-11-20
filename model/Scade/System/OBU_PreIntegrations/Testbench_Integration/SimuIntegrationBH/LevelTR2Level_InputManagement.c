/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelTR2Level_InputManagement.h"

/* InputManagement::LevelTR2Level */
M_LEVEL LevelTR2Level_InputManagement(
  /* InputManagement::LevelTR2Level::InLevelTR */ M_LEVELTR InLevelTR)
{
  /* InputManagement::LevelTR2Level::_L1 */
  static M_LEVELTR _L1;
  /* InputManagement::LevelTR2Level::_L2 */
  static M_LEVEL _L2;
  /* InputManagement::LevelTR2Level::_L3 */
  static M_LEVEL _L3;
  /* InputManagement::LevelTR2Level::_L4 */
  static M_LEVEL _L4;
  /* InputManagement::LevelTR2Level::_L5 */
  static M_LEVEL _L5;
  /* InputManagement::LevelTR2Level::_L6 */
  static M_LEVEL _L6;
  /* InputManagement::LevelTR2Level::_L7 */
  static M_LEVEL _L7;
  /* InputManagement::LevelTR2Level::OutLevel */
  static M_LEVEL OutLevel;
  
  _L1 = InLevelTR;
  _L4 = M_LEVEL_Level_0;
  _L3 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L5 = M_LEVEL_Level_1;
  _L6 = M_LEVEL_Level_2;
  _L7 = M_LEVEL_Level_3;
  switch (_L1) {
    case M_LEVELTR_Level_0 :
      _L2 = _L4;
      break;
    case M_LEVELTR_Level_NTC_specified_by_NID_NTC :
      _L2 = _L3;
      break;
    case M_LEVELTR_Level_1 :
      _L2 = _L5;
      break;
    case M_LEVELTR_Level_2 :
      _L2 = _L6;
      break;
    case M_LEVELTR_Level_3 :
      _L2 = _L7;
      break;
    
  }
  OutLevel = _L2;
  return OutLevel;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelTR2Level_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

