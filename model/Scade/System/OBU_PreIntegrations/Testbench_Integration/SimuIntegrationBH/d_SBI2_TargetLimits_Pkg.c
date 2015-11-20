/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_SBI2 */
void d_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_SBI2::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_SBI2::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::d_SBI2::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* TargetLimits_Pkg::d_SBI2::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_SBI2::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_SBI2::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2)
{
  /* TargetLimits_Pkg::d_SBI2::_L71 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L71;
  /* TargetLimits_Pkg::d_SBI2::_L70 */
  static L_internal_real_Type_SDM_Types_Pkg _L70;
  /* TargetLimits_Pkg::d_SBI2::_L82 */
  static kcg_bool _L82;
  /* TargetLimits_Pkg::d_SBI2::_L83 */
  static bec_t_TargetLimits_Pkg _L83;
  /* TargetLimits_Pkg::d_SBI2::_L85 */
  static kcg_real _L85;
  /* TargetLimits_Pkg::d_SBI2::_L88 */
  static kcg_real _L88;
  /* TargetLimits_Pkg::d_SBI2::_L87 */
  static T_trac_t_TargetLimits_Pkg _L87;
  /* TargetLimits_Pkg::d_SBI2::_L86 */
  static kcg_real _L86;
  /* TargetLimits_Pkg::d_SBI2::_L89 */
  static V_internal_real_Type_SDM_Types_Pkg _L89;
  /* TargetLimits_Pkg::d_SBI2::_L93 */
  static L_internal_real_Type_SDM_Types_Pkg _L93;
  /* TargetLimits_Pkg::d_SBI2::_L92 */
  static V_internal_real_Type_SDM_Types_Pkg _L92;
  /* TargetLimits_Pkg::d_SBI2::_L94 */
  static T_internal_real_Type_SDM_Types_Pkg _L94;
  
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L71, EBDcurve);
  kcg_copy_bec_t_TargetLimits_Pkg(&_L83, bec);
  _L92 = _L83.v;
  /* 1 */ getLocationOnCurve_CalcBrakingCurves_types(&_L71, _L92, &_L82, &_L70);
  *valid = _L82;
  _L93 = _L83.d;
  _L85 = _L70 - _L93;
  _L89 = v_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L87, T);
  _L94 = _L87.bs2;
  _L88 = _L89 * _L94;
  _L86 = _L85 - _L88;
  *D_SBI2 = _L86;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_SBI2_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

