/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_RSM_start_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_RSM_start */
void d_RSM_start_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_RSM_start::V_release */V_internal_real_Type_SDM_Types_Pkg V_release,
  /* TargetLimits_Pkg::d_RSM_start::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_RSM_start::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::d_RSM_start::d_maxsafefront */L_internal_real_Type_SDM_Types_Pkg d_maxsafefront,
  /* TargetLimits_Pkg::d_RSM_start::d_est */L_internal_real_Type_SDM_Types_Pkg d_est,
  /* TargetLimits_Pkg::d_RSM_start::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_RSM_start::D_FLOI */L_internal_real_Type_SDM_Types_Pkg *D_FLOI,
  /* TargetLimits_Pkg::d_RSM_start::D_SBI2 */L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::d_RSM_start::D_SBI1 */L_internal_real_Type_SDM_Types_Pkg *D_SBI1,
  /* TargetLimits_Pkg::d_RSM_start::valid_SBI2 */kcg_bool *valid_SBI2,
  /* TargetLimits_Pkg::d_RSM_start::valid_SBI1 */kcg_bool *valid_SBI1)
{
  static kcg_bool tmp;
  
  /* 2 */
  d_EBI_non_est_TargetLimits_Pkg(V_release, EBDcurve, T, D_SBI2, valid_SBI2);
  /* 1 */ d_SBI1_TargetLimits_Pkg(SBDcurve, V_release, T, valid_SBI1, D_SBI1);
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** d_RSM_start_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

