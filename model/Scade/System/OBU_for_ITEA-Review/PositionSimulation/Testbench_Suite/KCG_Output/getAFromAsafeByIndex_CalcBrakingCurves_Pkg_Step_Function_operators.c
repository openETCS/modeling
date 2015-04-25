/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.h"

/* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex */
kcg_real getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::DistanceIndex */ kcg_int DistanceIndex,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::SpeedIndex */ kcg_int SpeedIndex,
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::Asafe */ ASafe_Data_T_CalcBrakingCurves_types *Asafe)
{
  kcg_int tmp1;
  kcg_int tmp;
  /* CalcBrakingCurves_Pkg::Step_Function_operators::getAFromAsafeByIndex::outA */ kcg_real outA;
  
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
  if ((0 <= tmp1) & (tmp1 < 10) & ((0 <= tmp) & (tmp < 15))) {
    outA = (*Asafe)[tmp1][tmp];
  }
  else {
    outA = 0.0;
  }
  return outA;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

