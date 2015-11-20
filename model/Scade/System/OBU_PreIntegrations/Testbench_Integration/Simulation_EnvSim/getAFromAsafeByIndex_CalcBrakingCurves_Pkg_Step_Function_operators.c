/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex */
A_internal_real_Type_SDM_Types_Pkg getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::DistanceIndex */kcg_int DistanceIndex,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::SpeedIndex */kcg_int SpeedIndex,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::Asafe */ASafe_Data_T_CalcBrakingCurves_types *Asafe)
{
  static kcg_int tmp1;
  static kcg_int tmp;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::outA */
  static A_internal_real_Type_SDM_Types_Pkg outA;
  
  if (SpeedIndex <= cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types) {
    tmp1 = SpeedIndex;
  }
  else {
    tmp1 = cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types;
  }
  if (DistanceIndex <= cMAX_DISTANCE_STEPS_CalcBrakingCurves_types) {
    tmp = DistanceIndex;
  }
  else {
    tmp = cMAX_DISTANCE_STEPS_CalcBrakingCurves_types;
  }
  if ((0 <= tmp1) & (tmp1 < 14) & ((0 <= tmp) & (tmp < 100))) {
    outA = (*Asafe)[tmp1][tmp];
  }
  else {
    outA = 0.0;
  }
  return outA;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

