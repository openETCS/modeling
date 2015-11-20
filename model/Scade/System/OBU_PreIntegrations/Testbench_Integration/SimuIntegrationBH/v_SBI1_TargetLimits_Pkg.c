/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI1 */
void v_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI1::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::v_SBI1::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI1::D_estfront */ L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* TargetLimits_Pkg::v_SBI1::D_EOA */ L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::v_SBI1::t_driver */ T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* TargetLimits_Pkg::v_SBI1::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI1::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::v_SBI1::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI1::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI1::V_SBI1 */ V_internal_real_Type_SDM_Types_Pkg *V_SBI1)
{
  /* TargetLimits_Pkg::v_SBI1 */
  static V_internal_real_Type_SDM_Types_Pkg _2_op_call;
  /* TargetLimits_Pkg::v_SBI1 */
  static kcg_bool _3_op_call;
  /* TargetLimits_Pkg::v_SBI1 */
  static V_internal_real_Type_SDM_Types_Pkg op_call;
  /* TargetLimits_Pkg::v_SBI1 */
  static kcg_bool _1_op_call;
  /* TargetLimits_Pkg::v_SBI1 */
  static kcg_bool ck_every;
  /* TargetLimits_Pkg::v_SBI1 */
  static kcg_bool _4_ck_every;
  static kcg_bool noname;
  /* TargetLimits_Pkg::v_SBI1::_L1 */
  static V_internal_real_Type_SDM_Types_Pkg _L1;
  /* TargetLimits_Pkg::v_SBI1::_L2 */
  static L_internal_real_Type_SDM_Types_Pkg _L2;
  /* TargetLimits_Pkg::v_SBI1::_L3 */
  static T_trac_t_TargetLimits_Pkg _L3;
  /* TargetLimits_Pkg::v_SBI1::_L6 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L6;
  /* TargetLimits_Pkg::v_SBI1::_L7 */
  static kcg_real _L7;
  /* TargetLimits_Pkg::v_SBI1::_L8 */
  static kcg_real _L8;
  /* TargetLimits_Pkg::v_SBI1::_L9 */
  static L_internal_real_Type_SDM_Types_Pkg _L9;
  /* TargetLimits_Pkg::v_SBI1::_L12 */
  static kcg_bool _L12;
  /* TargetLimits_Pkg::v_SBI1::_L5 */
  static V_internal_real_Type_SDM_Types_Pkg _L5;
  /* TargetLimits_Pkg::v_SBI1::_L4 */
  static kcg_bool _L4;
  /* TargetLimits_Pkg::v_SBI1::_L13 */
  static T_internal_real_Type_SDM_Types_Pkg _L13;
  /* TargetLimits_Pkg::v_SBI1::_L14 */
  static T_internal_real_Type_SDM_Types_Pkg _L14;
  /* TargetLimits_Pkg::v_SBI1::_L15 */
  static kcg_real _L15;
  /* TargetLimits_Pkg::v_SBI1::_L18 */
  static kcg_real _L18;
  /* TargetLimits_Pkg::v_SBI1::_L17 */
  static kcg_bool _L17;
  /* TargetLimits_Pkg::v_SBI1::_L16 */
  static kcg_bool _L16;
  /* TargetLimits_Pkg::v_SBI1::_L19 */
  static kcg_bool _L19;
  /* TargetLimits_Pkg::v_SBI1::_L20 */
  static V_internal_real_Type_SDM_Types_Pkg _L20;
  /* TargetLimits_Pkg::v_SBI1::_L21 */
  static kcg_bool _L21;
  /* TargetLimits_Pkg::v_SBI1::_L22 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L22;
  /* TargetLimits_Pkg::v_SBI1::_L23 */
  static L_internal_real_Type_SDM_Types_Pkg _L23;
  
  _L21 = guiCurveEnabled;
  ck_every = _L21;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L22, GUIcurve);
  _L23 = D_estfront;
  /* ck_v_SBI1 */ if (ck_every) {
    /* 2 */
    getSpeedOnCurve_CalcBrakingCurves_types(
      &_L22,
      _L23,
      &_3_op_call,
      &_2_op_call);
  }
  _L9 = D_EOA;
  _L2 = D_estfront;
  _L14 = t_driver;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L3, T);
  _L13 = _L3.bs1;
  _L15 = _L14 + _L13;
  _L1 = V_est;
  _L7 = _L15 * _L1;
  _L8 = _L2 + _L7;
  _L12 = _L9 > _L8;
  _4_ck_every = _L12;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L6, SBDcurve);
  /* ck_v_SBI1 */ if (_4_ck_every) {
    /* 1 */
    getSpeedOnCurve_CalcBrakingCurves_types(&_L6, _L8, &_1_op_call, &op_call);
    _L5 = op_call;
    _L4 = _1_op_call;
  }
  else {
    _L5 = 0.0;
    _L4 = kcg_false;
  }
  /* ck_v_SBI1 */ if (ck_every) {
    _L19 = _3_op_call;
    _L20 = _2_op_call;
  }
  else {
    _L19 = kcg_false;
    _L20 = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(_L4, _L5, _L19, _L20, &_L16, &_L17, &_L18);
  *valid = _L17;
  *V_SBI1 = _L18;
  noname = _L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** v_SBI1_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

