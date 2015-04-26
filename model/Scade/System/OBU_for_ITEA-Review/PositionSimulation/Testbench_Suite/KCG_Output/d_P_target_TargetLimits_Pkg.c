/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_P_target_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_P_target */
void d_P_target_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_P_target::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_P_target::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::d_P_target::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::d_P_target::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::d_P_target::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::d_P_target::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_P_target::D_P_target */ L_internal_real_Type_SDM_Types_Pkg *D_P_target)
{
  /* TargetLimits_Pkg::d_P_target::_L13 */ L_internal_real_Type_SDM_Types_Pkg _L13;
  
  /* 1 */
  d_EBI_non_est_TargetLimits_Pkg(
    V_target,
    EBDcurve,
    T_Traction,
    T_berem,
    T_bs2,
    &_L13,
    valid);
  *D_P_target = _L13 - V_target * T_driver_SDM_Types_Pkg;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** d_P_target_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

