/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance */
void getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceIn */ L_internal_real_Type_SDM_Types_Pkg DistanceIn,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::ASafeDistances */ array_real_15 *ASafeDistances,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceStepOut */ kcg_real *DistanceStepOut,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceStepIndexOut */ kcg_int *DistanceStepIndexOut)
{
  kcg_int tmp;
  kcg_int i;
  
  *DistanceStepIndexOut = 0;
  for (i = 0; i < 15; i++) {
    tmp = *DistanceStepIndexOut;
    if (DistanceIn < (*ASafeDistances)[i]) {
      *DistanceStepIndexOut = tmp;
    }
    else {
      *DistanceStepIndexOut = i;
    }
  }
  if ((0 <= *DistanceStepIndexOut) & (*DistanceStepIndexOut < 15)) {
    *DistanceStepOut = (*ASafeDistances)[*DistanceStepIndexOut];
  }
  else {
    *DistanceStepOut = 0.0;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

