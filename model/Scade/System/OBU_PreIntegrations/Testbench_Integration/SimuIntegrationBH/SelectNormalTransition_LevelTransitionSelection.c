/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectNormalTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectNormalTransition */
void SelectNormalTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectNormalTransition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectNormalTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectNormalTransition::level_transition_table */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_table,
  /* LevelTransitionSelection::SelectNormalTransition::Available_for_use */ kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectNormalTransition::output_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *output_level_transition)
{
  static kcg_int i1;
  /* LevelTransitionSelection::SelectNormalTransition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg acc;
  /* LevelTransitionSelection::SelectNormalTransition */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* LevelTransitionSelection::SelectNormalTransition::Loc_index */
  static kcg_int Loc_index;
  /* LevelTransitionSelection::SelectNormalTransition::_L25 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L25;
  /* LevelTransitionSelection::SelectNormalTransition::_L27 */
  static kcg_int _L27;
  /* LevelTransitionSelection::SelectNormalTransition::_L28 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L28;
  /* LevelTransitionSelection::SelectNormalTransition::_L29 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L29;
  /* LevelTransitionSelection::SelectNormalTransition::_L30 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L30;
  /* LevelTransitionSelection::SelectNormalTransition::_L31 */
  static array_172617 _L31;
  /* LevelTransitionSelection::SelectNormalTransition::_L32 */
  static kcg_bool _L32;
  /* LevelTransitionSelection::SelectNormalTransition::_L33 */
  static kcg_bool _L33;
  /* LevelTransitionSelection::SelectNormalTransition::_L34 */
  static kcg_bool _L34;
  /* LevelTransitionSelection::SelectNormalTransition::_L35 */
  static kcg_bool _L35;
  /* LevelTransitionSelection::SelectNormalTransition::_L36 */
  static kcg_bool _L36;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L28,
    last_level_transition);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L29,
    level_transition_table);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &_L30,
    ERTMS_capabilities);
  /* pow */ for (i1 = 0; i1 < 7; i1++) {
    kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(&_L31[i1], &_L30);
  }
  _L32 = kcg_true;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&_L25, &_L28);
  /* 1 */ if (_L32) {
    /* 1 */ for (i = 0; i < 7; i++) {
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&acc, &_L25);
      /* 1 */
      IsSelectedTransition_LevelTransitionSelection(
        &acc,
        &_L29[i],
        &_L31[i],
        &cond_iterw,
        &_L25);
      _L27 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L27 = 0;
  }
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    output_level_transition,
    &_L25);
  Loc_index = _L27;
  _L34 = Loc_index < M_Max_TransitionInPriorityTable_Level_And_Mode_Types_Pkg;
  _L35 = kcg_true;
  _L36 = kcg_false;
  /* 1 */ if (_L34) {
    _L33 = _L35;
  }
  else {
    _L33 = _L36;
  }
  *Available_for_use = _L33;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectNormalTransition_LevelTransitionSelection.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

