/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_managementOfRadioCommunication.h"

void MoRC_managementOfRadioCommunication_init(
  MoRC_outC_managementOfRadioCommunication *outC)
{
  outC->init = kcg_true;
  outC->prevSessionTerminatedDueToLossOfSafeRadioConnection = kcg_true;
  outC->establishingACommunicationSessionAborted = kcg_true;
  outC->sessionStatus = MoRC_morc_st_inactive;
  outC->communicationSessionInitiatedFromTrackside = kcg_true;
  outC->communicationSessionInitiatedByOBU = kcg_true;
  outC->sessionEstablished = kcg_true;
  outC->CommunicationSession_SM_reset_nxt = kcg_true;
  outC->CommunicationSession_SM_state_nxt =
    MoRC_SSM_st_NoSession_CommunicationSession_SM;
  outC->ready = kcg_true;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
  outC->requestTheSetupOfASafeRadioConnection = kcg_true;
  outC->mobileSWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->mobileSWStatus.registeredRadioNetworkID = 0;
  outC->mobileSWStatus.connectionStatus = MoRC_mswc_unregistered;
  outC->mobileSWStatus.mobileHW_available = kcg_true;
  outC->mobileSWStatus.valid = kcg_true;
  outC->sessionSuccessfullyEstablished = kcg_true;
  outC->safeRadioConnectionStatus_toDriver.status = MoRC_srcs_NoConnection;
  outC->safeRadioConnectionStatus_toDriver.valid = kcg_true;
  outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
    kcg_true;
  outC->sendATerminationOfCommunicationMessage = kcg_true;
  outC->sendASessionEstablishedReportToTrackside = kcg_true;
  outC->sendMessage_NoCompatibleVersionSupported = kcg_true;
  outC->sendTheMessageInitiationOfCommunicationSessionToTrackside = kcg_true;
  outC->InformTheDriverThatNoConnectionWasSetup = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->orderTheRegistrationOfItsConnectedMobiles = kcg_true;
  outC->actualRadioNetworkID.radioNetworkID = 0;
  outC->actualRadioNetworkID.valid = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->mobileHWCmd.radioNetworkID = 0;
  outC->mobileHWCmd.action = MoRC_mhwa_nop;
  outC->mobileHWCmd.valid = kcg_true;
  outC->sendAPositionReport = kcg_true;
  MoRC_EitherEdge_init_digital(&outC->Context_9);
  MoRC_EitherEdge_init_digital(&outC->Context_8);
  MoRC_EitherEdge_init_digital(&outC->Context_7);
  MoRC_EitherEdge_init_digital(&outC->Context_6);
  MoRC_EitherEdge_init_digital(&outC->Context_1);
  MoRC_safeRadioConnectionIndication_init(&outC->_1_Context_1);
  MoRC_RisingEdge_init_digital(&outC->Context_3);
  MoRC_FallingEdge_init_digital(&outC->Context_2);
  MoRC_RisingEdge_init_digital(&outC->_2_Context_2);
  MoRC_registeringToTheRadioNetwork_init(&outC->_3_Context_1);
  MoRC_initiateTerminatingASession_init(&outC->_4_Context_2);
  MoRC_FallingEdge_init_digital(&outC->_5_Context_1);
  MoRC_Initiate_a_Session_init(&outC->_6_Context_1);
  MoRC_terminating_a_CommunicationSession_init(&outC->_7_Context_1);
  MoRC_establish_a_CommunicationSession_init(&outC->_8_Context_2);
  MoRC_terminateAndEstablishSession_init(&outC->_9_Context_1);
  MoRC_maintaining_a_CommunicationSession_init(&outC->_10_Context_1);
}


