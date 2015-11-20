/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsSelectedTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::IsSelectedTransition */
void IsSelectedTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::IsSelectedTransition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::IsSelectedTransition::level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* LevelTransitionSelection::IsSelectedTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::IsSelectedTransition::available_transition_not_selected */ kcg_bool *available_transition_not_selected,
  /* LevelTransitionSelection::IsSelectedTransition::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *_4_selected_level_transition)
{
  /* LevelTransitionSelection::IsSelectedTransition::selected_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _1_selected_level_transition;
  /* LevelTransitionSelection::IsSelectedTransition::SelectHigherPriority::then::_L2 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L2_SelectHigherPriority;
  /* LevelTransitionSelection::IsSelectedTransition::selected_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg selected_level_transition;
  /* LevelTransitionSelection::IsSelectedTransition::SelectHigherPriority::else::_L2 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L23_SelectHigherPriority;
  static L_internal_Type_Obu_BasicTypes_Pkg noname;
  static NID_LRBG _2_noname;
  /* LevelTransitionSelection::IsSelectedTransition::SelectHigherPriority */
  static kcg_bool SelectHigherPriority_clock;
  /* LevelTransitionSelection::IsSelectedTransition::Loc_is_valid */
  static kcg_bool Loc_is_valid;
  /* LevelTransitionSelection::IsSelectedTransition::capability_Level1 */
  static kcg_bool capability_Level1;
  /* LevelTransitionSelection::IsSelectedTransition::capability_Level2 */
  static kcg_bool capability_Level2;
  /* LevelTransitionSelection::IsSelectedTransition::capability_Level3 */
  static kcg_bool capability_Level3;
  /* LevelTransitionSelection::IsSelectedTransition::capability_NTC */
  static kcg_bool capability_NTC;
  /* LevelTransitionSelection::IsSelectedTransition::capability_Level0 */
  static kcg_bool capability_Level0;
  /* LevelTransitionSelection::IsSelectedTransition::_L26 */
  static kcg_bool _L26;
  /* LevelTransitionSelection::IsSelectedTransition::_L25 */
  static M_LEVEL _L25;
  /* LevelTransitionSelection::IsSelectedTransition::_L24 */
  static kcg_bool _L24;
  /* LevelTransitionSelection::IsSelectedTransition::_L23 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L23;
  /* LevelTransitionSelection::IsSelectedTransition::_L22 */
  static kcg_bool _L22;
  /* LevelTransitionSelection::IsSelectedTransition::_L21 */
  static kcg_bool _L21;
  /* LevelTransitionSelection::IsSelectedTransition::_L20 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L20;
  /* LevelTransitionSelection::IsSelectedTransition::_L19 */
  static kcg_bool _L19;
  /* LevelTransitionSelection::IsSelectedTransition::_L14 */
  static kcg_bool _L14;
  /* LevelTransitionSelection::IsSelectedTransition::_L15 */
  static kcg_bool _L15;
  /* LevelTransitionSelection::IsSelectedTransition::_L16 */
  static kcg_bool _L16;
  /* LevelTransitionSelection::IsSelectedTransition::_L17 */
  static kcg_bool _L17;
  /* LevelTransitionSelection::IsSelectedTransition::_L18 */
  static kcg_bool _L18;
  /* LevelTransitionSelection::IsSelectedTransition::_L13 */
  static kcg_bool _L13;
  /* LevelTransitionSelection::IsSelectedTransition::_L12 */
  static kcg_bool _L12;
  /* LevelTransitionSelection::IsSelectedTransition::_L11 */
  static kcg_bool _L11;
  /* LevelTransitionSelection::IsSelectedTransition::_L7 */
  static kcg_bool _L7;
  /* LevelTransitionSelection::IsSelectedTransition::_L8 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L8;
  /* LevelTransitionSelection::IsSelectedTransition::_L9 */
  static NID_LRBG _L9;
  /* LevelTransitionSelection::IsSelectedTransition::_L10 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L10;
  /* LevelTransitionSelection::IsSelectedTransition::_L27 */
  static kcg_bool _L27;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&_L23, level_transition);
  _L10 = _L23.referenceLocation;
  _L9 = _L23.LRBG;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L8,
    &_L23.transition);
  _L7 = _L23.is_set;
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &_L20,
    ERTMS_capabilities);
  _L16 = _L20.L1;
  capability_Level1 = _L16;
  _L17 = _L20.L2;
  capability_Level2 = _L17;
  noname = _L10;
  _L25 = _L8.level;
  _L18 = _L20.L3;
  capability_Level3 = _L18;
  _L19 = capability_Level3;
  _L26 = capability_Level2;
  _L13 = capability_Level1;
  _L15 = _L20.L0;
  capability_Level0 = _L15;
  _L22 = capability_Level0;
  _L14 = _L20.NTC;
  capability_NTC = _L14;
  _L24 = capability_NTC;
  switch (_L25) {
    case M_LEVEL_Level_3 :
      _L11 = _L19;
      break;
    case M_LEVEL_Level_2 :
      _L11 = _L26;
      break;
    case M_LEVEL_Level_1 :
      _L11 = _L13;
      break;
    case M_LEVEL_Level_0 :
      _L11 = _L22;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      _L11 = _L24;
      break;
    
  }
  _2_noname = _L9;
  Loc_is_valid = _L7;
  _L21 = Loc_is_valid;
  _L12 = _L21 & _L11;
  _L27 = !_L12;
  *available_transition_not_selected = _L27;
  SelectHigherPriority_clock = Loc_is_valid;
  /* ck_SelectHigherPriority */ if (SelectHigherPriority_clock) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_L2_SelectHigherPriority,
      level_transition);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_1_selected_level_transition,
      &_L2_SelectHigherPriority);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      _4_selected_level_transition,
      &_1_selected_level_transition);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_L23_SelectHigherPriority,
      last_level_transition);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &selected_level_transition,
      &_L23_SelectHigherPriority);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      _4_selected_level_transition,
      &selected_level_transition);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** IsSelectedTransition_LevelTransitionSelection.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

