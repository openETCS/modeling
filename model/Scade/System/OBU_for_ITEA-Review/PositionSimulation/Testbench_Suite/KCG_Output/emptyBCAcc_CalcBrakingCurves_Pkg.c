/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "emptyBCAcc_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::emptyBCAcc */
void emptyBCAcc_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::emptyBCAcc::Output1 */ BCAccumulator_type_CalcBrakingCurves_Pkg *Output1)
{
  kcg_int i;
  /* CalcBrakingCurves_Pkg::emptyBCAcc::_L1 */ array_real_25 _L1;
  /* CalcBrakingCurves_Pkg::emptyBCAcc::_L3 */ kcg_real _L3;
  /* CalcBrakingCurves_Pkg::emptyBCAcc::_L4 */ ParabolaCurveValid_T_CalcBrakingCurves_types _L4;
  
  (*Output1).distance = 0.0;
  (*Output1).speed = 0.0;
  (*Output1).distanceIndex = 0;
  (*Output1).speedIndex = 0;
  _L3 = - 1.0;
  for (i = 0; i < 25; i++) {
    _L1[i] = _L3;
    _L4[i] = kcg_false;
  }
  kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
    &(*Output1).BC.speeds,
    &_L1);
  kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
    &(*Output1).BC.accelerations,
    &(*Output1).BC.speeds);
  kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types(
    &(*Output1).BC.distances,
    &_L1);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(
    &(*Output1).BC.valid,
    &_L4);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** emptyBCAcc_CalcBrakingCurves_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

