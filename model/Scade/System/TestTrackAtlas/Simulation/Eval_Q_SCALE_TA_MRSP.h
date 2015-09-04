/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _Eval_Q_SCALE_TA_MRSP_H_
#define _Eval_Q_SCALE_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_MRSP::Eval_Q_SCALE::d_out */ d_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* TA_MRSP::Eval_Q_SCALE::_L1 */ _L1;
  kcg_int /* TA_MRSP::Eval_Q_SCALE::_L2 */ _L2;
  Q_SCALE /* TA_MRSP::Eval_Q_SCALE::_L3 */ _L3;
  Q_SCALE /* TA_MRSP::Eval_Q_SCALE::_L4 */ _L4;
  kcg_bool /* TA_MRSP::Eval_Q_SCALE::_L6 */ _L6;
  kcg_int /* TA_MRSP::Eval_Q_SCALE::_L7 */ _L7;
  kcg_int /* TA_MRSP::Eval_Q_SCALE::_L8 */ _L8;
  kcg_bool /* TA_MRSP::Eval_Q_SCALE::_L9 */ _L9;
  kcg_int /* TA_MRSP::Eval_Q_SCALE::_L10 */ _L10;
  kcg_int /* TA_MRSP::Eval_Q_SCALE::_L11 */ _L11;
  kcg_int /* TA_MRSP::Eval_Q_SCALE::_L12 */ _L12;
  kcg_int /* TA_MRSP::Eval_Q_SCALE::_L14 */ _L14;
} outC_Eval_Q_SCALE_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::Eval_Q_SCALE */
extern void Eval_Q_SCALE_TA_MRSP(
  /* TA_MRSP::Eval_Q_SCALE::q_scale_in */Q_SCALE q_scale_in,
  /* TA_MRSP::Eval_Q_SCALE::d_in */kcg_int d_in,
  outC_Eval_Q_SCALE_TA_MRSP *outC);

extern void Eval_Q_SCALE_reset_TA_MRSP(outC_Eval_Q_SCALE_TA_MRSP *outC);

#endif /* _Eval_Q_SCALE_TA_MRSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_Q_SCALE_TA_MRSP.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

