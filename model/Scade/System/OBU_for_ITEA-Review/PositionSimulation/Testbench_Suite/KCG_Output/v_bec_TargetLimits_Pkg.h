/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _v_bec_TargetLimits_Pkg_H_
#define _v_bec_TargetLimits_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::v_bec */
extern void v_bec_TargetLimits_Pkg(
  /* TargetLimits_Pkg::v_bec::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::v_bec::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::v_bec::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::v_bec::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::v_bec::V_dt */ TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* TargetLimits_Pkg::v_bec::V_bec */ V_internal_real_Type_SDM_Types_Pkg *V_bec,
  /* TargetLimits_Pkg::v_bec::D_bec */ L_internal_real_Type_SDM_Types_Pkg *D_bec);

#endif /* _v_bec_TargetLimits_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** v_bec_TargetLimits_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

