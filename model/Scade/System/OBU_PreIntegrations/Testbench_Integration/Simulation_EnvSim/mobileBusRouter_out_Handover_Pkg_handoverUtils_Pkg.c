/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.h"

void mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* 5 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_5);
  /* 2 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_2);
  /* 7 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_7);
  /* 1 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_1);
  /* 1 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->_1_Context_1);
  /* 4 */ mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_4);
  /* 3 */ genMsgToBus_reset_RCM_Utils_Pkg_encoders(&outC->Context_3);
}

/* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out */
void mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_1 */msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_2 */msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::useInformationFromAcceptingRBC */kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::handingOverRBC_is_RBC_1 */kcg_bool handingOverRBC_is_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_acceptingRBC */kcg_bool sendPositionReport_2_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_handingOverRBC */kcg_bool sendPositionReport_2_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_1 */kcg_bool sendPositionReport_2_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_2 */kcg_bool sendPositionReport_2_RBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendTrainData_2_acceptingRBC */kcg_bool sendTrainData_2_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train */T_TRAIN t_train,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBusToRBC_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::nid_engine */NID_ENGINE nid_engine,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::onboardPhoneNumbers_b */P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::m_version */M_VERSION m_version,
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus tmp3;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus tmp2;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus tmp1;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus tmp;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L294 */
  static kcg_bool _L294_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1::else::_L295 */
  static M_TrainTrack_Message_T_TM_radio_messages _L295_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  if (IfBlock1_clock) {
    /* 3 */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      morcMsgTriggersToRBC_1,
      t_train,
      t_train_global,
      msgBusToRBC_in,
      nid_engine,
      onboardPhoneNumbers_b,
      m_version,
      &outC->Context_3);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_1,
      &outC->Context_3.msgBus_out);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_2,
      (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
        &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
  }
  else {
    /* 1 */
    extractPositionReportFromBus_RCM_Utils_Pkg_encoders(
      msgBusToRBC_in,
      &_L294_IfBlock1,
      &_L295_IfBlock1);
    if (useInformationFromAcceptingRBC) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp3,
        (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
          &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp2,
        msgBusToRBC_in);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp3,
        msgBusToRBC_in);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp2,
        (M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *)
          &cIdleBus_Handover_Pkg_handoverUtils_Pkg);
    }
    /* 4 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      sendPositionReport_2_handingOverRBC,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &tmp3,
      t_train_global,
      &outC->Context_4);
    /* 1 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      sendPositionReport_2_acceptingRBC,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &tmp2,
      t_train_global,
      &outC->_1_Context_1);
    if (handingOverRBC_is_RBC_1) {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp1,
        &outC->Context_4.messageBus_out);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp,
        &outC->_1_Context_1.messageBus_out);
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp1,
        &outC->_1_Context_1.messageBus_out);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &tmp,
        &outC->Context_4.messageBus_out);
    }
    /* 1 */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      morcMsgTriggersToRBC_1,
      t_train,
      t_train_global,
      &tmp1,
      nid_engine,
      onboardPhoneNumbers_b,
      m_version,
      &outC->Context_1);
    /* 7 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      sendPositionReport_2_RBC_1,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &outC->Context_1.msgBus_out,
      t_train_global,
      &outC->Context_7);
    /* 2 */
    genMsgToBus_RCM_Utils_Pkg_encoders(
      morcMsgTriggersToRBC_2,
      t_train,
      t_train_global,
      &tmp,
      nid_engine,
      onboardPhoneNumbers_b,
      m_version,
      &outC->Context_2);
    /* 5 */
    mergeMsgToBus_RCM_Utils_Pkg_encoders(
      sendPositionReport_2_RBC_2,
      _L294_IfBlock1,
      &_L295_IfBlock1,
      &outC->Context_2.msgBus_out,
      t_train_global,
      &outC->Context_5);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_1,
      &outC->Context_7.messageBus_out);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_2_RBC_2,
      &outC->Context_5.messageBus_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