void MoRC_managementOfRadioCommunication_reset(
  MoRC_outC_managementOfRadioCommunication *outC)
{
  outC->init = kcg_true;
  /* 9 */ MoRC_EitherEdge_reset_digital(&outC->Context_9);
  /* 8 */ MoRC_EitherEdge_reset_digital(&outC->Context_8);
  /* 7 */ MoRC_EitherEdge_reset_digital(&outC->Context_7);
  /* 6 */ MoRC_EitherEdge_reset_digital(&outC->Context_6);
  /* 1 */ MoRC_EitherEdge_reset_digital(&outC->Context_1);
  /* 1 */ MoRC_safeRadioConnectionIndication_reset(&outC->_1_Context_1);
  /* 3 */ MoRC_RisingEdge_reset_digital(&outC->Context_3);
  /* 2 */ MoRC_FallingEdge_reset_digital(&outC->Context_2);
  /* 2 */ MoRC_RisingEdge_reset_digital(&outC->_2_Context_2);
  /* 1 */ MoRC_registeringToTheRadioNetwork_reset(&outC->_3_Context_1);
  /* 2 */ MoRC_initiateTerminatingASession_reset(&outC->_4_Context_2);
  /* 1 */ MoRC_FallingEdge_reset_digital(&outC->_5_Context_1);
  /* 1 */ MoRC_Initiate_a_Session_reset(&outC->_6_Context_1);
  /* 1 */ MoRC_terminating_a_CommunicationSession_reset(&outC->_7_Context_1);
  /* 2 */ MoRC_establish_a_CommunicationSession_reset(&outC->_8_Context_2);
  /* 1 */ MoRC_terminateAndEstablishSession_reset(&outC->_9_Context_1);
  /* 1 */ MoRC_maintaining_a_CommunicationSession_reset(&outC->_10_Context_1);
}

