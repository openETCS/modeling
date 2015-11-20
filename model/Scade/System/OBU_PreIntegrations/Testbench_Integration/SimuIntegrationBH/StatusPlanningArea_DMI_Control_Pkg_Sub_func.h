/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _StatusPlanningArea_DMI_Control_Pkg_Sub_func_H_
#define _StatusPlanningArea_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::Visibility */ Visibility;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_PlanningAreaStatus /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ PlanningAreaStatus_state_nxt;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ PlanningAreaStatus_reset_act;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ PlanningAreaStatus_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus::NotVisible::_L2 */ _L2_PlanningAreaStatus_NotVisible;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus::Visible::_L2 */ _L2_PlanningAreaStatus_Visible;
  SSM_ST_PlanningAreaStatus /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ PlanningAreaStatus_state_sel;
  SSM_ST_PlanningAreaStatus /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ PlanningAreaStatus_state_act;
  SSM_TR_PlanningAreaStatus /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ PlanningAreaStatus_fired_strong;
  SSM_TR_PlanningAreaStatus /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ PlanningAreaStatus_fired;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::ShowingState */ ShowingState;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::HidingState */ HidingState;
  kcg_int /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L9 */ _L9;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L10 */ _L10;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L11 */ _L11;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L12 */ _L12;
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::_L13 */ _L13;
} outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::StatusPlanningArea */
extern void StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::ModeIndex */ kcg_int ModeIndex,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::Hide */ kcg_bool Hide,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::show */ kcg_bool show,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::MousePressed */ kcg_bool MousePressed,
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC);

extern void StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void StatusPlanningArea_init_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _StatusPlanningArea_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** StatusPlanningArea_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

