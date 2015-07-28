/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _Build_MA_request_MA_Request_H_
#define _Build_MA_request_MA_Request_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Build_MA_request::message132 */ message132;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* MA_Request::Build_MA_request::_L26 */ _L26;
  kcg_int /* MA_Request::Build_MA_request::_L27 */ _L27;
  trainProperties_T_TrainPosition_Types_Pck /* MA_Request::Build_MA_request::_L30 */ _L30;
  NID_ENGINE /* MA_Request::Build_MA_request::_L31 */ _L31;
  Q_MARQSTREASON /* MA_Request::Build_MA_request::_L32 */ _L32;
  kcg_bool /* MA_Request::Build_MA_request::_L33 */ _L33;
  Q_MARQSTREASON /* MA_Request::Build_MA_request::_L34 */ _L34;
  Q_MARQSTREASON /* MA_Request::Build_MA_request::_L35 */ _L35;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* MA_Request::Build_MA_request::_L54 */ _L54;
  NID_EM /* MA_Request::Build_MA_request::_L56 */ _L56;
  Q_EMERGENCYSTOP /* MA_Request::Build_MA_request::_L57 */ _L57;
  NID_TEXTMESSAGE /* MA_Request::Build_MA_request::_L58 */ _L58;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* MA_Request::Build_MA_request::_L59 */ _L59;
  kcg_bool /* MA_Request::Build_MA_request::_L60 */ _L60;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* MA_Request::Build_MA_request::_L61 */ _L61;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* MA_Request::Build_MA_request::_L62 */ _L62;
  outPackets_T_Common_Types_Pkg /* MA_Request::Build_MA_request::_L77 */ _L77;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* MA_Request::Build_MA_request::_L78 */ _L78;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* MA_Request::Build_MA_request::_L79 */ _L79;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* MA_Request::Build_MA_request::_L80 */ _L80;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* MA_Request::Build_MA_request::_L81 */ _L81;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg /* MA_Request::Build_MA_request::_L82 */ _L82;
  T_TRAIN /* MA_Request::Build_MA_request::_L83 */ _L83;
} outC_Build_MA_request_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* MA_Request::Build_MA_request */
extern void Build_MA_request_MA_Request(
  /* MA_Request::Build_MA_request::trackDescrDeleted */kcg_bool trackDescrDeleted,
  /* MA_Request::Build_MA_request::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* MA_Request::Build_MA_request::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* MA_Request::Build_MA_request::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* MA_Request::Build_MA_request::t_train */T_TRAIN t_train,
  outC_Build_MA_request_MA_Request *outC);

extern void Build_MA_request_reset_MA_Request(
  outC_Build_MA_request_MA_Request *outC);

#endif /* _Build_MA_request_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_request_MA_Request.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

