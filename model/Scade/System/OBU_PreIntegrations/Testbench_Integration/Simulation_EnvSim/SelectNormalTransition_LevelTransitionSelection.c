/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectNormalTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::SelectNormalTransition */
void SelectNormalTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectNormalTransition::last_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectNormalTransition::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectNormalTransition::level_transition_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_table,
  /* LevelTransitionSelection::SelectNormalTransition::Available_for_use */kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectNormalTransition::output_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *output_level_transition)
{
  static T_LevelTransition_Level_And_Mode_Types_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* LevelTransitionSelection::SelectNormalTransition::Loc_index */
  static kcg_int Loc_index;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    output_level_transition,
    last_level_transition);
  for (i = 0; i < 7; i++) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &tmp1,
      output_level_transition);
    /* 1 */
    IsSelectedTransition_LevelTransitionSelection(
      &tmp1,
      &(*level_transition_table)[i],
      ERTMS_capabilities,
      &tmp,
      output_level_transition);
    Loc_index = i + 1;
    if (!tmp) {
      break;
    }
  }
  if (Loc_index < M_Max_TransitionInPriorityTable_Level_And_Mode_Types_Pkg) {
    *Available_for_use = kcg_true;
  }
  else {
    *Available_for_use = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SelectNormalTransition_LevelTransitionSelection.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

