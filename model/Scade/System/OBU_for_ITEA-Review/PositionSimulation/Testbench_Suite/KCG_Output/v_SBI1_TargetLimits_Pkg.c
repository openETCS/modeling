/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
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
  /* TargetLimits_Pkg::v_SBI1::T_bs1 */ T_internal_real_Type_SDM_Types_Pkg T_bs1,
  /* TargetLimits_Pkg::v_SBI1::V_SBI1 */ V_internal_real_Type_SDM_Types_Pkg *V_SBI1,
  /* TargetLimits_Pkg::v_SBI1::valid */ kcg_bool *valid)
{
  /* TargetLimits_Pkg::v_SBI1::_L8 */ kcg_real _L8;
  /* TargetLimits_Pkg::v_SBI1::_L12 */ kcg_bool _L12;
  
  _L8 = D_estfront + T_bs1 * V_est;
  _L12 = D_EOA > _L8;
  if (_L12) {
    /* 1 */
    getSpeedOnCurve_CalcBrakingCurves_types(SBDcurve, _L8, valid, V_SBI1);
  }
  else {
    *valid = kcg_false;
    *V_SBI1 = 0.0;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** v_SBI1_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

