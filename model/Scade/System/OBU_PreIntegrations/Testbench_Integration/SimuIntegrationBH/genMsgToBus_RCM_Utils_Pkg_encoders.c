/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genMsgToBus_RCM_Utils_Pkg_encoders.h"

#ifndef KCG_USER_DEFINED_INIT
void genMsgToBus_init_RCM_Utils_Pkg_encoders(
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->msgBus_out[i1].Message.valid = kcg_true;
    outC->msgBus_out[i1].Message.nid_message = 0;
    outC->msgBus_out[i1].Message.l_message = 0;
    outC->msgBus_out[i1].Message.t_train = 0;
    outC->msgBus_out[i1].Message.nid_engine = 0;
    outC->msgBus_out[i1].Message.field1 = 0;
    outC->msgBus_out[i1].Message.field2 = 0;
    outC->msgBus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->msgBus_out[i1].OptionalPackets[i] = 0;
    }
  }
  /* 1 */ Send_M155_init_TM_radio_messages(&outC->_2_Context_1);
  /* 1 */ Send_M156_init_TM_radio_messages(&outC->_1_Context_1);
  /* 2 */ Send_M159_init_TM_radio_messages(&outC->Context_2);
  /* 1 */ Send_M154_init_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void genMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  /* 1 */ Send_M155_reset_TM_radio_messages(&outC->_2_Context_1);
  /* 1 */ Send_M156_reset_TM_radio_messages(&outC->_1_Context_1);
  /* 2 */ Send_M159_reset_TM_radio_messages(&outC->Context_2);
  /* 1 */ Send_M154_reset_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RCM_Utils_Pkg::encoders::genMsgToBus */
void genMsgToBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgToTrackTriggers */ msgToTrackTriggers_T_RCM_MsgTypes_Pkg *msgToTrackTriggers,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train */ T_TRAIN t_train,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBus_in,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::nid_engine */ NID_ENGINE nid_engine,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::m_version */ M_VERSION m_version,
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  /* math::Mean::Me_output */
  static kcg_real Me_output_1;
  /* math::Mean::I2 */
  static kcg_int I2_1;
  /* math::Mean::I1 */
  static kcg_int I1_1;
  /* math::Mean::_L5 */
  static kcg_int _L5_1;
  /* math::Mean::_L4 */
  static kcg_int _L4_1;
  /* math::Mean::_L3 */
  static kcg_real _L3_1;
  /* math::Mean::_L2 */
  static kcg_int _L2_1;
  /* math::Mean::_L1 */
  static kcg_int _L1_1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _1_msgBus_out;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L17 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L17_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L16 */
  static kcg_int _L16_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L15 */
  static M_VERSION _L15_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L14 */
  static M_155_T_TM_radio_messages _L14_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L13 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L13_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L11 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L11_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L10 */
  static kcg_int _L10_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L5 */
  static NID_ENGINE _L5_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L7 */
  static T_TRAIN _L7_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::then::_L8 */
  static NID_MESSAGE _L8_IfBlock1;
  static kcg_int _10_noname;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus msgBus_out;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _5_msgBus_out;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L30 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L30_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L29 */
  static kcg_int _L29_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L28 */
  static M_VERSION _L28_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L16 */
  static kcg_int _L1619_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L11 */
  static T_TRAIN _L1120_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L10 */
  static kcg_bool _L1021_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L9 */
  static NID_ENGINE _L922_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L1 */
  static NID_MESSAGE _L123_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L27 */
  static P003_TM_TrainToTrack _L27_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L25 */
  static M_159_T_TM_radio_messages _L25_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L19 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L19_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::then::_L17 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1724_IfBlock1;
  static kcg_int _8_noname;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _4_msgBus_out;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::else::_L2 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L235_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _6_msgBus_out;
  static kcg_int noname;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L4 */
  static NID_ENGINE _L434_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L2 */
  static T_TRAIN _L2_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L5 */
  static kcg_bool _L533_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L6 */
  static NID_MESSAGE _L632_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L7 */
  static kcg_int _L731_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L8 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L830_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L10 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1029_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L11 */
  static M_VERSION _L1128_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L12 */
  static M_154_T_TM_radio_messages _L1227_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L13 */
  static kcg_int _L1326_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else::else::then::_L14 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L1425_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _7_msgBus_out;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _2_msgBus_out;
  static kcg_int _9_noname;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L4 */
  static NID_MESSAGE _L4_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L3 */
  static T_TRAIN _L3_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L1 */
  static NID_ENGINE _L1_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L5 */
  static kcg_bool _L518_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L6 */
  static kcg_int _L6_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L7 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L717_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L9 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L916_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L10 */
  static M_156_T_TM_radio_messages _L1015_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L11 */
  static M_VERSION _L1114_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L12 */
  static kcg_int _L12_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1::else::then::_L13 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L1313_IfBlock1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _3_msgBus_out;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::m159_sessionEstablished */
  static kcg_bool m159_sessionEstablished;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::m156_terminationOfACommunicationSession */
  static kcg_bool m156_terminationOfACommunicationSession;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::m155_initiationOfACommunicationSession */
  static kcg_bool m155_initiationOfACommunicationSession;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::m154_noCompatibleVersionSupported */
  static kcg_bool m154_noCompatibleVersionSupported;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train_global_l */
  static T_internal_Type_Obu_BasicTypes_Pkg t_train_global_l;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::_L1 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg _L1;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::_L5 */
  static kcg_bool _L5;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::_L4 */
  static kcg_bool _L4;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::_L3 */
  static kcg_bool _L3;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::_L2 */
  static kcg_bool _L2;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::_L6 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L6;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::_L9 */
  static T_TRAIN _L9;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::_L10 */
  static kcg_real _L10;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::_L11 */
  static kcg_int _L11;
  
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(&_L1, msgToTrackTriggers);
  _L2 = _L1.m155_initiationOfACommunicationSession;
  m155_initiationOfACommunicationSession = _L2;
  IfBlock1_clock = m155_initiationOfACommunicationSession;
  _L3 = _L1.m156_terminationOfACommunicationSession;
  m156_terminationOfACommunicationSession = _L3;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _12_else_clock_IfBlock1 = m156_terminationOfACommunicationSession;
  }
  _L4 = _L1.m159_sessionEstablished;
  m159_sessionEstablished = _L4;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
  }
  else {
    _11_else_clock_IfBlock1 = m159_sessionEstablished;
  }
  _L5 = _L1.m154_noCompatibleVersionSupported;
  m154_noCompatibleVersionSupported = _L5;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
  }
  else {
    else_clock_IfBlock1 = m154_noCompatibleVersionSupported;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L235_IfBlock1,
        msgBus_in);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_6_msgBus_out,
        &_L235_IfBlock1);
    }
  }
  _L6 = t_train_global;
  I1_1 = _L6;
  _L1_1 = I1_1;
  _L9 = t_train;
  I2_1 = _L9;
  _L2_1 = I2_1;
  _L4_1 = _L1_1 + _L2_1;
  _L5_1 = 2;
  _L3_1 = (kcg_real) _L4_1 / (kcg_real) _L5_1;
  Me_output_1 = _L3_1;
  _L10 = Me_output_1;
  _L11 = (kcg_int) _L10;
  t_train_global_l = _L11;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L17_IfBlock1 = t_train_global_l;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L13_IfBlock1,
      msgBus_in);
    _L9_IfBlock1 = kcg_true;
    _L8_IfBlock1 = co155_Initiation_of_a_communication_session_Id_Pkg;
    _L10_IfBlock1 = 0;
    _L7_IfBlock1 = t_train;
    _L5_IfBlock1 = nid_engine;
    _L14_IfBlock1.valid = _L9_IfBlock1;
    _L14_IfBlock1.nid_message = _L8_IfBlock1;
    _L14_IfBlock1.l_message = _L10_IfBlock1;
    _L14_IfBlock1.t_train = _L7_IfBlock1;
    _L14_IfBlock1.nid_engine = _L5_IfBlock1;
    _L15_IfBlock1 = m_version;
    /* 1 */
    Send_M155_TM_radio_messages(
      _L17_IfBlock1,
      &_L13_IfBlock1,
      &_L14_IfBlock1,
      _L15_IfBlock1,
      &outC->_2_Context_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L11_IfBlock1,
      &outC->_2_Context_1.MessageBus_out);
    _L16_IfBlock1 = outC->_2_Context_1.t_train_assigned;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_1_msgBus_out,
      &_L11_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_out,
      &_1_msgBus_out);
    _10_noname = _L16_IfBlock1;
  }
  else {
    /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
      _L1313_IfBlock1 = t_train_global_l;
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L916_IfBlock1,
        msgBus_in);
      _L518_IfBlock1 = kcg_true;
      _L4_IfBlock1 = co156_Termination_of_a_communication_session_Id_Pkg;
      _L6_IfBlock1 = 0;
      _L3_IfBlock1 = t_train;
      _L1_IfBlock1 = nid_engine;
      _L1015_IfBlock1.valid = _L518_IfBlock1;
      _L1015_IfBlock1.nid_message = _L4_IfBlock1;
      _L1015_IfBlock1.l_message = _L6_IfBlock1;
      _L1015_IfBlock1.t_train = _L3_IfBlock1;
      _L1015_IfBlock1.nid_engine = _L1_IfBlock1;
      _L1114_IfBlock1 = m_version;
      /* 1 */
      Send_M156_TM_radio_messages(
        _L1313_IfBlock1,
        &_L916_IfBlock1,
        &_L1015_IfBlock1,
        _L1114_IfBlock1,
        &outC->_1_Context_1);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L717_IfBlock1,
        &outC->_1_Context_1.MessageBus_out);
      _L12_IfBlock1 = outC->_1_Context_1.t_train_assigned;
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_3_msgBus_out,
        &_L717_IfBlock1);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &msgBus_out,
        &_3_msgBus_out);
    }
    else {
      /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
        _L30_IfBlock1 = t_train_global_l;
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_L19_IfBlock1,
          msgBus_in);
        _L1021_IfBlock1 = kcg_true;
        _L123_IfBlock1 = co159_Session_established_Id_Pkg;
        _L1619_IfBlock1 = 0;
        _L1120_IfBlock1 = t_train;
        _L922_IfBlock1 = nid_engine;
        _L25_IfBlock1.valid = _L1021_IfBlock1;
        _L25_IfBlock1.nid_message = _L123_IfBlock1;
        _L25_IfBlock1.l_message = _L1619_IfBlock1;
        _L25_IfBlock1.t_train = _L1120_IfBlock1;
        _L25_IfBlock1.nid_engine = _L922_IfBlock1;
        kcg_copy_P003_TM_TrainToTrack(&_L27_IfBlock1, onboardPhoneNumbers_b);
        _L28_IfBlock1 = m_version;
        /* 2 */
        Send_M159_TM_radio_messages(
          _L30_IfBlock1,
          &_L19_IfBlock1,
          &_L25_IfBlock1,
          &_L27_IfBlock1,
          _L28_IfBlock1,
          &outC->Context_2);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_L1724_IfBlock1,
          &outC->Context_2.MessageBus_out);
        _L29_IfBlock1 = outC->Context_2.t_train_assigned;
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_5_msgBus_out,
          &_L1724_IfBlock1);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_2_msgBus_out,
          &_5_msgBus_out);
      }
      else {
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L1425_IfBlock1 = t_train_global_l;
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_L1029_IfBlock1,
            msgBus_in);
          _L533_IfBlock1 = kcg_true;
          _L632_IfBlock1 = co154_No_Compatible_Version_Support_Id_Pkg;
          _L731_IfBlock1 = 0;
          _L2_IfBlock1 = t_train;
          _L434_IfBlock1 = nid_engine;
          _L1227_IfBlock1.valid = _L533_IfBlock1;
          _L1227_IfBlock1.nid_message = _L632_IfBlock1;
          _L1227_IfBlock1.l_message = _L731_IfBlock1;
          _L1227_IfBlock1.t_train = _L2_IfBlock1;
          _L1227_IfBlock1.nid_engine = _L434_IfBlock1;
          _L1128_IfBlock1 = m_version;
          /* 1 */
          Send_M154_TM_radio_messages(
            _L1425_IfBlock1,
            &_L1029_IfBlock1,
            &_L1227_IfBlock1,
            _L1128_IfBlock1,
            &outC->Context_1);
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_L830_IfBlock1,
            &outC->Context_1.MessageBus_out);
          _L1326_IfBlock1 = outC->Context_1.t_train_assigned;
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_7_msgBus_out,
            &_L830_IfBlock1);
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_4_msgBus_out,
            &_7_msgBus_out);
        }
        else {
          kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
            &_4_msgBus_out,
            &_6_msgBus_out);
        }
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &_2_msgBus_out,
          &_4_msgBus_out);
      }
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &msgBus_out,
        &_2_msgBus_out);
    }
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_out,
      &msgBus_out);
    /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
      _9_noname = _L12_IfBlock1;
    }
    else /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
      _8_noname = _L29_IfBlock1;
    }
    else /* ck_anon_activ */ if (else_clock_IfBlock1) {
      noname = _L1326_IfBlock1;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** genMsgToBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

