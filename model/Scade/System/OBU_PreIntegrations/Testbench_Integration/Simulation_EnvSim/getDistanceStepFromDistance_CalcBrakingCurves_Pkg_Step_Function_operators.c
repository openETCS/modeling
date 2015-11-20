/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance */
void getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceIn */L_internal_real_Type_SDM_Types_Pkg DistanceIn,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::ASafeDistances */ASafeDistanceDefinition_T_CalcBrakingCurves_types *ASafeDistances,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceStepOut */L_internal_real_Type_SDM_Types_Pkg *DistanceStepOut,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getDistanceStepFromDistance::DistanceStepIndexOut */kcg_int *DistanceStepIndexOut)
{
  static kcg_int tmp;
  static kcg_int i;
  
  *DistanceStepIndexOut = 0;
  for (i = 0; i < 100; i++) {
    tmp = *DistanceStepIndexOut;
    if (DistanceIn < (*ASafeDistances)[i]) {
      *DistanceStepIndexOut = tmp;
    }
    else {
      *DistanceStepIndexOut = i;
    }
  }
  if ((0 <= *DistanceStepIndexOut) & (*DistanceStepIndexOut < 100)) {
    *DistanceStepOut = (*ASafeDistances)[*DistanceStepIndexOut];
  }
  else {
    *DistanceStepOut = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getDistanceStepFromDistance_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

