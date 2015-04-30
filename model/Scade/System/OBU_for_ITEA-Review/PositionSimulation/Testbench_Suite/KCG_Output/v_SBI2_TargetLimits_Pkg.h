/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _v_SBI2_TargetLimits_Pkg_H_
#define _v_SBI2_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::v_SBI2 */
extern void v_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI2::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_SBI2::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI2::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_SBI2::V_bec */ V_internal_real_Type_SDM_Types_Pkg V_bec,
  /* TargetLimits_Pkg::v_SBI2::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::v_SBI2::D_bec */ L_internal_real_Type_SDM_Types_Pkg D_bec,
  /* TargetLimits_Pkg::v_SBI2::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::v_SBI2::V_SBI1 */ V_internal_real_Type_SDM_Types_Pkg *V_SBI1,
  /* TargetLimits_Pkg::v_SBI2::valid */ kcg_bool *valid);

#endif /* _v_SBI2_TargetLimits_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** v_SBI2_TargetLimits_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

