/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _v_SBI1_TargetLimits_Pkg_H_
#define _v_SBI1_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::v_SBI1 */
extern void v_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI1::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::v_SBI1::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI1::D_estfront */ L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* TargetLimits_Pkg::v_SBI1::D_EOA */ L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::v_SBI1::T_bs1 */ T_internal_real_Type_SDM_Types_Pkg T_bs1,
  /* TargetLimits_Pkg::v_SBI1::V_SBI1 */ V_internal_real_Type_SDM_Types_Pkg *V_SBI1,
  /* TargetLimits_Pkg::v_SBI1::valid */ kcg_bool *valid);

#endif /* _v_SBI1_TargetLimits_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** v_SBI1_TargetLimits_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

