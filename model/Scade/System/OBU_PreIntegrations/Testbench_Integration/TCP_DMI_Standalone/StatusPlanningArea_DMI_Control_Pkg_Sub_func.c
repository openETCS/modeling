/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StatusPlanningArea_DMI_Control_Pkg_Sub_func.h"

void StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::StatusPlanningArea */
void StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::ModeIndex */kcg_int ModeIndex,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::Hide */kcg_bool Hide,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::show */kcg_bool show,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::MousePressed */kcg_bool MousePressed,
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC)
{
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ SSM_ST_PlanningAreaStatus PlanningAreaStatus_state_sel;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ SSM_ST_PlanningAreaStatus PlanningAreaStatus_state_act;
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L4 */ kcg_bool _L4;
  
  _L4 = ModeIndex == cMODE_Full_Supervision_DMI_Control_Pkg;
  if (outC->init) {
    outC->init = kcg_false;
    PlanningAreaStatus_state_sel = SSM_st_NotVisible_PlanningAreaStatus;
  }
  else {
    PlanningAreaStatus_state_sel = outC->PlanningAreaStatus_state_nxt;
  }
  switch (PlanningAreaStatus_state_sel) {
    case SSM_st_NotVisible_PlanningAreaStatus :
      if (_L4) {
        PlanningAreaStatus_state_act = SSM_st_Visible_PlanningAreaStatus;
      }
      else {
        PlanningAreaStatus_state_act = SSM_st_NotVisible_PlanningAreaStatus;
      }
      break;
    case SSM_st_Visible_PlanningAreaStatus :
      if (_L4) {
        PlanningAreaStatus_state_act = SSM_st_Visible_PlanningAreaStatus;
      }
      else {
        PlanningAreaStatus_state_act = SSM_st_NotVisible_PlanningAreaStatus;
      }
      break;
    
  }
  switch (PlanningAreaStatus_state_act) {
    case SSM_st_NotVisible_PlanningAreaStatus :
      outC->Visibility = kcg_false;
      outC->PlanningAreaStatus_state_nxt = SSM_st_NotVisible_PlanningAreaStatus;
      break;
    case SSM_st_Visible_PlanningAreaStatus :
      outC->Visibility = kcg_true;
      outC->PlanningAreaStatus_state_nxt = SSM_st_Visible_PlanningAreaStatus;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** StatusPlanningArea_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

