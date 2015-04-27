/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OneCycle_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::OneCycle */
void OneCycle_CalcBrakingCurves_Pkg_internalOperators(
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
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newArc */ ParabolaArc_T_CalcBrakingCurves_types *newArc)
{
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::currAcceleration */ kcg_real currAcceleration;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::newSpeedValid */ kcg_bool newSpeedValid;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L1 */ kcg_real _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L30 */ kcg_real _L30;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L34 */ kcg_real _L34;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L87 */ kcg_int _L87;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L88 */ kcg_int _L88;
  /* CalcBrakingCurves_Pkg::internalOperators::OneCycle::_L98 */ kcg_bool _L98;
  
  currAcceleration = /* 1 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      currentDistanceIndex,
      currentSpeedIndex,
      &(*inAsafe).data);
  _L87 = /* changeDistanceIndex */
    changeDistanceIndex_CalcBrakingCurves_Pkg_internalOperators(
      backwardCalculation,
      currentDistanceIndex);
  if ((0 <= _L87) & (_L87 < 15)) {
    _L30 = (*inAsafe).distance_definition[_L87];
  }
  else {
    _L30 = 0.0;
  }
  /* 1 */
  FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
    currAcceleration,
    currentDistance,
    _L30,
    currentSpeed,
    &_L1,
    &_L98);
  _L88 = /* 1 */
    changeSpeedIndex_CalcBrakingCurves_Pkg_internalOperators(
      backwardCalculation,
      currentSpeedIndex);
  if ((0 <= _L88) & (_L88 < 10)) {
    _L34 = (*inAsafe).speed_definition[_L88];
  }
  else {
    _L34 = 0.0;
  }
  newSpeedValid = _L98 & (_L1 <= _L34);
  if (newSpeedValid) {
    *newDistanceIndex = _L87;
    *newSpeedIndex = currentSpeedIndex;
    *newDistance = _L30;
    *newSpeed = _L1;
  }
  else {
    *newDistanceIndex = currentDistanceIndex;
    *newSpeedIndex = _L88;
    *newDistance = /* 1 */
      FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
        currentDistance,
        _L34,
        currentSpeed,
        currAcceleration);
    *newSpeed = _L34;
  }
  (*newArc).distance = *newDistance;
  (*newArc).speed = *newSpeed;
  (*newArc).acceleration = /* 2 */
    getAFromAsafeByIndex_CalcBrakingCurves_Pkg_Step_Function_operators(
      *newDistanceIndex,
      *newSpeedIndex,
      &(*inAsafe).data);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** OneCycle_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

