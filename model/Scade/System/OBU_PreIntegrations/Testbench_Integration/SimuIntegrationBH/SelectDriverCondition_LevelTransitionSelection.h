/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SelectDriverCondition_LevelTransitionSelection_H_
#define _SelectDriverCondition_LevelTransitionSelection_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* LevelTransitionSelection::SelectDriverCondition */
extern void SelectDriverCondition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectDriverCondition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectDriverCondition::train_standstill */ kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectDriverCondition::driver_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::driver_output_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_output_level_transition);

#endif /* _SelectDriverCondition_LevelTransitionSelection_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SelectDriverCondition_LevelTransitionSelection.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

