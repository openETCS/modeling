/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::GradientsStart */ GradientsStart;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L12 */ _L12;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L11 */ _L11;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L10 */ _L10;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L9 */ _L9;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L8 */ _L8;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L7 */ _L7;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L6 */ _L6;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L5 */ _L5;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L4 */ _L4;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L3 */ _L3;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L2 */ _L2;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L1 */ _L1;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L14 */ _L14;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::_L13 */ _L13;
} outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start */
extern void NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::GradientsFirstIndex */ kcg_int GradientsFirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start::inGradientsStart */ array_real_32 *inGradientsStart,
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_Start_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_Start_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

