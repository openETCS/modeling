/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed */
void FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inAcceleration */ kcg_real inAcceleration,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD0 */ kcg_real inD0,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD1 */ kcg_real inD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inBeginSpeed */ kcg_real inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::outSpeedAtD1 */ kcg_real *outSpeedAtD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::valid */ kcg_bool *valid)
{
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L10 */ kcg_real _L10;
  
  _L10 = 2.0 * inAcceleration * (inD0 - inD1) + /* 1 */
    Square_mathext_real(inBeginSpeed);
  *valid = _L10 > 0.0;
  if (*valid) {
    *outSpeedAtD1 = /* 1 */ SqrtR_mathext(_L10);
  }
  else {
    *outSpeedAtD1 = 0.0;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

