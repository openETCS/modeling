/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _EVAL_Q_GDIR_TA_Lib_internal_H_
#define _EVAL_Q_GDIR_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  G_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::EVAL_Q_GDIR::gradient */ gradient;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_GDIR /* TA_Lib_internal::EVAL_Q_GDIR::_L1 */ _L1;
  G_A /* TA_Lib_internal::EVAL_Q_GDIR::_L2 */ _L2;
  Q_GDIR /* TA_Lib_internal::EVAL_Q_GDIR::_L3 */ _L3;
  kcg_bool /* TA_Lib_internal::EVAL_Q_GDIR::_L4 */ _L4;
  kcg_int /* TA_Lib_internal::EVAL_Q_GDIR::_L5 */ _L5;
  kcg_int /* TA_Lib_internal::EVAL_Q_GDIR::_L6 */ _L6;
  kcg_int /* TA_Lib_internal::EVAL_Q_GDIR::_L7 */ _L7;
  kcg_int /* TA_Lib_internal::EVAL_Q_GDIR::_L8 */ _L8;
} outC_EVAL_Q_GDIR_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::EVAL_Q_GDIR */
extern void EVAL_Q_GDIR_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_GDIR::q_gdir */Q_GDIR q_gdir,
  /* TA_Lib_internal::EVAL_Q_GDIR::g_a */G_A g_a,
  outC_EVAL_Q_GDIR_TA_Lib_internal *outC);

extern void EVAL_Q_GDIR_reset_TA_Lib_internal(
  outC_EVAL_Q_GDIR_TA_Lib_internal *outC);

#endif /* _EVAL_Q_GDIR_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_Q_GDIR_TA_Lib_internal.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

