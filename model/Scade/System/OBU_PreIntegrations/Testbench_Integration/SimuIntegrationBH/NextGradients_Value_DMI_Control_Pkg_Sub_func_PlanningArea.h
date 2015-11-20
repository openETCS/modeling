/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::GradientsValue */ GradientsValue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L26 */ _L26;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L25 */ _L25;
  array_real_32 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L24 */ _L24;
  array_real_12 /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L23 */ _L23;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L22 */ _L22;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L21 */ _L21;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L20 */ _L20;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L19 */ _L19;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L18 */ _L18;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L17 */ _L17;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L16 */ _L16;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L15 */ _L15;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L14 */ _L14;
  kcg_real /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::_L13 */ _L13;
} outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value */
extern void NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::GradientsFirstIndex */ kcg_int GradientsFirstIndex,
  /* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value::inGradientsValue */ array_real_32 *inGradientsValue,
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_Value_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_Value_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

