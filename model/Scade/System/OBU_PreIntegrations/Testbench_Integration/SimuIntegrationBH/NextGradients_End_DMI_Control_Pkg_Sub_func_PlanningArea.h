/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::GradientsEnd */ GradientsEnd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L40 */ _L40;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L39 */ _L39;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L38 */ _L38;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L37 */ _L37;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L36 */ _L36;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L35 */ _L35;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L34 */ _L34;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L33 */ _L33;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L32 */ _L32;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L31 */ _L31;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L30 */ _L30;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L29 */ _L29;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L28 */ _L28;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::_L27 */ _L27;
} outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End */
extern void NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::GradientsFirstIndex */ kcg_int GradientsFirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End::inGradientsEnd */ array_real_32 *inGradientsEnd,
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_End_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_End_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

