/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI2 */
void v_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI2::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_SBI2::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI2::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_SBI2::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::v_SBI2::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::v_SBI2::t_driver */ T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* TargetLimits_Pkg::v_SBI2::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI2::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::v_SBI2::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI2::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI2::V_SBI2 */ V_internal_real_Type_SDM_Types_Pkg *V_SBI2)
{
  /* TargetLimits_Pkg::v_SBI2 */
  static L_internal_real_Type_SDM_Types_Pkg _4_op_call;
  /* TargetLimits_Pkg::v_SBI2 */
  static kcg_bool _5_op_call;
  /* TargetLimits_Pkg::v_SBI2 */
  static V_internal_real_Type_SDM_Types_Pkg _2_op_call;
  /* TargetLimits_Pkg::v_SBI2 */
  static kcg_bool _3_op_call;
  /* TargetLimits_Pkg::v_SBI2 */
  static V_internal_real_Type_SDM_Types_Pkg op_call;
  /* TargetLimits_Pkg::v_SBI2 */
  static kcg_bool _1_op_call;
  /* TargetLimits_Pkg::v_SBI2 */
  static kcg_bool ck_every;
  /* TargetLimits_Pkg::v_SBI2 */
  static kcg_bool _6_ck_every;
  /* TargetLimits_Pkg::v_SBI2 */
  static kcg_bool _7_ck_every;
  static kcg_bool noname;
  static kcg_bool _8_noname;
  /* TargetLimits_Pkg::v_SBI2::_L3 */
  static V_internal_real_Type_SDM_Types_Pkg _L3;
  /* TargetLimits_Pkg::v_SBI2::_L4 */
  static L_internal_real_Type_SDM_Types_Pkg _L4;
  /* TargetLimits_Pkg::v_SBI2::_L5 */
  static kcg_real _L5;
  /* TargetLimits_Pkg::v_SBI2::_L6 */
  static V_internal_real_Type_SDM_Types_Pkg _L6;
  /* TargetLimits_Pkg::v_SBI2::_L7 */
  static T_trac_t_TargetLimits_Pkg _L7;
  /* TargetLimits_Pkg::v_SBI2::_L8 */
  static kcg_real _L8;
  /* TargetLimits_Pkg::v_SBI2::_L11 */
  static kcg_bool _L11;
  /* TargetLimits_Pkg::v_SBI2::_L13 */
  static kcg_real _L13;
  /* TargetLimits_Pkg::v_SBI2::_L14 */
  static V_internal_real_Type_SDM_Types_Pkg _L14;
  /* TargetLimits_Pkg::v_SBI2::_L15 */
  static bec_t_TargetLimits_Pkg _L15;
  /* TargetLimits_Pkg::v_SBI2::_L16 */
  static kcg_real _L16;
  /* TargetLimits_Pkg::v_SBI2::_L17 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L17;
  /* TargetLimits_Pkg::v_SBI2::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* TargetLimits_Pkg::v_SBI2::_L1 */
  static kcg_bool _L1;
  /* TargetLimits_Pkg::v_SBI2::_L18 */
  static kcg_bool _L18;
  /* TargetLimits_Pkg::v_SBI2::_L19 */
  static L_internal_real_Type_SDM_Types_Pkg _L19;
  /* TargetLimits_Pkg::v_SBI2::_L20 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L20;
  /* TargetLimits_Pkg::v_SBI2::_L21 */
  static V_internal_real_Type_SDM_Types_Pkg _L21;
  /* TargetLimits_Pkg::v_SBI2::_L24 */
  static kcg_real _L24;
  /* TargetLimits_Pkg::v_SBI2::_L28 */
  static L_internal_real_Type_SDM_Types_Pkg _L28;
  /* TargetLimits_Pkg::v_SBI2::_L27 */
  static V_internal_real_Type_SDM_Types_Pkg _L27;
  /* TargetLimits_Pkg::v_SBI2::_L29 */
  static T_internal_real_Type_SDM_Types_Pkg _L29;
  /* TargetLimits_Pkg::v_SBI2::_L30 */
  static kcg_real _L30;
  /* TargetLimits_Pkg::v_SBI2::_L32 */
  static T_internal_real_Type_SDM_Types_Pkg _L32;
  /* TargetLimits_Pkg::v_SBI2::_L33 */
  static kcg_bool _L33;
  /* TargetLimits_Pkg::v_SBI2::_L35 */
  static kcg_bool _L35;
  /* TargetLimits_Pkg::v_SBI2::_L36 */
  static L_internal_real_Type_SDM_Types_Pkg _L36;
  /* TargetLimits_Pkg::v_SBI2::_L39 */
  static kcg_bool _L39;
  /* TargetLimits_Pkg::v_SBI2::_L40 */
  static V_internal_real_Type_SDM_Types_Pkg _L40;
  /* TargetLimits_Pkg::v_SBI2::_L41 */
  static kcg_bool _L41;
  /* TargetLimits_Pkg::v_SBI2::_L42 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L42;
  /* TargetLimits_Pkg::v_SBI2::_L43 */
  static L_internal_real_Type_SDM_Types_Pkg _L43;
  /* TargetLimits_Pkg::v_SBI2::_L44 */
  static kcg_bool _L44;
  /* TargetLimits_Pkg::v_SBI2::_L45 */
  static kcg_bool _L45;
  /* TargetLimits_Pkg::v_SBI2::_L49 */
  static kcg_real _L49;
  /* TargetLimits_Pkg::v_SBI2::_L48 */
  static kcg_bool _L48;
  /* TargetLimits_Pkg::v_SBI2::_L47 */
  static kcg_bool _L47;
  /* TargetLimits_Pkg::v_SBI2::_L50 */
  static kcg_bool _L50;
  /* TargetLimits_Pkg::v_SBI2::_L51 */
  static kcg_bool _L51;
  /* TargetLimits_Pkg::v_SBI2::_L54 */
  static kcg_bool _L54;
  /* TargetLimits_Pkg::v_SBI2::_L55 */
  static L_internal_real_Type_SDM_Types_Pkg _L55;
  /* TargetLimits_Pkg::v_SBI2::_L56 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L56;
  /* TargetLimits_Pkg::v_SBI2::_L57 */
  static V_internal_real_Type_SDM_Types_Pkg _L57;
  
  _L41 = guiCurveEnabled;
  ck_every = _L41;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L56, GUIcurve);
  _L57 = V_target;
  /* ck_v_SBI2 */ if (ck_every) {
    /* 3 */
    getLocationOnCurve_CalcBrakingCurves_types(
      &_L56,
      _L57,
      &_5_op_call,
      &_4_op_call);
    _L54 = _5_op_call;
    _L55 = _4_op_call;
  }
  else {
    _L54 = kcg_false;
    _L55 = 0.0;
  }
  _L36 = D_maxsafefront;
  _L35 = _L55 > _L36;
  _L44 = _L54 & _L35;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L20, EBDcurve);
  _L21 = V_target;
  /* 1 */ getLocationOnCurve_CalcBrakingCurves_types(&_L20, _L21, &_L18, &_L19);
  _L4 = D_maxsafefront;
  _L6 = V_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L7, T);
  _L29 = _L7.bs2;
  _L32 = t_driver;
  _L30 = _L29 + _L32;
  _L8 = _L6 * _L30;
  kcg_copy_bec_t_TargetLimits_Pkg(&_L15, bec);
  _L28 = _L15.d;
  _L5 = _L4 + _L8 + _L28;
  _L11 = _L19 > _L5;
  _L33 = _L44 | _L11;
  _L45 = _L54 & _L33;
  _6_ck_every = _L45;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L42, GUIcurve);
  _L43 = D_maxsafefront;
  /* ck_v_SBI2 */ if (_6_ck_every) {
    /* 2 */
    getSpeedOnCurve_CalcBrakingCurves_types(
      &_L42,
      _L43,
      &_3_op_call,
      &_2_op_call);
  }
  _7_ck_every = _L33;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L17, EBDcurve);
  /* ck_v_SBI2 */ if (_7_ck_every) {
    /* 1 */
    getSpeedOnCurve_CalcBrakingCurves_types(&_L17, _L5, &_1_op_call, &op_call);
  }
  _L3 = V_target;
  _L27 = _L15.v;
  _L14 = V_est;
  _L13 = _L27 - _L14;
  /* ck_v_SBI2 */ if (_7_ck_every) {
    _L2 = op_call;
  }
  else {
    _L2 = 0.0;
  }
  _L16 = _L2 - _L13;
  /* ck_v_SBI2 */ if (_6_ck_every) {
    _L39 = _3_op_call;
    _L40 = _2_op_call;
  }
  else {
    _L39 = kcg_false;
    _L40 = 0.0;
  }
  /* ck_v_SBI2 */ if (_7_ck_every) {
    _L1 = _1_op_call;
  }
  else {
    _L1 = kcg_false;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(_L39, _L40, _L1, _L16, &_L47, &_L48, &_L49);
  /* 1 */ if (_L33) {
    _L24 = _L49;
  }
  else {
    _L24 = _L3;
  }
  *V_SBI2 = _L24;
  noname = _L18;
  _L51 = !_L33;
  _L50 = _L51 | _L48;
  *valid = _L50;
  _8_noname = _L47;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** v_SBI2_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

