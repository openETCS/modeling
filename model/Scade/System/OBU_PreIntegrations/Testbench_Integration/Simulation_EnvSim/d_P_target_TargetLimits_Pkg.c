/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_P_target_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_P_target */
void d_P_target_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_P_target::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_P_target::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::d_P_target::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_P_target::valid */kcg_bool *valid,
  /* TargetLimits_Pkg::d_P_target::D_P_target */L_internal_real_Type_SDM_Types_Pkg *D_P_target)
{
  /* TargetLimits_Pkg::d_P_target::_L13 */
  static L_internal_real_Type_SDM_Types_Pkg _L13;
  
  /* 1 */ d_EBI_non_est_TargetLimits_Pkg(V_target, EBDcurve, T, &_L13, valid);
  *D_P_target = _L13 - V_target * T_driver_SDM_Types_Pkg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** d_P_target_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

