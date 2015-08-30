/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"

void add_odo_2_Location_reset_BasicLocationFunctions_Pkg(
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC)
{
  /* 1 */ add_2_Distances_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_1);
  /* 1 */ sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
}

/* BasicLocationFunctions_Pkg::add_odo_2_Location */
void add_odo_2_Location_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refLocation */LocWithInAcc_T_Obu_BasicTypes_Pkg *refLocation,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refOdoValue */OdometryLocations_T_Obu_BasicTypes_Pkg *refOdoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::odoValue */OdometryLocations_T_Obu_BasicTypes_Pkg *odoValue,
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L3, odoValue);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L2, refOdoValue);
  /* 1 */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L3,
    &outC->_L2,
    &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L4,
    &outC->Context_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L1, refLocation);
  /* 1 */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L4,
    &outC->_L1,
    &outC->_1_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L5,
    &outC->_1_Context_1.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->location, &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** add_odo_2_Location_BasicLocationFunctions_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

