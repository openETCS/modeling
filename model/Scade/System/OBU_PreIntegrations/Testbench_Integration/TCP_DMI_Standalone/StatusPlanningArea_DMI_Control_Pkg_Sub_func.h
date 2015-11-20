/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _StatusPlanningArea_DMI_Control_Pkg_Sub_func_H_
#define _StatusPlanningArea_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::Visibility */ Visibility;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_PlanningAreaStatus /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */ PlanningAreaStatus_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::StatusPlanningArea */
extern void StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::ModeIndex */kcg_int ModeIndex,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::Hide */kcg_bool Hide,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::show */kcg_bool show,
  /* DMI_Control_Pkg::Sub_func::StatusPlanningArea::MousePressed */kcg_bool MousePressed,
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC);

extern void StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC);

#endif /* _StatusPlanningArea_DMI_Control_Pkg_Sub_func_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** StatusPlanningArea_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */

