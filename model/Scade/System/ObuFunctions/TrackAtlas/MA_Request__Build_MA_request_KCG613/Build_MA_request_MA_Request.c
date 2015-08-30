/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/MA_Request__Build_MA_request_KCG613\kcg_s2c_config.txt
** Generation date: 2015-07-28T16:22:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_request_MA_Request.h"

void Build_MA_request_reset_MA_Request(outC_Build_MA_request_MA_Request *outC)
{
}

/* MA_Request::Build_MA_request */
void Build_MA_request_MA_Request(
  inC_Build_MA_request_MA_Request *inC,
  outC_Build_MA_request_MA_Request *outC)
{
  /* MA_Request::Build_MA_request::_L26 */ kcg_bool _L26;
  /* MA_Request::Build_MA_request::_L27 */ kcg_int _L27;
  /* MA_Request::Build_MA_request::_L30 */ trainProperties_T_TrainPosition_Types_Pck _L30;
  /* MA_Request::Build_MA_request::_L31 */ NID_ENGINE _L31;
  /* MA_Request::Build_MA_request::_L32 */ Q_MARQSTREASON _L32;
  /* MA_Request::Build_MA_request::_L33 */ kcg_bool _L33;
  /* MA_Request::Build_MA_request::_L34 */ Q_MARQSTREASON _L34;
  /* MA_Request::Build_MA_request::_L35 */ Q_MARQSTREASON _L35;
  /* MA_Request::Build_MA_request::_L54 */ Radio_TrainTrack_Header_T_Radio_Types_Pkg _L54;
  /* MA_Request::Build_MA_request::_L56 */ NID_EM _L56;
  /* MA_Request::Build_MA_request::_L57 */ Q_EMERGENCYSTOP _L57;
  /* MA_Request::Build_MA_request::_L58 */ NID_TEXTMESSAGE _L58;
  /* MA_Request::Build_MA_request::_L59 */ Radio_TrainTrack_Message_T_Radio_Types_Pkg _L59;
  /* MA_Request::Build_MA_request::_L60 */ kcg_bool _L60;
  /* MA_Request::Build_MA_request::_L61 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg _L61;
  /* MA_Request::Build_MA_request::_L62 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L62;
  /* MA_Request::Build_MA_request::_L77 */ outPackets_T_Common_Types_Pkg _L77;
  /* MA_Request::Build_MA_request::_L78 */ PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L78;
  /* MA_Request::Build_MA_request::_L79 */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L79;
  /* MA_Request::Build_MA_request::_L80 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L80;
  /* MA_Request::Build_MA_request::_L81 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L81;
  /* MA_Request::Build_MA_request::_L82 */ PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg _L82;
  /* MA_Request::Build_MA_request::_L83 */ T_TRAIN _L83;
  
  _L83 = inC->t_train;
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &_L82,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cPT9_Level23_MA_Request);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &_L81,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &cPT5_TrainRunningNumber_MA_Request);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &_L80,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &cPT4_ErrorReporting_MA_Request);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &_L79,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cPT3_OBUTelephoneNumber_MA_Request);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &_L78,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cPT11_ValidateTrainData_MA_Request);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L61, &inC->packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L62, &inC->packet1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L77.p0, &_L61);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L77.p1, &_L62);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(&_L77.p3, &_L79);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L77.p4, &_L80);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L77.p5, &_L81);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &_L77.p9,
    &_L82);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(&_L77.p11, &_L78);
  _L60 = kcg_true;
  _L26 = kcg_true;
  _L27 = 132;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L30, &inC->trainProps);
  _L31 = _L30.nid_engine;
  _L33 = inC->trackDescrDeleted;
  _L35 = Q_MARQSTREASON_Track_description_deleted;
  _L34 = Q_MARQSTREASON_Start_selected_by_driver;
  if (_L33) {
    _L32 = _L35;
  }
  else {
    _L32 = _L34;
  }
  _L56 = cNid_em_MA_Request;
  _L57 = cQemergencyStop_MA_Request;
  _L58 = cNidTextMessage_MA_Request;
  _L54.present = _L26;
  _L54.nid_message = _L27;
  _L54.t_train = _L83;
  _L54.nid_engine = _L31;
  _L54.xQ_MARQSTREASON = _L32;
  _L54.xT_TRAIN = _L83;
  _L54.xNID_EM = _L56;
  _L54.xQ_EMERGENCYSTOP = _L57;
  _L54.xNID_TEXTMESSAGE = _L58;
  _L59.present = _L60;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L59.header, &_L54);
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L59.packets, &_L77);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->message132, &_L59);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_request_MA_Request.c
** Generation date: 2015-07-28T16:22:46
*************************************************************$ */

