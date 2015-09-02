/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _Receive_MA_RequestParameters_MA_Request_H_
#define _Receive_MA_RequestParameters_MA_Request_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "Read_P057_TM.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MA_Request::Receive_MA_RequestParameters::IsNew */ IsNew;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* MA_Request::Receive_MA_RequestParameters::MA_RequestParams */ MA_RequestParams;
  kcg_bool /* MA_Request::Receive_MA_RequestParameters::ma_received */ ma_received;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  struct__9768 /* linear::MemoryBasic::_L4 */ _L4_1;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P015_TM /* 1 */ _1_Context_1;
  outC_Read_P057_TM /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  struct__9768 /* linear::MemoryBasic::_L2 */ _L2_1;
  kcg_bool /* linear::MemoryBasic::_L5 */ _L5_1;
  struct__9768 /* linear::MemoryBasic::_L6 */ _L6_1;
  struct__9768 /* linear::MemoryBasic::_L7 */ _L7_1;
  struct__9768 /* linear::MemoryBasic::Memorized */ Memorized_1;
  kcg_bool /* linear::MemoryBasic::Write */ Write_1;
  struct__9768 /* linear::MemoryBasic::Init */ Init_1;
  struct__9768 /* linear::MemoryBasic::BM_Input */ BM_Input_1;
  kcg_bool /* MA_Request::Receive_MA_RequestParameters::present */ present;
  ReceivedMessage_T_Common_Types_Pkg /* MA_Request::Receive_MA_RequestParameters::_L1 */ _L1;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* MA_Request::Receive_MA_RequestParameters::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* MA_Request::Receive_MA_RequestParameters::_L6 */ _L6;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* MA_Request::Receive_MA_RequestParameters::_L8 */ _L8;
  kcg_bool /* MA_Request::Receive_MA_RequestParameters::_L7 */ _L7;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* MA_Request::Receive_MA_RequestParameters::_L3 */ _L3;
  kcg_bool /* MA_Request::Receive_MA_RequestParameters::_L9 */ _L9;
  P015_OBU_T_TM /* MA_Request::Receive_MA_RequestParameters::_L11 */ _L11;
  kcg_bool /* MA_Request::Receive_MA_RequestParameters::_L10 */ _L10;
} outC_Receive_MA_RequestParameters_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::Receive_MA_RequestParameters */
extern void Receive_MA_RequestParameters_MA_Request(
  /* MA_Request::Receive_MA_RequestParameters::message_in */ReceivedMessage_T_Common_Types_Pkg *message_in,
  outC_Receive_MA_RequestParameters_MA_Request *outC);

extern void Receive_MA_RequestParameters_reset_MA_Request(
  outC_Receive_MA_RequestParameters_MA_Request *outC);

#endif /* _Receive_MA_RequestParameters_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_MA_RequestParameters_MA_Request.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

