/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _d_I_MRSP_TargetLimits_Pkg_H_
#define _d_I_MRSP_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"
#include "d_EBI_non_est_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::d_I_MRSP */
extern void d_I_MRSP_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_I_MRSP::V_MRSP */V_internal_real_Type_SDM_Types_Pkg V_MRSP,
  /* TargetLimits_Pkg::d_I_MRSP::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_I_MRSP::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::d_I_MRSP::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::d_I_MRSP::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_I_MRSP::valid */kcg_bool *valid,
  /* TargetLimits_Pkg::d_I_MRSP::D_I */L_internal_real_Type_SDM_Types_Pkg *D_I);

#endif /* _d_I_MRSP_TargetLimits_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** d_I_MRSP_TargetLimits_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

