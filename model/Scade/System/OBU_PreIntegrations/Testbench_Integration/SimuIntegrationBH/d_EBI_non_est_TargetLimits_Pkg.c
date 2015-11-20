/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_EBI_non_est */
void d_EBI_non_est_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_EBI_non_est::V */ V_internal_real_Type_SDM_Types_Pkg V,
  /* TargetLimits_Pkg::d_EBI_non_est::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_EBI_non_est::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_EBI_non_est::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::d_EBI_non_est::valid */ kcg_bool *valid)
{
  /* TargetLimits_Pkg::d_EBI_non_est */
  static V_internal_real_Type_SDM_Types_Pkg op_call;
  /* TargetLimits_Pkg::d_EBI_non_est */
  static kcg_bool ck_every;
  static T_internal_real_Type_SDM_Types_Pkg noname;
  static T_internal_real_Type_SDM_Types_Pkg _1_noname;
  static T_internal_real_Type_SDM_Types_Pkg _2_noname;
  /* TargetLimits_Pkg::d_EBI_non_est::_L1 */
  static V_internal_real_Type_SDM_Types_Pkg _L1;
  /* TargetLimits_Pkg::d_EBI_non_est::_L3 */
  static kcg_bool _L3;
  /* TargetLimits_Pkg::d_EBI_non_est::_L4 */
  static L_internal_real_Type_SDM_Types_Pkg _L4;
  /* TargetLimits_Pkg::d_EBI_non_est::_L2 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L2;
  /* TargetLimits_Pkg::d_EBI_non_est::_L5 */
  static V_internal_real_Type_SDM_Types_Pkg _L5;
  /* TargetLimits_Pkg::d_EBI_non_est::_L6 */
  static kcg_real _L6;
  /* TargetLimits_Pkg::d_EBI_non_est::_L9 */
  static kcg_real _L9;
  /* TargetLimits_Pkg::d_EBI_non_est::_L10 */
  static kcg_real _L10;
  /* TargetLimits_Pkg::d_EBI_non_est::_L12 */
  static kcg_real _L12;
  /* TargetLimits_Pkg::d_EBI_non_est::_L13 */
  static T_trac_t_TargetLimits_Pkg _L13;
  /* TargetLimits_Pkg::d_EBI_non_est::_L15 */
  static kcg_real _L15;
  /* TargetLimits_Pkg::d_EBI_non_est::_L14 */
  static kcg_real _L14;
  /* TargetLimits_Pkg::d_EBI_non_est::_L16 */
  static V_internal_real_Type_SDM_Types_Pkg _L16;
  /* TargetLimits_Pkg::d_EBI_non_est::_L19 */
  static kcg_bool _L19;
  /* TargetLimits_Pkg::d_EBI_non_est::_L29 */
  static T_internal_real_Type_SDM_Types_Pkg _L29;
  /* TargetLimits_Pkg::d_EBI_non_est::_L28 */
  static T_internal_real_Type_SDM_Types_Pkg _L28;
  /* TargetLimits_Pkg::d_EBI_non_est::_L27 */
  static T_internal_real_Type_SDM_Types_Pkg _L27;
  /* TargetLimits_Pkg::d_EBI_non_est::_L26 */
  static T_internal_real_Type_SDM_Types_Pkg _L26;
  /* TargetLimits_Pkg::d_EBI_non_est::_L25 */
  static T_internal_real_Type_SDM_Types_Pkg _L25;
  /* TargetLimits_Pkg::d_EBI_non_est::_L30 */
  static kcg_bool _L30;
  /* TargetLimits_Pkg::d_EBI_non_est::_L31 */
  static T_internal_real_Type_SDM_Types_Pkg _L31;
  
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L13, T);
  _L30 = _L13.inhComp;
  _L19 = !_L30;
  ck_every = _L19;
  _L1 = V;
  /* ck_d_EBI_non_est */ if (ck_every) {
    op_call = /* 1 */ f_41_TargetLimits_Pkg(_L1);
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L2, EBDcurve);
  /* ck_d_EBI_non_est */ if (ck_every) {
    _L5 = op_call;
  }
  else {
    _L5 = 0.0;
  }
  _L6 = _L5 + _L1;
  /* 1 */ getLocationOnCurve_CalcBrakingCurves_types(&_L2, _L6, &_L3, &_L4);
  *valid = _L3;
  _L25 = _L13.Traction;
  _L26 = _L13.berem;
  _L9 = _L25 + _L26;
  _L10 = _L6 * _L9;
  _L12 = _L4 - _L10;
  _L16 = V;
  _L29 = _L13.bs2;
  _L15 = _L16 * _L29;
  _L14 = _L12 - _L15;
  *D_SBI2 = _L14;
  _L31 = _L13.indication;
  _L28 = _L13.bs1;
  _L27 = _L13.bs;
  noname = _L27;
  _1_noname = _L28;
  _2_noname = _L31;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_EBI_non_est_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

