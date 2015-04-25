/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _MRSPPreindicationSelector_TargetLimits_Pkg_H_
#define _MRSPPreindicationSelector_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "MRSPPreindicationIterator_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::MRSPPreindicationSelector */
extern void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T_bs */ T_internal_real_Type_SDM_Types_Pkg T_bs,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */ L_internal_real_Type_SDM_Types_Pkg *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */ kcg_bool *valid);

#endif /* _MRSPPreindicationSelector_TargetLimits_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** MRSPPreindicationSelector_TargetLimits_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

