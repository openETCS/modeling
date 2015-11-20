/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _Build_MA_request_TA_MA_Request_H_
#define _Build_MA_request_TA_MA_Request_H_

#include "kcg_types.h"
#include "C_legacy_P001_TM_conversions_TrainToTrack.h"
#include "C_legacy_P000_TM_conversions_TrainToTrack.h"
#include "Send_M132_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TA_MA_Request::Build_MA_request::bus_out */ bus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M132_TM_radio_messages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MA_request_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::Build_MA_request */
extern void Build_MA_request_TA_MA_Request(
  /* TA_MA_Request::Build_MA_request::trackDescrDeleted */kcg_bool trackDescrDeleted,
  /* TA_MA_Request::Build_MA_request::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_MA_Request::Build_MA_request::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_MA_Request::Build_MA_request::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_MA_Request::Build_MA_request::t_train */T_TRAIN t_train,
  /* TA_MA_Request::Build_MA_request::bus_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Build_MA_request_TA_MA_Request *outC);

extern void Build_MA_request_reset_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC);

#endif /* _Build_MA_request_TA_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_request_TA_MA_Request.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

