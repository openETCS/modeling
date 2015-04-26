/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _OneCycle_CalcBrakingCurves_Pkg_internalOperators_H_
#define _OneCycle_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h"
#include "FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.h"
#include "changeDistanceIndex_CalcBrakingCurves_Pkg_internalOperators.h"
#include "changeSpeedIndex_CalcBrakingCurves_Pkg_internalOperators.h"
#include "getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* =====================  no input structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::OneCycle */
extern void OneCycle_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistance */ kcg_real currentDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeed */ kcg_real currentSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistanceIndex */ kcg_int currentDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeedIndex */ kcg_int currentSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::backwardCalculation */ kcg_bool backwardCalculation,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::inAsafe */ ASafe_T_CalcBrakingCurves_types *inAsafe,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistance */ kcg_real *newDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeed */ kcg_real *newSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistanceIndex */ kcg_int *newDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeedIndex */ kcg_int *newSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newArc */ ParabolaArc_T_CalcBrakingCurves_types *newArc);

#endif /* _OneCycle_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** OneCycle_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

