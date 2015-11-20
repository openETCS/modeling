/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeNewLevel_LevelChangement.h"

/* LevelChangement::ComputeNewLevel */
void ComputeNewLevel_LevelChangement(
  /* LevelChangement::ComputeNewLevel::current_level */M_LEVEL current_level,
  /* LevelChangement::ComputeNewLevel::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* LevelChangement::ComputeNewLevel::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* LevelChangement::ComputeNewLevel::next_level */M_LEVEL *next_level,
  /* LevelChangement::ComputeNewLevel::IsNewLevel */kcg_bool *IsNewLevel)
{
  *IsNewLevel = (*selected_level_transition).is_set & (current_level !=
      (*selected_level_transition).transition.level) &
    (((*selected_level_transition).transition.transitionType ==
        M_TransitionType_Conditional_Level_And_Mode_Types_Pkg) |
      ((*selected_level_transition).transition.transitionType ==
        M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg) |
      (((*selected_level_transition).transition.transitionType ==
          M_TransitionType_Normal_Level_And_Mode_Types_Pkg) &
        ((*selected_level_transition).transition.position <=
          (*trainPosition).estimatedFrontEndPosition)));
  if (*IsNewLevel) {
    *next_level = (*selected_level_transition).transition.level;
  }
  else {
    *next_level = current_level;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeNewLevel_LevelChangement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

