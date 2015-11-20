/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _OneCycle_CalcBrakingCurves_Pkg_internalOperators_H_
#define _OneCycle_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h"
#include "FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.h"
#include "nextIndex_CalcBrakingCurves_Pkg_internalOperators.h"
#include "getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* =====================  no input structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::OneCycle */
extern void OneCycle_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistance */L_internal_real_Type_SDM_Types_Pkg currentDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeed */V_internal_real_Type_SDM_Types_Pkg currentSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentDistanceIndex */kcg_int currentDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currentSpeedIndex */kcg_int currentSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::backwardCalculation */kcg_bool backwardCalculation,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::inAsafe */ASafe_T_CalcBrakingCurves_types *inAsafe,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistance */L_internal_real_Type_SDM_Types_Pkg *newDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeed */V_internal_real_Type_SDM_Types_Pkg *newSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newDistanceIndex */kcg_int *newDistanceIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeedIndex */kcg_int *newSpeedIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newArc */ParabolaArc_T_CalcBrakingCurves_types *newArc);

#endif /* _OneCycle_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** OneCycle_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

