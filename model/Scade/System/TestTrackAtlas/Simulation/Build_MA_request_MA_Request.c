/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_request_MA_Request.h"

void Build_MA_request_reset_MA_Request(outC_Build_MA_request_MA_Request *outC)
{
}

/* MA_Request::Build_MA_request */
void Build_MA_request_MA_Request(
  /* MA_Request::Build_MA_request::trackDescrDeleted */kcg_bool trackDescrDeleted,
  /* MA_Request::Build_MA_request::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* MA_Request::Build_MA_request::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* MA_Request::Build_MA_request::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* MA_Request::Build_MA_request::t_train */T_TRAIN t_train,
  outC_Build_MA_request_MA_Request *outC)
{
  outC->_L83 = t_train;
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L82,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cPT9_Level23_MA_Request);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L81,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &cPT5_TrainRunningNumber_MA_Request);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L80,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &cPT4_ErrorReporting_MA_Request);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L79,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cPT3_OBUTelephoneNumber_MA_Request);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L78,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cPT11_ValidateTrainData_MA_Request);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L61, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L62, packet1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L77.p0,
    &outC->_L61);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L77.p1,
    &outC->_L62);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L77.p3,
    &outC->_L79);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L77.p4,
    &outC->_L80);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L77.p5,
    &outC->_L81);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L77.p9,
    &outC->_L82);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L77.p11,
    &outC->_L78);
  outC->_L60 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L27 = 132;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L30, trainProps);
  outC->_L31 = outC->_L30.nid_engine;
  outC->_L33 = trackDescrDeleted;
  outC->_L35 = Q_MARQSTREASON_Track_description_deleted;
  outC->_L34 = Q_MARQSTREASON_Start_selected_by_driver;
  if (outC->_L33) {
    outC->_L32 = outC->_L35;
  }
  else {
    outC->_L32 = outC->_L34;
  }
  outC->_L56 = cNid_em_MA_Request;
  outC->_L57 = cQemergencyStop_MA_Request;
  outC->_L58 = cNidTextMessage_MA_Request;
  outC->_L54.present = outC->_L26;
  outC->_L54.nid_message = outC->_L27;
  outC->_L54.t_train = outC->_L83;
  outC->_L54.nid_engine = outC->_L31;
  outC->_L54.xQ_MARQSTREASON = outC->_L32;
  outC->_L54.xT_TRAIN = outC->_L83;
  outC->_L54.xNID_EM = outC->_L56;
  outC->_L54.xQ_EMERGENCYSTOP = outC->_L57;
  outC->_L54.xNID_TEXTMESSAGE = outC->_L58;
  outC->_L59.present = outC->_L60;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L59.header,
    &outC->_L54);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L59.packets, &outC->_L77);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->message132,
    &outC->_L59);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_request_MA_Request.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

