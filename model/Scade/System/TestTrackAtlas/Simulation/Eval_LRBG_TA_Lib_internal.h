/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _Eval_LRBG_TA_Lib_internal_H_
#define _Eval_LRBG_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_Lib_internal::Eval_LRBG::LRBG */ LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TA_Lib_internal::Eval_LRBG::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_BG /* TA_Lib_internal::Eval_LRBG::IfBlock1::then::_L2 */ _L2_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Lib_internal::Eval_LRBG::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TA_Lib_internal::Eval_LRBG::IfBlock1::else */ else_clock_IfBlock1;
  kcg_int /* TA_Lib_internal::Eval_LRBG::IfBlock1::else::else::_L1 */ _L13_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Lib_internal::Eval_LRBG::IfBlock1::else::then::_L2 */ _L22_IfBlock1;
  NID_LRBG /* TA_Lib_internal::Eval_LRBG::IfBlock1::else::then::_L1 */ _L11_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* TA_Lib_internal::Eval_LRBG::source */ source;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Lib_internal::Eval_LRBG::_L1 */ _L1;
  MsgSource_T_Common_Types_Pkg /* TA_Lib_internal::Eval_LRBG::_L14 */ _L14;
} outC_Eval_LRBG_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Eval_LRBG */
extern void Eval_LRBG_TA_Lib_internal(
  /* TA_Lib_internal::Eval_LRBG::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  outC_Eval_LRBG_TA_Lib_internal *outC);

extern void Eval_LRBG_reset_TA_Lib_internal(
  outC_Eval_LRBG_TA_Lib_internal *outC);

#endif /* _Eval_LRBG_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_LRBG_TA_Lib_internal.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

