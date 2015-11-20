/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Main_v2_MoRC_Pck.h"

void MoRC_Main_v2_reset_MoRC_Pck(outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  outC->init = kcg_true;
  /* 1 */
  safeRadioConnectionIndication_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
  /* 1 */
  registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_1_Context_1);
  /* 1 */
  requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_2_Context_1);
  /* 1 */ sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_3_Context_1);
  /* 1 */
  initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_4_Context_1);
}

/* MoRC_Pck::MoRC_Main_v2 */
void MoRC_Main_v2_MoRC_Pck(
  /* MoRC_Pck::MoRC_Main_v2::msg_in */msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* MoRC_Pck::MoRC_Main_v2::eventsAndPhases */obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::MoRC_Main_v2::atPowerUpRadioNetworkID */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* MoRC_Pck::MoRC_Main_v2::newRadioNetworkIDFromDriver */P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* MoRC_Pck::MoRC_Main_v2::mode */M_MODE mode,
  /* MoRC_Pck::MoRC_Main_v2::level */M_LEVEL level,
  /* MoRC_Pck::MoRC_Main_v2::mobileRegistrationContext */mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* MoRC_Pck::MoRC_Main_v2::mobileConnectionContext */mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext,
  /* MoRC_Pck::MoRC_Main_v2::currentTime */T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::MoRC_Main_v2::reset */kcg_bool reset,
  /* MoRC_Pck::MoRC_Main_v2::t_train */T_TRAIN t_train,
  /* MoRC_Pck::MoRC_Main_v2::configData */morc_configData_T_RCM_Session_Types_Pkg *configData,
  outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  static sessionCmd_T_RCM_Session_Types_Pkg tmp3;
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg tmp2;
  static m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg tmp1;
  static m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg tmp;
  /* MoRC_Pck::MoRC_Main_v2::p42_sessionManagement */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg p42_sessionManagement;
  /* MoRC_Pck::MoRC_Main_v2::_L10 */
  static kcg_bool _L10;
  /* MoRC_Pck::MoRC_Main_v2::_L14 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L14;
  /* MoRC_Pck::MoRC_Main_v2::_L26 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L26;
  /* MoRC_Pck::MoRC_Main_v2::_L27 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L27;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &_L27,
      (sessionStatus_T_RCM_Session_Types_Pkg *)
        &cNoSessionStatus_RCM_Session_Types_Pkg);
    kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
      &_L26,
      (mobileRegistrationContext_T_RCM_Types_Pkg *)
        &cNoMobileRegistrationContext_RCM_Types_Pkg);
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
      &_L14,
      (mobileConnectionContext_T_RCM_Types_Pkg *)
        &cNoConnectionContext_RCM_Types_Pkg);
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &_L27,
      &outC->sessionStatus_l);
    kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
      &_L26,
      &outC->registrationStatus_l);
    kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
      &_L14,
      &outC->connectionStatus_l);
  }
  /* 2 */ dec_p42_RCM_Utils_Pkg_decoders(msg_in, &p42_sessionManagement);
  /* 1 */
  initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
    &p42_sessionManagement,
    eventsAndPhases,
    mode,
    &_L27,
    currentTime,
    reset,
    (*configData).maxWaitingTimeUntilTerminationOrderReceived,
    (*configData).noOfRetriesUntilTerminationOrderIsReceived,
    &outC->_4_Context_1);
  outC->sendAPositionReport = outC->_4_Context_1.sendAPositionReport;
  /* 1 */ dec_m38_RCM_Utils_Pkg_decoders(msg_in, &tmp2);
  /* 1 */
  initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
    mode,
    kcg_false,
    eventsAndPhases,
    &p42_sessionManagement,
    &tmp2,
    &_L26,
    &_L14,
    &_L27,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cNoSessionStatus_RCM_Session_Types_Pkg,
    (*configData).nid_radio_shortNumberStoredOnboard,
    &tmp3);
  /* 1 */ dec_m39_RCM_Utils_Pkg_decoders(msg_in, &tmp1);
  /* 1 */ dec_m32_RCM_Utils_Pkg_decoders(msg_in, kcg_true, &tmp);
  /* 1 */
  sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
    &tmp3,
    &p42_sessionManagement,
    &tmp1,
    &tmp,
    &_L14,
    outC->_4_Context_1.initiateTermination,
    currentTime,
    reset,
    (*configData).noOfRetriesOfSendingTerminationMessage,
    (*configData).maxWaitingTimeForAckMessageReceived,
    &outC->_3_Context_1);
  outC->msgToTrackTriggers.m155_initiationOfACommunicationSession =
    outC->_3_Context_1.send_m155_initiationOfACommunicationSession;
  outC->msgToTrackTriggers.m156_terminationOfACommunicationSession =
    outC->_3_Context_1.send_m156_TerminationOfCommunicationSession;
  outC->msgToTrackTriggers.m159_sessionEstablished =
    outC->_3_Context_1.send_m159_sessionEstablishedReport;
  outC->msgToTrackTriggers.m154_noCompatibleVersionSupported =
    outC->_3_Context_1.send_m154_noCompatibleVersionSupported;
  outC->infomDriverNoCompatibleVersionSupported =
    outC->_3_Context_1.infomDriverNoCompatibleVersionSupported;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus_l,
    &outC->_3_Context_1.sessionStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->status.session,
    &outC->sessionStatus_l);
  /* 1 */
  requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
    mode,
    eventsAndPhases,
    &outC->_3_Context_1.p42_SessionManagement_out,
    &outC->sessionStatus_l,
    &_L26,
    &_L14,
    outC->_3_Context_1.requestSafeRadioConnectionSetup,
    outC->_3_Context_1.requestReleaseOfSafeRadioConnection,
    currentTime,
    reset,
    (*configData).maxTimeToMaintainCommSession,
    (*configData).noOfTriesToEstablishASafeRadioConnection,
    &outC->_2_Context_1);
  /* 1 */
  connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_2_Context_1.connectionCmd,
    mobileConnectionContext,
    &_L26,
    &outC->mobileConnectionCmd,
    &outC->connectionStatus_l,
    &_L10);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->status.connection,
    &outC->connectionStatus_l);
  /* 1 */
  registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
    atPowerUpRadioNetworkID,
    newRadioNetworkIDFromDriver,
    msg_in,
    level,
    eventsAndPhases,
    &outC->sessionStatus_l,
    &outC->connectionStatus_l,
    mobileRegistrationContext,
    reset,
    &(*configData).radioNetworkID_Default,
    &outC->_1_Context_1);
  outC->memorizeTheLastRadioNetworkID =
    outC->_1_Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->lastReceivedRadioNetworkID,
    &outC->_1_Context_1.lastReceivedRadioNetworkID);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd,
    &outC->_1_Context_1.mobileRegistrationCmd);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->registrationStatus_l,
    &outC->_1_Context_1.mobileRegistrationStatus);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->status.registration,
    &outC->registrationStatus_l);
  outC->notReady = outC->_3_Context_1.notReady |
    !kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
      &_L14,
      &outC->connectionStatus_l) |
    !kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
      &_L26,
      &outC->registrationStatus_l) |
    !kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
      &_L27,
      &outC->sessionStatus_l);
  if (outC->_3_Context_1.send_m155_initiationOfACommunicationSession) {
    /* 4 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co155_Initiation_of_a_communication_session_Id_Pkg,
      t_train,
      0,
      (*configData).nid_engine,
      &outC->msgToRBC);
  }
  else if (outC->_3_Context_1.send_m156_TerminationOfCommunicationSession) {
    /* 3 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co156_Termination_of_a_communication_session_Id_Pkg,
      t_train,
      0,
      (*configData).nid_engine,
      &outC->msgToRBC);
  }
  else if (outC->_3_Context_1.send_m159_sessionEstablishedReport) {
    /* 2 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co159_Session_established_Id_Pkg,
      t_train,
      0,
      (*configData).nid_engine,
      &outC->msgToRBC);
    kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &outC->msgToRBC.packets.p3,
      &(*configData).onboardPhoneNumbers);
  }
  else if (outC->_3_Context_1.send_m154_noCompatibleVersionSupported) {
    /* 1 */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      kcg_true,
      co154_No_Compatible_Version_Support_Id_Pkg,
      t_train,
      0,
      (*configData).nid_engine,
      &outC->msgToRBC);
  }
  else {
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
      &outC->msgToRBC,
      (msgToTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageToRBC_MoRC_Pck);
  }
  /* 1 */
  safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->mobileConnectionCmd,
    &outC->connectionStatus_l,
    eventsAndPhases,
    currentTime,
    reset,
    (*configData).connectionStatusTimerInterval,
    &outC->Context_1);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->safeRadioIndication,
    &outC->Context_1.indication);
  outC->rejectOrderToContactRBC_or_RIU = _L10 |
    outC->_1_Context_1.rejectOrderToContactRBC_or_RIU;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_Main_v2_MoRC_Pck.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

