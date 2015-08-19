/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/MA_Request__Build_MA_request_KCG613\kcg_s2c_config.txt
** Generation date: 2015-07-28T16:22:46
*************************************************************$ */
#ifndef _Build_MA_request_MA_Request_H_
#define _Build_MA_request_MA_Request_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* MA_Request::Build_MA_request::trackDescrDeleted */ trackDescrDeleted;
  trainProperties_T_TrainPosition_Types_Pck /* MA_Request::Build_MA_request::trainProps */ trainProps;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* MA_Request::Build_MA_request::packet0 */ packet0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* MA_Request::Build_MA_request::packet1 */ packet1;
  T_TRAIN /* MA_Request::Build_MA_request::t_train */ t_train;
} inC_Build_MA_request_MA_Request;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Build_MA_request::message132 */ message132;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MA_request_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::Build_MA_request */
extern void Build_MA_request_MA_Request(
  inC_Build_MA_request_MA_Request *inC,
  outC_Build_MA_request_MA_Request *outC);

extern void Build_MA_request_reset_MA_Request(
  outC_Build_MA_request_MA_Request *outC);

#endif /* _Build_MA_request_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_request_MA_Request.h
** Generation date: 2015-07-28T16:22:46
*************************************************************$ */

