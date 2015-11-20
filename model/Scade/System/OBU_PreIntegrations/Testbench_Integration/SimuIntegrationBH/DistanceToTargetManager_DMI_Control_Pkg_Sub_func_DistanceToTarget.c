/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

#ifndef KCG_USER_DEFINED_INIT
void DistanceToTargetManager_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->_L23 = 0.0;
  outC->_L22 = 0.0;
  outC->_L20.valid = kcg_true;
  outC->_L20.system_clock = 0;
  outC->_L20.v_train = 0;
  outC->_L20.location_front_train = 0;
  outC->_L20.location_brake_target = 0;
  outC->_L20.v_target = 0;
  outC->_L20.v_permitted = 0;
  outC->_L20.v_release = 0;
  outC->_L20.location_brake_curve_starting_point = 0;
  outC->_L20.v_intervention = 0;
  outC->_L20.mode = M_MODE_Full_Supervision;
  outC->_L20.level.level = M_LEVEL_Level_0;
  outC->_L20.level.nid_stm = 0;
  outC->_L20.nid_c = 0;
  outC->_L20.nid_c_valid = kcg_true;
  outC->_L20.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L20.sup_status = CSM_DMI_Types_Pkg;
  outC->_L20.location_LOA = 0;
  outC->_L20.v_LOA = 0;
  outC->_L20.location_KP_Balise_Track = 0;
  outC->_L20.distance_KP_Balise = 0;
  outC->_L20.distance_to_TSA = 0;
  outC->_L20.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L20.distanceIndicationPoint = 0;
  outC->_L21 = kcg_true;
  outC->_L11 = 0.0;
  outC->_L10 = 0;
  outC->_L9.valid = kcg_true;
  outC->_L9.system_clock = 0;
  outC->_L9.v_train = 0;
  outC->_L9.location_front_train = 0;
  outC->_L9.location_brake_target = 0;
  outC->_L9.v_target = 0;
  outC->_L9.v_permitted = 0;
  outC->_L9.v_release = 0;
  outC->_L9.location_brake_curve_starting_point = 0;
  outC->_L9.v_intervention = 0;
  outC->_L9.mode = M_MODE_Full_Supervision;
  outC->_L9.level.level = M_LEVEL_Level_0;
  outC->_L9.level.nid_stm = 0;
  outC->_L9.nid_c = 0;
  outC->_L9.nid_c_valid = kcg_true;
  outC->_L9.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L9.sup_status = CSM_DMI_Types_Pkg;
  outC->_L9.location_LOA = 0;
  outC->_L9.v_LOA = 0;
  outC->_L9.location_KP_Balise_Track = 0;
  outC->_L9.distance_KP_Balise = 0;
  outC->_L9.distance_to_TSA = 0;
  outC->_L9.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L9.distanceIndicationPoint = 0;
  outC->_L8 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.system_clock = 0;
  outC->_L7.v_train = 0;
  outC->_L7.location_front_train = 0;
  outC->_L7.location_brake_target = 0;
  outC->_L7.v_target = 0;
  outC->_L7.v_permitted = 0;
  outC->_L7.v_release = 0;
  outC->_L7.location_brake_curve_starting_point = 0;
  outC->_L7.v_intervention = 0;
  outC->_L7.mode = M_MODE_Full_Supervision;
  outC->_L7.level.level = M_LEVEL_Level_0;
  outC->_L7.level.nid_stm = 0;
  outC->_L7.nid_c = 0;
  outC->_L7.nid_c_valid = kcg_true;
  outC->_L7.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L7.sup_status = CSM_DMI_Types_Pkg;
  outC->_L7.location_LOA = 0;
  outC->_L7.v_LOA = 0;
  outC->_L7.location_KP_Balise_Track = 0;
  outC->_L7.distance_KP_Balise = 0;
  outC->_L7.distance_to_TSA = 0;
  outC->_L7.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L7.distanceIndicationPoint = 0;
  outC->ConditionDistanceToTarget = kcg_true;
  outC->localDistanceToTarget = 0.0;
  outC->ConditionTargetBar = kcg_true;
  outC->DistanceToTargetA2IfBlock_clock = kcg_true;
  outC->_L5_DistanceToTargetBarIfBlock = kcg_true;
  outC->_L2_DistanceToTargetBarIfBlock = 0.0;
  outC->_L6_DistanceToTargetBarIfBlock = kcg_true;
  outC->_L15_DistanceToTargetBarIfBlock = 0.0;
  outC->_L13_DistanceToTargetA2IfBlock = kcg_true;
  outC->_L1_DistanceToTargetA2IfBlock = 0.0;
  outC->_L2_DistanceToTargetA2IfBlock = kcg_true;
  outC->DistanceToTargetBarIfBlock_clock = kcg_true;
  outC->_2_ck_every = kcg_true;
  outC->ck_every = kcg_true;
  outC->init = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L6 = kcg_true;
  outC->DistanceToTargetVisibilityDigital_toDisplay = kcg_true;
  outC->DistanceToTargetBarVisibility_toDisplay = kcg_true;
  outC->InterpolatedDistanceToTarget_toDisplay = 0.0;
  outC->DistanceToTarget_toDisplay = 0.0;
  /* 1 */
  CalculateDistanceToTarget_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->_1_Context_1);
  /* 1 */
  ConditionDistanceToTargetBar_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_1);
  /* 2 */
  ConditionDistanceToTargetDigital_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


void DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  outC->init = kcg_true;
  /* 1 */
  CalculateDistanceToTarget_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->_1_Context_1);
  /* 1 */
  ConditionDistanceToTargetBar_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_1);
  /* 2 */
  ConditionDistanceToTargetDigital_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
    &outC->Context_2);
}

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */
void DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC)
{
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */
  static kcg_bool tmp1;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */
  static kcg_bool tmp;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */
  static kcg_bool _2_op_call;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager */
  static kcg_bool op_call;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetVisibilityDigital_toDisplay */
  static kcg_bool _4_DistanceToTargetVisibilityDigital_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTarget_toDisplay */
  static kcg_real _3_DistanceToTarget_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetVisibilityDigital_toDisplay */
  static kcg_bool DistanceToTargetVisibilityDigital_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTarget_toDisplay */
  static kcg_real DistanceToTarget_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetBarVisibility_toDisplay */
  static kcg_bool _6_DistanceToTargetBarVisibility_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::InterpolatedDistanceToTarget_toDisplay */
  static kcg_real _5_InterpolatedDistanceToTarget_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetBarVisibility_toDisplay */
  static kcg_bool DistanceToTargetBarVisibility_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::InterpolatedDistanceToTarget_toDisplay */
  static kcg_real InterpolatedDistanceToTarget_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetVisibilityDigital_toDisplay */
  static kcg_bool last_DistanceToTargetVisibilityDigital_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTargetBarVisibility_toDisplay */
  static kcg_bool last_DistanceToTargetBarVisibility_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::InterpolatedDistanceToTarget_toDisplay */
  static kcg_real last_InterpolatedDistanceToTarget_toDisplay;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager::DistanceToTarget_toDisplay */
  static kcg_real last_DistanceToTarget_toDisplay;
  
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L20, DMI_dynamic);
  outC->_L21 = outC->_L20.valid;
  outC->ck_every = outC->_L21;
  /* ck_DistanceToTargetManager */ if (outC->ck_every) {
    /* 2 */
    ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget(
      &outC->_L20,
      &outC->Context_2);
    _2_op_call = outC->Context_2.Condition;
  }
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L7, DMI_dynamic);
  outC->_L8 = outC->_L7.valid;
  outC->_2_ck_every = outC->_L8;
  /* ck_DistanceToTargetManager */ if (outC->_2_ck_every) {
    /* 1 */
    ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget(
      &outC->_L7,
      &outC->Context_1);
    op_call = outC->Context_1.Condition;
    outC->_L6 = op_call;
  }
  else {
    if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->_L6;
    }
    outC->_L6 = tmp1;
  }
  outC->ConditionTargetBar = outC->_L6;
  outC->DistanceToTargetBarIfBlock_clock = outC->ConditionTargetBar;
  /* last_init_ck_InterpolatedDistanceToTarget_toDisplay */ if (outC->init) {
    last_InterpolatedDistanceToTarget_toDisplay = 0.0;
  }
  else {
    last_InterpolatedDistanceToTarget_toDisplay =
      outC->InterpolatedDistanceToTarget_toDisplay;
  }
  /* ck_DistanceToTargetBarIfBlock */ if (outC->DistanceToTargetBarIfBlock_clock) {
  }
  else {
    InterpolatedDistanceToTarget_toDisplay =
      last_InterpolatedDistanceToTarget_toDisplay;
  }
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L9, DMI_dynamic);
  outC->_L10 = outC->_L9.location_brake_target;
  outC->_L11 = (kcg_real) outC->_L10;
  outC->_L23 = 100.0;
  outC->_L22 = outC->_L11 / outC->_L23;
  outC->localDistanceToTarget = outC->_L22;
  /* ck_DistanceToTargetBarIfBlock */ if (outC->DistanceToTargetBarIfBlock_clock) {
    outC->_L15_DistanceToTargetBarIfBlock = outC->localDistanceToTarget;
    /* 1 */
    CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
      outC->_L15_DistanceToTargetBarIfBlock,
      &outC->_1_Context_1);
    outC->_L2_DistanceToTargetBarIfBlock =
      outC->_1_Context_1.InterpolatedDistanceToTarget;
    _5_InterpolatedDistanceToTarget_toDisplay =
      outC->_L2_DistanceToTargetBarIfBlock;
    outC->InterpolatedDistanceToTarget_toDisplay =
      _5_InterpolatedDistanceToTarget_toDisplay;
  }
  else {
    outC->InterpolatedDistanceToTarget_toDisplay =
      InterpolatedDistanceToTarget_toDisplay;
  }
  /* last_init_ck_DistanceToTargetBarVisibility_toDisplay */ if (outC->init) {
    last_DistanceToTargetBarVisibility_toDisplay = kcg_false;
  }
  else {
    last_DistanceToTargetBarVisibility_toDisplay =
      outC->DistanceToTargetBarVisibility_toDisplay;
  }
  /* ck_DistanceToTargetBarIfBlock */ if (outC->DistanceToTargetBarIfBlock_clock) {
    outC->_L6_DistanceToTargetBarIfBlock = kcg_true;
    _6_DistanceToTargetBarVisibility_toDisplay =
      outC->_L6_DistanceToTargetBarIfBlock;
    outC->DistanceToTargetBarVisibility_toDisplay =
      _6_DistanceToTargetBarVisibility_toDisplay;
  }
  else {
    outC->_L5_DistanceToTargetBarIfBlock = kcg_false;
    DistanceToTargetBarVisibility_toDisplay =
      outC->_L5_DistanceToTargetBarIfBlock;
    outC->DistanceToTargetBarVisibility_toDisplay =
      DistanceToTargetBarVisibility_toDisplay;
  }
  /* ck_DistanceToTargetManager */ if (outC->ck_every) {
    outC->_L19 = _2_op_call;
  }
  else {
    if (outC->init) {
      tmp = kcg_false;
    }
    else {
      tmp = outC->_L19;
    }
    outC->_L19 = tmp;
  }
  outC->ConditionDistanceToTarget = outC->_L19;
  outC->DistanceToTargetA2IfBlock_clock = outC->ConditionDistanceToTarget;
  /* last_init_ck_DistanceToTarget_toDisplay */ if (outC->init) {
    last_DistanceToTarget_toDisplay = 0.0;
  }
  else {
    last_DistanceToTarget_toDisplay = outC->DistanceToTarget_toDisplay;
  }
  /* ck_DistanceToTargetA2IfBlock */ if (outC->DistanceToTargetA2IfBlock_clock) {
    outC->_L1_DistanceToTargetA2IfBlock = outC->localDistanceToTarget;
    _3_DistanceToTarget_toDisplay = outC->_L1_DistanceToTargetA2IfBlock;
    outC->DistanceToTarget_toDisplay = _3_DistanceToTarget_toDisplay;
  }
  else {
    DistanceToTarget_toDisplay = last_DistanceToTarget_toDisplay;
    outC->DistanceToTarget_toDisplay = DistanceToTarget_toDisplay;
  }
  /* last_init_ck_DistanceToTargetVisibilityDigital_toDisplay */ if (outC->init) {
    last_DistanceToTargetVisibilityDigital_toDisplay = kcg_false;
  }
  else {
    last_DistanceToTargetVisibilityDigital_toDisplay =
      outC->DistanceToTargetVisibilityDigital_toDisplay;
  }
  /* ck_DistanceToTargetA2IfBlock */ if (outC->DistanceToTargetA2IfBlock_clock) {
    outC->_L2_DistanceToTargetA2IfBlock = kcg_true;
    _4_DistanceToTargetVisibilityDigital_toDisplay =
      outC->_L2_DistanceToTargetA2IfBlock;
    outC->DistanceToTargetVisibilityDigital_toDisplay =
      _4_DistanceToTargetVisibilityDigital_toDisplay;
  }
  else {
    outC->_L13_DistanceToTargetA2IfBlock = kcg_false;
    DistanceToTargetVisibilityDigital_toDisplay =
      outC->_L13_DistanceToTargetA2IfBlock;
    outC->DistanceToTargetVisibilityDigital_toDisplay =
      DistanceToTargetVisibilityDigital_toDisplay;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

