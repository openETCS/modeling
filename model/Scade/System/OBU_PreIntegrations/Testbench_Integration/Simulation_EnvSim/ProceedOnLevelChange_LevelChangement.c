/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProceedOnLevelChange_LevelChangement.h"

/* LevelChangement::ProceedOnLevelChange */
void ProceedOnLevelChange_LevelChangement(
  /* LevelChangement::ProceedOnLevelChange::current_level */M_LEVEL current_level,
  /* LevelChangement::ProceedOnLevelChange::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* LevelChangement::ProceedOnLevelChange::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* LevelChangement::ProceedOnLevelChange::Data_From_Track_to_Level */T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  /* LevelChangement::ProceedOnLevelChange::next_level */M_LEVEL *next_level,
  /* LevelChangement::ProceedOnLevelChange::IsNewLevel */kcg_bool *IsNewLevel,
  /* LevelChangement::ProceedOnLevelChange::Trip_Requested */kcg_bool *Trip_Requested)
{
  /* 1 */
  ComputeNewLevel_LevelChangement(
    current_level,
    selected_level_transition,
    trainPosition,
    next_level,
    IsNewLevel);
  *Trip_Requested = /* 1 */
    TripRequests_LevelChangement(
      current_level,
      *next_level,
      Data_From_Track_to_Level);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ProceedOnLevelChange_LevelChangement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

