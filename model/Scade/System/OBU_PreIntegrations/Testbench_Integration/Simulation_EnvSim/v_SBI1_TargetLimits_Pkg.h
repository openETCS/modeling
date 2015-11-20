/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _v_SBI1_TargetLimits_Pkg_H_
#define _v_SBI1_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"
#include "selectLEValid_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::v_SBI1 */
extern void v_SBI1_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI1::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::v_SBI1::V_est */V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI1::D_estfront */L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* TargetLimits_Pkg::v_SBI1::D_EOA */L_internal_real_Type_SDM_Types_Pkg D_EOA,
  /* TargetLimits_Pkg::v_SBI1::t_driver */T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* TargetLimits_Pkg::v_SBI1::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI1::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::v_SBI1::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI1::valid */kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI1::V_SBI1 */V_internal_real_Type_SDM_Types_Pkg *V_SBI1);

#endif /* _v_SBI1_TargetLimits_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** v_SBI1_TargetLimits_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

