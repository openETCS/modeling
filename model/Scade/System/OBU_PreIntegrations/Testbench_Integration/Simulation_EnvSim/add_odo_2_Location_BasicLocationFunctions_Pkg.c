/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::add_odo_2_Location */
void add_odo_2_Location_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refLocation */LocWithInAcc_T_Obu_BasicTypes_Pkg *refLocation,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refOdoValue */OdometryLocations_T_Obu_BasicTypes_Pkg *refOdoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::odoValue */OdometryLocations_T_Obu_BasicTypes_Pkg *odoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::location */LocWithInAcc_T_Obu_BasicTypes_Pkg *location)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  
  /* 1 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(odoValue, refOdoValue, &tmp);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(&tmp, refLocation, location);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** add_odo_2_Location_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

