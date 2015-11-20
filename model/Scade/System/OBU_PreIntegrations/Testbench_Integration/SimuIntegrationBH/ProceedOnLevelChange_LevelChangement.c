/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProceedOnLevelChange_LevelChangement.h"

/* LevelChangement::ProceedOnLevelChange */
void ProceedOnLevelChange_LevelChangement(
  /* LevelChangement::ProceedOnLevelChange::current_level */ M_LEVEL current_level,
  /* LevelChangement::ProceedOnLevelChange::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* LevelChangement::ProceedOnLevelChange::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* LevelChangement::ProceedOnLevelChange::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  /* LevelChangement::ProceedOnLevelChange::next_level */ M_LEVEL *next_level,
  /* LevelChangement::ProceedOnLevelChange::IsNewLevel */ kcg_bool *IsNewLevel,
  /* LevelChangement::ProceedOnLevelChange::Trip_Requested */ kcg_bool *Trip_Requested)
{
  /* LevelChangement::ProceedOnLevelChange::_L2 */
  static kcg_bool _L2;
  /* LevelChangement::ProceedOnLevelChange::_L1 */
  static M_LEVEL _L1;
  /* LevelChangement::ProceedOnLevelChange::_L4 */
  static kcg_bool _L4;
  /* LevelChangement::ProceedOnLevelChange::_L5 */
  static M_LEVEL _L5;
  /* LevelChangement::ProceedOnLevelChange::_L6 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L6;
  /* LevelChangement::ProceedOnLevelChange::_L7 */
  static trainPosition_T_TrainPosition_Types_Pck _L7;
  /* LevelChangement::ProceedOnLevelChange::_L9 */
  static M_LEVEL _L9;
  /* LevelChangement::ProceedOnLevelChange::_L10 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L10;
  
  _L5 = current_level;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L6,
    selected_level_transition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L7, trainPosition);
  /* 1 */ ComputeNewLevel_LevelChangement(_L5, &_L6, &_L7, &_L1, &_L2);
  _L9 = current_level;
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &_L10,
    Data_From_Track_to_Level);
  _L4 = /* 1 */ TripRequests_LevelChangement(_L9, _L1, &_L10);
  *next_level = _L1;
  *IsNewLevel = _L2;
  *Trip_Requested = _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ProceedOnLevelChange_LevelChangement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

