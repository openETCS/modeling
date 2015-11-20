/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_SBI2_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_SBI2 */
void d_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_SBI2::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_SBI2::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::d_SBI2::v_est */V_internal_real_Type_SDM_Types_Pkg v_est,
  /* TargetLimits_Pkg::d_SBI2::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_SBI2::valid */kcg_bool *valid,
  /* TargetLimits_Pkg::d_SBI2::D_SBI2 */L_internal_real_Type_SDM_Types_Pkg *D_SBI2)
{
  /* TargetLimits_Pkg::d_SBI2::_L70 */
  static L_internal_real_Type_SDM_Types_Pkg _L70;
  
  /* 1 */
  getLocationOnCurve_CalcBrakingCurves_types(EBDcurve, (*bec).v, valid, &_L70);
  *D_SBI2 = _L70 - (*bec).d - v_est * (*T).bs2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** d_SBI2_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

