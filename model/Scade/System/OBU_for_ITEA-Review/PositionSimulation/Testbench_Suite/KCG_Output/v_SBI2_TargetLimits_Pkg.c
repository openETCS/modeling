/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "v_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::v_SBI2 */
void v_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI2::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_SBI2::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI2::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_SBI2::V_bec */ V_internal_real_Type_SDM_Types_Pkg V_bec,
  /* TargetLimits_Pkg::v_SBI2::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::v_SBI2::D_bec */ L_internal_real_Type_SDM_Types_Pkg D_bec,
  /* TargetLimits_Pkg::v_SBI2::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::v_SBI2::V_SBI1 */ V_internal_real_Type_SDM_Types_Pkg *V_SBI1,
  /* TargetLimits_Pkg::v_SBI2::valid */ kcg_bool *valid)
{
  V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::v_SBI2::_L5 */ kcg_real _L5;
  /* TargetLimits_Pkg::v_SBI2::_L11 */ kcg_bool _L11;
  /* TargetLimits_Pkg::v_SBI2::_L19 */ L_internal_real_Type_SDM_Types_Pkg _L19;
  
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(EBDcurve, V_target, &_L11, &_L19);
  _L5 = D_bec + D_maxsafefront + V_est * T_bs2;
  _L11 = _L19 > _L5;
  if (_L11) {
    /* 1 */ getSpeedOnCurve_CalcBrakingCurves_types(EBDcurve, _L5, valid, &tmp);
    *V_SBI1 = tmp - (V_bec - V_est);
  }
  else {
    *valid = kcg_false;
    *V_SBI1 = V_target;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** v_SBI2_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

