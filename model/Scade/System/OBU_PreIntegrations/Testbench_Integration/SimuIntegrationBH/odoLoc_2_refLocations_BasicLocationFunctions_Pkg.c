/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
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
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L1 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L1;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L2 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L2;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L3 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L3;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L4 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L4;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L6 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L6;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L7 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L7;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L8 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L8;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L9 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L9;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L11 */
  static kcg_bool _L11;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L10 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L10;
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L12 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L12;
  
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L2, refLoc_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L3, refOdo_1);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L4, odo);
  /* 1 */ add_odo_2_Location_BasicLocationFunctions_Pkg(&_L2, &_L3, &_L4, &_L1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L7, refLoc_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L8, refOdo_2);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L9, odo);
  /* 2 */ add_odo_2_Location_BasicLocationFunctions_Pkg(&_L7, &_L8, &_L9, &_L6);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(&_L6, &_L1, &_L10, &_L11);
  /* 1 */ if (_L11) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L12, &_L10);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L12, &_L1);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(location, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** odoLoc_2_refLocations_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

