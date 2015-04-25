/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _d_P_target_TargetLimits_Pkg_H_
#define _d_P_target_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::d_P_target */
extern void d_P_target_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_P_target::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_P_target::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::d_P_target::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::d_P_target::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::d_P_target::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::d_P_target::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_P_target::D_P_target */ L_internal_real_Type_SDM_Types_Pkg *D_P_target);

#endif /* _d_P_target_TargetLimits_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** d_P_target_TargetLimits_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

