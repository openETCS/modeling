/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"
#include "NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::GradientsStartDMI */ GradientsStartDMI;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::GradientsEndDMI */ GradientsEndDMI;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::GradientsValueDMI */ GradientsValueDMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea /* 1 */ _3_Context_1;
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea /* 1 */ _2_Context_1;
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea /* 1 */ _1_Context_1;
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea /* 1 */ Context_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::lGradientsFirstIndex */ lGradientsFirstIndex;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L2 */ _L2;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L3 */ _L3;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L6 */ _L6;
  kcg_bool /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L7 */ _L7;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L38 */ _L38;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L39 */ _L39;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L40 */ _L40;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L43 */ _L43;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L44 */ _L44;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L45 */ _L45;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L46 */ _L46;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L47 */ _L47;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L48 */ _L48;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L51 */ _L51;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L13 */ _L13;
  kcg_int /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::_L12 */ _L12;
} outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients */
extern void NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inTrainPosition */ kcg_real inTrainPosition,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsStart */ array_real_32 *inGradientsStart,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsEnd */ array_real_32 *inGradientsEnd,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients::inGradientsValue */ array_real_32 *inGradientsValue,
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

