/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _op_RepeatReq_TA_MA_Request_H_
#define _op_RepeatReq_TA_MA_Request_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA_Request::op_RepeatReq::trigger */ trigger;
  kcg_bool /* TA_MA_Request::op_RepeatReq::exception */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* TA_MA_Request::op_RepeatReq::lastSystemTime */ lastSystemTime;
  kcg_bool /* TA_MA_Request::op_RepeatReq::setRepeater */ rem_setRepeater;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_RepeatReq_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::op_RepeatReq */
extern void op_RepeatReq_TA_MA_Request(
  /* TA_MA_Request::op_RepeatReq::tcycreq */ T_CYCLOC tcycreq,
  /* TA_MA_Request::op_RepeatReq::setRepeater */ kcg_bool setRepeater,
  /* TA_MA_Request::op_RepeatReq::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_RepeatReq_reset_TA_MA_Request(
  outC_op_RepeatReq_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_RepeatReq_init_TA_MA_Request(
  outC_op_RepeatReq_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _op_RepeatReq_TA_MA_Request_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** op_RepeatReq_TA_MA_Request.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

