/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectDriverCondition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectDriverCondition */
void SelectDriverCondition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectDriverCondition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectDriverCondition::train_standstill */ kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectDriverCondition::driver_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::driver_output_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_output_level_transition)
{
  static L_internal_Type_Obu_BasicTypes_Pkg noname;
  static NID_LRBG _1_noname;
  /* LevelTransitionSelection::SelectDriverCondition::Driver_Transition_Set */
  static kcg_bool Driver_Transition_Set;
  /* LevelTransitionSelection::SelectDriverCondition::Driver_Transition_Level */
  static M_LEVEL Driver_Transition_Level;
  /* LevelTransitionSelection::SelectDriverCondition::_L3 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L3;
  /* LevelTransitionSelection::SelectDriverCondition::_L18 */
  static kcg_bool _L18;
  /* LevelTransitionSelection::SelectDriverCondition::_L19 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L19;
  /* LevelTransitionSelection::SelectDriverCondition::_L20 */
  static NID_LRBG _L20;
  /* LevelTransitionSelection::SelectDriverCondition::_L21 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L21;
  /* LevelTransitionSelection::SelectDriverCondition::_L17 */
  static M_LEVEL _L17;
  /* LevelTransitionSelection::SelectDriverCondition::_L24 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L24;
  /* LevelTransitionSelection::SelectDriverCondition::_L26 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L26;
  /* LevelTransitionSelection::SelectDriverCondition::_L27 */
  static kcg_bool _L27;
  /* LevelTransitionSelection::SelectDriverCondition::_L28 */
  static kcg_bool _L28;
  /* LevelTransitionSelection::SelectDriverCondition::_L30 */
  static kcg_bool _L30;
  /* LevelTransitionSelection::SelectDriverCondition::_L31 */
  static kcg_bool _L31;
  /* LevelTransitionSelection::SelectDriverCondition::_L25 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L25;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L3,
    driver_level_transition);
  _L28 = train_standstill;
  _L18 = _L3.is_set;
  Driver_Transition_Set = _L18;
  _L30 = Driver_Transition_Set;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L19,
    &_L3.transition);
  _L17 = _L19.level;
  Driver_Transition_Level = _L17;
  _L31 = !(Driver_Transition_Level == current_level);
  _L27 = _L28 & _L30 & _L31;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L24,
    driver_level_transition);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L25,
    last_level_transition);
  /* 1 */ if (_L27) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&_L26, &_L24);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&_L26, &_L25);
  }
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    driver_output_level_transition,
    &_L26);
  _L21 = _L3.referenceLocation;
  noname = _L21;
  _L20 = _L3.LRBG;
  _1_noname = _L20;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectDriverCondition_LevelTransitionSelection.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

