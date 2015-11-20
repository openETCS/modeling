/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_SBI1_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_SBI1 */
void d_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_SBI1::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::d_SBI1::V */ V_internal_real_Type_SDM_Types_Pkg V,
  /* TargetLimits_Pkg::d_SBI1::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_SBI1::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_SBI1::D_SBD1 */ L_internal_real_Type_SDM_Types_Pkg *D_SBD1)
{
  /* TargetLimits_Pkg::d_SBI1::_L1 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L1;
  /* TargetLimits_Pkg::d_SBI1::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* TargetLimits_Pkg::d_SBI1::_L3 */
  static T_trac_t_TargetLimits_Pkg _L3;
  /* TargetLimits_Pkg::d_SBI1::_L6 */
  static kcg_real _L6;
  /* TargetLimits_Pkg::d_SBI1::_L7 */
  static kcg_real _L7;
  /* TargetLimits_Pkg::d_SBI1::_L5 */
  static L_internal_real_Type_SDM_Types_Pkg _L5;
  /* TargetLimits_Pkg::d_SBI1::_L4 */
  static kcg_bool _L4;
  /* TargetLimits_Pkg::d_SBI1::_L8 */
  static T_internal_real_Type_SDM_Types_Pkg _L8;
  
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L1, SBDcurve);
  _L2 = V;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L3, T);
  /* 1 */ getLocationOnCurve_CalcBrakingCurves_types(&_L1, _L2, &_L4, &_L5);
  *valid = _L4;
  _L8 = _L3.bs1;
  _L6 = _L2 * _L8;
  _L7 = _L5 - _L6;
  *D_SBD1 = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_SBI1_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

