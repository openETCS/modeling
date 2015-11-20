/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
kcg_bool checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_2 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_1 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::maxDelta */OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta)
{
  static kcg_int tmp;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L6 */
  static kcg_int _L6;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::isLessThanOrEqual */
  static kcg_bool isLessThanOrEqual;
  
  _L6 = (*odo_2).o_nominal - (*odo_1).o_nominal;
  if (0 <= _L6) {
    tmp = _L6;
  }
  else {
    tmp = - _L6;
  }
  isLessThanOrEqual = tmp <= (*maxDelta).o_nominal;
  return isLessThanOrEqual;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

