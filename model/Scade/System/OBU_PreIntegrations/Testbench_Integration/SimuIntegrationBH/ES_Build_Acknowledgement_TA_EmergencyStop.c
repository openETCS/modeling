/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_Acknowledgement_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Build_Acknowledgement */
void ES_Build_Acknowledgement_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_Acknowledgement::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::cesAccepted */ kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::updateEOA */ kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::message147 */ Radio_TrainTrack_Message_T_TM_transitional *message147)
{
  /* TA_EmergencyStop::ES_Build_Acknowledgement::q_emergencystop */
  static Q_EMERGENCYSTOP q_emergencystop;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L4 */
  static NID_EM _L4;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L5 */
  static T_TRAIN _L5;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L6 */
  static Radio_TrainTrack_Message_T_TM_transitional _L6;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L7 */
  static kcg_bool _L7;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L8 */
  static Radio_TrainTrack_Header_T_TM_transitional _L8;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L9 */
  static kcg_bool _L9;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L10 */
  static kcg_int _L10;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L11 */
  static trainProperties_T_TrainPosition_Types_Pck _L11;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L12 */
  static NID_ENGINE _L12;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L13 */
  static Q_EMERGENCYSTOP _L13;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L14 */
  static Q_EMERGENCYSTOP _L14;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L17 */
  static Q_MARQSTREASON _L17;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L18 */
  static NID_TEXTMESSAGE _L18;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L26 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L26;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L22 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L22;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L27 */
  static outPackets_T_Common_Types_Pkg _L27;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L28 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L28;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L29 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L29;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L30 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L30;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L31 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L31;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L32 */
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg _L32;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L33 */
  static Q_EMERGENCYSTOP _L33;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L34 */
  static kcg_bool _L34;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L35 */
  static Q_EMERGENCYSTOP _L35;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L36 */
  static kcg_bool _L36;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L38 */
  static Q_EMERGENCYSTOP _L38;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L39 */
  static Q_EMERGENCYSTOP _L39;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L40 */
  static kcg_bool _L40;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L42 */
  static Q_EMERGENCYSTOP _L42;
  /* TA_EmergencyStop::ES_Build_Acknowledgement::_L43 */
  static Q_EMERGENCYSTOP _L43;
  
  _L4 = nid_em;
  _L5 = t_train;
  _L7 = kcg_true;
  _L9 = kcg_true;
  _L10 = 147;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L11, trainProps);
  _L12 = _L11.nid_engine;
  _L17 = cQ_MARQSREASON_NONE_TA_EmergencyStop;
  _L34 = receivedMsg16;
  _L13 = Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted;
  _L36 = cesAccepted;
  _L40 = updateEOA;
  _L42 = Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  _L43 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA;
  /* 3 */ if (_L40) {
    _L39 = _L42;
  }
  else {
    _L39 = _L43;
  }
  _L38 = Q_EMERGENCYSTOP_Emergency_stop;
  /* 2 */ if (_L36) {
    _L35 = _L39;
  }
  else {
    _L35 = _L38;
  }
  /* 1 */ if (_L34) {
    _L33 = _L13;
  }
  else {
    _L33 = _L35;
  }
  q_emergencystop = _L33;
  _L14 = q_emergencystop;
  _L18 = cNID_TEXTMESSAGE_NONE_TA_EmergencyStop;
  _L8.present = _L9;
  _L8.nid_message = _L10;
  _L8.t_train = _L5;
  _L8.nid_engine = _L12;
  _L8.xQ_MARQSTREASON = _L17;
  _L8.xT_TRAIN = _L5;
  _L8.xNID_EM = _L4;
  _L8.xQ_EMERGENCYSTOP = _L14;
  _L8.xNID_TEXTMESSAGE = _L18;
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L22, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L26, packet1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &_L29,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cPT3_OBUTelephoneNumber_MA_Request);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &_L30,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &cPT4_ErrorReporting_MA_Request);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &_L31,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &cPT5_TrainRunningNumber_MA_Request);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &_L32,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cPT9_Level23_MA_Request);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &_L28,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cPT11_ValidateTrainData_MA_Request);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L27.p0, &_L22);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L27.p1, &_L26);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(&_L27.p3, &_L29);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L27.p4, &_L30);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L27.p5, &_L31);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &_L27.p9,
    &_L32);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(&_L27.p11, &_L28);
  _L6.present = _L7;
  kcg_copy_Radio_TrainTrack_Header_T_TM_transitional(&_L6.header, &_L8);
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L6.packets, &_L27);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(message147, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Build_Acknowledgement_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

