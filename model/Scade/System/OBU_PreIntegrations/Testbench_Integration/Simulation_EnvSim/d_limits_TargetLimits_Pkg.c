/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_limits_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_limits */
void d_limits_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_limits::V_est */V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::d_limits::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::d_limits::SBI2valid */kcg_bool SBI2valid,
  /* TargetLimits_Pkg::d_limits::D_SBI2_V_est */L_internal_real_Type_SDM_Types_Pkg D_SBI2_V_est,
  /* TargetLimits_Pkg::d_limits::D_estfront */L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* TargetLimits_Pkg::d_limits::D_maxsafefront */L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::d_limits::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_limits::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::d_limits::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_limits::D_I */L_internal_real_Type_SDM_Types_Pkg *D_I,
  /* TargetLimits_Pkg::d_limits::D_P */L_internal_real_Type_SDM_Types_Pkg *D_P,
  /* TargetLimits_Pkg::d_limits::D_W */L_internal_real_Type_SDM_Types_Pkg *D_W,
  /* TargetLimits_Pkg::d_limits::D_FLOI */L_internal_real_Type_SDM_Types_Pkg *D_FLOI,
  /* TargetLimits_Pkg::d_limits::FLOIisSBI1 */kcg_bool *FLOIisSBI1)
{
  static kcg_bool tmp1;
  static L_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::d_limits::_L31 */
  static kcg_bool _L31;
  /* TargetLimits_Pkg::d_limits::_L37 */
  static kcg_bool _L37;
  
  /* 1 */ d_SBI1_TargetLimits_Pkg(SBDcurve, V_est, T, &tmp1, &tmp);
  *FLOIisSBI1 = /* 2 */
    isLEValid_TargetLimits_Pkg(
      tmp1,
      tmp - D_estfront,
      SBI2valid,
      D_SBI2_V_est - D_maxsafefront);
  if (*FLOIisSBI1) {
    *D_FLOI = tmp;
  }
  else {
    *D_FLOI = D_SBI2_V_est;
  }
  if (guiCurveEnabled) {
    /* 1 */
    getLocationOnCurve_CalcBrakingCurves_types(GUIcurve, V_est, &tmp1, &tmp);
  }
  else {
    tmp1 = kcg_false;
    tmp = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(
    kcg_true,
    *D_FLOI - V_est * T_driver_SDM_Types_Pkg,
    tmp1,
    tmp,
    &_L31,
    &_L37,
    D_P);
  *D_I = *D_P - V_est * (*T).indication;
  *D_W = *D_FLOI - T_warning_SDM_Types_Pkg * V_est;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** d_limits_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

