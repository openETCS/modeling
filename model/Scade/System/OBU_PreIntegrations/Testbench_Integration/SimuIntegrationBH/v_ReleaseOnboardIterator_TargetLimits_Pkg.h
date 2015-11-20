/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _v_ReleaseOnboardIterator_TargetLimits_Pkg_H_
#define _v_ReleaseOnboardIterator_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getLocationOnCurve_CalcBrakingCurves_types.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"
#include "f_41_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::v_ReleaseOnboardIterator */
extern void v_ReleaseOnboardIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release */ V_internal_real_Type_SDM_Types_Pkg V_release,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_ura */ V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::D_tripEOA */ L_internal_real_Type_SDM_Types_Pkg D_tripEOA,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::run_condition */ kcg_bool *run_condition,
  /* TargetLimits_Pkg::v_ReleaseOnboardIterator::V_release_next */ V_internal_real_Type_SDM_Types_Pkg *V_release_next);

#endif /* _v_ReleaseOnboardIterator_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** v_ReleaseOnboardIterator_TargetLimits_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

