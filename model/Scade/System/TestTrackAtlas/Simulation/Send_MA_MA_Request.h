/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _Send_MA_MA_Request_H_
#define _Send_MA_MA_Request_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Send_MA::message_out */ message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Send_MA::_L1 */ _L1;
} outC_Send_MA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::Send_MA */
extern void Send_MA_MA_Request(
  /* MA_Request::Send_MA::msg132 */Radio_TrainTrack_Message_T_Radio_Types_Pkg *msg132,
  outC_Send_MA_MA_Request *outC);

extern void Send_MA_reset_MA_Request(outC_Send_MA_MA_Request *outC);

#endif /* _Send_MA_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_MA_MA_Request.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

