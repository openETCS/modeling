/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "managementOfRadioCommunication_MoRC_Pck.h"

void managementOfRadioCommunication_init_MoRC_Pck(
  outC_managementOfRadioCommunication_MoRC_Pck *outC)
{
  outC->init = kcg_true;
  outC->prevSessionTerminatedDueToLossOfSafeRadioConnection = kcg_true;
  outC->establishingACommunicationSessionAborted = kcg_true;
  outC->communicationSessionInitiatedFromTrackside = kcg_true;
  outC->communicationSessionInitiatedByOBU = kcg_true;
  outC->sessionEstablished = kcg_true;
  outC->CommunicationSession_SM_reset_nxt = kcg_true;
  outC->CommunicationSession_SM_state_nxt =
    SSM_st_NoSession_CommunicationSession_SM;
  outC->ready = kcg_true;
  outC->sessionStatus = morc_st_inactive_Radio_Types_Pkg;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
  outC->requestTheSetupOfASafeRadioConnection = kcg_true;
  outC->mobileSWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->mobileSWStatus.registeredRadioNetworkID = 0;
  outC->mobileSWStatus.connectionStatus = mswc_unregistered_MoRC_Pck;
  outC->mobileSWStatus.mobileHW_available = kcg_true;
  outC->mobileSWStatus.valid = kcg_true;
  outC->sessionSuccessfullyEstablished = kcg_true;
  outC->safeRadioConnectionStatus_toDriver.status = srcs_NoConnection_MoRC_Pck;
  outC->safeRadioConnectionStatus_toDriver.valid = kcg_true;
  outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
    kcg_true;
  outC->sendATerminationOfCommunicationMessage = kcg_true;
  outC->sendASessionEstablishedReportToTrackside = kcg_true;
  outC->sendMessage_NoCompatibleVersionSupported = kcg_true;
  outC->sendTheMessageInitiationOfCommunicationSessionToTrackside = kcg_true;
  outC->InformTheDriverThatNoConnectionWasSetup = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->orderTheRegistrationOfItsConnectedMobiles = kcg_true;
  outC->currentRadioNetworkID.nid_mn = 0;
  outC->currentRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->currentRadioNetworkID.valid = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->mobileHWCmd.radioNetworkID = 0;
  outC->mobileHWCmd.action = mhwa_nop_MoRC_Pck;
  outC->mobileHWCmd.valid = kcg_true;
  outC->sendAPositionReport = kcg_true;
  maintaining_a_Session_init_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
  terminateAndEstablishSession_init_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  establish_a_Session_init_MoRC_Pck_Subfunc_Pkg(&outC->Context_2);
  terminating_a_CommunicationSession_init_MoRC_Pck_Subfunc_Pkg(
    &outC->_2_Context_1);
  initiate_a_Session_init_MoRC_Pck_Subfunc_Pkg(&outC->_3_Context_1);
  FallingEdge_init_digital(&outC->_4_Context_1);
  initiateTerminatingASession_init_MoRC_Pck_Subfunc_Pkg(&outC->_5_Context_1);
  registeringToTheRadioNetwork_init_MoRC_Pck_Subfunc_Pkg(&outC->_6_Context_1);
  RisingEdge_init_digital(&outC->_7_Context_1);
  FallingEdge_init_digital(&outC->_8_Context_2);
  RisingEdge_init_digital(&outC->_9_Context_2);
  safeRadioConnectionIndication_init_MoRC_Pck_Subfunc_Pkg(&outC->_10_Context_1);
  EitherEdge_init_digital(&outC->_11_Context_1);
  EitherEdge_init_digital(&outC->_12_Context_2);
  EitherEdge_init_digital(&outC->Context_3);
  EitherEdge_init_digital(&outC->Context_4);
  EitherEdge_init_digital(&outC->Context_5);
}


