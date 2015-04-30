/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "odoLoc_2_refLocations_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::odoLoc_2_refLocations */
void odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refLoc_2 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *refLoc_2,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refLoc_1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *refLoc_1,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refOdo_2 */ OdometryLocations_T_Obu_BasicTypes_Pkg *refOdo_2,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refOdo_1 */ OdometryLocations_T_Obu_BasicTypes_Pkg *refOdo_1,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::odo */ OdometryLocations_T_Obu_BasicTypes_Pkg *odo,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg *location)
{
  LocWithInAcc_T_Obu_BasicTypes_Pkg tmp;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L1;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L11 */ kcg_bool _L11;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L10 */ LocWithInAcc_T_Obu_BasicTypes_Pkg _L10;
  
  /* 1 */
  add_odo_2_Location_BasicLocationFunctions_Pkg(refLoc_1, refOdo_1, odo, &_L1);
  /* 2 */
  add_odo_2_Location_BasicLocationFunctions_Pkg(refLoc_2, refOdo_2, odo, &tmp);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(&tmp, &_L1, &_L10, &_L11);
  if (_L11) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(location, &_L10);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(location, &_L1);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** odoLoc_2_refLocations_BasicLocationFunctions_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

