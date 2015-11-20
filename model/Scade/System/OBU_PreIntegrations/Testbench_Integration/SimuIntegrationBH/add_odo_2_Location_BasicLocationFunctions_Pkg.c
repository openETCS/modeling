/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L1 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L1;
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L2 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L2;
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L3 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L3;
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L4 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L4;
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L5 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L5;
  
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L1, refLocation);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L2, refOdoValue);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L3, odoValue);
  /* 1 */ sub_2_odoDistances_BasicLocationFunctions_Pkg(&_L3, &_L2, &_L4);
  /* 1 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L4, &_L1, &_L5);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(location, &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** add_odo_2_Location_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

