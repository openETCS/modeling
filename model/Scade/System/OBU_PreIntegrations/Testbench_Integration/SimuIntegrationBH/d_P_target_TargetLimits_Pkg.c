/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_P_target_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_P_target */
void d_P_target_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_P_target::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_P_target::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::d_P_target::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_P_target::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_P_target::D_P_target */ L_internal_real_Type_SDM_Types_Pkg *D_P_target)
{
  /* TargetLimits_Pkg::d_P_target::_L6 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L6;
  /* TargetLimits_Pkg::d_P_target::_L5 */
  static V_internal_real_Type_SDM_Types_Pkg _L5;
  /* TargetLimits_Pkg::d_P_target::_L4 */
  static kcg_bool _L4;
  /* TargetLimits_Pkg::d_P_target::_L9 */
  static T_internal_real_Type_SDM_Types_Pkg _L9;
  /* TargetLimits_Pkg::d_P_target::_L11 */
  static kcg_real _L11;
  /* TargetLimits_Pkg::d_P_target::_L12 */
  static kcg_real _L12;
  /* TargetLimits_Pkg::d_P_target::_L13 */
  static L_internal_real_Type_SDM_Types_Pkg _L13;
  /* TargetLimits_Pkg::d_P_target::_L14 */
  static T_trac_t_TargetLimits_Pkg _L14;
  
  _L5 = V_target;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L6, EBDcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L14, T);
  /* 1 */ d_EBI_non_est_TargetLimits_Pkg(_L5, &_L6, &_L14, &_L13, &_L4);
  *valid = _L4;
  _L9 = T_driver_SDM_Types_Pkg;
  _L11 = _L5 * _L9;
  _L12 = _L13 - _L11;
  *D_P_target = _L12;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_P_target_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

