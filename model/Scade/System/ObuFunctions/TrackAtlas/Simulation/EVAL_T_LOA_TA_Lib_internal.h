/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _EVAL_T_LOA_TA_Lib_internal_H_
#define _EVAL_T_LOA_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Lib_internal::EVAL_T_LOA::t_loa_unlimited */ t_loa_unlimited;
  T_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::EVAL_T_LOA::t_loa_out */ t_loa_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_LOA /* TA_Lib_internal::EVAL_T_LOA::_L1 */ _L1;
  kcg_int /* TA_Lib_internal::EVAL_T_LOA::_L3 */ _L3;
  kcg_bool /* TA_Lib_internal::EVAL_T_LOA::_L4 */ _L4;
  kcg_int /* TA_Lib_internal::EVAL_T_LOA::_L5 */ _L5;
  kcg_int /* TA_Lib_internal::EVAL_T_LOA::_L6 */ _L6;
  kcg_int /* TA_Lib_internal::EVAL_T_LOA::_L7 */ _L7;
  kcg_int /* TA_Lib_internal::EVAL_T_LOA::_L8 */ _L8;
  kcg_bool /* TA_Lib_internal::EVAL_T_LOA::_L9 */ _L9;
  kcg_int /* TA_Lib_internal::EVAL_T_LOA::_L10 */ _L10;
} outC_EVAL_T_LOA_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::EVAL_T_LOA */
extern void EVAL_T_LOA_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_T_LOA::t_loa */T_LOA t_loa,
  outC_EVAL_T_LOA_TA_Lib_internal *outC);

extern void EVAL_T_LOA_reset_TA_Lib_internal(
  outC_EVAL_T_LOA_TA_Lib_internal *outC);

#endif /* _EVAL_T_LOA_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_T_LOA_TA_Lib_internal.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

