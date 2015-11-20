/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextIndex_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::nextIndex */
kcg_int nextIndex_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::upwards */kcg_bool upwards,
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::currentIndex */kcg_int currentIndex,
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::limit */kcg_int limit)
{
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L6 */
  static kcg_int _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L16 */
  static kcg_int _L16;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::_L21 */
  static kcg_int _L21;
  /* CalcBrakingCurves_Pkg::internalOperators::nextIndex::nextIndex */
  static kcg_int nextIndex;
  
  _L21 = limit - 1;
  _L16 = 1 + currentIndex;
  _L6 = currentIndex - 1;
  if (upwards) {
    if (_L21 <= _L16) {
      nextIndex = _L21;
    }
    else {
      nextIndex = _L16;
    }
  }
  else if (_L6 >= 0) {
    nextIndex = _L6;
  }
  else {
    nextIndex = 0;
  }
  return nextIndex;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** nextIndex_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