/* managementOfRadioCommunication */
void MoRC_managementOfRadioCommunication(
  /* managementOfRadioCommunication::actualTime */ MoRC_time_Type actualTime,
  /* managementOfRadioCommunication::acknowledgementOfTerminationOfCommunicationSessionReceived */ kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* managementOfRadioCommunication::orderReceivedFromTrackside */ MoRC_orderToContactAnRBC_Type *orderReceivedFromTrackside,
  /* managementOfRadioCommunication::orderReceivedFromRBC */ MoRC_orderToContactAnRBC_Type *orderReceivedFromRBC,
  /* managementOfRadioCommunication::orderReceivedFromRadio_InfillUnit */ MoRC_orderToContactAnRBC_Type *orderReceivedFromRadio_InfillUnit,
  /* managementOfRadioCommunication::errorConditionRequiringTerminationDetected */ kcg_bool errorConditionRequiringTerminationDetected,
  /* managementOfRadioCommunication::trainIsRejectedByRBC_duringStartOfMission */ kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* managementOfRadioCommunication::driverClosesTheDeskduringStartOfMission */ kcg_bool driverClosesTheDeskduringStartOfMission,
  /* managementOfRadioCommunication::trainExitedFromAnRBCArea */ kcg_bool trainExitedFromAnRBCArea,
  /* managementOfRadioCommunication::endOfMissionIsExecuted */ kcg_bool endOfMissionIsExecuted,
  /* managementOfRadioCommunication::isInCommunicationSessionWithAnRIU */ kcg_bool isInCommunicationSessionWithAnRIU,
  /* managementOfRadioCommunication::atPowerUp */ kcg_bool atPowerUp,
  /* managementOfRadioCommunication::atPowerOff */ kcg_bool atPowerOff,
  /* managementOfRadioCommunication::M_LEVEL */ MoRC_M_LEVEL_Type M_LEVEL,
  /* managementOfRadioCommunication::RadioNetworkID_memorized */ MoRC_validRadioNetworkID_Type *RadioNetworkID_memorized,
  /* managementOfRadioCommunication::RadioNetworkID_fromDriver */ MoRC_validRadioNetworkID_Type *RadioNetworkID_fromDriver,
  /* managementOfRadioCommunication::RadioNetworkID_fromTrackside */ MoRC_validRadioNetworkID_Type *RadioNetworkID_fromTrackside,
  /* managementOfRadioCommunication::afterDriverEntryOfANewRadioNetworkID */ kcg_bool afterDriverEntryOfANewRadioNetworkID,
  /* managementOfRadioCommunication::triggerDecisionThatNoRadioNetworkIDAvailable */ kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable,
  /* managementOfRadioCommunication::mobileHWStatus */ MoRC_mobileHWStatus_Type *mobileHWStatus,
  /* managementOfRadioCommunication::isPartOfAnOngoingStartOfMissionProcedure */ kcg_bool isPartOfAnOngoingStartOfMissionProcedure,
  /* managementOfRadioCommunication::trainPassesALevelTransitionBorder */ kcg_bool trainPassesALevelTransitionBorder,
  /* managementOfRadioCommunication::orderToEstablishACommunicationSession_fromOBU */ MoRC_orderToContactAnRBC_Type *orderToEstablishACommunicationSession_fromOBU,
  /* managementOfRadioCommunication::orderDoesNotRequestToContactAnAcceptingRBC */ kcg_bool orderDoesNotRequestToContactAnAcceptingRBC,
  /* managementOfRadioCommunication::trainPassesA_RBC_RBC_border_WithItsFrontEnd */ kcg_bool trainPassesA_RBC_RBC_border_WithItsFrontEnd,
  /* managementOfRadioCommunication::systemVersionFromTracksideSupported */ kcg_bool systemVersionFromTracksideSupported,
  /* managementOfRadioCommunication::systemVersionReceived */ kcg_bool systemVersionReceived,
  /* managementOfRadioCommunication::M_MODE */ MoRC_M_MODE_Type M_MODE,
  /* managementOfRadioCommunication::atStartOfMission */ kcg_bool atStartOfMission,
  /* managementOfRadioCommunication::modeChangeHasToBeReportedToRBC */ kcg_bool modeChangeHasToBeReportedToRBC,
  /* managementOfRadioCommunication::driverHasManuallyChangedLevel */ kcg_bool driverHasManuallyChangedLevel,
  /* managementOfRadioCommunication::trainFrontReachesEndOfAnnouncedRadioHole */ kcg_bool trainFrontReachesEndOfAnnouncedRadioHole,
  /* managementOfRadioCommunication::startOfMissionProcedureCompleted */ kcg_bool startOfMissionProcedureCompleted,
  /* managementOfRadioCommunication::trainFrontInsideInAnAnnouncedRadioHole */ kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* managementOfRadioCommunication::OBU_hasToEstablishANewSession */ kcg_bool OBU_hasToEstablishANewSession,
  /* managementOfRadioCommunication::startOfMissionProcedureIsGoingOn */ kcg_bool startOfMissionProcedureIsGoingOn,
  /* managementOfRadioCommunication::RadioNetworkID_Default */ MoRC_validRadioNetworkID_Type *RadioNetworkID_Default,
  /* managementOfRadioCommunication::connectionStatusTimerInterval */ MoRC_time_Type connectionStatusTimerInterval,
  MoRC_outC_managementOfRadioCommunication *outC)
{
  MoRC_mobileSWCmd_Type tmp1;
  kcg_bool tmp;
  /* managementOfRadioCommunication::CommunicationSession_SM::NoSession::_L38 */ kcg_bool _L38_CommunicationSession_SM_NoSession;
  /* managementOfRadioCommunication::CommunicationSession_SM::NoSession::_L37 */ kcg_bool _L37_CommunicationSession_SM_NoSession;
  /* managementOfRadioCommunication::CommunicationSession_SM::NoSession::_L5 */ kcg_bool _L5_CommunicationSession_SM_NoSession;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing */ kcg_bool br_1_guard_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L35 */ kcg_bool _L35_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L31 */ kcg_bool _L31_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L24 */ kcg_bool _L24_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L26 */ kcg_bool _L26_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L27 */ kcg_bool _L27_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L28 */ kcg_bool _L28_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L1 */ kcg_bool _L1_CommunicationSession_SM_Maintaining;
  /* managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L3 */ kcg_bool _L3_CommunicationSession_SM_Maintaining;
  /* managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L4 */ kcg_bool _L4_CommunicationSession_SM_Maintaining;
  /* managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L5 */ kcg_bool _L5_CommunicationSession_SM_Maintaining;
  /* managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L12 */ kcg_bool _L12_CommunicationSession_SM_Terminating;
  /* managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L2 */ kcg_bool _L2_CommunicationSession_SM_Terminating;
  /* managementOfRadioCommunication::finalAttemptToSetupTheSafeRadioConnectionFailed */ kcg_bool last_finalAttemptToSetupTheSafeRadioConnectionFailed;
  /* managementOfRadioCommunication::establishingACommunicationSessionAborted */ kcg_bool last_establishingACommunicationSessionAborted;
  /* managementOfRadioCommunication::CommunicationSession_SM */ MoRC_SSM_ST_CommunicationSession_SM CommunicationSession_SM_state_act;
  /* managementOfRadioCommunication::requestsToSetupTheSafeRadioConnectionStopped */ kcg_bool requestsToSetupTheSafeRadioConnectionStopped;
  /* managementOfRadioCommunication::firstRequestToSetupASafeRadioConnection */ kcg_bool firstRequestToSetupASafeRadioConnection;
  /* managementOfRadioCommunication::_L85 */ kcg_bool _L85;
  /* managementOfRadioCommunication::_L111 */ MoRC_mobileSWStatus_Type _L111;
  /* managementOfRadioCommunication::_L113 */ MoRC_sessionStatus_Type _L113;
  
  if (outC->init) {
    last_finalAttemptToSetupTheSafeRadioConnectionFailed = kcg_false;
    tmp = kcg_false;
    CommunicationSession_SM_state_act =
      MoRC_SSM_st_NoSession_CommunicationSession_SM;
    MoRC_kcg_copy_mobileSWStatus_Type(
      &_L111,
      (MoRC_mobileSWStatus_Type *) &MoRC_cInvalidMobileSWStatus);
    _L113 = MoRC_morc_st_inactive;
    _L85 = kcg_false;
    br_1_guard_CommunicationSession_SM_Establishing = kcg_false;
  }
  else {
    CommunicationSession_SM_state_act = outC->CommunicationSession_SM_state_nxt;
    tmp = outC->CommunicationSession_SM_reset_nxt;
    last_finalAttemptToSetupTheSafeRadioConnectionFailed =
      outC->sessionEstablished;
    MoRC_kcg_copy_mobileSWStatus_Type(&_L111, &outC->mobileSWStatus);
    _L113 = outC->sessionStatus;
    br_1_guard_CommunicationSession_SM_Establishing =
      outC->communicationSessionInitiatedFromTrackside;
    _L85 = outC->communicationSessionInitiatedByOBU;
  }
  switch (CommunicationSession_SM_state_act) {
    case MoRC_SSM_st_Terminating_CommunicationSession_SM :
      outC->sessionStatus = MoRC_morc_st_terminating;
      break;
    case MoRC_SSM_st_Maintaining_CommunicationSession_SM :
      if (tmp) {
        /* 1 */
        MoRC_maintaining_a_CommunicationSession_reset(&outC->_10_Context_1);
      }
      /* 1 */
      MoRC_maintaining_a_CommunicationSession(
        last_finalAttemptToSetupTheSafeRadioConnectionFailed,
        (kcg_bool)
          (_L111.valid && MoRC_mswc_registered == _L111.connectionStatus),
        (kcg_bool)
          (_L111.valid && _L111.connectionStatus == MoRC_mswc_unregistered),
        kcg_true,
        trainFrontInsideInAnAnnouncedRadioHole,
        actualTime,
        &outC->_10_Context_1);
      _L1_CommunicationSession_SM_Maintaining =
        outC->_10_Context_1.tryToSetupANewSafeRadioConnection;
      last_establishingACommunicationSessionAborted =
        outC->_10_Context_1.informTheDriverThatNoConnectionWasSetup;
      _L3_CommunicationSession_SM_Maintaining =
        outC->_10_Context_1.firstRequestToSetupASafeRadioConnection;
      _L4_CommunicationSession_SM_Maintaining =
        outC->_10_Context_1.finalAttemptToSetupTheSafeRadioConnectionFailed;
      _L5_CommunicationSession_SM_Maintaining =
        outC->_10_Context_1.requestsToSetupTheSafeRadioConnectionStopped;
      outC->sessionStatus = MoRC_morc_st_maintaining;
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      outC->sessionStatus = MoRC_morc_st_establishing;
      break;
    case MoRC_SSM_st_NoSession_CommunicationSession_SM :
      outC->sessionStatus = MoRC_morc_st_inactive;
      break;
    
  }
  /* 1 */
  MoRC_terminateAndEstablishSession(
    orderReceivedFromTrackside,
    outC->sessionStatus,
    OBU_hasToEstablishANewSession,
    &outC->_9_Context_1);
  switch (CommunicationSession_SM_state_act) {
    case MoRC_SSM_st_NoSession_CommunicationSession_SM :
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->InformTheDriverThatNoConnectionWasSetup = kcg_false;
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      if (tmp) {
        /* 2 */
        MoRC_establish_a_CommunicationSession_reset(&outC->_8_Context_2);
      }
      /* 2 */
      MoRC_establish_a_CommunicationSession(
        isPartOfAnOngoingStartOfMissionProcedure,
        (kcg_bool)
          (_L111.valid && _L111.connectionStatus == MoRC_mswc_registered),
        _L111.settingUpConnectionHasFailed,
        endOfMissionIsExecuted,
        trainPassesALevelTransitionBorder,
        &outC->_9_Context_1.newOrderToEstablishASession_out,
        orderToEstablishACommunicationSession_fromOBU,
        orderDoesNotRequestToContactAnAcceptingRBC,
        trainPassesA_RBC_RBC_border_WithItsFrontEnd,
        systemVersionFromTracksideSupported,
        systemVersionReceived,
        br_1_guard_CommunicationSession_SM_Establishing,
        _L85,
        br_1_guard_CommunicationSession_SM_Establishing,
        &outC->_8_Context_2);
      _L5_CommunicationSession_SM_NoSession =
        outC->_8_Context_2.requestTheSetupOfASafeRadioConnection;
      _L24_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.terminateTheCommunicationSession;
      _L26_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.firstRequestToSetupASafeRadioConnection;
      _L27_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.finalAttemptToSetupTheSafeRadioConnectionFailed;
      _L28_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.requestsToSetupTheSafeRadioConnectionStopped;
      _L31_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.sessionSuccessfullyEstablished;
      _L35_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.establishingACommunicationSessionAborted;
      outC->InformTheDriverThatNoConnectionWasSetup =
        outC->_8_Context_2.InformTheDriverThatNoConnectionWasSetup;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        outC->_8_Context_2.sendTheMessageInitiationOfCommunicationSessionToTrackside;
      outC->sendMessage_NoCompatibleVersionSupported =
        outC->_8_Context_2.sendMessage_NoCompatibleVersionSupported;
      outC->sendASessionEstablishedReportToTrackside =
        outC->_8_Context_2.sendASessionEstablishedReportToTrackside;
      break;
    case MoRC_SSM_st_Maintaining_CommunicationSession_SM :
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->InformTheDriverThatNoConnectionWasSetup =
        last_establishingACommunicationSessionAborted;
      break;
    case MoRC_SSM_st_Terminating_CommunicationSession_SM :
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->InformTheDriverThatNoConnectionWasSetup = kcg_false;
      break;
    
  }
  if (outC->init) {
    last_establishingACommunicationSessionAborted = kcg_false;
    firstRequestToSetupASafeRadioConnection = kcg_false;
  }
  else {
    last_establishingACommunicationSessionAborted =
      outC->establishingACommunicationSessionAborted;
    firstRequestToSetupASafeRadioConnection =
      outC->sessionSuccessfullyEstablished;
  }
  switch (CommunicationSession_SM_state_act) {
    case MoRC_SSM_st_Terminating_CommunicationSession_SM :
      if (tmp) {
        /* 1 */
        MoRC_terminating_a_CommunicationSession_reset(&outC->_7_Context_1);
      }
      /* 1 */
      MoRC_terminating_a_CommunicationSession(
        kcg_true,
        (kcg_bool) (MoRC_morc_st_maintaining == _L113),
        acknowledgementOfTerminationOfCommunicationSessionReceived,
        (kcg_bool) (_L113 == MoRC_morc_st_establishing),
        actualTime,
        last_establishingACommunicationSessionAborted,
        &outC->_7_Context_1);
      _L2_CommunicationSession_SM_Terminating =
        outC->_7_Context_1.requestReleaseOfSafeRadioConnectionWithTrackside;
      _L12_CommunicationSession_SM_Terminating =
        outC->_7_Context_1.communicationSessionTerminated;
      outC->sendATerminationOfCommunicationMessage =
        outC->_7_Context_1.sendATerminationOfCommunicationMessage;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        outC->_7_Context_1.ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      outC->sessionSuccessfullyEstablished =
        firstRequestToSetupASafeRadioConnection;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside =
        _L2_CommunicationSession_SM_Terminating;
      outC->sessionEstablished =
        last_finalAttemptToSetupTheSafeRadioConnectionFailed;
      break;
    case MoRC_SSM_st_Maintaining_CommunicationSession_SM :
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      outC->sessionSuccessfullyEstablished =
        firstRequestToSetupASafeRadioConnection;
      outC->sessionEstablished =
        last_finalAttemptToSetupTheSafeRadioConnectionFailed;
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->sessionSuccessfullyEstablished =
        _L31_CommunicationSession_SM_Establishing;
      outC->requestTheSetupOfASafeRadioConnection =
        _L5_CommunicationSession_SM_NoSession;
      outC->sessionEstablished = _L31_CommunicationSession_SM_Establishing;
      break;
    case MoRC_SSM_st_NoSession_CommunicationSession_SM :
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->sessionEstablished = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      _L37_CommunicationSession_SM_NoSession = /* 1 */
        MoRC_isOrderToEstablishConnection(orderReceivedFromRBC);
      _L38_CommunicationSession_SM_NoSession = /* 2 */
        MoRC_isOrderToEstablishConnection(orderReceivedFromRadio_InfillUnit);
      break;
    
  }
  if (outC->init) {
    outC->init = kcg_false;
    last_finalAttemptToSetupTheSafeRadioConnectionFailed = kcg_false;
  }
  else {
    last_finalAttemptToSetupTheSafeRadioConnectionFailed =
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection;
  }
  switch (CommunicationSession_SM_state_act) {
    case MoRC_SSM_st_NoSession_CommunicationSession_SM :
      firstRequestToSetupASafeRadioConnection = kcg_false;
      requestsToSetupTheSafeRadioConnectionStopped = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        last_finalAttemptToSetupTheSafeRadioConnectionFailed;
      if (tmp) {
        /* 1 */ MoRC_Initiate_a_Session_reset(&outC->_6_Context_1);
      }
      /* 1 */
      MoRC_Initiate_a_Session(
        /* isOrderToEstablishConnection */
        MoRC_isOrderToEstablishConnection(
          orderToEstablishACommunicationSession_fromOBU),
        _L37_CommunicationSession_SM_NoSession,
        _L38_CommunicationSession_SM_NoSession,
        M_LEVEL,
        atStartOfMission,
        (kcg_bool)
          (_L37_CommunicationSession_SM_NoSession ||
            _L38_CommunicationSession_SM_NoSession),
        M_MODE,
        modeChangeHasToBeReportedToRBC,
        driverHasManuallyChangedLevel,
        trainFrontReachesEndOfAnnouncedRadioHole,
        outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
        startOfMissionProcedureCompleted,
        kcg_true,
        outC->_9_Context_1.initiateEstablishingNewSession,
        &outC->_6_Context_1);
      _L5_CommunicationSession_SM_NoSession =
        outC->_6_Context_1.initiate_a_communicationSession_Request;
      outC->communicationSessionInitiatedByOBU =
        outC->_6_Context_1.communicationSessionInitiatedByOBU_;
      outC->communicationSessionInitiatedFromTrackside =
        outC->_6_Context_1.communicationSessionInitiatedFromTrackside_;
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        _L27_CommunicationSession_SM_Establishing;
      outC->communicationSessionInitiatedByOBU = _L85;
      outC->communicationSessionInitiatedFromTrackside =
        br_1_guard_CommunicationSession_SM_Establishing;
      outC->establishingACommunicationSessionAborted =
        _L35_CommunicationSession_SM_Establishing;
      requestsToSetupTheSafeRadioConnectionStopped =
        _L28_CommunicationSession_SM_Establishing;
      firstRequestToSetupASafeRadioConnection =
        _L26_CommunicationSession_SM_Establishing;
      break;
    case MoRC_SSM_st_Maintaining_CommunicationSession_SM :
      requestsToSetupTheSafeRadioConnectionStopped = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        _L4_CommunicationSession_SM_Maintaining;
      outC->communicationSessionInitiatedByOBU = _L85;
      outC->communicationSessionInitiatedFromTrackside =
        br_1_guard_CommunicationSession_SM_Establishing;
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      firstRequestToSetupASafeRadioConnection =
        _L3_CommunicationSession_SM_Maintaining;
      break;
    case MoRC_SSM_st_Terminating_CommunicationSession_SM :
      firstRequestToSetupASafeRadioConnection = kcg_false;
      requestsToSetupTheSafeRadioConnectionStopped = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        last_finalAttemptToSetupTheSafeRadioConnectionFailed;
      outC->communicationSessionInitiatedByOBU = _L85;
      outC->communicationSessionInitiatedFromTrackside =
        br_1_guard_CommunicationSession_SM_Establishing;
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      break;
    
  }
  /* 1 */
  MoRC_FallingEdge_digital(
    (kcg_bool) (M_LEVEL == MoRC_ETCS_Level_1),
    &outC->_5_Context_1);
  /* 2 */
  MoRC_initiateTerminatingASession(
    orderReceivedFromTrackside,
    errorConditionRequiringTerminationDetected,
    trainIsRejectedByRBC_duringStartOfMission,
    driverClosesTheDeskduringStartOfMission,
    trainExitedFromAnRBCArea,
    orderReceivedFromTrackside,
    actualTime,
    isInCommunicationSessionWithAnRIU,
    outC->_5_Context_1.FE_Output,
    endOfMissionIsExecuted,
    &outC->_4_Context_2);
  outC->sendAPositionReport = outC->_4_Context_2.sendAPositionReport;
  last_establishingACommunicationSessionAborted =
    outC->_4_Context_2.initiateTermination ||
    outC->_9_Context_1.initiateTermination;
  switch (CommunicationSession_SM_state_act) {
    case MoRC_SSM_st_Terminating_CommunicationSession_SM :
      outC->CommunicationSession_SM_reset_nxt =
        _L12_CommunicationSession_SM_Terminating;
      if (_L2_CommunicationSession_SM_Terminating) {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp1,
          (MoRC_mobileSWCmd_Type *) &MoRC_cTerminateSafeRadioConnectionCmd);
      }
      else {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp1,
          (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      }
      if (_L12_CommunicationSession_SM_Terminating) {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_NoSession_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Terminating_CommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    case MoRC_SSM_st_Maintaining_CommunicationSession_SM :
      outC->CommunicationSession_SM_reset_nxt =
        last_establishingACommunicationSessionAborted;
      if (_L5_CommunicationSession_SM_Maintaining) {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp1,
          (MoRC_mobileSWCmd_Type *) &MoRC_cTerminateSafeRadioConnectionCmd);
      }
      else if (_L1_CommunicationSession_SM_Maintaining) {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp1,
          (MoRC_mobileSWCmd_Type *) &MoRC_cRegisterSafeRadioConnectionCmd);
      }
      else {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp1,
          (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      }
      if (last_establishingACommunicationSessionAborted) {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Terminating_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Maintaining_CommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      br_1_guard_CommunicationSession_SM_Establishing =
        _L24_CommunicationSession_SM_Establishing ||
        last_establishingACommunicationSessionAborted;
      MoRC_kcg_copy_mobileSWCmd_Type(
        &tmp1,
        (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      if (br_1_guard_CommunicationSession_SM_Establishing) {
        outC->CommunicationSession_SM_reset_nxt = kcg_true;
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Terminating_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        if (_L31_CommunicationSession_SM_Establishing) {
          outC->CommunicationSession_SM_state_nxt =
            MoRC_SSM_st_Maintaining_CommunicationSession_SM;
        }
        else {
          outC->CommunicationSession_SM_state_nxt =
            MoRC_SSM_st_Establishing_CommunicationSession_SM;
        }
        outC->CommunicationSession_SM_reset_nxt =
          _L31_CommunicationSession_SM_Establishing;
        if (_L31_CommunicationSession_SM_Establishing) {
          tmp = kcg_true;
        }
        else {
          tmp = kcg_false;
        }
      }
      break;
    case MoRC_SSM_st_NoSession_CommunicationSession_SM :
      outC->CommunicationSession_SM_reset_nxt =
        _L5_CommunicationSession_SM_NoSession;
      MoRC_kcg_copy_mobileSWCmd_Type(
        &tmp1,
        (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      if (_L5_CommunicationSession_SM_NoSession) {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Establishing_CommunicationSession_SM;
        tmp = kcg_true;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_NoSession_CommunicationSession_SM;
        tmp = kcg_false;
      }
      break;
    
  }
  /* 1 */
  MoRC_registeringToTheRadioNetwork(
    atPowerUp,
    afterDriverEntryOfANewRadioNetworkID,
    M_LEVEL,
    outC->requestTheSetupOfASafeRadioConnection,
    requestsToSetupTheSafeRadioConnectionStopped,
    atPowerOff,
    RadioNetworkID_memorized,
    RadioNetworkID_fromDriver,
    RadioNetworkID_fromTrackside,
    triggerDecisionThatNoRadioNetworkIDAvailable,
    mobileHWStatus,
    &tmp1,
    RadioNetworkID_Default,
    &outC->_3_Context_1);
  outC->orderTheRegistrationOfItsConnectedMobiles =
    outC->_3_Context_1.orderTheRegistrationOfItsConnectedMobiles;
  outC->memorizeTheLastRadioNetworkID =
    outC->_3_Context_1.memorizeTheLastRadioNetworkID;
  MoRC_kcg_copy_validRadioNetworkID_Type(
    &outC->actualRadioNetworkID,
    &outC->_3_Context_1.actualRadioNetworkID);
  outC->rejectOrderToContactRBC_or_RIU =
    outC->_3_Context_1.rejectOrderToContactRBC_or_RIU;
  MoRC_kcg_copy_mobileHWCmd_Type(
    &outC->mobileHWCmd,
    &outC->_3_Context_1.mobileHWCmd);
  MoRC_kcg_copy_mobileSWStatus_Type(
    &outC->mobileSWStatus,
    &outC->_3_Context_1.mobileSWStatus);
  _L85 = outC->mobileSWStatus.connectionStatus == MoRC_mswc_registered;
  /* 2 */ MoRC_RisingEdge_digital(_L85, &outC->_2_Context_2);
  /* 2 */ MoRC_FallingEdge_digital(_L85, &outC->Context_2);
  /* 3 */
  MoRC_RisingEdge_digital(
    (kcg_bool)
      (outC->mobileSWStatus.connectionStatus == MoRC_mswc_unregistered),
    &outC->Context_3);
  /* 1 */
  MoRC_safeRadioConnectionIndication(
    startOfMissionProcedureIsGoingOn,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    requestsToSetupTheSafeRadioConnectionStopped,
    (kcg_bool) (outC->mobileSWStatus.valid && outC->_2_Context_2.RE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid && outC->Context_2.FE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid && outC->Context_3.RE_Output),
    trainFrontInsideInAnAnnouncedRadioHole,
    actualTime,
    firstRequestToSetupASafeRadioConnection,
    firstRequestToSetupASafeRadioConnection,
    connectionStatusTimerInterval,
    &outC->_1_Context_1);
  MoRC_kcg_copy_safeRadioConnectionStatusValid_Type(
    &outC->safeRadioConnectionStatus_toDriver,
    &outC->_1_Context_1.connectionStatus);
  /* 1 */
  MoRC_EitherEdge_digital(
    outC->communicationSessionInitiatedByOBU,
    &outC->Context_1);
  /* 6 */
  MoRC_EitherEdge_digital(
    outC->communicationSessionInitiatedFromTrackside,
    &outC->Context_6);
  /* 7 */
  MoRC_EitherEdge_digital(
    outC->establishingACommunicationSessionAborted,
    &outC->Context_7);
  /* 8 */
  MoRC_EitherEdge_digital(
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    &outC->Context_8);
  /* 9 */ MoRC_EitherEdge_digital(outC->sessionEstablished, &outC->Context_9);
  outC->ready = !(tmp || outC->Context_1.EE_Output ||
      outC->Context_6.EE_Output || outC->Context_7.EE_Output ||
      outC->Context_8.EE_Output || outC->Context_9.EE_Output ||
      !MoRC_kcg_comp_mobileSWStatus_Type(&outC->mobileSWStatus, &_L111) ||
      outC->sessionStatus != _L113);
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_managementOfRadioCommunication.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

