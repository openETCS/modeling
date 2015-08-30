/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _overlapOf_2_Locations_BasicLocationFunctions_Pkg_H_
#define _overlapOf_2_Locations_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc */ loc;
  kcg_bool /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::overlap */ overlap;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* math::Max::_L1 */ _L1_1;
  kcg_int /* math::Max::_L2 */ _L2_1;
  kcg_bool /* math::Max::_L3 */ _L3_1;
  kcg_int /* math::Max::_L4 */ _L4_1;
  kcg_int /* math::Max::Ma_Output */ Ma_Output_1;
  kcg_int /* math::Max::I2 */ I2_11;
  kcg_int /* math::Max::I1 */ I1_12;
  kcg_int /* math::Min::_L21 */ _L21_1;
  kcg_int /* math::Min::_L22 */ _L22_1;
  kcg_int /* math::Min::_L24 */ _L24_1;
  kcg_bool /* math::Min::_L25 */ _L25_1;
  kcg_int /* math::Min::Mi_Output */ Mi_Output_1;
  kcg_int /* math::Min::I2 */ I2_1;
  kcg_int /* math::Min::I1 */ I1_1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L1 */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L2 */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L3 */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L5 */ _L5;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L6 */ _L6;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L9 */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L8 */ _L8;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L7 */ _L7;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L10 */ _L10;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L19 */ _L19;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L18 */ _L18;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L17 */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L16 */ _L16;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L15 */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L14 */ _L14;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L13 */ _L13;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L12 */ _L12;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L11 */ _L11;
  kcg_bool /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L20 */ _L20;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L21 */ _L21;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L22 */ _L22;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L23 */ _L23;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L24 */ _L24;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L31 */ _L31;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L32 */ _L32;
  kcg_int /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::_L33 */ _L33;
} outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::overlapOf_2_Locations */
extern void overlapOf_2_Locations_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::overlapOf_2_Locations::loc_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC);

extern void overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
  outC_overlapOf_2_Locations_BasicLocationFunctions_Pkg *outC);

#endif /* _overlapOf_2_Locations_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** overlapOf_2_Locations_BasicLocationFunctions_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

