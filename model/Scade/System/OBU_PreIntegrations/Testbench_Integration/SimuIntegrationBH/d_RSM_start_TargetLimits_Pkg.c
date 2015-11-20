/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_RSM_start_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_RSM_start */
void d_RSM_start_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_RSM_start::V_release */ V_internal_real_Type_SDM_Types_Pkg V_release,
  /* TargetLimits_Pkg::d_RSM_start::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_RSM_start::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::d_RSM_start::d_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* TargetLimits_Pkg::d_RSM_start::d_est */ L_internal_real_Type_SDM_Types_Pkg d_est,
  /* TargetLimits_Pkg::d_RSM_start::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_RSM_start::D_FLOI */ L_internal_real_Type_SDM_Types_Pkg *D_FLOI,
  /* TargetLimits_Pkg::d_RSM_start::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::d_RSM_start::D_SBI1 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI1,
  /* TargetLimits_Pkg::d_RSM_start::valid_SBI2 */ kcg_bool *valid_SBI2,
  /* TargetLimits_Pkg::d_RSM_start::valid_SBI1 */ kcg_bool *valid_SBI1)
{
  /* TargetLimits_Pkg::d_RSM_start::_L10 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L10;
  /* TargetLimits_Pkg::d_RSM_start::_L8 */
  static T_trac_t_TargetLimits_Pkg _L8;
  /* TargetLimits_Pkg::d_RSM_start::_L7 */
  static V_internal_real_Type_SDM_Types_Pkg _L7;
  /* TargetLimits_Pkg::d_RSM_start::_L5 */
  static kcg_bool _L5;
  /* TargetLimits_Pkg::d_RSM_start::_L12 */
  static L_internal_real_Type_SDM_Types_Pkg _L12;
  /* TargetLimits_Pkg::d_RSM_start::_L11 */
  static kcg_bool _L11;
  /* TargetLimits_Pkg::d_RSM_start::_L13 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L13;
  /* TargetLimits_Pkg::d_RSM_start::_L14 */
  static V_internal_real_Type_SDM_Types_Pkg _L14;
  /* TargetLimits_Pkg::d_RSM_start::_L16 */
  static kcg_real _L16;
  /* TargetLimits_Pkg::d_RSM_start::_L18 */
  static L_internal_real_Type_SDM_Types_Pkg _L18;
  /* TargetLimits_Pkg::d_RSM_start::_L19 */
  static L_internal_real_Type_SDM_Types_Pkg _L19;
  /* TargetLimits_Pkg::d_RSM_start::_L20 */
  static kcg_real _L20;
  /* TargetLimits_Pkg::d_RSM_start::_L21 */
  static L_internal_real_Type_SDM_Types_Pkg _L21;
  /* TargetLimits_Pkg::d_RSM_start::_L22 */
  static L_internal_real_Type_SDM_Types_Pkg _L22;
  /* TargetLimits_Pkg::d_RSM_start::_L24 */
  static kcg_bool _L24;
  /* TargetLimits_Pkg::d_RSM_start::_L26 */
  static T_trac_t_TargetLimits_Pkg _L26;
  
  _L7 = V_release;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L10, EBDcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L8, T);
  /* 2 */ d_EBI_non_est_TargetLimits_Pkg(_L7, &_L10, &_L8, &_L22, &_L5);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L13, SBDcurve);
  _L14 = V_release;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L26, T);
  /* 1 */ d_SBI1_TargetLimits_Pkg(&_L13, _L14, &_L26, &_L11, &_L12);
  _L16 = _L22 - _L12;
  _L18 = d_maxsafefront;
  _L19 = d_est;
  _L20 = _L18 - _L19;
  *D_SBI1 = _L12;
  *D_SBI2 = _L22;
  _L24 = /* 1 */ isLEValid_TargetLimits_Pkg(_L5, _L20, _L11, _L16);
  /* 1 */ if (_L24) {
    _L21 = _L12;
  }
  else {
    _L21 = _L22;
  }
  *D_FLOI = _L21;
  *valid_SBI2 = _L5;
  *valid_SBI1 = _L11;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_RSM_start_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

