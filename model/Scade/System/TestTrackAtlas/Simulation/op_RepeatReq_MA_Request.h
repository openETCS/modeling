/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _op_RepeatReq_MA_Request_H_
#define _op_RepeatReq_MA_Request_H_

#include "kcg_types.h"
#include "MOD_XCP_numeric.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MA_Request::op_RepeatReq::trigger */ trigger;
  kcg_bool /* MA_Request::op_RepeatReq::exception */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* linear::MemoryBasic::_L4 */ _L4_1;
  kcg_bool /* MA_Request::op_RepeatReq::setRepeater */ rem_setRepeater;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MOD_XCP_numeric /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* linear::MemoryBasic::_L2 */ _L2_1;
  kcg_bool /* linear::MemoryBasic::_L5 */ _L5_1;
  kcg_int /* linear::MemoryBasic::_L6 */ _L6_1;
  kcg_int /* linear::MemoryBasic::_L7 */ _L7_1;
  kcg_int /* linear::MemoryBasic::Memorized */ Memorized_1;
  kcg_bool /* linear::MemoryBasic::Write */ Write_1;
  kcg_int /* linear::MemoryBasic::Init */ Init_1;
  kcg_int /* linear::MemoryBasic::BM_Input */ BM_Input_1;
  kcg_int /* MA_Request::op_RepeatReq::_L12 */ _L12;
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::op_RepeatReq::_L9 */ _L9;
  kcg_int /* MA_Request::op_RepeatReq::_L8 */ _L8;
  kcg_bool /* MA_Request::op_RepeatReq::_L7 */ _L7;
  T_internal_Type_Obu_BasicTypes_Pkg /* MA_Request::op_RepeatReq::_L6 */ _L6;
  kcg_int /* MA_Request::op_RepeatReq::_L5 */ _L5;
  T_CYCLOC /* MA_Request::op_RepeatReq::_L4 */ _L4;
  kcg_bool /* MA_Request::op_RepeatReq::_L2 */ _L2;
  kcg_bool /* MA_Request::op_RepeatReq::_L14 */ _L14;
  kcg_int /* MA_Request::op_RepeatReq::_L13 */ _L13;
  kcg_int /* MA_Request::op_RepeatReq::_L15 */ _L15;
} outC_op_RepeatReq_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::op_RepeatReq */
extern void op_RepeatReq_MA_Request(
  /* MA_Request::op_RepeatReq::tcycreq */T_CYCLOC tcycreq,
  /* MA_Request::op_RepeatReq::setRepeater */kcg_bool setRepeater,
  /* MA_Request::op_RepeatReq::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_MA_Request *outC);

extern void op_RepeatReq_reset_MA_Request(outC_op_RepeatReq_MA_Request *outC);

#endif /* _op_RepeatReq_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_RepeatReq_MA_Request.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

