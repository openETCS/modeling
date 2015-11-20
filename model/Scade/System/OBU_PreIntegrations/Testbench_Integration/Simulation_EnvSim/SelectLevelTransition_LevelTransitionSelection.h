/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _SelectLevelTransition_LevelTransitionSelection_H_
#define _SelectLevelTransition_LevelTransitionSelection_H_

#include "kcg_types.h"
#include "SelectConditionnalTransition_LevelTransitionSelection.h"
#include "SelectNormalTransition_LevelTransitionSelection.h"
#include "SelectDriverCondition_LevelTransitionSelection.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* LevelTransitionSelection::SelectLevelTransition::selected_level_transition */ selected_level_transition;
  kcg_bool /* LevelTransitionSelection::SelectLevelTransition::IsAvailableForUse */ IsAvailableForUse;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_SelectLevelTransition_LevelTransitionSelection;

/* ===========  node initialization and cycle functions  =========== */
/* LevelTransitionSelection::SelectLevelTransition */
extern void SelectLevelTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectLevelTransition::current_level */M_LEVEL current_level,
  /* LevelTransitionSelection::SelectLevelTransition::train_standstill */kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectLevelTransition::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* LevelTransitionSelection::SelectLevelTransition::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectLevelTransition::Data_From_Track_to_Level */T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_SelectLevelTransition_LevelTransitionSelection *outC);

extern void SelectLevelTransition_reset_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC);

#endif /* _SelectLevelTransition_LevelTransitionSelection_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SelectLevelTransition_LevelTransitionSelection.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

