/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckLevelAndMode.h"

/* CheckLevelAndMode */
kcg_bool CheckLevelAndMode(
  /* CheckLevelAndMode::Level */ M_LEVEL Level,
  /* CheckLevelAndMode::Mode */ T_Mode_Level_And_Mode_Types_Pkg Mode)
{
  /* CheckLevelAndMode::_L2 */
  static T_Mode_Level_And_Mode_Types_Pkg _L2;
  /* CheckLevelAndMode::_L4 */
  static kcg_bool _L4;
  /* CheckLevelAndMode::_L5 */
  static kcg_bool _L5;
  /* CheckLevelAndMode::_L6 */
  static kcg_bool _L6;
  /* CheckLevelAndMode::_L7 */
  static kcg_bool _L7;
  /* CheckLevelAndMode::_L8 */
  static kcg_bool _L8;
  /* CheckLevelAndMode::Level_Mode_Compatible */
  static kcg_bool Level_Mode_Compatible;
  
  _L2 = Mode;
  _L5 = Level == M_LEVEL_Level_0;
  _L6 = Level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L7 = (Level == M_LEVEL_Level_1) | (Level == M_LEVEL_Level_2) | (Level ==
      M_LEVEL_Level_3);
  _L8 = kcg_true;
  switch (_L2) {
    case UN_Level_And_Mode_Types_Pkg :
      _L4 = _L5;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L4 = _L6;
      break;
    case FS_Level_And_Mode_Types_Pkg :
      _L4 = _L7;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L4 = _L7;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L4 = _L7;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      _L4 = _L7;
      break;
    case RV_Level_And_Mode_Types_Pkg :
      _L4 = _L7;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L4 = _L7;
      break;
    
    default :
      _L4 = _L8;
  }
  Level_Mode_Compatible = _L4;
  return Level_Mode_Compatible;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckLevelAndMode.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

