/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectConditionnalTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectConditionnalTransition */
void SelectConditionnalTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectConditionnalTransition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectConditionnalTransition::conditional_transition */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_available_for_use */ kcg_bool last_available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::Available_for_use */ kcg_bool *_7_Available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::output_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *_6_output_level_transition)
{
  static kcg_int i1;
  /* LevelTransitionSelection::SelectConditionnalTransition */
  static kcg_bool acc;
  static kcg_int i;
  /* LevelTransitionSelection::SelectConditionnalTransition::output_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _3_output_level_transition;
  /* LevelTransitionSelection::SelectConditionnalTransition::Available_for_use */
  static kcg_bool _2_Available_for_use;
  /* LevelTransitionSelection::SelectConditionnalTransition::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* LevelTransitionSelection::SelectConditionnalTransition::IfBlock1::then::_L1 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L1_IfBlock1;
  /* LevelTransitionSelection::SelectConditionnalTransition::output_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg output_level_transition;
  /* LevelTransitionSelection::SelectConditionnalTransition::Available_for_use */
  static kcg_bool Available_for_use;
  /* LevelTransitionSelection::SelectConditionnalTransition::IfBlock1::else::_L9 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L9_IfBlock1;
  /* LevelTransitionSelection::SelectConditionnalTransition::IfBlock1::else::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* LevelTransitionSelection::SelectConditionnalTransition::IfBlock1::else::_L5 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L5_IfBlock1;
  /* LevelTransitionSelection::SelectConditionnalTransition::IfBlock1::else::_L3 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L34_IfBlock1;
  /* LevelTransitionSelection::SelectConditionnalTransition::IfBlock1::else::_L1 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L15_IfBlock1;
  /* LevelTransitionSelection::SelectConditionnalTransition::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* LevelTransitionSelection::SelectConditionnalTransition::Loc_contain_current_level */
  static kcg_bool Loc_contain_current_level;
  /* LevelTransitionSelection::SelectConditionnalTransition::_L1 */
  static kcg_bool _L1;
  /* LevelTransitionSelection::SelectConditionnalTransition::_L2 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L2;
  /* LevelTransitionSelection::SelectConditionnalTransition::_L3 */
  static kcg_bool _L3;
  /* LevelTransitionSelection::SelectConditionnalTransition::_L4 */
  static M_LEVEL _L4;
  /* LevelTransitionSelection::SelectConditionnalTransition::_L5 */
  static array_169014 _L5;
  
  _L3 = kcg_false;
  _L4 = current_level;
  /* pow */ for (i1 = 0; i1 < 7; i1++) {
    _L5[i1] = _L4;
  }
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L2,
    conditional_transition);
  _L1 = _L3;
  /* 2 */ for (i = 0; i < 7; i++) {
    acc = _L1;
    _L1 = /* 1 */
      IsInPriorityTable_LevelTransitionSelection(acc, _L5[i], &_L2[i]);
  }
  Loc_contain_current_level = _L1;
  IfBlock1_clock = Loc_contain_current_level;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L3_IfBlock1 = last_available_for_use;
    _2_Available_for_use = _L3_IfBlock1;
    *_7_Available_for_use = _2_Available_for_use;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_L1_IfBlock1,
      last_level_transition);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_3_output_level_transition,
      &_L1_IfBlock1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      _6_output_level_transition,
      &_3_output_level_transition);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_L9_IfBlock1,
      last_level_transition);
    kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
      &_L5_IfBlock1,
      ERTMS_capabilities);
    kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
      &_L34_IfBlock1,
      conditional_transition);
    /* 1 */
    SelectNormalTransition_LevelTransitionSelection(
      &_L9_IfBlock1,
      &_L5_IfBlock1,
      &_L34_IfBlock1,
      &_L8_IfBlock1,
      &_L15_IfBlock1);
    Available_for_use = _L8_IfBlock1;
    *_7_Available_for_use = Available_for_use;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &output_level_transition,
      &_L15_IfBlock1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      _6_output_level_transition,
      &output_level_transition);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectConditionnalTransition_LevelTransitionSelection.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

