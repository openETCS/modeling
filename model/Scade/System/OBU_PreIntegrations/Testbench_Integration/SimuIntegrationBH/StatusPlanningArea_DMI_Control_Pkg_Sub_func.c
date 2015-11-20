/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StatusPlanningArea_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void StatusPlanningArea_init_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = 0;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = 0;
  outC->HidingState = kcg_true;
  outC->ShowingState = kcg_true;
  outC->PlanningAreaStatus_fired = SSM_TR_no_trans_PlanningAreaStatus;
  outC->PlanningAreaStatus_fired_strong = SSM_TR_no_trans_PlanningAreaStatus;
  outC->PlanningAreaStatus_state_act = SSM_st_NotVisible_PlanningAreaStatus;
  outC->PlanningAreaStatus_state_sel = SSM_st_NotVisible_PlanningAreaStatus;
  outC->_L2_PlanningAreaStatus_Visible = kcg_true;
  outC->_L2_PlanningAreaStatus_NotVisible = kcg_true;
  outC->init = kcg_true;
  outC->PlanningAreaStatus_reset_nxt = kcg_true;
  outC->PlanningAreaStatus_reset_act = kcg_true;
  outC->PlanningAreaStatus_state_nxt = SSM_st_NotVisible_PlanningAreaStatus;
  outC->Visibility = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::StatusPlanningArea */
void StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::ModeIndex */ kcg_int ModeIndex,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::Hide */ kcg_bool Hide,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::show */ kcg_bool show,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::MousePressed */ kcg_bool MousePressed,
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC)
{
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static SSM_TR_PlanningAreaStatus _4_PlanningAreaStatus_fired;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static kcg_bool _3_PlanningAreaStatus_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static SSM_ST_PlanningAreaStatus _2_PlanningAreaStatus_state_nxt;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::Visibility */
  static kcg_bool _1_Visibility;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static SSM_TR_PlanningAreaStatus PlanningAreaStatus_fired;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static kcg_bool PlanningAreaStatus_reset_nxt;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static SSM_ST_PlanningAreaStatus PlanningAreaStatus_state_nxt;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::Visibility */
  static kcg_bool Visibility;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static SSM_TR_PlanningAreaStatus _7_PlanningAreaStatus_fired_strong;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static kcg_bool _6_PlanningAreaStatus_reset_act;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static SSM_ST_PlanningAreaStatus _5_PlanningAreaStatus_state_act;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus::NotVisible */
  static kcg_bool br_1_guard_PlanningAreaStatus_NotVisible;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static SSM_TR_PlanningAreaStatus PlanningAreaStatus_fired_strong;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static kcg_bool PlanningAreaStatus_reset_act;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static SSM_ST_PlanningAreaStatus PlanningAreaStatus_state_act;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus::Visible */
  static kcg_bool br_1_guard_PlanningAreaStatus_Visible;
  static kcg_bool noname;
  static kcg_bool _8_noname;
  static kcg_bool _9_noname;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static kcg_bool PlanningAreaStatus_reset_sel;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
  static kcg_bool PlanningAreaStatus_reset_prv;
  
  /* init_PlanningAreaStatus */ if (outC->init) {
    outC->PlanningAreaStatus_state_sel = SSM_st_NotVisible_PlanningAreaStatus;
  }
  else {
    outC->PlanningAreaStatus_state_sel = outC->PlanningAreaStatus_state_nxt;
  }
  /* init_PlanningAreaStatus */ if (outC->init) {
    PlanningAreaStatus_reset_sel = kcg_false;
  }
  else {
    PlanningAreaStatus_reset_sel = outC->PlanningAreaStatus_reset_nxt;
  }
  /* init_PlanningAreaStatus */ if (outC->init) {
    PlanningAreaStatus_reset_prv = kcg_false;
  }
  else {
    PlanningAreaStatus_reset_prv = outC->PlanningAreaStatus_reset_act;
  }
  outC->_L12 = kcg_false;
  outC->_L13 = kcg_true;
  outC->_L9 = outC->_L12 & outC->_L13;
  outC->_L1 = ModeIndex;
  outC->_L5 = cMODE_Full_Supervision_DMI_Control_Pkg;
  outC->_L4 = outC->_L1 == outC->_L5;
  outC->_L11 = !outC->_L4;
  outC->_L10 = outC->_L9 | outC->_L11;
  outC->HidingState = outC->_L10;
  /* sel_PlanningAreaStatus */ switch (outC->PlanningAreaStatus_state_sel) {
    case SSM_st_Visible_PlanningAreaStatus :
      br_1_guard_PlanningAreaStatus_Visible = outC->HidingState;
      if (br_1_guard_PlanningAreaStatus_Visible) {
        PlanningAreaStatus_state_act = SSM_st_NotVisible_PlanningAreaStatus;
      }
      else {
        PlanningAreaStatus_state_act = SSM_st_Visible_PlanningAreaStatus;
      }
      break;
    
  }
  outC->_L7 = outC->_L4 & outC->_L13 & outC->_L13;
  outC->ShowingState = outC->_L7;
  /* sel_PlanningAreaStatus */ switch (outC->PlanningAreaStatus_state_sel) {
    case SSM_st_NotVisible_PlanningAreaStatus :
      br_1_guard_PlanningAreaStatus_NotVisible = outC->ShowingState;
      if (br_1_guard_PlanningAreaStatus_NotVisible) {
        _5_PlanningAreaStatus_state_act = SSM_st_Visible_PlanningAreaStatus;
      }
      else {
        _5_PlanningAreaStatus_state_act = SSM_st_NotVisible_PlanningAreaStatus;
      }
      outC->PlanningAreaStatus_state_act = _5_PlanningAreaStatus_state_act;
      _6_PlanningAreaStatus_reset_act =
        br_1_guard_PlanningAreaStatus_NotVisible;
      outC->PlanningAreaStatus_reset_act = _6_PlanningAreaStatus_reset_act;
      if (br_1_guard_PlanningAreaStatus_NotVisible) {
        _7_PlanningAreaStatus_fired_strong =
          SSM_TR_NotVisible_1_PlanningAreaStatus;
      }
      else {
        _7_PlanningAreaStatus_fired_strong = SSM_TR_no_trans_PlanningAreaStatus;
      }
      outC->PlanningAreaStatus_fired_strong =
        _7_PlanningAreaStatus_fired_strong;
      break;
    case SSM_st_Visible_PlanningAreaStatus :
      outC->PlanningAreaStatus_state_act = PlanningAreaStatus_state_act;
      PlanningAreaStatus_reset_act = br_1_guard_PlanningAreaStatus_Visible;
      outC->PlanningAreaStatus_reset_act = PlanningAreaStatus_reset_act;
      if (br_1_guard_PlanningAreaStatus_Visible) {
        PlanningAreaStatus_fired_strong = SSM_TR_Visible_1_PlanningAreaStatus;
      }
      else {
        PlanningAreaStatus_fired_strong = SSM_TR_no_trans_PlanningAreaStatus;
      }
      outC->PlanningAreaStatus_fired_strong = PlanningAreaStatus_fired_strong;
      break;
    
  }
  /* act_PlanningAreaStatus */ switch (outC->PlanningAreaStatus_state_act) {
    case SSM_st_NotVisible_PlanningAreaStatus :
      outC->_L2_PlanningAreaStatus_NotVisible = kcg_false;
      _1_Visibility = outC->_L2_PlanningAreaStatus_NotVisible;
      outC->Visibility = _1_Visibility;
      _2_PlanningAreaStatus_state_nxt = SSM_st_NotVisible_PlanningAreaStatus;
      outC->PlanningAreaStatus_state_nxt = _2_PlanningAreaStatus_state_nxt;
      _3_PlanningAreaStatus_reset_nxt = kcg_false;
      outC->PlanningAreaStatus_reset_nxt = _3_PlanningAreaStatus_reset_nxt;
      _4_PlanningAreaStatus_fired = outC->PlanningAreaStatus_fired_strong;
      outC->PlanningAreaStatus_fired = _4_PlanningAreaStatus_fired;
      break;
    case SSM_st_Visible_PlanningAreaStatus :
      outC->_L2_PlanningAreaStatus_Visible = kcg_true;
      Visibility = outC->_L2_PlanningAreaStatus_Visible;
      outC->Visibility = Visibility;
      PlanningAreaStatus_state_nxt = SSM_st_Visible_PlanningAreaStatus;
      outC->PlanningAreaStatus_state_nxt = PlanningAreaStatus_state_nxt;
      PlanningAreaStatus_reset_nxt = kcg_false;
      outC->PlanningAreaStatus_reset_nxt = PlanningAreaStatus_reset_nxt;
      PlanningAreaStatus_fired = outC->PlanningAreaStatus_fired_strong;
      outC->PlanningAreaStatus_fired = PlanningAreaStatus_fired;
      break;
    
  }
  outC->_L2 = Hide;
  outC->_L3 = show;
  outC->_L6 = MousePressed;
  noname = outC->_L2;
  _8_noname = outC->_L3;
  _9_noname = outC->_L6;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** StatusPlanningArea_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

