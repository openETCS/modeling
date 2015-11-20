/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _Receive_MA_RequestParameters_TA_MA_Request_H_
#define _Receive_MA_RequestParameters_TA_MA_Request_H_

#include "kcg_types.h"
#include "Read_P015_TM.h"
#include "Read_P057_TM.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_MA_Request::Receive_MA_RequestParameters::IsNew */ IsNew;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* TA_MA_Request::Receive_MA_RequestParameters::MA_RequestParams */ MA_RequestParams;
  kcg_bool /* TA_MA_Request::Receive_MA_RequestParameters::ma_received */ ma_received;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Receive_MA_RequestParameters_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::Receive_MA_RequestParameters */
extern void Receive_MA_RequestParameters_TA_MA_Request(
  /* TA_MA_Request::Receive_MA_RequestParameters::message_in */ReceivedMessage_T_Common_Types_Pkg *message_in,
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC);

extern void Receive_MA_RequestParameters_reset_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC);

#endif /* _Receive_MA_RequestParameters_TA_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_MA_RequestParameters_TA_MA_Request.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

