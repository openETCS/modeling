/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition */
kcg_real FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginDistance */ kcg_real inBeginDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inEndSpeed */ kcg_real inEndSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginSpeed */ kcg_real inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inAcceleration */ kcg_real inAcceleration)
{
  kcg_real tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L20 */ kcg_bool _L20;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::outD1 */ kcg_real outD1;
  
  _L20 = inAcceleration != 0.0;
  if (_L20) {
    tmp = (/* 2 */ Square_mathext_real(inEndSpeed) - /* 1 */
        Square_mathext_real(inBeginSpeed)) / (2.0 * inAcceleration);
  }
  else {
    tmp = 0.0;
  }
  outD1 = inBeginDistance - tmp;
  return outD1;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

