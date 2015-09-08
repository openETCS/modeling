/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _Eval_Q_Front_TA_Lib_internal_H_
#define _Eval_Q_Front_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Lib_internal::Eval_Q_Front::add_train_length */ add_train_length;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TA_Lib_internal::Eval_Q_Front::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TA_Lib_internal::Eval_Q_Front::IfBlock1::else::_L1 */ _L1_IfBlock1;
  kcg_bool /* TA_Lib_internal::Eval_Q_Front::IfBlock1 */ IfBlock1_clock;
  Q_FRONT /* TA_Lib_internal::Eval_Q_Front::q_front_in */ q_front_in;
  Q_FRONT /* TA_Lib_internal::Eval_Q_Front::_L1 */ _L1;
} outC_Eval_Q_Front_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Eval_Q_Front */
extern void Eval_Q_Front_TA_Lib_internal(
  /* TA_Lib_internal::Eval_Q_Front::q_front */Q_FRONT q_front,
  outC_Eval_Q_Front_TA_Lib_internal *outC);

extern void Eval_Q_Front_reset_TA_Lib_internal(
  outC_Eval_Q_Front_TA_Lib_internal *outC);

#endif /* _Eval_Q_Front_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_Q_Front_TA_Lib_internal.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

