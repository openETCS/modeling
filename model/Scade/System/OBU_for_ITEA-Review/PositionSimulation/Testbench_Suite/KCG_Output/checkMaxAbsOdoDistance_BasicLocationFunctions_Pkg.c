/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
kcg_bool checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_2 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_1 */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::maxDelta */ OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta)
{
  kcg_int tmp;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L6 */ kcg_int _L6;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::isLessThanOrEqual */ kcg_bool isLessThanOrEqual;
  
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

