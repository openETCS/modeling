/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _scaledDLINK_2_dlink_BasicLocationFunctions_Pkg_H_
#define _scaledDLINK_2_dlink_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::distance */ distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L1 */ _L1;
  D_LINK /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L2 */ _L2;
  Q_LOCACC /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L3 */ _L3;
  kcg_int /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L7 */ _L7;
  Location_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L8 */ _L8;
  Location_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L9 */ _L9;
  Location_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L10 */ _L10;
  Location_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L11 */ _L11;
  kcg_int /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L12 */ _L12;
  kcg_int /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L13 */ _L13;
  kcg_int /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L14 */ _L14;
  kcg_int /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L15 */ _L15;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L22 */ _L22;
  kcg_int /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L25 */ _L25;
} outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink */
extern void scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_scale */Q_SCALE q_scale,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::d_link */D_LINK d_link,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_locacc */Q_LOCACC q_locacc,
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC);

extern void scaledDLINK_2_dlink_reset_BasicLocationFunctions_Pkg(
  outC_scaledDLINK_2_dlink_BasicLocationFunctions_Pkg *outC);

#endif /* _scaledDLINK_2_dlink_BasicLocationFunctions_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

