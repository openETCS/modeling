/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "odoLoc_2_refLocations_BasicLocationFunctions_Pkg.h"

void odoLoc_2_refLocations_reset_BasicLocationFunctions_Pkg(
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC)
{
  /* 1 */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(&outC->_1_Context_1);
  /* 1 */ add_odo_2_Location_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
  /* 2 */ add_odo_2_Location_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
}

/* BasicLocationFunctions_Pkg::odoLoc_2_refLocations */
void odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refLoc_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *refLoc_2,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refLoc_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *refLoc_1,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refOdo_2 */OdometryLocations_T_Obu_BasicTypes_Pkg *refOdo_2,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refOdo_1 */OdometryLocations_T_Obu_BasicTypes_Pkg *refOdo_1,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::odo */OdometryLocations_T_Obu_BasicTypes_Pkg *odo,
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC)
{
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L7, refLoc_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L8, refOdo_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L9, odo);
  /* 2 */
  add_odo_2_Location_BasicLocationFunctions_Pkg(
    &outC->_L7,
    &outC->_L8,
    &outC->_L9,
    &outC->Context_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L6,
    &outC->Context_2.location);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L2, refLoc_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L3, refOdo_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&outC->_L4, odo);
  /* 1 */
  add_odo_2_Location_BasicLocationFunctions_Pkg(
    &outC->_L2,
    &outC->_L3,
    &outC->_L4,
    &outC->Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L1,
    &outC->Context_1.location);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L6,
    &outC->_L1,
    &outC->_1_Context_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L10,
    &outC->_1_Context_1.loc);
  outC->_L11 = outC->_1_Context_1.overlap;
  if (outC->_L11) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L12, &outC->_L10);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L12, &outC->_L1);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->location, &outC->_L12);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** odoLoc_2_refLocations_BasicLocationFunctions_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

