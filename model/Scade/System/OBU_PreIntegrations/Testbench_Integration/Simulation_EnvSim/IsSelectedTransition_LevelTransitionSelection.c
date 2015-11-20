/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsSelectedTransition_LevelTransitionSelection.h"

/* LevelTransitionSelection::IsSelectedTransition */
void IsSelectedTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::IsSelectedTransition::last_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::IsSelectedTransition::level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *level_transition,
  /* LevelTransitionSelection::IsSelectedTransition::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::IsSelectedTransition::available_transition_not_selected */kcg_bool *available_transition_not_selected,
  /* LevelTransitionSelection::IsSelectedTransition::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition)
{
  static kcg_bool tmp;
  
  switch ((*level_transition).transition.level) {
    case M_LEVEL_Level_3 :
      tmp = (*ERTMS_capabilities).L3;
      break;
    case M_LEVEL_Level_2 :
      tmp = (*ERTMS_capabilities).L2;
      break;
    case M_LEVEL_Level_1 :
      tmp = (*ERTMS_capabilities).L1;
      break;
    case M_LEVEL_Level_0 :
      tmp = (*ERTMS_capabilities).L0;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      tmp = (*ERTMS_capabilities).NTC;
      break;
    
  }
  *available_transition_not_selected = !((*level_transition).is_set & tmp);
  if ((*level_transition).is_set) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      selected_level_transition,
      level_transition);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      selected_level_transition,
      last_level_transition);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsSelectedTransition_LevelTransitionSelection.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

