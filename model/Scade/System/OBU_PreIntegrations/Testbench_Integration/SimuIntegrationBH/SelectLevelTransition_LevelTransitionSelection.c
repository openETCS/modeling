/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SelectLevelTransition_LevelTransitionSelection.h"

#ifndef KCG_USER_DEFINED_INIT
void SelectLevelTransition_init_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  outC->init = kcg_true;
  outC->IsAvailableForUse = kcg_true;
  outC->selected_level_transition.is_set = kcg_true;
  outC->selected_level_transition.transition.level = M_LEVEL_Level_0;
  outC->selected_level_transition.transition.position = 0;
  outC->selected_level_transition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->selected_level_transition.transition.immediateAck = kcg_true;
  outC->selected_level_transition.transition.AckLength = 0;
  outC->selected_level_transition.LRBG = 0;
  outC->selected_level_transition.referenceLocation = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SelectLevelTransition_reset_LevelTransitionSelection(
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* LevelTransitionSelection::SelectLevelTransition */
void SelectLevelTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectLevelTransition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectLevelTransition::train_standstill */ kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectLevelTransition::driver_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* LevelTransitionSelection::SelectLevelTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectLevelTransition::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_SelectLevelTransition_LevelTransitionSelection *outC)
{
  /* LevelTransitionSelection::SelectLevelTransition::IsAvailableForUse */
  static kcg_bool _2_IsAvailableForUse;
  /* LevelTransitionSelection::SelectLevelTransition::selected_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _1_selected_level_transition;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::then::_L2 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L2_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::IsAvailableForUse */
  static kcg_bool IsAvailableForUse;
  /* LevelTransitionSelection::SelectLevelTransition::selected_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg selected_level_transition;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::IsAvailableForUse */
  static kcg_bool _10_IsAvailableForUse;
  /* LevelTransitionSelection::SelectLevelTransition::selected_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _9_selected_level_transition;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::else::else::then::_L3 */
  static kcg_bool _L315_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::else::else::then::_L2 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L216_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::IsAvailableForUse */
  static kcg_bool _8_IsAvailableForUse;
  /* LevelTransitionSelection::SelectLevelTransition::selected_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _7_selected_level_transition;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::else::else::else::_L3 */
  static kcg_bool _L317_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::else::else::else::_L2 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L218_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::selected_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _3_selected_level_transition;
  /* LevelTransitionSelection::SelectLevelTransition::IsAvailableForUse */
  static kcg_bool _4_IsAvailableForUse;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::else::then::_L2 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L214_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1::else::then::_L3 */
  static kcg_bool _L313_IfBlock1;
  /* LevelTransitionSelection::SelectLevelTransition::selected_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _5_selected_level_transition;
  /* LevelTransitionSelection::SelectLevelTransition::IsAvailableForUse */
  static kcg_bool _6_IsAvailableForUse;
  static kcg_bool noname;
  static kcg_bool _11_noname;
  /* LevelTransitionSelection::SelectLevelTransition::IsAvailableForUse */
  static kcg_bool last_IsAvailableForUse;
  /* LevelTransitionSelection::SelectLevelTransition::selected_level_transition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg last_selected_level_transition;
  /* LevelTransitionSelection::SelectLevelTransition::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_conditionnal_set */
  static kcg_bool Loc_conditionnal_set;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_driver_set */
  static kcg_bool Loc_driver_set;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_normal_set */
  static kcg_bool Loc_normal_set;
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
  /* LevelTransitionSelection::SelectLevelTransition::Loc_normal_transition_table */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg Loc_normal_transition_table;
  /* LevelTransitionSelection::SelectLevelTransition::Loc_conditionnal_transition_table */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg Loc_conditionnal_transition_table;
  /* LevelTransitionSelection::SelectLevelTransition::_L1 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L1;
  /* LevelTransitionSelection::SelectLevelTransition::_L2 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L2;
  /* LevelTransitionSelection::SelectLevelTransition::_L3 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L3;
  /* LevelTransitionSelection::SelectLevelTransition::_L4 */
  static M_LEVEL _L4;
  /* LevelTransitionSelection::SelectLevelTransition::_L7 */
  static kcg_bool _L7;
  /* LevelTransitionSelection::SelectLevelTransition::_L8 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L8;
  /* LevelTransitionSelection::SelectLevelTransition::_L9 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L9;
  /* LevelTransitionSelection::SelectLevelTransition::_L10 */
  static kcg_bool _L10;
  /* LevelTransitionSelection::SelectLevelTransition::_L11 */
  static kcg_bool _L11;
  /* LevelTransitionSelection::SelectLevelTransition::_L12 */
  static kcg_bool _L12;
  /* LevelTransitionSelection::SelectLevelTransition::_L16 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L16;
  /* LevelTransitionSelection::SelectLevelTransition::_L17 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L17;
  /* LevelTransitionSelection::SelectLevelTransition::_L18 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L18;
  /* LevelTransitionSelection::SelectLevelTransition::_L21 */
  static kcg_bool _L21;
  /* LevelTransitionSelection::SelectLevelTransition::_L22 */
  static kcg_bool _L22;
  /* LevelTransitionSelection::SelectLevelTransition::_L23 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L23;
  /* LevelTransitionSelection::SelectLevelTransition::_L24 */
  static kcg_bool _L24;
  /* LevelTransitionSelection::SelectLevelTransition::_L25 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L25;
  /* LevelTransitionSelection::SelectLevelTransition::_L26 */
  static kcg_bool _L26;
  /* LevelTransitionSelection::SelectLevelTransition::_L28 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L28;
  /* LevelTransitionSelection::SelectLevelTransition::_L29 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L29;
  /* LevelTransitionSelection::SelectLevelTransition::_L30 */
  static kcg_bool _L30;
  /* LevelTransitionSelection::SelectLevelTransition::_L31 */
  static kcg_bool _L31;
  /* LevelTransitionSelection::SelectLevelTransition::_L27 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L27;
  /* LevelTransitionSelection::SelectLevelTransition::_L32 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L32;
  /* LevelTransitionSelection::SelectLevelTransition::_L33 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L33;
  
  _L4 = current_level;
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &_L27,
    Data_From_Track_to_Level);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L29,
    &_L27.conditionnalTransition);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &Loc_conditionnal_transition_table,
    &_L29);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L33,
    &Loc_conditionnal_transition_table);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &_L9,
    ERTMS_capabilities);
  /* last_init_ck_selected_level_transition */ if (outC->init) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &last_selected_level_transition,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
  }
  else {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &last_selected_level_transition,
      &outC->selected_level_transition);
  }
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L16,
    &last_selected_level_transition);
  _L26 = kcg_false;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&_L25, &_L16);
  if (kcg_true) {
    _L25.is_set = _L26;
  }
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &last_level_transition,
    &_L25);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L18,
    &last_level_transition);
  /* last_init_ck_IsAvailableForUse */ if (outC->init) {
    last_IsAvailableForUse = kcg_false;
  }
  else {
    last_IsAvailableForUse = outC->IsAvailableForUse;
  }
  _L24 = last_IsAvailableForUse;
  /* 1 */
  SelectConditionnalTransition_LevelTransitionSelection(
    _L4,
    &_L33,
    &_L9,
    &_L18,
    _L24,
    &_L22,
    &_L1);
  _L7 = train_standstill;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L8,
    driver_level_transition);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L17,
    &last_level_transition);
  /* 1 */
  SelectDriverCondition_LevelTransitionSelection(_L4, _L7, &_L8, &_L17, &_L2);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L23,
    &last_level_transition);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L28,
    &_L27.level_transition_priority_table);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &Loc_normal_transition_table,
    &_L28);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L32,
    &Loc_normal_transition_table);
  /* 1 */
  SelectNormalTransition_LevelTransitionSelection(
    &_L23,
    &_L9,
    &_L32,
    &_L21,
    &_L3);
  _L10 = _L1.is_set;
  Loc_conditionnal_set = _L10;
  _L11 = _L2.is_set;
  _L12 = _L3.is_set;
  Loc_driver_set = _L11;
  Loc_normal_set = _L12;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&Loc_conditionnal, &_L1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&Loc_driver, &_L2);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(&Loc_Normal, &_L3);
  IfBlock1_clock = Loc_conditionnal_set;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_L2_IfBlock1,
      &Loc_conditionnal);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_1_selected_level_transition,
      &_L2_IfBlock1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &_1_selected_level_transition);
  }
  else {
    _12_else_clock_IfBlock1 = Loc_normal_set;
    /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &_L214_IfBlock1,
        &Loc_Normal);
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &_5_selected_level_transition,
        &_L214_IfBlock1);
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &selected_level_transition,
        &_5_selected_level_transition);
    }
    else {
      else_clock_IfBlock1 = Loc_driver_set;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
          &_L216_IfBlock1,
          &Loc_driver);
        kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
          &_9_selected_level_transition,
          &_L216_IfBlock1);
        kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
          &_3_selected_level_transition,
          &_9_selected_level_transition);
      }
      else {
        kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
          &_L218_IfBlock1,
          &last_level_transition);
        kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
          &_7_selected_level_transition,
          &_L218_IfBlock1);
        kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
          &_3_selected_level_transition,
          &_7_selected_level_transition);
      }
      kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &selected_level_transition,
        &_3_selected_level_transition);
    }
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->selected_level_transition,
      &selected_level_transition);
    /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
    }
    else /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L315_IfBlock1 = kcg_true;
      _10_IsAvailableForUse = _L315_IfBlock1;
      _4_IsAvailableForUse = _10_IsAvailableForUse;
    }
    else {
      _L317_IfBlock1 = last_IsAvailableForUse;
      _8_IsAvailableForUse = _L317_IfBlock1;
      _4_IsAvailableForUse = _8_IsAvailableForUse;
    }
  }
  Loc_Normal_Available = _L21;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
    _L313_IfBlock1 = Loc_Normal_Available;
    _6_IsAvailableForUse = _L313_IfBlock1;
    IsAvailableForUse = _6_IsAvailableForUse;
  }
  else {
    IsAvailableForUse = _4_IsAvailableForUse;
  }
  Loc_Conditionnal_Available = _L22;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L3_IfBlock1 = Loc_Conditionnal_Available;
    _2_IsAvailableForUse = _L3_IfBlock1;
    outC->IsAvailableForUse = _2_IsAvailableForUse;
  }
  else {
    outC->IsAvailableForUse = IsAvailableForUse;
  }
  _L30 = _L27.receivedL2L3MA_track;
  noname = _L30;
  _L31 = _L27.receivedL1MA_track;
  _11_noname = _L31;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SelectLevelTransition_LevelTransitionSelection.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

