/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _MRSPPreindicationSelector_TargetLimits_Pkg_H_
#define _MRSPPreindicationSelector_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "MRSPPreindicationIterator_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::MRSPPreindicationSelector */
extern void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::isEoA */kcg_bool isEoA,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */L_internal_real_Type_SDM_Types_Pkg *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_I_V_MRSP */L_internal_real_Type_SDM_Types_Pkg *D_I_V_MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */kcg_bool *valid);

#endif /* _MRSPPreindicationSelector_TargetLimits_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSPPreindicationSelector_TargetLimits_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

