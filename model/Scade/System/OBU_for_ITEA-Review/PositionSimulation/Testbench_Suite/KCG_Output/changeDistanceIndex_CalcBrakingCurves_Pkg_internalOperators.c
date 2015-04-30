/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "changeDistanceIndex_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::changeDistanceIndex */
kcg_int changeDistanceIndex_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::changeDistanceIndex::isBackwardCalculation */ kcg_bool isBackwardCalculation,
  /* CalcBrakingCurves_Pkg::internalOperators::changeDistanceIndex::currentDistanceIndex */ kcg_int currentDistanceIndex)
{
  /* CalcBrakingCurves_Pkg::internalOperators::changeDistanceIndex::_L6 */ kcg_int _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::changeDistanceIndex::_L16 */ kcg_int _L16;
  /* CalcBrakingCurves_Pkg::internalOperators::changeDistanceIndex::_L19 */ kcg_int _L19;
  /* CalcBrakingCurves_Pkg::internalOperators::changeDistanceIndex::nextIndex */ kcg_int nextIndex;
  
  _L19 = cMAX_DISTANCE_STEPS_CalcBrakingCurves_types - 1;
  _L16 = currentDistanceIndex + 1;
  _L6 = currentDistanceIndex - 1;
  if (isBackwardCalculation) {
    if (_L6 >= 0) {
      nextIndex = _L6;
    }
    else {
      nextIndex = 0;
    }
  }
  else if (_L16 <= _L19) {
    nextIndex = _L16;
  }
  else {
    nextIndex = _L19;
  }
  return nextIndex;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** changeDistanceIndex_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

