/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators_H_
#define _InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "setArc_CalcBrakingCurves_Pkg_internalOperators.h"
#include "getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h"
#include "getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.h"
#include "getSpeedStepFromSpeed_CalcBrakingCurves_Pkg_Step_Function_operators.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc */
extern void InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::EBDfoot */ L_internal_real_Type_SDM_Types_Pkg EBDfoot,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::target */ Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitAccWithTargetArc::Output1 */ BCAccumulator_type_CalcBrakingCurves_Pkg *Output1);

#endif /* _InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

