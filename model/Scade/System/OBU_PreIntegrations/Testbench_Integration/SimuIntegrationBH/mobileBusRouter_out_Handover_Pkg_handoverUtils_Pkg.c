/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void mobileBusRouter_out_init_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->msgBus_2_RBC_2[i1].Message.valid = kcg_true;
    outC->msgBus_2_RBC_2[i1].Message.nid_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.l_message = 0;
    outC->msgBus_2_RBC_2[i1].Message.t_train = 0;
    outC->msgBus_2_RBC_2[i1].Message.nid_engine = 0;
    outC->msgBus_2_RBC_2[i1].Message.field1 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field2 = 0;
    outC->msgBus_2_RBC_2[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->msgBus_2_RBC_2[i1].OptionalPackets[i] = 0;
    }
  }
  for (i3 = 0; i3 < 5; i3++) {
    outC->msgBus_2_RBC_1[i3].Message.valid = kcg_true;
    outC->msgBus_2_RBC_1[i3].Message.nid_message = 0;
    outC->msgBus_2_RBC_1[i3].Message.l_message = 0;
    outC->msgBus_2_RBC_1[i3].Message.t_train = 0;
    outC->msgBus_2_RBC_1[i3].Message.nid_engine = 0;
    outC->msgBus_2_RBC_1[i3].Message.field1 = 0;
    outC->msgBus_2_RBC_1[i3].Message.field2 = 0;
    outC->msgBus_2_RBC_1[i3].Message.field3 = 0;
    for (i2 = 0; i2 < 50; i2++) {
      outC->msgBus_2_RBC_1[i3].OptionalPackets[i2] = 0;
    }
  }
  /* 5 */ mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_5);
  /* 2 */ genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_2);
  /* 3 */ genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_3);
  /* 7 */ mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_7);
  /* 1 */ genMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->_1_Context_1);
  /* 1 */ mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_1);
  /* 4 */ mergeMsgToBus_init_RCM_Utils_Pkg_encoders(&outC->Context_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* 5 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_5);
  /* 2 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_2);
  /* 3 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_3);
  /* 7 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_7);
  /* 1 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->_1_Context_1);
  /* 1 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_1);
  /* 4 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out */
void mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_1 */ msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_2 */ msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::handingOverRBC_is_RBC_1 */ kcg_bool handingOverRBC_is_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_acceptingRBC */ kcg_bool sendPositionReport_2_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_handingOverRBC */ kcg_bool sendPositionReport_2_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_1 */ kcg_bool sendPositionReport_2_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_2 */ kcg_bool sendPositionReport_2_RBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendTrainData_2_acceptingRBC */ kcg_bool sendTrainData_2_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train */ T_TRAIN t_train,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBusToRBC_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::nid_engine */ NID_ENGINE nid_engine,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::m_version */ M_VERSION m_version,
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBus_2_RBC_2 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _2_msgBus_2_RBC_2;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBus_2_RBC_1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _1_msgBus_2_RBC_1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::then::_L30 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L30_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::then::_L29 */
  static M_VERSION _L29_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::then::_L28 */
  static P003_TM_TrainToTrack _L28_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::then::_L27 */
  static NID_ENGINE _L27_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::then::_L26 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L26_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::then::_L25 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L25_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::then::_L24 */
  static T_TRAIN _L24_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::then::_L23 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg _L23_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::then::_L22 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L22_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBus_2_RBC_2 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus msgBus_2_RBC_2;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBus_2_RBC_1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus msgBus_2_RBC_1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L312 */
  static kcg_int _L312_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L311 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L311_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L308 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L308_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L307 */
  static kcg_int _L307_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L306 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L306_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L305 */
  static kcg_int _L305_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L304 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L304_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L299 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L299_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L297 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L297_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L298 */
  static kcg_int _L298_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L296 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L296_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L294 */
  static kcg_bool _L294_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L295 */
  static M_TrainTrack_Message_T_TM_radio_messages _L295_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L114 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg _L114_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L112 */
  static T_TRAIN _L112_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L113 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L113_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L109 */
  static M_VERSION _L109_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L110 */
  static NID_ENGINE _L110_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L111 */
  static P003_TM_TrainToTrack _L111_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L108 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L108_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L107 */
  static M_VERSION _L107_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L106 */
  static P003_TM_TrainToTrack _L106_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L105 */
  static NID_ENGINE _L105_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L104 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L104_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L103 */
  static T_TRAIN _L103_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L102 */
  static msgToTrackTriggers_T_RCM_MsgTypes_Pkg _L102_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L100 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L100_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L86 */
  static kcg_bool _L86_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L85 */
  static kcg_bool _L85_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L84 */
  static kcg_bool _L84_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L83 */
  static kcg_bool _L83_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L82 */
  static kcg_bool _L82_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L81 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L81_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L80 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L80_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L79 */
  static kcg_bool _L79_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L78 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L78_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L77 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L77_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L76 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L76_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L75 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L75_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L74 */
  static kcg_bool _L74_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L73 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L73_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L72 */
  static kcg_bool _L72_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L71 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L71_IfBlock1;
  static kcg_int _6_noname;
  static kcg_int _5_noname;
  static kcg_int _4_noname;
  static kcg_bool _3_noname;
  static kcg_int noname;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
      &_L23_IfBlock1,
      morcMsgTriggersToRBC_1);
    _L24_IfBlock1 = t_train;
    _L25_IfBlock1 = t_train_global;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L26_IfBlock1,
      msgBusToRBC_in);
    _L27_IfBlock1 = nid_engine;
    kcg_copy_P003_TM_TrainToTrack(&_L28_IfBlock1, onboardPhoneNumbers_b);
    _L29_IfBlock1 = m_version;
    /* 3 */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      &_L23_IfBlock1,
      _L24_IfBlock1,
      _L25_IfBlock1,
      &_L26_IfBlock1,
      _L27_IfBlock1,
      &_L28_IfBlock1,
      _L29_IfBlock1,
      &outC->Context_3);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L22_IfBlock1,
      &outC->Context_3.msgBus_out);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_1_msgBus_2_RBC_1,
      &_L22_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_1,
      &_1_msgBus_2_RBC_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L30_IfBlock1,
      (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
        &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_2_msgBus_2_RBC_2,
      &_L30_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_2,
      &_2_msgBus_2_RBC_2);
  }
  else {
    _L84_IfBlock1 = sendPositionReport_2_RBC_1;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L296_IfBlock1,
      msgBusToRBC_in);
    /* 1 */
    extractPositionReportFromBus_RCM_Utils_Pkg_encoders(
      &_L296_IfBlock1,
      &_L294_IfBlock1,
      &_L295_IfBlock1);
    kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
      &_L102_IfBlock1,
      morcMsgTriggersToRBC_1);
    _L103_IfBlock1 = t_train;
    _L104_IfBlock1 = t_train_global;
    _L79_IfBlock1 = handingOverRBC_is_RBC_1;
    _L83_IfBlock1 = sendPositionReport_2_handingOverRBC;
    _L72_IfBlock1 = useInformationFromAcceptingRBC;
    _L74_IfBlock1 = !_L72_IfBlock1;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L71_IfBlock1,
      msgBusToRBC_in);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L75_IfBlock1,
      (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
        &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
    /* 5 */ if (_L74_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L73_IfBlock1,
        &_L71_IfBlock1);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L73_IfBlock1,
        &_L75_IfBlock1);
    }
    _L299_IfBlock1 = t_train_global;
    /* 4 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      _L83_IfBlock1,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &_L73_IfBlock1,
      _L299_IfBlock1,
      &outC->Context_4);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L304_IfBlock1,
      &outC->Context_4.messageBus_out);
    _L305_IfBlock1 = outC->Context_4.t_train_assigned;
    _L82_IfBlock1 = sendPositionReport_2_acceptingRBC;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L77_IfBlock1,
      msgBusToRBC_in);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L78_IfBlock1,
      (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
        &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
    /* 6 */ if (_L72_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L76_IfBlock1,
        &_L77_IfBlock1);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L76_IfBlock1,
        &_L78_IfBlock1);
    }
    /* 1 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      _L82_IfBlock1,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &_L76_IfBlock1,
      _L299_IfBlock1,
      &outC->Context_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L297_IfBlock1,
      &outC->Context_1.messageBus_out);
    _L298_IfBlock1 = outC->Context_1.t_train_assigned;
    /* 7 */ if (_L79_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L80_IfBlock1,
        &_L304_IfBlock1);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L80_IfBlock1,
        &_L297_IfBlock1);
    }
    _L105_IfBlock1 = nid_engine;
    kcg_copy_P003_TM_TrainToTrack(&_L106_IfBlock1, onboardPhoneNumbers_b);
    _L107_IfBlock1 = m_version;
    /* 1 */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      &_L102_IfBlock1,
      _L103_IfBlock1,
      _L104_IfBlock1,
      &_L80_IfBlock1,
      _L105_IfBlock1,
      &_L106_IfBlock1,
      _L107_IfBlock1,
      &outC->_1_Context_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L100_IfBlock1,
      &outC->_1_Context_1.msgBus_out);
    _L308_IfBlock1 = t_train_global;
    /* 7 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      _L84_IfBlock1,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &_L100_IfBlock1,
      _L308_IfBlock1,
      &outC->Context_7);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L311_IfBlock1,
      &outC->Context_7.messageBus_out);
    _L312_IfBlock1 = outC->Context_7.t_train_assigned;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &msgBus_2_RBC_1,
      &_L311_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_1,
      &msgBus_2_RBC_1);
    _L85_IfBlock1 = sendPositionReport_2_RBC_2;
    kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
      &_L114_IfBlock1,
      morcMsgTriggersToRBC_2);
    _L112_IfBlock1 = t_train;
    _L113_IfBlock1 = t_train_global;
    /* 8 */ if (_L79_IfBlock1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L81_IfBlock1,
        &_L297_IfBlock1);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &_L81_IfBlock1,
        &_L304_IfBlock1);
    }
    _L110_IfBlock1 = nid_engine;
    kcg_copy_P003_TM_TrainToTrack(&_L111_IfBlock1, onboardPhoneNumbers_b);
    _L109_IfBlock1 = m_version;
    /* 2 */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      &_L114_IfBlock1,
      _L112_IfBlock1,
      _L113_IfBlock1,
      &_L81_IfBlock1,
      _L110_IfBlock1,
      &_L111_IfBlock1,
      _L109_IfBlock1,
      &outC->Context_2);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L108_IfBlock1,
      &outC->Context_2.msgBus_out);
    /* 5 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      _L85_IfBlock1,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &_L108_IfBlock1,
      _L308_IfBlock1,
      &outC->Context_5);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L306_IfBlock1,
      &outC->Context_5.messageBus_out);
    _L307_IfBlock1 = outC->Context_5.t_train_assigned;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &msgBus_2_RBC_2,
      &_L306_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_2,
      &msgBus_2_RBC_2);
    _L86_IfBlock1 = sendTrainData_2_acceptingRBC;
    noname = _L298_IfBlock1;
    _3_noname = _L86_IfBlock1;
    _4_noname = _L305_IfBlock1;
    _5_noname = _L307_IfBlock1;
    _6_noname = _L312_IfBlock1;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

