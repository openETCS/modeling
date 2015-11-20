/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_
#define _CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::InterpolatedDistanceToTarget */ InterpolatedDistanceToTarget;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else */ _1_else_clock_IfBlock1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else::then::_L1 */ _L12_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else::else::_L10 */ _L10_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else::else::_L9 */ _L9_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else::else::_L8 */ _L83_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else::else::_L7 */ _L7_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else::else::_L6 */ _L6_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else::else::_L2 */ _L24_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else::else::_L3 */ _L35_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else::else::_L5 */ _L56_IfBlock1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::then::_L5 */ _L5_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::then::_L4 */ _L4_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::then::_L2 */ _L2_IfBlock1;
  kcg_real /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
} outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget */
extern void CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::DistanceToTarget */ kcg_real DistanceToTarget,
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

extern void CalculateDistanceToTarget_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CalculateDistanceToTarget_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

