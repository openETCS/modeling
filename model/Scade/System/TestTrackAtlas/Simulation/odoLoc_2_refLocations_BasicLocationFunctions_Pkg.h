/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _odoLoc_2_refLocations_BasicLocationFunctions_Pkg_H_
#define _odoLoc_2_refLocations_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"
#include "add_odo_2_Location_BasicLocationFunctions_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::location */ location;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg /* 1 */ _1_Context_1;
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg /* 1 */ Context_1;
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L1 */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L2 */ _L2;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L3 */ _L3;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L4 */ _L4;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L6 */ _L6;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L7 */ _L7;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L8 */ _L8;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L9 */ _L9;
  kcg_bool /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L11 */ _L11;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L10 */ _L10;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::_L12 */ _L12;
} outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::odoLoc_2_refLocations */
extern void odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refLoc_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *refLoc_2,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refLoc_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *refLoc_1,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refOdo_2 */OdometryLocations_T_Obu_BasicTypes_Pkg *refOdo_2,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::refOdo_1 */OdometryLocations_T_Obu_BasicTypes_Pkg *refOdo_1,
  /* BasicLocationFunctions_Pkg::odoLoc_2_refLocations::odo */OdometryLocations_T_Obu_BasicTypes_Pkg *odo,
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC);

extern void odoLoc_2_refLocations_reset_BasicLocationFunctions_Pkg(
  outC_odoLoc_2_refLocations_BasicLocationFunctions_Pkg *outC);

#endif /* _odoLoc_2_refLocations_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** odoLoc_2_refLocations_BasicLocationFunctions_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

