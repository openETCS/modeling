/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::add_odo_2_Location */
void add_odo_2_Location_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refLocation */ LocWithInAcc_T_Obu_BasicTypes_Pkg *refLocation,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refOdoValue */ OdometryLocations_T_Obu_BasicTypes_Pkg *refOdoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::odoValue */ OdometryLocations_T_Obu_BasicTypes_Pkg *odoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg *location)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  
  /* 1 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(odoValue, refOdoValue, &tmp);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(&tmp, refLocation, location);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** add_odo_2_Location_BasicLocationFunctions_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

