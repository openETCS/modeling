/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genOdometryLocations.h"

/* genOdometryLocations */
void genOdometryLocations(
  /* genOdometryLocations::trueLocation */ L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* genOdometryLocations::odometryProperties */ odometryFactors_T *odometryProperties,
  /* genOdometryLocations::odometryLocations */ OdometryLocations_T_Obu_BasicTypes_Pkg *odometryLocations)
{
  /* genOdometryLocations::_L16 */ kcg_real _L16;
  
  _L16 = (kcg_real) trueLocation;
  (*odometryLocations).o_nominal = (kcg_int)
      ((*odometryProperties).o_nominal * _L16);
  (*odometryLocations).o_min = (kcg_int) ((*odometryProperties).o_min * _L16);
  (*odometryLocations).o_max = (kcg_int) ((*odometryProperties).o_max * _L16);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** genOdometryLocations.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

