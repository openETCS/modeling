/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectLevelTransition_LevelTransitionSelection.h"

void SelectLevelTransition_reset_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  outC->init = kcg_true;
}

/* LevelTransitionSelection::SelectLevelTransition */
void SelectLevelTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectLevelTransition::current_level */M_LEVEL current_level,
  /* LevelTransitionSelection::SelectLevelTransition::train_standstill */kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectLevelTransition::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* LevelTransitionSelection::SelectLevelTransition::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectLevelTransition::Data_From_Track_to_Level */T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  /* LevelTransitionSelection::SelectLevelTransition::Loc_conditionnal */
  static T_LevelTransition_Level_And_Mode_Types_Pkg Loc_conditionnal;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_driver */
  static T_LevelTransition_Level_And_Mode_Types_Pkg Loc_driver;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_Normal */
  static T_LevelTransition_Level_And_Mode_Types_Pkg Loc_Normal;
  /* LevelTransitionSelection::SelectLevelTransition::last_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg last_level_transition;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_Normal_Available */
  static kcg_bool Loc_Normal_Available;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_Conditionnal_Available */
  static kcg_bool Loc_Conditionnal_Available;
  /* LevelTransitionSelection::SelectLevelTransition::_L24 */
  static kcg_bool _L24;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L24 = kcg_false;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &last_level_transition,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
  }
  else {
    _L24 = outC->IsAvailableForUse;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &last_level_transition,
      &outC->selected_level_transition);
  }
  last_level_transition.is_set = kcg_false;
  /* 1 */
  SelectConditionnalTransition_LevelTransitionSelection(
    current_level,
    &(*Data_From_Track_to_Level).conditionnalTransition,
    ERTMS_capabilities,
    &last_level_transition,
    _L24,
    &Loc_Conditionnal_Available,
    &Loc_conditionnal);
  /* 1 */
  SelectNormalTransition_LevelTransitionSelection(
    &last_level_transition,
    ERTMS_capabilities,
    &(*Data_From_Track_to_Level).level_transition_priority_table,
    &Loc_Normal_Available,
    &Loc_Normal);
  /* 1 */
  SelectDriverCondition_LevelTransitionSelection(
    current_level,
    train_standstill,
    driver_level_transition,
    &last_level_transition,
    &Loc_driver);
  if (Loc_conditionnal.is_set) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &Loc_conditionnal);
    outC->IsAvailableForUse = Loc_Conditionnal_Available;
  }
  else if (Loc_Normal.is_set) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &Loc_Normal);
    outC->IsAvailableForUse = Loc_Normal_Available;
  }
  else if (Loc_driver.is_set) {
    outC->IsAvailableForUse = kcg_true;
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &Loc_driver);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &last_level_transition);
    outC->IsAvailableForUse = _L24;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SelectLevelTransition_LevelTransitionSelection.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

