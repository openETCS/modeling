/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::outFirstIndexOfNextGradients */ outFirstIndexOfNextGradients;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::AccOut */ AccOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::_L1 */ _L1;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::_L3 */ _L3;
} outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator */
extern void NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::inTrainPosition */ kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator::inGradientsStart */ kcg_real inGradientsStart,
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_Iterator_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_Iterator_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

