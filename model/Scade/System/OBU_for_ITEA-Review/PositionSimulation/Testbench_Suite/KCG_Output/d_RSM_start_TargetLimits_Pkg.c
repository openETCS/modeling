/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_RSM_start_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_RSM_start */
void d_RSM_start_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_RSM_start::V_release */ V_internal_real_Type_SDM_Types_Pkg V_release,
  /* TargetLimits_Pkg::d_RSM_start::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::d_RSM_start::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::d_RSM_start::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_RSM_start::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::d_RSM_start::d_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* TargetLimits_Pkg::d_RSM_start::d_est */ L_internal_real_Type_SDM_Types_Pkg d_est,
  /* TargetLimits_Pkg::d_RSM_start::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::d_RSM_start::T_bs1 */ T_internal_real_Type_SDM_Types_Pkg T_bs1,
  /* TargetLimits_Pkg::d_RSM_start::D_FLOI */ L_internal_real_Type_SDM_Types_Pkg *D_FLOI,
  /* TargetLimits_Pkg::d_RSM_start::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::d_RSM_start::D_SBI1 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI1,
  /* TargetLimits_Pkg::d_RSM_start::valid_SBI2 */ kcg_bool *valid_SBI2,
  /* TargetLimits_Pkg::d_RSM_start::valid_SBI1 */ kcg_bool *valid_SBI1)
{
  kcg_bool tmp;
  
  /* 2 */
  d_EBI_non_est_TargetLimits_Pkg(
    V_release,
    EBDcurve,
    T_Traction,
    T_berem,
    T_bs2,
    D_SBI2,
    valid_SBI2);
  /* 1 */
  d_SBI1_TargetLimits_Pkg(SBDcurve, V_release, T_bs1, valid_SBI1, D_SBI1);
  tmp = /* 1 */
    isLEValid_TargetLimits_Pkg(
      *valid_SBI2,
      d_maxsafefront - d_est,
      *valid_SBI1,
      *D_SBI2 - *D_SBI1);
  if (tmp) {
    *D_FLOI = *D_SBI1;
  }
  else {
    *D_FLOI = *D_SBI2;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** d_RSM_start_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

