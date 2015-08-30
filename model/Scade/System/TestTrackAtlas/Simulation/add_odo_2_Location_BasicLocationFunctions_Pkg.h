/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _add_odo_2_Location_BasicLocationFunctions_Pkg_H_
#define _add_odo_2_Location_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "sub_2_odoDistances_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_odo_2_Location::location */ location;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_add_2_Distances_BasicLocationFunctions_Pkg /* 1 */ _1_Context_1;
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L1 */ _L1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L2 */ _L2;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L3 */ _L3;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L4 */ _L4;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_odo_2_Location::_L5 */ _L5;
} outC_add_odo_2_Location_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::add_odo_2_Location */
extern void add_odo_2_Location_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refLocation */LocWithInAcc_T_Obu_BasicTypes_Pkg *refLocation,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::refOdoValue */OdometryLocations_T_Obu_BasicTypes_Pkg *refOdoValue,
  /* BasicLocationFunctions_Pkg::add_odo_2_Location::odoValue */OdometryLocations_T_Obu_BasicTypes_Pkg *odoValue,
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC);

extern void add_odo_2_Location_reset_BasicLocationFunctions_Pkg(
  outC_add_odo_2_Location_BasicLocationFunctions_Pkg *outC);

#endif /* _add_odo_2_Location_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** add_odo_2_Location_BasicLocationFunctions_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

