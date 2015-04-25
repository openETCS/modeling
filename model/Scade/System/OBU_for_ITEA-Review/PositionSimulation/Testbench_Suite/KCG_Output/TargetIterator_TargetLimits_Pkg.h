/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _TargetIterator_TargetLimits_Pkg_H_
#define _TargetIterator_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "isLEValid_TargetLimits_Pkg.h"
#include "d_SBI2_TargetLimits_Pkg.h"
#include "v_bec_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::TargetIterator */
extern void TargetIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetIterator::index */ kcg_int index,
  /* TargetLimits_Pkg::TargetIterator::Akku_in */ TargetIteratorAkku_TargetLimits_Pkg *Akku_in,
  /* TargetLimits_Pkg::TargetIterator::target */ Target_real_T_TargetManagement_types *target,
  /* TargetLimits_Pkg::TargetIterator::targetCurve */ ParabolaCurve_T_CalcBrakingCurves_types *targetCurve,
  /* TargetLimits_Pkg::TargetIterator::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est,
  /* TargetLimits_Pkg::TargetIterator::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::TargetIterator::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::TargetIterator::V_dt */ TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* TargetLimits_Pkg::TargetIterator::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::TargetIterator::goOn */ kcg_bool *goOn,
  /* TargetLimits_Pkg::TargetIterator::Akku_out */ TargetIteratorAkku_TargetLimits_Pkg *Akku_out);

#endif /* _TargetIterator_TargetLimits_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** TargetIterator_TargetLimits_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

