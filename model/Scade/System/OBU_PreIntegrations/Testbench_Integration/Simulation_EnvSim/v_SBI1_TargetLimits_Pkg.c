/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI1 */
void v_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI1::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::v_SBI1::V_est */V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI1::D_estfront */L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* TargetLimits_Pkg::v_SBI1::D_EOA */L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::v_SBI1::t_driver */T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* TargetLimits_Pkg::v_SBI1::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI1::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::v_SBI1::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI1::valid */kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI1::V_SBI1 */V_internal_real_Type_SDM_Types_Pkg *V_SBI1)
{
  static kcg_bool tmp3;
  static V_internal_real_Type_SDM_Types_Pkg tmp2;
  static kcg_bool tmp1;
  static V_internal_real_Type_SDM_Types_Pkg tmp;
  static V_internal_real_Type_SDM_Types_Pkg tmp4;
  /* TargetLimits_Pkg::v_SBI1::_L16 */
  static kcg_bool _L16;
  
  tmp4 = D_estfront + (t_driver + (*T).bs1) * V_est;
  _L16 = D_EOA > tmp4;
  if (_L16) {
    /* 1 */
    getSpeedOnCurve_CalcBrakingCurves_types(SBDcurve, tmp4, &tmp1, &tmp);
    tmp3 = tmp1;
    tmp2 = tmp;
  }
  else {
    tmp3 = kcg_false;
    tmp2 = 0.0;
  }
  if (guiCurveEnabled) {
    /* 2 */
    getSpeedOnCurve_CalcBrakingCurves_types(GUIcurve, D_estfront, &tmp1, &tmp);
  }
  else {
    tmp1 = kcg_false;
    tmp = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(tmp3, tmp2, tmp1, tmp, &_L16, valid, V_SBI1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** v_SBI1_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

