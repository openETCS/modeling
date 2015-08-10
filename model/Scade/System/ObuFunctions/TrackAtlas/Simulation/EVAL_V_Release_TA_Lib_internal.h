/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _EVAL_V_Release_TA_Lib_internal_H_
#define _EVAL_V_Release_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::EVAL_V_Release::V_out */ V_out;
  kcg_bool /* TA_Lib_internal::EVAL_V_Release::calc_onboard */ calc_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::EVAL_V_Release::_L1 */ _L1;
  kcg_bool /* TA_Lib_internal::EVAL_V_Release::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::EVAL_V_Release::_L3 */ _L3;
  kcg_int /* TA_Lib_internal::EVAL_V_Release::_L4 */ _L4;
  kcg_int /* TA_Lib_internal::EVAL_V_Release::_L5 */ _L5;
  kcg_int /* TA_Lib_internal::EVAL_V_Release::_L6 */ _L6;
  kcg_int /* TA_Lib_internal::EVAL_V_Release::_L7 */ _L7;
  kcg_bool /* TA_Lib_internal::EVAL_V_Release::_L9 */ _L9;
  kcg_int /* TA_Lib_internal::EVAL_V_Release::_L8 */ _L8;
  kcg_int /* TA_Lib_internal::EVAL_V_Release::_L10 */ _L10;
  kcg_int /* TA_Lib_internal::EVAL_V_Release::_L11 */ _L11;
} outC_EVAL_V_Release_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::EVAL_V_Release */
extern void EVAL_V_Release_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_V_Release::V_NV_in */kcg_int V_NV_in,
  /* TA_Lib_internal::EVAL_V_Release::V_in */kcg_int V_in,
  outC_EVAL_V_Release_TA_Lib_internal *outC);

extern void EVAL_V_Release_reset_TA_Lib_internal(
  outC_EVAL_V_Release_TA_Lib_internal *outC);

#endif /* _EVAL_V_Release_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_V_Release_TA_Lib_internal.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

