/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _v_SBI2_TargetLimits_Pkg_H_
#define _v_SBI2_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"
#include "selectLEValid_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::v_SBI2 */
extern void v_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_SBI2::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_SBI2::V_est */V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_SBI2::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_SBI2::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::v_SBI2::D_maxsafefront */L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::v_SBI2::t_driver */T_internal_real_Type_SDM_Types_Pkg t_driver,
  /* TargetLimits_Pkg::v_SBI2::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::v_SBI2::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::v_SBI2::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_SBI2::valid */kcg_bool *valid,
  /* TargetLimits_Pkg::v_SBI2::V_SBI2 */V_internal_real_Type_SDM_Types_Pkg *V_SBI2);

#endif /* _v_SBI2_TargetLimits_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** v_SBI2_TargetLimits_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

