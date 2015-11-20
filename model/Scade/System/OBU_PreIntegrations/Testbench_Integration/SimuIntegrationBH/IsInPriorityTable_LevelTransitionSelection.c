/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsInPriorityTable_LevelTransitionSelection.h"

/* LevelTransitionSelection::IsInPriorityTable */
kcg_bool IsInPriorityTable_LevelTransitionSelection(
  /* LevelTransitionSelection::IsInPriorityTable::In_same_level_and_set */ kcg_bool In_same_level_and_set,
  /* LevelTransitionSelection::IsInPriorityTable::level */ M_LEVEL level,
  /* LevelTransitionSelection::IsInPriorityTable::level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition)
{
  static NID_LRBG noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_noname;
  /* LevelTransitionSelection::IsInPriorityTable::_L11 */
  static kcg_bool _L11;
  /* LevelTransitionSelection::IsInPriorityTable::_L10 */
  static kcg_bool _L10;
  /* LevelTransitionSelection::IsInPriorityTable::_L6 */
  static M_LEVEL _L6;
  /* LevelTransitionSelection::IsInPriorityTable::_L2 */
  static kcg_bool _L2;
  /* LevelTransitionSelection::IsInPriorityTable::_L3 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L3;
  /* LevelTransitionSelection::IsInPriorityTable::_L4 */
  static NID_LRBG _L4;
  /* LevelTransitionSelection::IsInPriorityTable::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* LevelTransitionSelection::IsInPriorityTable::_L1 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L1;
  /* LevelTransitionSelection::IsInPriorityTable::_L12 */
  static M_LEVEL _L12;
  /* LevelTransitionSelection::IsInPriorityTable::_L13 */
  static kcg_bool _L13;
  /* LevelTransitionSelection::IsInPriorityTable::_L14 */
  static kcg_bool _L14;
  /* LevelTransitionSelection::IsInPriorityTable::same_level_and_set */
  static kcg_bool same_level_and_set;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&_L1, level_transition);
  _L5 = _L1.referenceLocation;
  _L4 = _L1.LRBG;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(&_L3, &_L1.transition);
  _L2 = _L1.is_set;
  _L6 = level;
  noname = _L4;
  _1_noname = _L5;
  _L12 = _L3.level;
  _L10 = _L6 == _L12;
  _L11 = _L2 & _L10;
  _L13 = In_same_level_and_set;
  _L14 = _L13 | _L11;
  same_level_and_set = _L14;
  return same_level_and_set;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** IsInPriorityTable_LevelTransitionSelection.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

