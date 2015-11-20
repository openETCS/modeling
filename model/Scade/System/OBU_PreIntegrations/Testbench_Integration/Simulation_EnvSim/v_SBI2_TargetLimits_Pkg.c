/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI2 */
void v_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI2::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_SBI2::V_est */V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI2::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_SBI2::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::v_SBI2::D_maxsafefront */L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::v_SBI2::t_driver */T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* TargetLimits_Pkg::v_SBI2::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI2::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::v_SBI2::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI2::valid */kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI2::V_SBI2 */V_internal_real_Type_SDM_Types_Pkg *V_SBI2)
{
  static kcg_bool tmp3;
  static V_internal_real_Type_SDM_Types_Pkg tmp2;
  static kcg_bool tmp1;
  static V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::v_SBI2::_L33 */
  static kcg_bool _L33;
  /* TargetLimits_Pkg::v_SBI2::_L49 */
  static kcg_real _L49;
  /* TargetLimits_Pkg::v_SBI2::_L48 */
  static kcg_bool _L48;
  /* TargetLimits_Pkg::v_SBI2::_L47 */
  static kcg_bool _L47;
  
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(EBDcurve, V_target, &_L33, &tmp);
  _L49 = D_maxsafefront + V_est * ((*T).bs2 + t_driver) + (*bec).d;
  if (guiCurveEnabled) {
    /* 3 */
    getLocationOnCurve_CalcBrakingCurves_types(
      GUIcurve,
      V_target,
      &tmp3,
      &tmp2);
  }
  else {
    tmp3 = kcg_false;
    tmp2 = 0.0;
  }
  _L33 = (tmp3 & (tmp2 > D_maxsafefront)) | (tmp > _L49);
  tmp1 = tmp3 & _L33;
  if (tmp1) {
    /* 2 */
    getSpeedOnCurve_CalcBrakingCurves_types(
      GUIcurve,
      D_maxsafefront,
      &tmp3,
      &tmp2);
  }
  else {
    tmp3 = kcg_false;
    tmp2 = 0.0;
  }
  if (_L33) {
    /* 1 */
    getSpeedOnCurve_CalcBrakingCurves_types(EBDcurve, _L49, &tmp1, &tmp);
  }
  else {
    tmp1 = kcg_false;
    tmp = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(
    tmp3,
    tmp2,
    tmp1,
    tmp - ((*bec).v - V_est),
    &_L47,
    &_L48,
    &_L49);
  *valid = !_L33 | _L48;
  if (_L33) {
    *V_SBI2 = _L49;
  }
  else {
    *V_SBI2 = V_target;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** v_SBI2_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

