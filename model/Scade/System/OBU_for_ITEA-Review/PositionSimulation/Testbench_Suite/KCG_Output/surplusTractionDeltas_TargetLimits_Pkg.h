/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _surplusTractionDeltas_TargetLimits_Pkg_H_
#define _surplusTractionDeltas_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::surplusTractionDeltas */
extern void surplusTractionDeltas_TargetLimits_Pkg(
  /* TargetLimits_Pkg::surplusTractionDeltas::A_est */ A_internal_real_Type_SDM_Types_Pkg A_est,
  /* TargetLimits_Pkg::surplusTractionDeltas::inhibitUnderReadingCompensation */ Q_NVINHSMICPERM inhibitUnderReadingCompensation,
  /* TargetLimits_Pkg::surplusTractionDeltas::isTractionCutOffImplemented */ kcg_bool isTractionCutOffImplemented,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_traction_cut_off */ T_internal_real_Type_SDM_Types_Pkg T_traction_cut_off,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_be */ T_internal_real_Type_SDM_Types_Pkg T_be,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_ura */ V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_Traction */ T_internal_real_Type_SDM_Types_Pkg *T_Traction,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_Berem */ T_internal_real_Type_SDM_Types_Pkg *T_Berem,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_dt */ TractionDeltaTriple_TargetLimits_Pkg *V_dt);

#endif /* _surplusTractionDeltas_TargetLimits_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** surplusTractionDeltas_TargetLimits_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

