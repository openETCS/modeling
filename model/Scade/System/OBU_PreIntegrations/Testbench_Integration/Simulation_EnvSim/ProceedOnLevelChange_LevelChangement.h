/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _ProceedOnLevelChange_LevelChangement_H_
#define _ProceedOnLevelChange_LevelChangement_H_

#include "kcg_types.h"
#include "ComputeNewLevel_LevelChangement.h"
#include "TripRequests_LevelChangement.h"

/* =====================  no input structure  ====================== */


/* LevelChangement::ProceedOnLevelChange */
extern void ProceedOnLevelChange_LevelChangement(
  /* LevelChangement::ProceedOnLevelChange::current_level */M_LEVEL current_level,
  /* LevelChangement::ProceedOnLevelChange::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* LevelChangement::ProceedOnLevelChange::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* LevelChangement::ProceedOnLevelChange::Data_From_Track_to_Level */T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  /* LevelChangement::ProceedOnLevelChange::next_level */M_LEVEL *next_level,
  /* LevelChangement::ProceedOnLevelChange::IsNewLevel */kcg_bool *IsNewLevel,
  /* LevelChangement::ProceedOnLevelChange::Trip_Requested */kcg_bool *Trip_Requested);

#endif /* _ProceedOnLevelChange_LevelChangement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ProceedOnLevelChange_LevelChangement.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

