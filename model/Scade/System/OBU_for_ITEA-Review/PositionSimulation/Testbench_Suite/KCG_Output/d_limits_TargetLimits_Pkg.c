/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_limits_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_limits */
void d_limits_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_limits::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::d_limits::SBI1valid */ kcg_bool SBI1valid,
  /* TargetLimits_Pkg::d_limits::D_SBI1_V_est */ L_internal_real_Type_SDM_Types_Pkg D_SBI1_V_est,
  /* TargetLimits_Pkg::d_limits::SBI2valid */ kcg_bool SBI2valid,
  /* TargetLimits_Pkg::d_limits::D_SBI2_V_est */ L_internal_real_Type_SDM_Types_Pkg D_SBI2_V_est,
  /* TargetLimits_Pkg::d_limits::D_estfront */ L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* TargetLimits_Pkg::d_limits::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::d_limits::T_bs */ T_internal_real_Type_SDM_Types_Pkg T_bs,
  /* TargetLimits_Pkg::d_limits::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::d_limits::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_limits::D_I */ L_internal_real_Type_SDM_Types_Pkg *D_I,
  /* TargetLimits_Pkg::d_limits::D_P */ L_internal_real_Type_SDM_Types_Pkg *D_P,
  /* TargetLimits_Pkg::d_limits::D_W */ L_internal_real_Type_SDM_Types_Pkg *D_W,
  /* TargetLimits_Pkg::d_limits::D_FLOI */ L_internal_real_Type_SDM_Types_Pkg *D_FLOI,
  /* TargetLimits_Pkg::d_limits::FLOIisSBI1 */ kcg_bool *FLOIisSBI1)
{
  kcg_bool tmp2;
  kcg_bool tmp1;
  kcg_real tmp;
  /* TargetLimits_Pkg::d_limits::_L23 */ kcg_real _L23;
  /* TargetLimits_Pkg::d_limits::_L29 */ L_internal_real_Type_SDM_Types_Pkg _L29;
  
  *FLOIisSBI1 = /* 2 */
    isLEValid_TargetLimits_Pkg(
      SBI1valid,
      D_SBI1_V_est - D_estfront,
      SBI2valid,
      D_SBI2_V_est - D_maxsafefront);
  if (*FLOIisSBI1) {
    *D_FLOI = D_SBI1_V_est;
  }
  else {
    *D_FLOI = D_SBI2_V_est;
  }
  _L23 = *D_FLOI - V_est * T_driver_SDM_Types_Pkg;
  if (guiCurveEnabled) {
    /* 1 */
    getLocationOnCurve_CalcBrakingCurves_types(GUIcurve, V_est, &tmp1, &_L29);
  }
  else {
    tmp1 = kcg_false;
    _L29 = 0.0;
  }
  tmp2 = /* 1 */ isLEValid_TargetLimits_Pkg(kcg_true, _L23, tmp1, _L29);
  if (tmp2) {
    *D_P = _L23;
  }
  else {
    *D_P = _L29;
  }
  _L23 = 0.8 * T_bs;
  if (_L23 >= 5.0) {
    tmp = _L23;
  }
  else {
    tmp = 5.0;
  }
  *D_I = *D_P - V_est * tmp;
  *D_W = *D_FLOI - T_warning_SDM_Types_Pkg * V_est;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** d_limits_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