void managementOfRadioCommunication_reset_MoRC_Pck(
  outC_managementOfRadioCommunication_MoRC_Pck *outC)
{
  outC->init = kcg_true;
  /* 5 */ EitherEdge_reset_digital(&outC->Context_5);
  /* 4 */ EitherEdge_reset_digital(&outC->Context_4);
  /* 3 */ EitherEdge_reset_digital(&outC->Context_3);
  /* 2 */ EitherEdge_reset_digital(&outC->_12_Context_2);
  /* 1 */ EitherEdge_reset_digital(&outC->_11_Context_1);
  /* 1 */
  safeRadioConnectionIndication_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_10_Context_1);
  /* 2 */ RisingEdge_reset_digital(&outC->_9_Context_2);
  /* 2 */ FallingEdge_reset_digital(&outC->_8_Context_2);
  /* 1 */ RisingEdge_reset_digital(&outC->_7_Context_1);
  /* 1 */
  registeringToTheRadioNetwork_reset_MoRC_Pck_Subfunc_Pkg(&outC->_6_Context_1);
  /* 1 */
  initiateTerminatingASession_reset_MoRC_Pck_Subfunc_Pkg(&outC->_5_Context_1);
  /* 1 */ FallingEdge_reset_digital(&outC->_4_Context_1);
  /* 1 */ initiate_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->_3_Context_1);
  /* 1 */
  terminating_a_CommunicationSession_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->_2_Context_1);
  /* 2 */ establish_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_2);
  /* 1 */
  terminateAndEstablishSession_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */ maintaining_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
}

