/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainData_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void trainData_init_trainData_pkg(outC_trainData_trainData_pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->trainDataStatus.valid = kcg_true;
  outC->trainDataStatus.validatedByDriver = kcg_true;
  outC->trainDataStatus.RBCsystemVersionOnboard = kcg_true;
  outC->trainDataStatus.validatedbyRBC = kcg_true;
  outC->trainDataStatus.waitingForRBCResponse = kcg_true;
  outC->trainDataStatus.driverIsModificationTrainData = kcg_true;
  outC->trainDataStatus.timeStampValidateToRBC = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->outMessageBus[i1].Message.valid = kcg_true;
    outC->outMessageBus[i1].Message.nid_message = 0;
    outC->outMessageBus[i1].Message.l_message = 0;
    outC->outMessageBus[i1].Message.t_train = 0;
    outC->outMessageBus[i1].Message.nid_engine = 0;
    outC->outMessageBus[i1].Message.field1 = 0;
    outC->outMessageBus[i1].Message.field2 = 0;
    outC->outMessageBus[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->outMessageBus[i1].OptionalPackets[i] = 0;
    }
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = 0;
  outC->triggerFromTrainData.brakeTrigger = kcg_true;
  outC->triggerFromTrainData.driverRequestModify = kcg_true;
  outC->triggerFromTrainData.shortenLocationBasedInformation = kcg_true;
  outC->triggerFromTrainData.deleteMA = kcg_true;
  outC->triggerFromTrainData.trainLengthIncreased = kcg_true;
  outC->actualTrainData.valid = kcg_true;
  outC->actualTrainData.acknowledgedByDriver = kcg_true;
  outC->actualTrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->actualTrainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->actualTrainData.trainLength = 0;
  outC->actualTrainData.brakePerctage = 0;
  outC->actualTrainData.maxTrainSpeed = 0;
  outC->actualTrainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->actualTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->actualTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->actualTrainData.axleNumber = 0;
  outC->actualTrainData.numberNationalSystems = 0;
  for (i2 = 0; i2 < 5; i2++) {
    outC->actualTrainData.nationSystems[i2] = 0;
  }
  outC->actualTrainData.numberTractionSystems = 0;
  for (i3 = 0; i3 < 4; i3++) {
    outC->actualTrainData.tractionSystem[i3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->actualTrainData.tractionSystem[i3].nid_ctraction = 0;
  }
  /* 1 */ sendAcknowledgementRBC_init_trainData_pkg(&outC->_2_Context_1);
  /* 1 */ sendValidTrainDataRBC_init_trainData_pkg(&outC->_1_Context_1);
  /* 1 */ trainDataStorage_init_trainData_pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void trainData_reset_trainData_pkg(outC_trainData_trainData_pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ sendAcknowledgementRBC_reset_trainData_pkg(&outC->_2_Context_1);
  /* 1 */ sendValidTrainDataRBC_reset_trainData_pkg(&outC->_1_Context_1);
  /* 1 */ trainDataStorage_reset_trainData_pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::trainData */
void trainData_trainData_pkg(
  /* trainData_pkg::trainData::reset */ kcg_bool reset,
  /* trainData_pkg::trainData::trainDatafromTIU */ trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainData::trainDatafromDriver */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::trainData::trainDataAckfromDriver */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::trainData::trackMessages */ ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::trainData::eventsForTrainData */ trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  /* trainData_pkg::trainData::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::trainData::p0_positionReport */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::trainData::p1_positionReport */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::trainData::inMessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *inMessageBus,
  /* trainData_pkg::trainData::inVersion */ M_VERSION inVersion,
  /* trainData_pkg::trainData::t_train */ T_TRAIN t_train,
  outC_trainData_trainData_pkg *outC)
{
  /* trainData_pkg::trainData */
  static trainDataStatus_T_trainData_Types_pkg _4_op_call;
  /* trainData_pkg::trainData */
  static kcg_bool _2_op_call;
  /* trainData_pkg::trainData */
  static kcg_bool _3_op_call;
  /* trainData_pkg::trainData */
  static kcg_bool op_call;
  /* trainData_pkg::trainData */
  static kcg_bool _1_op_call;
  /* trainData_pkg::trainData::trainDataStatus */
  static trainDataStatus_T_trainData_Types_pkg _6_trainDataStatus;
  /* trainData_pkg::trainData::outMessageBus */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _5_outMessageBus;
  /* trainData_pkg::trainData::IfBlock1::then::_L11 */
  static M_VERSION _L11_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::then::_L10 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L10_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::then::_L9 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L9_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::then::_L8 */
  static trainDataStatus_T_trainData_Types_pkg _L8_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::then::_L7 */
  static NID_ENGINE _L7_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::then::_L6 */
  static T_TRAIN _L6_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::then::_L5 */
  static ReceivedMessage_T_Common_Types_Pkg _L5_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::then::_L3 */
  static T_TRAIN _L3_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::then::_L2 */
  static trainDataStatus_T_trainData_Types_pkg _L2_IfBlock1;
  /* trainData_pkg::trainData::trainDataStatus */
  static trainDataStatus_T_trainData_Types_pkg trainDataStatus;
  /* trainData_pkg::trainData::outMessageBus */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus outMessageBus;
  /* trainData_pkg::trainData::IfBlock1::else */
  static kcg_bool _17_else_clock_IfBlock1;
  /* trainData_pkg::trainData::trainDataStatus */
  static trainDataStatus_T_trainData_Types_pkg _14_trainDataStatus;
  /* trainData_pkg::trainData::outMessageBus */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _13_outMessageBus;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L14 */
  static M_VERSION _L14_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L13 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L13_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L12 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L12_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L11 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L1122_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L10 */
  static trainDataStatus_T_trainData_Types_pkg _L1023_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L9 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L924_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L8 */
  static trainData_T_TIU_Types_Pkg _L825_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L2 */
  static trainDataStatus_T_trainData_Types_pkg _L226_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L3 */
  static T_TRAIN _L327_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::then::_L7 */
  static NID_ENGINE _L728_IfBlock1;
  /* trainData_pkg::trainData::trainDataStatus */
  static trainDataStatus_T_trainData_Types_pkg _12_trainDataStatus;
  /* trainData_pkg::trainData::outMessageBus */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _11_outMessageBus;
  /* trainData_pkg::trainData::IfBlock1::else::else::else::_L4 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L429_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else::else::_L3 */
  static trainDataStatus_T_trainData_Types_pkg _L330_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* trainData_pkg::trainData::outMessageBus */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _7_outMessageBus;
  /* trainData_pkg::trainData::trainDataStatus */
  static trainDataStatus_T_trainData_Types_pkg _8_trainDataStatus;
  /* trainData_pkg::trainData::IfBlock1::else::then::_L1 */
  static trainDataStatus_T_trainData_Types_pkg _L1_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::then::_L5 */
  static kcg_bool _L521_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::then::_L4 */
  static trainDataStatus_T_trainData_Types_pkg _L4_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::then::_L7 */
  static trainDataStatus_T_trainData_Types_pkg _L720_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::then::_L6 */
  static kcg_bool _L619_IfBlock1;
  /* trainData_pkg::trainData::IfBlock1::else::then::_L9 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L918_IfBlock1;
  /* trainData_pkg::trainData::outMessageBus */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _9_outMessageBus;
  /* trainData_pkg::trainData::trainDataStatus */
  static trainDataStatus_T_trainData_Types_pkg _10_trainDataStatus;
  /* trainData_pkg::trainData */
  static kcg_bool ck_every;
  /* trainData_pkg::trainData */
  static kcg_bool _15_ck_every;
  /* trainData_pkg::trainData */
  static kcg_bool _16_ck_every;
  /* trainData_pkg::trainData::trainDataStatus */
  static trainDataStatus_T_trainData_Types_pkg last_trainDataStatus;
  /* trainData_pkg::trainData::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* trainData_pkg::trainData::ackReceived */
  static kcg_bool ackReceived;
  /* trainData_pkg::trainData::sendValidateToRBC */
  static kcg_bool sendValidateToRBC;
  /* trainData_pkg::trainData::trainData */
  static trainData_T_TIU_Types_Pkg trainData;
  /* trainData_pkg::trainData::statusForOutput */
  static trainDataStatus_T_trainData_Types_pkg statusForOutput;
  /* trainData_pkg::trainData::ackRequested */
  static kcg_bool ackRequested;
  /* trainData_pkg::trainData::statusAfterCheck */
  static trainDataStatus_T_trainData_Types_pkg statusAfterCheck;
  /* trainData_pkg::trainData::_L4 */
  static ReceivedMessage_T_Common_Types_Pkg _L4;
  /* trainData_pkg::trainData::_L18 */
  static trainDataStatus_T_trainData_Types_pkg _L18;
  /* trainData_pkg::trainData::_L19 */
  static kcg_bool _L19;
  /* trainData_pkg::trainData::_L20 */
  static kcg_bool _L20;
  /* trainData_pkg::trainData::_L21 */
  static kcg_bool _L21;
  /* trainData_pkg::trainData::_L23 */
  static kcg_bool _L23;
  /* trainData_pkg::trainData::_L24 */
  static kcg_bool _L24;
  /* trainData_pkg::trainData::_L25 */
  static kcg_bool _L25;
  /* trainData_pkg::trainData::_L27 */
  static kcg_bool _L27;
  /* trainData_pkg::trainData::_L28 */
  static trainData_Events_T_trainData_Types_pkg _L28;
  /* trainData_pkg::trainData::_L29 */
  static trainData_Trigger_T_trainData_Types_pkg _L29;
  /* trainData_pkg::trainData::_L31 */
  static trainData_T_TIU_Types_Pkg _L31;
  /* trainData_pkg::trainData::_L30 */
  static trainDataStatus_T_trainData_Types_pkg _L30;
  /* trainData_pkg::trainData::_L32 */
  static kcg_bool _L32;
  /* trainData_pkg::trainData::_L33 */
  static trainData_T_TIU_Types_Pkg _L33;
  /* trainData_pkg::trainData::_L34 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L34;
  /* trainData_pkg::trainData::_L36 */
  static trainDataStatus_T_trainData_Types_pkg _L36;
  /* trainData_pkg::trainData::_L37 */
  static trainData_Events_T_trainData_Types_pkg _L37;
  /* trainData_pkg::trainData::_L38 */
  static trainData_T_TIU_Types_Pkg _L38;
  /* trainData_pkg::trainData::_L39 */
  static trainDataStatus_T_trainData_Types_pkg _L39;
  /* trainData_pkg::trainData::_L40 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L40;
  /* trainData_pkg::trainData::_L22 */
  static kcg_bool _L22;
  /* trainData_pkg::trainData::_L42 */
  static kcg_bool _L42;
  /* trainData_pkg::trainData::_L45 */
  static trainDataStatus_T_trainData_Types_pkg _L45;
  /* trainData_pkg::trainData::_L46 */
  static kcg_bool _L46;
  /* trainData_pkg::trainData::_L47 */
  static trainDataStatus_T_trainData_Types_pkg _L47;
  /* trainData_pkg::trainData::_L48 */
  static kcg_bool _L48;
  /* trainData_pkg::trainData::_L49 */
  static kcg_bool _L49;
  /* trainData_pkg::trainData::_L56 */
  static ReceivedMessage_T_Common_Types_Pkg _L56;
  /* trainData_pkg::trainData::_L54 */
  static kcg_bool _L54;
  /* trainData_pkg::trainData::_L55 */
  static kcg_bool _L55;
  /* trainData_pkg::trainData::_L52 */
  static kcg_bool _L52;
  /* trainData_pkg::trainData::_L51 */
  static trainDataStatus_T_trainData_Types_pkg _L51;
  /* trainData_pkg::trainData::_L50 */
  static kcg_bool _L50;
  /* trainData_pkg::trainData::_L57 */
  static kcg_bool _L57;
  /* trainData_pkg::trainData::_L58 */
  static kcg_bool _L58;
  /* trainData_pkg::trainData::_L59 */
  static kcg_bool _L59;
  /* trainData_pkg::trainData::_L60 */
  static kcg_bool _L60;
  /* trainData_pkg::trainData::_L63 */
  static ReceivedMessage_T_Common_Types_Pkg _L63;
  /* trainData_pkg::trainData::_L62 */
  static trainDataStatus_T_trainData_Types_pkg _L62;
  /* trainData_pkg::trainData::_L61 */
  static kcg_bool _L61;
  /* trainData_pkg::trainData::_L66 */
  static kcg_bool _L66;
  /* trainData_pkg::trainData::_L68 */
  static trainDataStatus_T_trainData_Types_pkg _L68;
  /* trainData_pkg::trainData::_L70 */
  static kcg_bool _L70;
  
  /* last_init_ck_trainDataStatus */ if (outC->init) {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &last_trainDataStatus,
      (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &last_trainDataStatus,
      &outC->trainDataStatus);
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L62, &last_trainDataStatus);
  _L61 = _L62.RBCsystemVersionOnboard;
  _L66 = !_L61;
  ck_every = _L66;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L63, trackMessages);
  /* ck_trainData */ if (ck_every) {
    /* 1 */ checkRBCSystemVersion_trainData_pkg(&_L63, &_L62, &_4_op_call);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L68, &_4_op_call);
  }
  else {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L68, &_L62);
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&statusAfterCheck, &_L68);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L51, &statusAfterCheck);
  _L50 = _L51.validatedbyRBC;
  _15_ck_every = _L50;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L56, trackMessages);
  /* ck_trainData */ if (_15_ck_every) {
    /* 1 */
    checkAcknowledgmentGeneral_trainData_pkg(&_L56, &_3_op_call, &_2_op_call);
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L45, &last_trainDataStatus);
  _L46 = _L45.waitingForRBCResponse;
  _16_ck_every = _L46;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L4, trackMessages);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L47, &statusAfterCheck);
  /* ck_trainData */ if (_16_ck_every) {
    /* 1 */
    checkRadioMessages_trainData_pkg(&_L4, &_L47, &_1_op_call, &op_call);
  }
  _L48 = kcg_false;
  /* ck_trainData */ if (_16_ck_every) {
    _L42 = _1_op_call;
  }
  else {
    _L42 = _L48;
  }
  _L52 = kcg_false;
  /* ck_trainData */ if (_15_ck_every) {
    _L54 = _3_op_call;
  }
  else {
    _L54 = _L52;
  }
  _L57 = _L42 | _L54;
  ackReceived = _L57;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L18, &statusAfterCheck);
  _L19 = _L18.valid;
  _L20 = _L18.validatedByDriver;
  _L21 = _L18.validatedbyRBC;
  _L22 = !_L21;
  _L24 = _L18.waitingForRBCResponse;
  _L25 = !_L24;
  _L70 = _L18.RBCsystemVersionOnboard;
  kcg_copy_trainData_Events_T_trainData_Types_pkg(&_L28, eventsForTrainData);
  _L27 = _L28.communicationSessionEstablished;
  _L59 = _L28.MoRCreadyFlag;
  _L60 = _L27 & _L59;
  _L23 = _L19 & _L20 & _L22 & _L25 & _L70 & _L60;
  sendValidateToRBC = _L23;
  /* ck_trainData */ if (_16_ck_every) {
    _L49 = op_call;
  }
  else {
    _L49 = _L48;
  }
  /* ck_trainData */ if (_15_ck_every) {
    _L55 = _2_op_call;
  }
  else {
    _L55 = _L52;
  }
  _L58 = _L49 | _L55;
  ackRequested = _L58;
  IfBlock1_clock = ackReceived & ackRequested;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _17_else_clock_IfBlock1 = ackReceived & !ackRequested;
    /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
    }
    else {
      else_clock_IfBlock1 = sendValidateToRBC;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_trainData_T_TIU_Types_Pkg(&_L825_IfBlock1, trainDatafromTIU);
        _L327_IfBlock1 = t_train;
        _L728_IfBlock1 = nidEngine;
      }
      else {
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_L429_IfBlock1,
          inMessageBus);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_11_outMessageBus,
          &_L429_IfBlock1);
      }
    }
  }
  _L32 = reset;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L33, trainDatafromTIU);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &_L34,
    trainDatafromDriver);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L40,
    trainDataAckfromDriver);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L36, &statusAfterCheck);
  kcg_copy_trainData_Events_T_trainData_Types_pkg(&_L37, eventsForTrainData);
  /* 1 */
  trainDataStorage_trainData_pkg(
    _L32,
    &_L33,
    &_L34,
    &_L40,
    &_L36,
    &_L37,
    &outC->Context_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L31, &outC->Context_1.actualTrainData);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &_L30,
    &outC->Context_1.updatedStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&statusForOutput, &_L30);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L3_IfBlock1 = t_train;
    _L7_IfBlock1 = nidEngine;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L5_IfBlock1, trackMessages);
    _L6_IfBlock1 = _L5_IfBlock1.Radio_Common_Header.t_train;
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L8_IfBlock1,
      &statusForOutput);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L10_IfBlock1,
      inMessageBus);
    _L11_IfBlock1 = inVersion;
    /* 1 */
    sendAcknowledgementRBC_trainData_pkg(
      _L3_IfBlock1,
      _L7_IfBlock1,
      _L6_IfBlock1,
      &_L8_IfBlock1,
      &_L10_IfBlock1,
      _L11_IfBlock1,
      &outC->_2_Context_1);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L2_IfBlock1,
      &outC->_2_Context_1.updatedStatus);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L9_IfBlock1,
      &outC->_2_Context_1.outMessageBus);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_5_outMessageBus,
      &_L9_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->outMessageBus,
      &_5_outMessageBus);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_6_trainDataStatus,
      &_L2_IfBlock1);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->trainDataStatus,
      &_6_trainDataStatus);
  }
  else {
    /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L918_IfBlock1,
        inMessageBus);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_9_outMessageBus,
        &_L918_IfBlock1);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outMessageBus,
        &_9_outMessageBus);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_L1023_IfBlock1,
          &statusForOutput);
        kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
          &_L924_IfBlock1,
          p0_positionReport);
        kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
          &_L1122_IfBlock1,
          p1_positionReport);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_L13_IfBlock1,
          inMessageBus);
        _L14_IfBlock1 = inVersion;
        /* 1 */
        sendValidTrainDataRBC_trainData_pkg(
          &_L825_IfBlock1,
          _L327_IfBlock1,
          _L728_IfBlock1,
          &_L1023_IfBlock1,
          &_L924_IfBlock1,
          &_L1122_IfBlock1,
          &_L13_IfBlock1,
          _L14_IfBlock1,
          &outC->_1_Context_1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_L226_IfBlock1,
          &outC->_1_Context_1.updatedStatus);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_L12_IfBlock1,
          &outC->_1_Context_1.outMessageBus);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_13_outMessageBus,
          &_L12_IfBlock1);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_7_outMessageBus,
          &_13_outMessageBus);
      }
      else {
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_7_outMessageBus,
          &_11_outMessageBus);
      }
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outMessageBus,
        &_7_outMessageBus);
    }
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->outMessageBus,
      &outMessageBus);
    /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_L1_IfBlock1,
        &statusForOutput);
      _L521_IfBlock1 = kcg_true;
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_L4_IfBlock1,
        &_L1_IfBlock1);
      if (kcg_true) {
        _L4_IfBlock1.validatedbyRBC = _L521_IfBlock1;
      }
      _L619_IfBlock1 = kcg_false;
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_L720_IfBlock1,
        &_L4_IfBlock1);
      if (kcg_true) {
        _L720_IfBlock1.waitingForRBCResponse = _L619_IfBlock1;
      }
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &_10_trainDataStatus,
        &_L720_IfBlock1);
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &trainDataStatus,
        &_10_trainDataStatus);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_14_trainDataStatus,
          &_L226_IfBlock1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_8_trainDataStatus,
          &_14_trainDataStatus);
      }
      else {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_L330_IfBlock1,
          &statusForOutput);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_12_trainDataStatus,
          &_L330_IfBlock1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &_8_trainDataStatus,
          &_12_trainDataStatus);
      }
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &trainDataStatus,
        &_8_trainDataStatus);
    }
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->trainDataStatus,
      &trainDataStatus);
  }
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &_L29,
    (trainData_Trigger_T_trainData_Types_pkg *)
      &cNoTrigger_trainData_Types_pkg);
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->triggerFromTrainData,
    &_L29);
  kcg_copy_trainData_T_TIU_Types_Pkg(&trainData, &_L31);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L38, &trainData);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->actualTrainData, &_L38);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L39, &outC->trainDataStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->updatedStatus, &_L39);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** trainData_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

