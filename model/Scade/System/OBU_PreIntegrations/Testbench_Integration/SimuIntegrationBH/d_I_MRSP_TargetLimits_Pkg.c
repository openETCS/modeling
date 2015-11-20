/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_I_MRSP_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_I_MRSP */
void d_I_MRSP_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_I_MRSP::V_MRSP */ V_internal_real_Type_SDM_Types_Pkg V_MRSP,
  /* TargetLimits_Pkg::d_I_MRSP::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_I_MRSP::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_I_MRSP::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::d_I_MRSP::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_I_MRSP::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_I_MRSP::D_I */ L_internal_real_Type_SDM_Types_Pkg *D_I)
{
  /* math::Min::Mi_Output */
  static kcg_real Mi_Output_1;
  /* math::Min::I2 */
  static kcg_real I2_1;
  /* math::Min::I1 */
  static kcg_real I1_1;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_real _L24_1;
  /* math::Min::_L22 */
  static kcg_real _L22_1;
  /* math::Min::_L21 */
  static kcg_real _L21_1;
  /* TargetLimits_Pkg::d_I_MRSP::_L8 */
  static kcg_bool _L8;
  /* TargetLimits_Pkg::d_I_MRSP::_L10 */
  static T_trac_t_TargetLimits_Pkg _L10;
  /* TargetLimits_Pkg::d_I_MRSP::_L13 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L13;
  /* TargetLimits_Pkg::d_I_MRSP::_L16 */
  static L_internal_real_Type_SDM_Types_Pkg _L16;
  /* TargetLimits_Pkg::d_I_MRSP::_L17 */
  static kcg_bool _L17;
  /* TargetLimits_Pkg::d_I_MRSP::_L18 */
  static kcg_real _L18;
  /* TargetLimits_Pkg::d_I_MRSP::_L20 */
  static kcg_real _L20;
  /* TargetLimits_Pkg::d_I_MRSP::_L21 */
  static T_internal_real_Type_SDM_Types_Pkg _L21;
  /* TargetLimits_Pkg::d_I_MRSP::_L22 */
  static L_internal_real_Type_SDM_Types_Pkg _L22;
  /* TargetLimits_Pkg::d_I_MRSP::_L28 */
  static L_internal_real_Type_SDM_Types_Pkg _L28;
  /* TargetLimits_Pkg::d_I_MRSP::_L27 */
  static kcg_bool _L27;
  /* TargetLimits_Pkg::d_I_MRSP::_L29 */
  static kcg_bool _L29;
  /* TargetLimits_Pkg::d_I_MRSP::_L30 */
  static V_internal_real_Type_SDM_Types_Pkg _L30;
  /* TargetLimits_Pkg::d_I_MRSP::_L31 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L31;
  /* TargetLimits_Pkg::d_I_MRSP::_L32 */
  static L_internal_real_Type_SDM_Types_Pkg _L32;
  /* TargetLimits_Pkg::d_I_MRSP::_L33 */
  static kcg_real _L33;
  /* TargetLimits_Pkg::d_I_MRSP::_L34 */
  static kcg_real _L34;
  /* TargetLimits_Pkg::d_I_MRSP::_L37 */
  static V_internal_real_Type_SDM_Types_Pkg _L37;
  /* TargetLimits_Pkg::d_I_MRSP::_L44 */
  static T_internal_real_Type_SDM_Types_Pkg _L44;
  
  _L30 = V_MRSP;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L13, EBDcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L10, T);
  /* 1 */ d_EBI_non_est_TargetLimits_Pkg(_L30, &_L13, &_L10, &_L32, &_L8);
  _L17 = guiCurveEnabled;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L31, GUIcurve);
  /* 3 */ getLocationOnCurve_CalcBrakingCurves_types(&_L31, _L30, &_L27, &_L28);
  _L29 = _L17 & _L27;
  I1_1 = _L28;
  _L21_1 = I1_1;
  _L21 = T_driver_SDM_Types_Pkg;
  _L20 = _L30 * _L21;
  _L18 = _L32 - _L20;
  I2_1 = _L18;
  _L22_1 = I2_1;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L22 = Mi_Output_1;
  /* 1 */ if (_L29) {
    _L16 = _L22;
  }
  else {
    _L16 = _L18;
  }
  _L37 = V_MRSP;
  _L44 = _L10.indication;
  _L34 = _L37 * _L44;
  _L33 = _L16 - _L34;
  *D_I = _L33;
  *valid = _L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_I_MRSP_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

