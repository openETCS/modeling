/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _d_SBI2_TargetLimits_Pkg_H_
#define _d_SBI2_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::d_SBI2 */
extern void d_SBI2_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_SBI2::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::d_SBI2::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::d_SBI2::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* TargetLimits_Pkg::d_SBI2::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::d_SBI2::valid */ kcg_bool *valid,
  /* TargetLimits_Pkg::d_SBI2::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2);

#endif /* _d_SBI2_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** d_SBI2_TargetLimits_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

