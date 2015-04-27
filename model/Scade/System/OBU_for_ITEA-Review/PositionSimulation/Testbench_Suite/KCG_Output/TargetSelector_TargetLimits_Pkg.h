/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _TargetSelector_TargetLimits_Pkg_H_
#define _TargetSelector_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "TargetIterator_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::TargetSelector */
extern void TargetSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetSelector::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* TargetLimits_Pkg::TargetSelector::Targets */ TargetCollection_T_TargetManagement_types *Targets,
  /* TargetLimits_Pkg::TargetSelector::Curves */ CurveCollection_T_CalcBrakingCurves_types *Curves,
  /* TargetLimits_Pkg::TargetSelector::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::TargetSelector::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::TargetSelector::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::TargetSelector::V_dt */ TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveTarget */ Target_real_T_TargetManagement_types *MostRestrictiveTarget,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveCurve */ ParabolaCurve_T_CalcBrakingCurves_types *MostRestrictiveCurve,
  /* TargetLimits_Pkg::TargetSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::TargetSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::TargetSelector::GUICurveEnabled */ kcg_bool *GUICurveEnabled,
  /* TargetLimits_Pkg::TargetSelector::V_Target */ V_internal_real_Type_SDM_Types_Pkg *V_Target,
  /* TargetLimits_Pkg::TargetSelector::D_EOA */ L_internal_real_Type_SDM_Types_Pkg *D_EOA,
  /* TargetLimits_Pkg::TargetSelector::D_SvL */ L_internal_real_Type_SDM_Types_Pkg *D_SvL,
  /* TargetLimits_Pkg::TargetSelector::SBI2valid */ kcg_bool *SBI2valid,
  /* TargetLimits_Pkg::TargetSelector::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2);

#endif /* _TargetSelector_TargetLimits_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** TargetSelector_TargetLimits_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

