/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _EVAL_Q_OVERLAP_TA_Lib_internal_H_
#define _EVAL_Q_OVERLAP_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Lib_internal::EVAL_Q_OVERLAP::q_dp_bool */ q_dp_bool;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_OVERLAP /* TA_Lib_internal::EVAL_Q_OVERLAP::_L1 */ _L1;
  kcg_bool /* TA_Lib_internal::EVAL_Q_OVERLAP::_L2 */ _L2;
  Q_OVERLAP /* TA_Lib_internal::EVAL_Q_OVERLAP::_L3 */ _L3;
} outC_EVAL_Q_OVERLAP_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::EVAL_Q_OVERLAP */
extern void EVAL_Q_OVERLAP_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_OVERLAP::q_overlap */Q_OVERLAP q_overlap,
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC);

extern void EVAL_Q_OVERLAP_reset_TA_Lib_internal(
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC);

#endif /* _EVAL_Q_OVERLAP_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_Q_OVERLAP_TA_Lib_internal.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

