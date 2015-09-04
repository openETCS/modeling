/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_Acknowledgement_TA_EmergencyStop.h"

void ES_Build_Acknowledgement_reset_TA_EmergencyStop(
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC)
{
}

/* TA_EmergencyStop::ES_Build_Acknowledgement */
void ES_Build_Acknowledgement_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_Acknowledgement::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::t_train */T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::receivedMsg16 */kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::cesAccepted */kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::updateEOA */kcg_bool updateEOA,
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC)
{
  outC->_L43 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA;
  outC->_L42 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L40 = updateEOA;
  if (outC->_L40) {
    outC->_L39 = outC->_L42;
  }
  else {
    outC->_L39 = outC->_L43;
  }
  outC->_L38 = Q_EMERGENCYSTOP_Emergency_stop;
  outC->_L36 = cesAccepted;
  if (outC->_L36) {
    outC->_L35 = outC->_L39;
  }
  else {
    outC->_L35 = outC->_L38;
  }
  outC->_L34 = receivedMsg16;
  outC->_L13 = Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted;
  if (outC->_L34) {
    outC->_L33 = outC->_L13;
  }
  else {
    outC->_L33 = outC->_L35;
  }
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L32,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cPT9_Level23_MA_Request);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L31,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &cPT5_TrainRunningNumber_MA_Request);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L30,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &cPT4_ErrorReporting_MA_Request);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L29,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cPT3_OBUTelephoneNumber_MA_Request);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L28,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cPT11_ValidateTrainData_MA_Request);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L22, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L26, packet1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p0,
    &outC->_L22);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p1,
    &outC->_L26);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p3,
    &outC->_L29);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p4,
    &outC->_L30);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L27.p5,
    &outC->_L31);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p9,
    &outC->_L32);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p11,
    &outC->_L28);
  outC->_L18 = cNID_TEXTMESSAGE_NONE_TA_EmergencyStop;
  outC->_L17 = cQ_MARQSREASON_NONE_TA_EmergencyStop;
  outC->q_emergencystop = outC->_L33;
  outC->_L14 = outC->q_emergencystop;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L11, trainProps);
  outC->_L12 = outC->_L11.nid_engine;
  outC->_L10 = 147;
  outC->_L9 = kcg_true;
  outC->_L5 = t_train;
  outC->_L4 = nid_em;
  outC->_L8.present = outC->_L9;
  outC->_L8.nid_message = outC->_L10;
  outC->_L8.t_train = outC->_L5;
  outC->_L8.nid_engine = outC->_L12;
  outC->_L8.xQ_MARQSTREASON = outC->_L17;
  outC->_L8.xT_TRAIN = outC->_L5;
  outC->_L8.xNID_EM = outC->_L4;
  outC->_L8.xQ_EMERGENCYSTOP = outC->_L14;
  outC->_L8.xNID_TEXTMESSAGE = outC->_L18;
  outC->_L7 = kcg_true;
  outC->_L6.present = outC->_L7;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L6.header,
    &outC->_L8);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L6.packets, &outC->_L27);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->message147,
    &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Build_Acknowledgement_TA_EmergencyStop.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

