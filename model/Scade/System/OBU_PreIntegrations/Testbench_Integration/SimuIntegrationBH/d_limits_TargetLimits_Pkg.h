/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _d_limits_TargetLimits_Pkg_H_
#define _d_limits_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"
#include "isLEValid_TargetLimits_Pkg.h"
#include "selectLEValid_TargetLimits_Pkg.h"
#include "d_SBI1_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::d_limits */
extern void d_limits_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_limits::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::d_limits::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::d_limits::SBI2valid */ kcg_bool SBI2valid,
  /* TargetLimits_Pkg::d_limits::D_SBI2_V_est */ L_internal_real_Type_SDM_Types_Pkg D_SBI2_V_est,
  /* TargetLimits_Pkg::d_limits::D_estfront */ L_internal_real_Type_SDM_Types_Pkg D_estfront,
  /* TargetLimits_Pkg::d_limits::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* TargetLimits_Pkg::d_limits::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_limits::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::d_limits::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_limits::D_I */ L_internal_real_Type_SDM_Types_Pkg *D_I,
  /* TargetLimits_Pkg::d_limits::D_P */ L_internal_real_Type_SDM_Types_Pkg *D_P,
  /* TargetLimits_Pkg::d_limits::D_W */ L_internal_real_Type_SDM_Types_Pkg *D_W,
  /* TargetLimits_Pkg::d_limits::D_FLOI */ L_internal_real_Type_SDM_Types_Pkg *D_FLOI,
  /* TargetLimits_Pkg::d_limits::FLOIisSBI1 */ kcg_bool *FLOIisSBI1);

#endif /* _d_limits_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** d_limits_TargetLimits_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

