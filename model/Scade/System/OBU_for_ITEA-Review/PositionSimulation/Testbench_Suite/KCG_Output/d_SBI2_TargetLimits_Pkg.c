/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_SBI2 */
void d_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_SBI2::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_SBI2::V_bec */ V_internal_real_Type_SDM_Types_Pkg V_bec,
  /* TargetLimits_Pkg::d_SBI2::D_bec */ L_internal_real_Type_SDM_Types_Pkg D_bec,
  /* TargetLimits_Pkg::d_SBI2::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* TargetLimits_Pkg::d_SBI2::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::d_SBI2::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_SBI2::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2)
{
  /* TargetLimits_Pkg::d_SBI2::_L70 */ L_internal_real_Type_SDM_Types_Pkg _L70;
  
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(EBDcurve, V_bec, valid, &_L70);
  *D_SBI2 = _L70 - D_bec - v_est * T_bs2;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** d_SBI2_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

