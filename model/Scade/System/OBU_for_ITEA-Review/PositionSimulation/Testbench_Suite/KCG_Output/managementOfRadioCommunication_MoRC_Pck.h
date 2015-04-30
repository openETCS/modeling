/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _managementOfRadioCommunication_MoRC_Pck_H_
#define _managementOfRadioCommunication_MoRC_Pck_H_

#include "kcg_types.h"
#include "FallingEdge_digital.h"
#include "RisingEdge_digital.h"
#include "EitherEdge_digital.h"
#include "initiate_a_Session_MoRC_Pck_Subfunc_Pkg.h"
#include "establish_a_Session_MoRC_Pck_Subfunc_Pkg.h"
#include "maintaining_a_Session_MoRC_Pck_Subfunc_Pkg.h"
#include "terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg.h"
#include "registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg.h"
#include "safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg.h"
#include "initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg.h"
#include "terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::sendAPositionReport */ sendAPositionReport;
  mobileHWCmd_Type_MoRC_Pck /* MoRC_Pck::managementOfRadioCommunication::mobileHWCmd */ mobileHWCmd;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* MoRC_Pck::managementOfRadioCommunication::currentRadioNetworkID */ currentRadioNetworkID;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::orderTheRegistrationOfItsConnectedMobiles */ orderTheRegistrationOfItsConnectedMobiles;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::InformTheDriverThatNoConnectionWasSetup */ InformTheDriverThatNoConnectionWasSetup;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::sendTheMessageInitiationOfCommunicationSessionToTrackside */ sendTheMessageInitiationOfCommunicationSessionToTrackside;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::sendMessage_NoCompatibleVersionSupported */ sendMessage_NoCompatibleVersionSupported;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::sendASessionEstablishedReportToTrackside */ sendASessionEstablishedReportToTrackside;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::sendATerminationOfCommunicationMessage */ sendATerminationOfCommunicationMessage;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession */ ignoreMessagesFromRBC_except_m39_AckOfTerminationOfCommunicationSession;
  safeRadioConnectionStatusValid_Type_MoRC_Pck /* MoRC_Pck::managementOfRadioCommunication::safeRadioConnectionStatus_toDriver */ safeRadioConnectionStatus_toDriver;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::sessionSuccessfullyEstablished */ sessionSuccessfullyEstablished;
  mobileSWStatus_Type_MoRC_Pck /* MoRC_Pck::managementOfRadioCommunication::mobileSWStatus */ mobileSWStatus;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::requestTheSetupOfASafeRadioConnection */ requestTheSetupOfASafeRadioConnection;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::requestReleaseOfSafeRadioConnectionWithTrackside */ requestReleaseOfSafeRadioConnectionWithTrackside;
  sessionStatus_Type_Radio_Types_Pkg /* MoRC_Pck::managementOfRadioCommunication::sessionStatus */ sessionStatus;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::ready */ ready;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_CommunicationSession_SM /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM */ CommunicationSession_SM_state_nxt;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::CommunicationSession_SM */ CommunicationSession_SM_reset_nxt;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::sessionEstablished */ sessionEstablished;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::communicationSessionInitiatedByOBU */ communicationSessionInitiatedByOBU;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::communicationSessionInitiatedFromTrackside */ communicationSessionInitiatedFromTrackside;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::establishingACommunicationSessionAborted */ establishingACommunicationSessionAborted;
  kcg_bool /* MoRC_Pck::managementOfRadioCommunication::prevSessionTerminatedDueToLossOfSafeRadioConnection */ prevSessionTerminatedDueToLossOfSafeRadioConnection;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EitherEdge_digital /* 5 */ Context_5;
  outC_EitherEdge_digital /* 4 */ Context_4;
  outC_EitherEdge_digital /* 3 */ Context_3;
  outC_EitherEdge_digital /* 2 */ _12_Context_2;
  outC_EitherEdge_digital /* 1 */ _11_Context_1;
  outC_safeRadioConnectionIndication_MoRC_Pck_Subfunc_Pkg /* 1 */ _10_Context_1;
  outC_RisingEdge_digital /* 2 */ _9_Context_2;
  outC_FallingEdge_digital /* 2 */ _8_Context_2;
  outC_RisingEdge_digital /* 1 */ _7_Context_1;
  outC_registeringToTheRadioNetwork_MoRC_Pck_Subfunc_Pkg /* 1 */ _6_Context_1;
  outC_initiateTerminatingASession_MoRC_Pck_Subfunc_Pkg /* 1 */ _5_Context_1;
  outC_FallingEdge_digital /* 1 */ _4_Context_1;
  outC_initiate_a_Session_MoRC_Pck_Subfunc_Pkg /* 1 */ _3_Context_1;
  outC_terminating_a_CommunicationSession_MoRC_Pck_Subfunc_Pkg /* 1 */ _2_Context_1;
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg /* 2 */ Context_2;
  outC_terminateAndEstablishSession_MoRC_Pck_Subfunc_Pkg /* 1 */ _1_Context_1;
  outC_maintaining_a_Session_MoRC_Pck_Subfunc_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_managementOfRadioCommunication_MoRC_Pck;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::managementOfRadioCommunication */
extern void managementOfRadioCommunication_MoRC_Pck(
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
  outC_managementOfRadioCommunication_MoRC_Pck *outC);

extern void managementOfRadioCommunication_reset_MoRC_Pck(
  outC_managementOfRadioCommunication_MoRC_Pck *outC);
extern void managementOfRadioCommunication_init_MoRC_Pck(
  outC_managementOfRadioCommunication_MoRC_Pck *outC);

#endif /* _managementOfRadioCommunication_MoRC_Pck_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** managementOfRadioCommunication_MoRC_Pck.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

