/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _sub_2_distances_BasicLocationFunctions_Pkg_H_
#define _sub_2_distances_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::distance */ distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L1 */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L2 */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L3 */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L4 */ _L4;
  kcg_int /* BasicLocationFunctions_Pkg::sub_2_distances::_L5 */ _L5;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L17 */ _L17;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L16 */ _L16;
  kcg_int /* BasicLocationFunctions_Pkg::sub_2_distances::_L15 */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L14 */ _L14;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L13 */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L22 */ _L22;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L21 */ _L21;
  kcg_int /* BasicLocationFunctions_Pkg::sub_2_distances::_L20 */ _L20;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L19 */ _L19;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L18 */ _L18;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::sub_2_distances::_L23 */ _L23;
} outC_sub_2_distances_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::sub_2_distances */
extern void sub_2_distances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::sub_2_distances::loc_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::sub_2_distances::loc_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC);

extern void sub_2_distances_reset_BasicLocationFunctions_Pkg(
  outC_sub_2_distances_BasicLocationFunctions_Pkg *outC);

#endif /* _sub_2_distances_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** sub_2_distances_BasicLocationFunctions_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

