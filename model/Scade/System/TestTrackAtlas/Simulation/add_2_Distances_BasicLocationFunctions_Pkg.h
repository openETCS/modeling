/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _add_2_Distances_BasicLocationFunctions_Pkg_H_
#define _add_2_Distances_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::distance */ distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L1 */ _L1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L2 */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L3 */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L4 */ _L4;
  kcg_int /* BasicLocationFunctions_Pkg::add_2_Distances::_L5 */ _L5;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L17 */ _L17;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L16 */ _L16;
  kcg_int /* BasicLocationFunctions_Pkg::add_2_Distances::_L15 */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L14 */ _L14;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L13 */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L22 */ _L22;
  L_internal_Type_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L21 */ _L21;
  kcg_int /* BasicLocationFunctions_Pkg::add_2_Distances::_L20 */ _L20;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L19 */ _L19;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L18 */ _L18;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::add_2_Distances::_L23 */ _L23;
} outC_add_2_Distances_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::add_2_Distances */
extern void add_2_Distances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_2 */LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_2,
  /* BasicLocationFunctions_Pkg::add_2_Distances::dist_1 */LocWithInAcc_T_Obu_BasicTypes_Pkg *dist_1,
  outC_add_2_Distances_BasicLocationFunctions_Pkg *outC);

extern void add_2_Distances_reset_BasicLocationFunctions_Pkg(
  outC_add_2_Distances_BasicLocationFunctions_Pkg *outC);

#endif /* _add_2_Distances_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** add_2_Distances_BasicLocationFunctions_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

