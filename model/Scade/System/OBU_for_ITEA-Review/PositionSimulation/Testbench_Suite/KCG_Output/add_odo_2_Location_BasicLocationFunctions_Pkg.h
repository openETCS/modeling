/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _add_odo_2_Location_BasicLocationFunctions_Pkg_H_
#define _add_odo_2_Location_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */


/* BasicLocationFunctions_Pkg::add_odo_2_Location */
extern void add_odo_2_Location_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refLocation */ LocWithInAcc_T_Obu_BasicTypes_Pkg *refLocation,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refOdoValue */ OdometryLocations_T_Obu_BasicTypes_Pkg *refOdoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::odoValue */ OdometryLocations_T_Obu_BasicTypes_Pkg *odoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::location */ LocWithInAcc_T_Obu_BasicTypes_Pkg *location);

#endif /* _add_odo_2_Location_BasicLocationFunctions_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** add_odo_2_Location_BasicLocationFunctions_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