/* MoRC_Pck::managementOfRadioCommunication */
void managementOfRadioCommunication_MoRC_Pck(
  /* MoRC_Pck::managementOfRadioCommunication::currentTime */ time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::managementOfRadioCommunication::acknowledgementOfTerminationOfCommunicationSessionReceived */ kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* MoRC_Pck::managementOfRadioCommunication::orderReceivedFromTrackside */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderReceivedFromTrackside,
  /* MoRC_Pck::managementOfRadioCommunication::establishOrderReceivedFromRBC */ kcg_bool establishOrderReceivedFromRBC,
  /* MoRC_Pck::managementOfRadioCommunication::establishOrderReceivedFromRadioInfillUnit */ kcg_bool establishOrderReceivedFromRadioInfillUnit,
  /* MoRC_Pck::managementOfRadioCommunication::errorConditionRequiringTerminationDetected */ kcg_bool errorConditionRequiringTerminationDetected,
  /* MoRC_Pck::managementOfRadioCommunication::trainIsRejectedByRBC_duringStartOfMission */ kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* MoRC_Pck::managementOfRadioCommunication::driverClosesTheDeskduringStartOfMission */ kcg_bool driverClosesTheDeskduringStartOfMission,
  /* MoRC_Pck::managementOfRadioCommunication::trainExitedFromAnRBCArea */ kcg_bool trainExitedFromAnRBCArea,
  /* MoRC_Pck::managementOfRadioCommunication::endOfMissionIsExecuted */ kcg_bool endOfMissionIsExecuted,
  /* MoRC_Pck::managementOfRadioCommunication::isInCommunicationSessionWithAnRIU */ kcg_bool isInCommunicationSessionWithAnRIU,
  /* MoRC_Pck::managementOfRadioCommunication::atPowerUp */ kcg_bool atPowerUp,
  /* MoRC_Pck::managementOfRadioCommunication::atPowerDown */ kcg_bool atPowerDown,
  /* MoRC_Pck::managementOfRadioCommunication::level */ M_LEVEL level,
  /* MoRC_Pck::managementOfRadioCommunication::RadioNetworkID_memorized */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_memorized,
  /* MoRC_Pck::managementOfRadioCommunication::RadioNetworkID_fromDriver */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_fromDriver,
  /* MoRC_Pck::managementOfRadioCommunication::RadioNetworkID_fromTrackside */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_fromTrackside,
  /* MoRC_Pck::managementOfRadioCommunication::afterDriverEntryOfANewRadioNetworkID */ kcg_bool afterDriverEntryOfANewRadioNetworkID,
  /* MoRC_Pck::managementOfRadioCommunication::triggerDecisionThatNoRadioNetworkIDAvailable */ kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable,
  /* MoRC_Pck::managementOfRadioCommunication::mobileHWStatus */ mobileHWStatus_Type_MoRC_Pck *mobileHWStatus,
  /* MoRC_Pck::managementOfRadioCommunication::isPartOfAnOngoingStartOfMissionProcedure */ kcg_bool isPartOfAnOngoingStartOfMissionProcedure,
  /* MoRC_Pck::managementOfRadioCommunication::trainPassesALevelTransitionBorder */ kcg_bool trainPassesALevelTransitionBorder,
  /* MoRC_Pck::managementOfRadioCommunication::orderToEstablishACommunicationSession_fromOBU */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderToEstablishACommunicationSession_fromOBU,
  /* MoRC_Pck::managementOfRadioCommunication::orderDoesNotRequestToContactAnAcceptingRBC */ kcg_bool orderDoesNotRequestToContactAnAcceptingRBC,
  /* MoRC_Pck::managementOfRadioCommunication::trainPassesA_RBC_RBC_border_WithItsFrontEnd */ kcg_bool trainPassesA_RBC_RBC_border_WithItsFrontEnd,
  /* MoRC_Pck::managementOfRadioCommunication::systemVersionFromTracksideSupported */ kcg_bool systemVersionFromTracksideSupported,
  /* MoRC_Pck::managementOfRadioCommunication::systemVersionReceived */ kcg_bool systemVersionReceived,
  /* MoRC_Pck::managementOfRadioCommunication::mode */ M_MODE mode,
  /* MoRC_Pck::managementOfRadioCommunication::atStartOfMission */ kcg_bool atStartOfMission,
  /* MoRC_Pck::managementOfRadioCommunication::modeChangeHasToBeReportedToRBC */ kcg_bool modeChangeHasToBeReportedToRBC,
  /* MoRC_Pck::managementOfRadioCommunication::driverHasManuallyChangedLevel */ kcg_bool driverHasManuallyChangedLevel,
  /* MoRC_Pck::managementOfRadioCommunication::trainFrontReachesEndOfAnnouncedRadioHole */ kcg_bool trainFrontReachesEndOfAnnouncedRadioHole,
  /* MoRC_Pck::managementOfRadioCommunication::startOfMissionProcedureCompleted */ kcg_bool startOfMissionProcedureCompleted,
  /* MoRC_Pck::managementOfRadioCommunication::trainFrontInsideInAnAnnouncedRadioHole */ kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* MoRC_Pck::managementOfRadioCommunication::OBU_hasToEstablishANewSession */ kcg_bool OBU_hasToEstablishANewSession,
  /* MoRC_Pck::managementOfRadioCommunication::startOfMissionProcedureIsGoingOn */ kcg_bool startOfMissionProcedureIsGoingOn,
  /* MoRC_Pck::managementOfRadioCommunication::m38_initiationOfACommunicationSession */ kcg_bool m38_initiationOfACommunicationSession,
  /* MoRC_Pck::managementOfRadioCommunication::RadioNetworkID_Default */ P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  /* MoRC_Pck::managementOfRadioCommunication::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_managementOfRadioCommunication_MoRC_Pck *outC)
{
  mobileSWCmd_Type_MoRC_Pck tmp1;
  kcg_bool tmp;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Establishing */ kcg_bool br_1_guard_CommunicationSession_SM_Establishing;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L1 */ kcg_bool _L1_CommunicationSession_SM_Maintaining;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L2 */ kcg_bool _L2_CommunicationSession_SM_Maintaining;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L3 */ kcg_bool _L3_CommunicationSession_SM_Maintaining;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L4 */ kcg_bool _L4_CommunicationSession_SM_Maintaining;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L5 */ kcg_bool _L5_CommunicationSession_SM_Maintaining;
  /* MoRC_Pck::managementOfRadioCommunication::establishingACommunicationSessionAborted */ kcg_bool last_establishingACommunicationSessionAborted;
  /* MoRC_Pck::managementOfRadioCommunication::communicationSessionInitiatedFromTrackside */ kcg_bool last_communicationSessionInitiatedFromTrackside;
  /* MoRC_Pck::managementOfRadioCommunication::communicationSessionInitiatedByOBU */ kcg_bool last_communicationSessionInitiatedByOBU;
  /* MoRC_Pck::managementOfRadioCommunication::sessionEstablished */ kcg_bool last_sessionEstablished;
  /* MoRC_Pck::managementOfRadioCommunication::sessionSuccessfullyEstablished */ kcg_bool last_sessionSuccessfullyEstablished;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM */ SSM_ST_CommunicationSession_SM CommunicationSession_SM_state_act;
  /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM */ kcg_bool CommunicationSession_SM_reset_sel;
  /* MoRC_Pck::managementOfRadioCommunication::initiateTermination */ kcg_bool initiateTermination;
  /* MoRC_Pck::managementOfRadioCommunication::requestsToSetupTheSafeRadioConnectionStopped */ kcg_bool requestsToSetupTheSafeRadioConnectionStopped;
  /* MoRC_Pck::managementOfRadioCommunication::firstRequestToSetupASafeRadioConnection */ kcg_bool firstRequestToSetupASafeRadioConnection;
  /* MoRC_Pck::managementOfRadioCommunication::_L85 */ kcg_bool _L85;
  /* MoRC_Pck::managementOfRadioCommunication::_L111 */ mobileSWStatus_Type_MoRC_Pck _L111;
  /* MoRC_Pck::managementOfRadioCommunication::_L113 */ sessionStatus_Type_Radio_Types_Pkg _L113;
  
  if (outC->init) {
    last_sessionEstablished = kcg_false;
    CommunicationSession_SM_reset_sel = kcg_false;
    CommunicationSession_SM_state_act =
      SSM_st_NoSession_CommunicationSession_SM;
    kcg_copy_mobileSWStatus_Type_MoRC_Pck(
      &_L111,
      (mobileSWStatus_Type_MoRC_Pck *) &cInvalidMobileSWStatus_MoRC_Pck);
    _L113 = morc_st_inactive_Radio_Types_Pkg;
    last_communicationSessionInitiatedFromTrackside = kcg_false;
    last_communicationSessionInitiatedByOBU = kcg_false;
    last_establishingACommunicationSessionAborted = kcg_false;
    last_sessionSuccessfullyEstablished = kcg_false;
    outC->init = kcg_false;
    _L85 = kcg_false;
  }
  else {
    CommunicationSession_SM_state_act = outC->CommunicationSession_SM_state_nxt;
    CommunicationSession_SM_reset_sel = outC->CommunicationSession_SM_reset_nxt;
    last_sessionEstablished = outC->sessionEstablished;
    kcg_copy_mobileSWStatus_Type_MoRC_Pck(&_L111, &outC->mobileSWStatus);
    _L113 = outC->sessionStatus;
    last_communicationSessionInitiatedByOBU =
      outC->communicationSessionInitiatedByOBU;
    last_communicationSessionInitiatedFromTrackside =
      outC->communicationSessionInitiatedFromTrackside;
    last_establishingACommunicationSessionAborted =
      outC->establishingACommunicationSessionAborted;
    last_sessionSuccessfullyEstablished = outC->sessionSuccessfullyEstablished;
    _L85 = outC->prevSessionTerminatedDueToLossOfSafeRadioConnection;
  }
  switch (CommunicationSession_SM_state_act) {
    case SSM_st_Terminating_CommunicationSession_SM :
      outC->sessionStatus = morc_st_terminating_Radio_Types_Pkg;
      break;
    case SSM_st_Maintaining_CommunicationSession_SM :
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */
        maintaining_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
      }
      /* 1 */
      maintaining_a_Session_MoRC_Pck_Subfunc_Pkg(
        last_sessionEstablished,
        (kcg_bool)
          (_L111.valid & (mswc_registered_MoRC_Pck == _L111.connectionStatus)),
        (kcg_bool)
          (_L111.valid & (_L111.connectionStatus ==
              mswc_unregistered_MoRC_Pck)),
        kcg_true,
        trainFrontInsideInAnAnnouncedRadioHole,
        currentTime,
        &outC->Context_1);
      _L1_CommunicationSession_SM_Maintaining =
        outC->Context_1.tryToSetupANewSafeRadioConnection;
      _L2_CommunicationSession_SM_Maintaining =
        outC->Context_1.informTheDriverThatNoConnectionWasSetup;
      _L3_CommunicationSession_SM_Maintaining =
        outC->Context_1.firstRequestToSetupASafeRadioConnection;
      _L4_CommunicationSession_SM_Maintaining =
        outC->Context_1.finalAttemptToSetupTheSafeRadioConnectionFailed;
      _L5_CommunicationSession_SM_Maintaining =
        outC->Context_1.requestsToSetupTheSafeRadioConnectionStopped;
      outC->sessionStatus = morc_st_maintaining_Radio_Types_Pkg;
      break;
    case SSM_st_Establishing_CommunicationSession_SM :
      outC->sessionStatus = morc_st_establishing_Radio_Types_Pkg;
      break;
    case SSM_st_NoSession_CommunicationSession_SM :
      outC->sessionStatus = morc_st_inactive_Radio_Types_Pkg;
      break;
    
  }
  /* 1 */
  terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg(
    orderReceivedFromTrackside,
    outC->sessionStatus,
    OBU_hasToEstablishANewSession,
    &outC->_1_Context_1);
  /* 1 */
  FallingEdge_digital(
    (kcg_bool) (level == M_LEVEL_Level_1),
    &outC->_4_Context_1);
  /* 1 */
  initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg(
    orderReceivedFromTrackside,
    errorConditionRequiringTerminationDetected,
    trainIsRejectedByRBC_duringStartOfMission,
    driverClosesTheDeskduringStartOfMission,
    trainExitedFromAnRBCArea,
    orderReceivedFromTrackside,
    currentTime,
    isInCommunicationSessionWithAnRIU,
    outC->_4_Context_1.FE_Output,
    endOfMissionIsExecuted,
    &outC->_5_Context_1);
  outC->sendAPositionReport = outC->_5_Context_1.sendAPositionReport;
  initiateTermination = outC->_5_Context_1.initiateTermination |
    outC->_1_Context_1.initiateTermination;
  switch (CommunicationSession_SM_state_act) {
    case SSM_st_Terminating_CommunicationSession_SM :
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->InformTheDriverThatNoConnectionWasSetup = kcg_false;
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */
        terminating_a_CommunicationSession_reset_MoRC_Pck_Subfunc_Pkg(
          &outC->_2_Context_1);
      }
      /* 1 */
      terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg(
        kcg_true,
        (kcg_bool) (morc_st_maintaining_Radio_Types_Pkg == _L113),
        acknowledgementOfTerminationOfCommunicationSessionReceived,
        (kcg_bool) (_L113 == morc_st_establishing_Radio_Types_Pkg),
        currentTime,
        last_establishingACommunicationSessionAborted,
        &outC->_2_Context_1);
      outC->sendATerminationOfCommunicationMessage =
        outC->_2_Context_1.sendATerminationOfCommunicationMessage;
      outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
        outC->_2_Context_1.ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      outC->sessionSuccessfullyEstablished =
        last_sessionSuccessfullyEstablished;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside =
        outC->_2_Context_1.requestReleaseOfSafeRadioConnectionWithTrackside;
      outC->sessionEstablished = last_sessionEstablished;
      firstRequestToSetupASafeRadioConnection = kcg_false;
      requestsToSetupTheSafeRadioConnectionStopped = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection = _L85;
      outC->communicationSessionInitiatedByOBU =
        last_communicationSessionInitiatedByOBU;
      outC->communicationSessionInitiatedFromTrackside =
        last_communicationSessionInitiatedFromTrackside;
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      outC->CommunicationSession_SM_reset_nxt =
        outC->_2_Context_1.communicationSessionTerminated;
      if (outC->_2_Context_1.requestReleaseOfSafeRadioConnectionWithTrackside) {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *)
            &cTerminateSafeRadioConnectionCmd_MoRC_Pck);
      }
      else {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *) &cInvalidMobileSWCmd_MoRC_Pck);
      }
      if (outC->_2_Context_1.communicationSessionTerminated) {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_NoSession_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Terminating_CommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    case SSM_st_Maintaining_CommunicationSession_SM :
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->InformTheDriverThatNoConnectionWasSetup =
        _L2_CommunicationSession_SM_Maintaining;
      outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      outC->sessionSuccessfullyEstablished =
        last_sessionSuccessfullyEstablished;
      outC->sessionEstablished = last_sessionEstablished;
      requestsToSetupTheSafeRadioConnectionStopped = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        _L4_CommunicationSession_SM_Maintaining;
      outC->communicationSessionInitiatedByOBU =
        last_communicationSessionInitiatedByOBU;
      outC->communicationSessionInitiatedFromTrackside =
        last_communicationSessionInitiatedFromTrackside;
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      firstRequestToSetupASafeRadioConnection =
        _L3_CommunicationSession_SM_Maintaining;
      outC->CommunicationSession_SM_reset_nxt = initiateTermination;
      if (_L5_CommunicationSession_SM_Maintaining) {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *)
            &cTerminateSafeRadioConnectionCmd_MoRC_Pck);
      }
      else if (_L1_CommunicationSession_SM_Maintaining) {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *)
            &cRegisterSafeRadioConnectionCmd_MoRC_Pck);
      }
      else {
        kcg_copy_mobileSWCmd_Type_MoRC_Pck(
          &tmp1,
          (mobileSWCmd_Type_MoRC_Pck *) &cInvalidMobileSWCmd_MoRC_Pck);
      }
      if (initiateTermination) {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Terminating_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Maintaining_CommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    case SSM_st_Establishing_CommunicationSession_SM :
      if (CommunicationSession_SM_reset_sel) {
        /* 2 */
        establish_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_2);
      }
      /* 2 */
      establish_a_Session_MoRC_Pck_Subfunc_Pkg(
        isPartOfAnOngoingStartOfMissionProcedure,
        (kcg_bool)
          (_L111.valid & (_L111.connectionStatus == mswc_registered_MoRC_Pck)),
        _L111.settingUpConnectionHasFailed,
        endOfMissionIsExecuted,
        trainPassesALevelTransitionBorder,
        &outC->_1_Context_1.newOrderToEstablishASession_out,
        orderToEstablishACommunicationSession_fromOBU,
        orderDoesNotRequestToContactAnAcceptingRBC,
        trainPassesA_RBC_RBC_border_WithItsFrontEnd,
        systemVersionFromTracksideSupported,
        systemVersionReceived,
        m38_initiationOfACommunicationSession,
        last_communicationSessionInitiatedByOBU,
        last_communicationSessionInitiatedFromTrackside,
        &outC->Context_2);
      outC->InformTheDriverThatNoConnectionWasSetup =
        outC->Context_2.InformTheDriverThatNoConnectionWasSetup;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        outC->Context_2.sendTheMessageInitiationOfCommunicationSessionToTrackside;
      outC->sendMessage_NoCompatibleVersionSupported =
        outC->Context_2.sendMessage_NoCompatibleVersionSupported;
      outC->sendASessionEstablishedReportToTrackside =
        outC->Context_2.sendASessionEstablishedReportToTrackside;
      outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->sessionSuccessfullyEstablished =
        outC->Context_2.sessionSuccessfullyEstablished;
      outC->requestTheSetupOfASafeRadioConnection =
        outC->Context_2.requestTheSetupOfASafeRadioConnection;
      outC->sessionEstablished = outC->Context_2.sessionSuccessfullyEstablished;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        outC->Context_2.finalAttemptToSetupTheSafeRadioConnectionFailed;
      outC->communicationSessionInitiatedByOBU =
        last_communicationSessionInitiatedByOBU;
      outC->communicationSessionInitiatedFromTrackside =
        last_communicationSessionInitiatedFromTrackside;
      outC->establishingACommunicationSessionAborted =
        outC->Context_2.establishingACommunicationSessionAborted;
      requestsToSetupTheSafeRadioConnectionStopped =
        outC->Context_2.requestsToSetupTheSafeRadioConnectionStopped;
      firstRequestToSetupASafeRadioConnection =
        outC->Context_2.firstRequestToSetupASafeRadioConnection;
      br_1_guard_CommunicationSession_SM_Establishing =
        outC->Context_2.terminateTheCommunicationSession | initiateTermination;
      kcg_copy_mobileSWCmd_Type_MoRC_Pck(
        &tmp1,
        (mobileSWCmd_Type_MoRC_Pck *) &cInvalidMobileSWCmd_MoRC_Pck);
      if (br_1_guard_CommunicationSession_SM_Establishing) {
        outC->CommunicationSession_SM_reset_nxt = kcg_true;
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Terminating_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        if (outC->Context_2.sessionSuccessfullyEstablished) {
          outC->CommunicationSession_SM_state_nxt =
            SSM_st_Maintaining_CommunicationSession_SM;
        }
        else {
          outC->CommunicationSession_SM_state_nxt =
            SSM_st_Establishing_CommunicationSession_SM;
        }
        outC->CommunicationSession_SM_reset_nxt =
          outC->Context_2.sessionSuccessfullyEstablished;
        if (outC->Context_2.sessionSuccessfullyEstablished) {
          tmp = kcg_true;
        }
        else {
          tmp = kcg_false;
        }
      }
      break;
    case SSM_st_NoSession_CommunicationSession_SM :
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->InformTheDriverThatNoConnectionWasSetup = kcg_false;
      outC->ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->sessionEstablished = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      firstRequestToSetupASafeRadioConnection = kcg_false;
      requestsToSetupTheSafeRadioConnectionStopped = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection = _L85;
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */
        initiate_a_Session_reset_MoRC_Pck_Subfunc_Pkg(&outC->_3_Context_1);
      }
      /* 1 */
      initiate_a_Session_MoRC_Pck_Subfunc_Pkg(
        (*orderToEstablishACommunicationSession_fromOBU).establish,
        establishOrderReceivedFromRBC,
        establishOrderReceivedFromRadioInfillUnit,
        m38_initiationOfACommunicationSession,
        level,
        atStartOfMission,
        (kcg_bool)
          (establishOrderReceivedFromRBC |
            establishOrderReceivedFromRadioInfillUnit |
            m38_initiationOfACommunicationSession),
        mode,
        modeChangeHasToBeReportedToRBC,
        driverHasManuallyChangedLevel,
        trainFrontReachesEndOfAnnouncedRadioHole,
        outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
        startOfMissionProcedureCompleted,
        kcg_true,
        outC->_1_Context_1.initiateEstablishingNewSession,
        &outC->_3_Context_1);
      outC->communicationSessionInitiatedByOBU =
        outC->_3_Context_1.communicationSessionInitiatedByOBU_;
      outC->communicationSessionInitiatedFromTrackside =
        outC->_3_Context_1.communicationSessionInitiatedFromTrackside_;
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      outC->CommunicationSession_SM_reset_nxt =
        outC->_3_Context_1.initiate_a_communicationSession_Request;
      kcg_copy_mobileSWCmd_Type_MoRC_Pck(
        &tmp1,
        (mobileSWCmd_Type_MoRC_Pck *) &cInvalidMobileSWCmd_MoRC_Pck);
      if (outC->_3_Context_1.initiate_a_communicationSession_Request) {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_Establishing_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          SSM_st_NoSession_CommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    
  }
  /* 1 */
  registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg(
    atPowerUp,
    afterDriverEntryOfANewRadioNetworkID,
    level,
    outC->requestTheSetupOfASafeRadioConnection,
    requestsToSetupTheSafeRadioConnectionStopped,
    atPowerDown,
    RadioNetworkID_memorized,
    RadioNetworkID_fromDriver,
    RadioNetworkID_fromTrackside,
    triggerDecisionThatNoRadioNetworkIDAvailable,
    mobileHWStatus,
    &tmp1,
    RadioNetworkID_Default,
    &outC->_6_Context_1);
  outC->orderTheRegistrationOfItsConnectedMobiles =
    outC->_6_Context_1.orderTheRegistrationOfItsConnectedMobiles;
  outC->memorizeTheLastRadioNetworkID =
    outC->_6_Context_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->currentRadioNetworkID,
    &outC->_6_Context_1.actualRadioNetworkID);
  outC->rejectOrderToContactRBC_or_RIU =
    outC->_6_Context_1.rejectOrderToContactRBC_or_RIU;
  kcg_copy_mobileHWCmd_Type_MoRC_Pck(
    &outC->mobileHWCmd,
    &outC->_6_Context_1.mobileHWCmd);
  kcg_copy_mobileSWStatus_Type_MoRC_Pck(
    &outC->mobileSWStatus,
    &outC->_6_Context_1.mobileSWStatus);
  _L85 = outC->mobileSWStatus.connectionStatus == mswc_registered_MoRC_Pck;
  /* 1 */ RisingEdge_digital(_L85, &outC->_7_Context_1);
  /* 2 */ FallingEdge_digital(_L85, &outC->_8_Context_2);
  /* 2 */
  RisingEdge_digital(
    (kcg_bool)
      (outC->mobileSWStatus.connectionStatus == mswc_unregistered_MoRC_Pck),
    &outC->_9_Context_2);
  /* 1 */
  safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg(
    startOfMissionProcedureIsGoingOn,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    requestsToSetupTheSafeRadioConnectionStopped,
    (kcg_bool) (outC->mobileSWStatus.valid & outC->_7_Context_1.RE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid & outC->_8_Context_2.FE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid & outC->_9_Context_2.RE_Output),
    trainFrontInsideInAnAnnouncedRadioHole,
    currentTime,
    firstRequestToSetupASafeRadioConnection,
    firstRequestToSetupASafeRadioConnection,
    connectionStatusTimerInterval,
    &outC->_10_Context_1);
  kcg_copy_safeRadioConnectionStatusValid_Type_MoRC_Pck(
    &outC->safeRadioConnectionStatus_toDriver,
    &outC->_10_Context_1.connectionStatus);
  /* 1 */
  EitherEdge_digital(
    outC->communicationSessionInitiatedByOBU,
    &outC->_11_Context_1);
  /* 2 */
  EitherEdge_digital(
    outC->communicationSessionInitiatedFromTrackside,
    &outC->_12_Context_2);
  /* 3 */
  EitherEdge_digital(
    outC->establishingACommunicationSessionAborted,
    &outC->Context_3);
  /* 4 */
  EitherEdge_digital(
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    &outC->Context_4);
  /* 5 */ EitherEdge_digital(outC->sessionEstablished, &outC->Context_5);
  outC->ready = !(tmp | outC->_11_Context_1.EE_Output |
      outC->_12_Context_2.EE_Output | outC->Context_3.EE_Output |
      outC->Context_4.EE_Output | outC->Context_5.EE_Output |
      !kcg_comp_mobileSWStatus_Type_MoRC_Pck(&outC->mobileSWStatus, &_L111) |
      (outC->sessionStatus != _L113));
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** managementOfRadioCommunication_MoRC_Pck.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

