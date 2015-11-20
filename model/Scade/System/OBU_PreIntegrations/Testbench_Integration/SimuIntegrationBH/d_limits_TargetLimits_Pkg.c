/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_limits_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_limits */
void d_limits_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_limits::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::d_limits::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::d_limits::SBI2valid */ kcg_bool SBI2valid,
  /* TargetLimits_Pkg::d_limits::D_SBI2_V_est */ L_internal_real_Type_SDM_Types_Pkg D_SBI2_V_est,
  /* TargetLimits_Pkg::d_limits::D_estfront */ L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* TargetLimits_Pkg::d_limits::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::d_limits::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_limits::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::d_limits::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_limits::D_I */ L_internal_real_Type_SDM_Types_Pkg *D_I,
  /* TargetLimits_Pkg::d_limits::D_P */ L_internal_real_Type_SDM_Types_Pkg *D_P,
  /* TargetLimits_Pkg::d_limits::D_W */ L_internal_real_Type_SDM_Types_Pkg *D_W,
  /* TargetLimits_Pkg::d_limits::D_FLOI */ L_internal_real_Type_SDM_Types_Pkg *D_FLOI,
  /* TargetLimits_Pkg::d_limits::FLOIisSBI1 */ kcg_bool *FLOIisSBI1)
{
  /* TargetLimits_Pkg::d_limits */
  static L_internal_real_Type_SDM_Types_Pkg op_call;
  /* TargetLimits_Pkg::d_limits */
  static kcg_bool _1_op_call;
  /* TargetLimits_Pkg::d_limits */
  static kcg_bool ck_every;
  static kcg_bool noname;
  static kcg_bool _2_noname;
  /* TargetLimits_Pkg::d_limits::_L2 */
  static L_internal_real_Type_SDM_Types_Pkg _L2;
  /* TargetLimits_Pkg::d_limits::_L3 */
  static L_internal_real_Type_SDM_Types_Pkg _L3;
  /* TargetLimits_Pkg::d_limits::_L4 */
  static L_internal_real_Type_SDM_Types_Pkg _L4;
  /* TargetLimits_Pkg::d_limits::_L6 */
  static kcg_real _L6;
  /* TargetLimits_Pkg::d_limits::_L7 */
  static kcg_real _L7;
  /* TargetLimits_Pkg::d_limits::_L8 */
  static L_internal_real_Type_SDM_Types_Pkg _L8;
  /* TargetLimits_Pkg::d_limits::_L10 */
  static L_internal_real_Type_SDM_Types_Pkg _L10;
  /* TargetLimits_Pkg::d_limits::_L11 */
  static kcg_bool _L11;
  /* TargetLimits_Pkg::d_limits::_L12 */
  static kcg_real _L12;
  /* TargetLimits_Pkg::d_limits::_L13 */
  static T_internal_real_Type_SDM_Types_Pkg _L13;
  /* TargetLimits_Pkg::d_limits::_L14 */
  static kcg_real _L14;
  /* TargetLimits_Pkg::d_limits::_L15 */
  static V_internal_real_Type_SDM_Types_Pkg _L15;
  /* TargetLimits_Pkg::d_limits::_L16 */
  static T_internal_real_Type_SDM_Types_Pkg _L16;
  /* TargetLimits_Pkg::d_limits::_L17 */
  static kcg_real _L17;
  /* TargetLimits_Pkg::d_limits::_L18 */
  static kcg_real _L18;
  /* TargetLimits_Pkg::d_limits::_L19 */
  static kcg_real _L19;
  /* TargetLimits_Pkg::d_limits::_L20 */
  static kcg_real _L20;
  /* TargetLimits_Pkg::d_limits::_L26 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L26;
  /* TargetLimits_Pkg::d_limits::_L27 */
  static kcg_bool _L27;
  /* TargetLimits_Pkg::d_limits::_L28 */
  static kcg_bool _L28;
  /* TargetLimits_Pkg::d_limits::_L29 */
  static L_internal_real_Type_SDM_Types_Pkg _L29;
  /* TargetLimits_Pkg::d_limits::_L30 */
  static V_internal_real_Type_SDM_Types_Pkg _L30;
  /* TargetLimits_Pkg::d_limits::_L31 */
  static kcg_bool _L31;
  /* TargetLimits_Pkg::d_limits::_L33 */
  static kcg_bool _L33;
  /* TargetLimits_Pkg::d_limits::_L34 */
  static V_internal_real_Type_SDM_Types_Pkg _L34;
  /* TargetLimits_Pkg::d_limits::_L36 */
  static kcg_bool _L36;
  /* TargetLimits_Pkg::d_limits::_L38 */
  static kcg_real _L38;
  /* TargetLimits_Pkg::d_limits::_L37 */
  static kcg_bool _L37;
  /* TargetLimits_Pkg::d_limits::_L40 */
  static kcg_bool _L40;
  /* TargetLimits_Pkg::d_limits::_L41 */
  static L_internal_real_Type_SDM_Types_Pkg _L41;
  /* TargetLimits_Pkg::d_limits::_L42 */
  static T_trac_t_TargetLimits_Pkg _L42;
  /* TargetLimits_Pkg::d_limits::_L43 */
  static V_internal_real_Type_SDM_Types_Pkg _L43;
  /* TargetLimits_Pkg::d_limits::_L44 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L44;
  /* TargetLimits_Pkg::d_limits::_L39 */
  static T_internal_real_Type_SDM_Types_Pkg _L39;
  /* TargetLimits_Pkg::d_limits::_L25 */
  static T_trac_t_TargetLimits_Pkg _L25;
  
  _L27 = guiCurveEnabled;
  ck_every = _L27;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L26, GUIcurve);
  _L30 = V_est;
  /* ck_d_limits */ if (ck_every) {
    /* 1 */
    getLocationOnCurve_CalcBrakingCurves_types(
      &_L26,
      _L30,
      &_1_op_call,
      &op_call);
  }
  _L2 = D_estfront;
  _L3 = D_SBI2_V_est;
  _L4 = D_maxsafefront;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L44, SBDcurve);
  _L43 = V_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L42, T);
  /* 1 */ d_SBI1_TargetLimits_Pkg(&_L44, _L43, &_L42, &_L40, &_L41);
  _L6 = _L41 - _L2;
  _L7 = _L3 - _L4;
  _L36 = SBI2valid;
  _L11 = /* 2 */ isLEValid_TargetLimits_Pkg(_L40, _L6, _L36, _L7);
  _L10 = D_SBI2_V_est;
  /* 1 */ if (_L11) {
    _L8 = _L41;
  }
  else {
    _L8 = _L10;
  }
  _L13 = T_warning_SDM_Types_Pkg;
  _L15 = V_est;
  _L12 = _L13 * _L15;
  _L16 = T_driver_SDM_Types_Pkg;
  _L14 = _L15 * _L16;
  _L17 = _L8 - _L12;
  _L18 = _L8 - _L14;
  _L33 = kcg_true;
  /* ck_d_limits */ if (ck_every) {
    _L28 = _1_op_call;
    _L29 = op_call;
  }
  else {
    _L28 = kcg_false;
    _L29 = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(_L33, _L18, _L28, _L29, &_L31, &_L37, &_L38);
  _L34 = V_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L25, T);
  _L39 = _L25.indication;
  _L20 = _L34 * _L39;
  _L19 = _L38 - _L20;
  *D_FLOI = _L8;
  *D_W = _L17;
  *D_P = _L38;
  *D_I = _L19;
  *FLOIisSBI1 = _L11;
  noname = _L31;
  _2_noname = _L37;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_limits_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

