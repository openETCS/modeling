/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _sub_2_odoDistances_BasicLocationFunctions_Pkg_H_
#define _sub_2_odoDistances_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::distance */ distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L1 */ _L1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L2 */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L3 */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L4 */ _L4;
  kcg_int /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L5 */ _L5;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L17 */ _L17;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L16 */ _L16;
  kcg_int /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L15 */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L14 */ _L14;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L13 */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L22 */ _L22;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L21 */ _L21;
  kcg_int /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L20 */ _L20;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L19 */ _L19;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L18 */ _L18;
  kcg_int /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L23 */ _L23;
  kcg_int /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L24 */ _L24;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_odoDistances::_L31 */ _L31;
} outC_sub_2_odoDistances_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::sub_2_odoDistances */
extern void sub_2_odoDistances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_2 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::sub_2_odoDistances::odo_1 */OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg *outC);

extern void sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
  outC_sub_2_odoDistances_BasicLocationFunctions_Pkg *outC);

#endif /* _sub_2_odoDistances_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** sub_2_odoDistances_BasicLocationFunctions_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

