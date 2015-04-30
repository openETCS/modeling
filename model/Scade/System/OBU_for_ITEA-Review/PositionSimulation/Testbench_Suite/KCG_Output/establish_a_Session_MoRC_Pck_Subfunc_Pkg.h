/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _establish_a_Session_MoRC_Pck_Subfunc_Pkg_H_
#define _establish_a_Session_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::InformTheDriverThatNoConnectionWasSetup */ InformTheDriverThatNoConnectionWasSetup;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::requestTheSetupOfASafeRadioConnection */ requestTheSetupOfASafeRadioConnection;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::sendTheMessageInitiationOfCommunicationSessionToTrackside */ sendTheMessageInitiationOfCommunicationSessionToTrackside;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::sendMessage_NoCompatibleVersionSupported */ sendMessage_NoCompatibleVersionSupported;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::terminateTheCommunicationSession */ terminateTheCommunicationSession;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::sendASessionEstablishedReportToTrackside */ sendASessionEstablishedReportToTrackside;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::firstRequestToSetupASafeRadioConnection */ firstRequestToSetupASafeRadioConnection;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::finalAttemptToSetupTheSafeRadioConnectionFailed */ finalAttemptToSetupTheSafeRadioConnectionFailed;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::requestsToSetupTheSafeRadioConnectionStopped */ requestsToSetupTheSafeRadioConnectionStopped;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::sessionSuccessfullyEstablished */ sessionSuccessfullyEstablished;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::establishingACommunicationSessionAborted */ establishingACommunicationSessionAborted;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */ RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */ RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
  _20_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOf /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */ _4_RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStart;
  kcg_int /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::_L3 */ _L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission;
  SSM_ST_EstablishmentOfACommunicationSession_SM /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */ EstablishmentOfACommunicationSession_SM_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
extern void establish_a_Session_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::isPartOfAnOngoingStartOfMissionProcedure */ kcg_bool isPartOfAnOngoingStartOfMissionProcedure,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::connectionSuccessfullyEstablished */ kcg_bool connectionSuccessfullyEstablished,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::settingUpSafeConnectionHasFailed */ kcg_bool settingUpSafeConnectionHasFailed,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::endOfMissionIsPerformed */ kcg_bool endOfMissionIsPerformed,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::trainPassesALevelTransitionBorder */ kcg_bool trainPassesALevelTransitionBorder,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::orderToEstablishACommunicationSession_fromTrackside */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderToEstablishACommunicationSession_fromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::orderToEstablishACommunicationSession_fromOBU */ p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *orderToEstablishACommunicationSession_fromOBU,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::orderDoesNotRequestToContactAnAcceptingRBC */ kcg_bool orderDoesNotRequestToContactAnAcceptingRBC,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::trainPassesA_RBC_RBC_border_WithItsFrontEnd */ kcg_bool trainPassesA_RBC_RBC_border_WithItsFrontEnd,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::systemVersionFromTracksideSupported */ kcg_bool systemVersionFromTracksideSupported,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::systemVersionReceived */ kcg_bool systemVersionReceived,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::m38_initiationOfACommunicationSession */ kcg_bool m38_initiationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::communicationSessionInitiatedByOBU_ */ kcg_bool communicationSessionInitiatedByOBU_,
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::communicationSessionInitiatedFromTrackside_ */ kcg_bool communicationSessionInitiatedFromTrackside_,
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg *outC);

extern void establish_a_Session_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg *outC);
extern void establish_a_Session_init_MoRC_Pck_Subfunc_Pkg(
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _establish_a_Session_MoRC_Pck_Subfunc_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** establish_a_Session_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

