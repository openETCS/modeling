/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_EBI_non_est */
void d_EBI_non_est_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_EBI_non_est::V */ V_internal_real_Type_SDM_Types_Pkg V,
  /* TargetLimits_Pkg::d_EBI_non_est::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_EBI_non_est::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::d_EBI_non_est::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::d_EBI_non_est::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::d_EBI_non_est::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::d_EBI_non_est::valid */ kcg_bool *valid)
{
  /* TargetLimits_Pkg::d_EBI_non_est::_L4 */ L_internal_real_Type_SDM_Types_Pkg _L4;
  /* TargetLimits_Pkg::d_EBI_non_est::_L6 */ kcg_real _L6;
  
  _L6 = /* 1 */ f_41_TargetLimits_Pkg(V) + V;
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(EBDcurve, _L6, valid, &_L4);
  *D_SBI2 = _L4 - _L6 * (T_Traction + T_berem) - V * T_bs2;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** d_EBI_non_est_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

