/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SelectNormalTransition_LevelTransitionSelection_H_
#define _SelectNormalTransition_LevelTransitionSelection_H_

#include "kcg_types.h"
#include "IsSelectedTransition_LevelTransitionSelection.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* LevelTransitionSelection::SelectNormalTransition */
extern void SelectNormalTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectNormalTransition::last_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectNormalTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectNormalTransition::level_transition_table */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_table,
  /* LevelTransitionSelection::SelectNormalTransition::Available_for_use */ kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectNormalTransition::output_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *output_level_transition);

#endif /* _SelectNormalTransition_LevelTransitionSelection_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SelectNormalTransition_LevelTransitionSelection.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

