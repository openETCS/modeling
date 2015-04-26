/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_SBI1 */
void d_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_SBI1::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::d_SBI1::V */ V_internal_real_Type_SDM_Types_Pkg V,
  /* TargetLimits_Pkg::d_SBI1::T_bs1 */ T_internal_real_Type_SDM_Types_Pkg T_bs1,
  /* TargetLimits_Pkg::d_SBI1::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_SBI1::D_SBD1 */ L_internal_real_Type_SDM_Types_Pkg *D_SBD1)
{
  /* TargetLimits_Pkg::d_SBI1::_L5 */ L_internal_real_Type_SDM_Types_Pkg _L5;
  
  /* 1 */ getLocationOnCurve_CalcBrakingCurves_types(SBDcurve, V, valid, &_L5);
  *D_SBD1 = _L5 - V * T_bs1;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** d_SBI1_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

