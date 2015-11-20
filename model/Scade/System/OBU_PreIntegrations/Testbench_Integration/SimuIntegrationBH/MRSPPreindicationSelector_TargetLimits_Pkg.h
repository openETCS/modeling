/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _MRSPPreindicationSelector_TargetLimits_Pkg_H_
#define _MRSPPreindicationSelector_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "MRSPPreindicationIterator_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::MRSPPreindicationSelector */
extern void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::isEoA */ kcg_bool isEoA,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */ L_internal_real_Type_SDM_Types_Pkg *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_I_V_MRSP */ L_internal_real_Type_SDM_Types_Pkg *D_I_V_MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */ kcg_bool *valid);

#endif /* _MRSPPreindicationSelector_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** MRSPPreindicationSelector_TargetLimits_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

