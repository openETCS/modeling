/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establish_a_Session_MoRC_Pck_Subfunc_Pkg.h"

void establish_a_Session_init_MoRC_Pck_Subfunc_Pkg(
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->EstablishmentOfACommunicationSession_SM_state_nxt =
    SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
  outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission =
    0;
  outC->_4_RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStart =
    _19_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup;
  outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
    SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
  outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
    SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
  outC->establishingACommunicationSessionAborted = kcg_true;
  outC->sessionSuccessfullyEstablished = kcg_true;
  outC->requestsToSetupTheSafeRadioConnectionStopped = kcg_true;
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed = kcg_true;
  outC->firstRequestToSetupASafeRadioConnection = kcg_true;
  outC->sendASessionEstablishedReportToTrackside = kcg_true;
  outC->terminateTheCommunicationSession = kcg_true;
  outC->sendMessage_NoCompatibleVersionSupported = kcg_true;
  outC->sendTheMessageInitiationOfCommunicationSessionToTrackside = kcg_true;
  outC->requestTheSetupOfASafeRadioConnection = kcg_true;
  outC->InformTheDriverThatNoConnectionWasSetup = kcg_true;
}


void establish_a_Session_reset_MoRC_Pck_Subfunc_Pkg(
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}

/* MoRC_Pck::Subfunc_Pkg::establish_a_Session */
void establish_a_Session_MoRC_Pck_Subfunc_Pkg(
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
  outC_establish_a_Session_MoRC_Pck_Subfunc_Pkg *outC)
{
  SSM_TR_EstablishmentOfACommunicationSession_SM tmp7;
  kcg_int tmp6;
  kcg_int tmp5;
  kcg_bool tmp4;
  kcg_bool tmp3;
  kcg_bool tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */ SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */ kcg_bool RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */ SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */ SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU */ kcg_bool RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission */ kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission */ kcg_bool TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */ SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */ SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission */ kcg_bool _8_br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM::Start */ kcg_bool _9_br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupCon;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM::Retry */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission */ kcg_bool TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */ _20_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOf _10_RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */ _20_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOf _11_RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU */ kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::Idle */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_Idle;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::WaitForSystemVersionFromTrackSide */ kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::WaitForSystemVersionFromTrackSide */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::NoCompatibleSystemVersionSupported */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_NoCompatibleSystemVersionSupported;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM::WaitForMessage_InitiationOfCommunicationSession_FromTrackside */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */ SSM_ST_EstablishmentOfACommunicationSession_SM EstablishmentOfACommunicationSession_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */ SSM_ST_EstablishmentOfACommunicationSession_SM EstablishmentOfACommunicationSession_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::establish_a_Session::EstablishmentOfACommunicationSession_SM */ kcg_bool EstablishmentOfACommunicationSession_SM_reset_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    EstablishmentOfACommunicationSession_SM_state_sel =
      SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
  }
  else {
    EstablishmentOfACommunicationSession_SM_state_sel =
      outC->EstablishmentOfACommunicationSession_SM_state_nxt;
  }
  switch (EstablishmentOfACommunicationSession_SM_state_sel) {
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_reset_act = kcg_false;
      tmp4 = kcg_false;
      tmp1 = kcg_false;
      tmp2 = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside =
        m38_initiationOfACommunicationSession;
      EstablishmentOfACommunicationSession_SM_reset_act =
        br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside;
      tmp4 = kcg_false;
      tmp2 = kcg_false;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM;
        tmp1 = kcg_true;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM;
        tmp1 = kcg_false;
      }
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      if (connectionSuccessfullyEstablished) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM;
      }
      EstablishmentOfACommunicationSession_SM_reset_act =
        connectionSuccessfullyEstablished;
      tmp4 = kcg_false;
      tmp1 = kcg_false;
      tmp2 = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_reset_act = kcg_false;
      tmp4 = kcg_false;
      tmp1 = kcg_false;
      tmp2 = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      br_1_guard_EstablishmentOfACommunicationSession_SM_NoCompatibleSystemVersionSupported =
        kcg_true;
      EstablishmentOfACommunicationSession_SM_reset_act =
        br_1_guard_EstablishmentOfACommunicationSession_SM_NoCompatibleSystemVersionSupported;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_NoCompatibleSystemVersionSupported) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM;
        tmp4 = kcg_true;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
        tmp4 = kcg_false;
      }
      tmp1 = kcg_false;
      tmp2 = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      EstablishmentOfACommunicationSession_SM_reset_act = kcg_false;
      tmp4 = kcg_false;
      tmp1 = kcg_false;
      tmp2 = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide =
        systemVersionFromTracksideSupported & systemVersionReceived;
      br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide =
        systemVersionReceived & !systemVersionFromTracksideSupported;
      tmp4 = kcg_false;
      tmp1 = kcg_false;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_reset_act = kcg_true;
        tmp2 = kcg_true;
        outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      }
      else {
        EstablishmentOfACommunicationSession_SM_reset_act =
          br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide;
        tmp2 = kcg_false;
        if (br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
          EstablishmentOfACommunicationSession_SM_state_act =
            SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
          outC->sendMessage_NoCompatibleVersionSupported = kcg_true;
        }
        else {
          EstablishmentOfACommunicationSession_SM_state_act =
            SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM;
          outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
        }
      }
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
        connectionSuccessfullyEstablished;
      EstablishmentOfACommunicationSession_SM_reset_act =
        br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
      tmp4 = kcg_false;
      tmp1 = kcg_false;
      tmp2 = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM;
        outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
          kcg_true;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
        outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
          kcg_false;
      }
      break;
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      br_1_guard_EstablishmentOfACommunicationSession_SM_Idle =
        communicationSessionInitiatedByOBU_;
      tmp4 = kcg_false;
      tmp1 = kcg_false;
      tmp2 = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_Idle) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
        EstablishmentOfACommunicationSession_SM_reset_act = kcg_true;
        outC->firstRequestToSetupASafeRadioConnection = kcg_true;
      }
      else {
        if (communicationSessionInitiatedFromTrackside_) {
          EstablishmentOfACommunicationSession_SM_state_act =
            SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM;
        }
        else {
          EstablishmentOfACommunicationSession_SM_state_act =
            SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
        }
        EstablishmentOfACommunicationSession_SM_reset_act =
          communicationSessionInitiatedFromTrackside_;
        if (communicationSessionInitiatedFromTrackside_) {
          outC->firstRequestToSetupASafeRadioConnection = kcg_true;
        }
        else {
          outC->firstRequestToSetupASafeRadioConnection = kcg_false;
        }
      }
      break;
    
  }
  switch (EstablishmentOfACommunicationSession_SM_state_act) {
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_true;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM;
      tmp = kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM;
      tmp = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM;
      tmp = kcg_false;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM;
      tmp = kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      tmp = kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_true;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      tmp = kcg_false;
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM;
      tmp = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      switch (EstablishmentOfACommunicationSession_SM_state_sel) {
        case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
          if (br_1_guard_EstablishmentOfACommunicationSession_SM_Idle) {
            tmp7 = SSM_TR_Idle_1_EstablishmentOfACommunicationSession_SM;
          }
          else if (communicationSessionInitiatedFromTrackside_) {
            tmp7 = SSM_TR_Idle_2_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp7 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
          if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
            tmp7 =
              SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_1_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp7 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
          if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
            tmp7 =
              SSM_TR_WaitForSystemVersionFromTrackSide_1_EstablishmentOfACommunicationSession_SM;
          }
          else if (br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
            tmp7 =
              SSM_TR_WaitForSystemVersionFromTrackSide_2_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp7 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
          tmp7 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          break;
        case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
          if (br_1_guard_EstablishmentOfACommunicationSession_SM_NoCompatibleSystemVersionSupported) {
            tmp7 =
              SSM_TR_NoCompatibleSystemVersionSupported_1_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp7 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
          tmp7 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          break;
        case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
          if (connectionSuccessfullyEstablished) {
            tmp7 =
              SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByTrackside_1_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp7 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
          if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside) {
            tmp7 =
              SSM_TR_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_1_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp7 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
          tmp7 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          break;
        
      }
      RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM =
        tmp7 != SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
      if (EstablishmentOfACommunicationSession_SM_reset_act) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
          SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
      }
      else {
        RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
      }
      switch (RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (connectionSuccessfullyEstablished) {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          else {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            connectionSuccessfullyEstablished;
          break;
        case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            kcg_false;
          break;
        case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            kcg_false;
          break;
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (connectionSuccessfullyEstablished) {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          else {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            connectionSuccessfullyEstablished;
          break;
        case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (isPartOfAnOngoingStartOfMissionProcedure) {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_Start_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          else {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_Start_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            kcg_true;
          break;
        
      }
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM =
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU !=
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          if (RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
            outC->init2 = kcg_true;
          }
          break;
        
      }
      if (EstablishmentOfACommunicationSession_SM_reset_act) {
        outC->init2 = kcg_true;
      }
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (outC->init2) {
            _10_RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar =
              _19_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup;
          }
          else {
            _10_RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar =
              outC->_4_RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStart;
          }
          switch (_10_RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar) {
            case _19_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup :
              _9_br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupCon =
                kcg_true;
              break;
            case _18_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup :
              br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec =
                settingUpSafeConnectionHasFailed;
              break;
            
          }
          break;
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (RequestConnectionWithTrackSide_SM_reset_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
            outC->init3 = kcg_true;
          }
          break;
        
      }
      if (EstablishmentOfACommunicationSession_SM_reset_act) {
        outC->init3 = kcg_true;
      }
      outC->sessionSuccessfullyEstablished = kcg_false;
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (outC->init3) {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
              SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
          }
          else {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
          }
          TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM =
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU !=
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          switch (RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart) {
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              if (settingUpSafeConnectionHasFailed) {
                outC->requestTheSetupOfASafeRadioConnection = kcg_true;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
              }
              RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              outC->requestTheSetupOfASafeRadioConnection = kcg_true;
              RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            
          }
          switch (RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            
          }
          if (TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          }
          else {
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission =
              endOfMissionIsPerformed | trainPassesALevelTransitionBorder |
              trainPassesA_RBC_RBC_border_WithItsFrontEnd |
              (*orderToEstablishACommunicationSession_fromTrackside).terminate |
              ((*orderToEstablishACommunicationSession_fromTrackside).terminate &
                ((*orderToEstablishACommunicationSession_fromTrackside).nid_rbc !=
                  (*orderToEstablishACommunicationSession_fromOBU).nid_rbc) &
                (*orderToEstablishACommunicationSession_fromTrackside).establish &
                (*orderToEstablishACommunicationSession_fromOBU).establish &
                orderDoesNotRequestToContactAnAcceptingRBC);
            if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission) {
              outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            }
            else {
              outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            }
          }
          tmp = kcg_false;
          outC->init3 = kcg_false;
          break;
        case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->requestTheSetupOfASafeRadioConnection = kcg_false;
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          tmp = kcg_false;
          break;
        case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->requestTheSetupOfASafeRadioConnection = kcg_false;
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          tmp = kcg_false;
          break;
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          switch (_10_RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar) {
            case _18_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup :
              if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec) {
                outC->requestTheSetupOfASafeRadioConnection = kcg_true;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
              }
              _11_RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar =
                _18_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup;
              break;
            case _19_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup :
              if (_9_br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupCon) {
                outC->requestTheSetupOfASafeRadioConnection = kcg_true;
                _11_RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar =
                  _18_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
                _11_RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar =
                  _19_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup;
              }
              break;
            
          }
          if (outC->requestTheSetupOfASafeRadioConnection) {
            tmp6 = 1;
          }
          else {
            tmp6 = 0;
          }
          if (outC->init2) {
            tmp5 = 0;
          }
          else {
            tmp5 =
              outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission;
          }
          outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission =
            tmp6 + tmp5;
          switch (_11_RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStar) {
            case _19_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup :
              outC->_4_RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStart =
                _19_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup;
              break;
            case _18_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup :
              outC->_4_RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStart =
                _18_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetup;
              break;
            
          }
          if (TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            tmp = kcg_false;
          }
          else {
            _8_br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission =
              outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission >=
              cMaxNoOfConnectionRetries_MoRC_Pck;
            if (_8_br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission) {
              outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
              tmp = kcg_true;
            }
            else {
              outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
              tmp = kcg_false;
            }
          }
          outC->init2 = kcg_false;
          break;
        case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->requestTheSetupOfASafeRadioConnection = kcg_false;
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          tmp = kcg_false;
          break;
        
      }
      if (RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM) {
        tmp3 = kcg_false;
        outC->EstablishmentOfACommunicationSession_SM_state_nxt =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
      }
      else {
        switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
          case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              kcg_false;
            break;
          case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            if (TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            else if (_8_br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_true;
            }
            else {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            break;
          case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              kcg_false;
            break;
          case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              kcg_false;
            break;
          case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            if (TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            else if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_true;
            }
            else {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            break;
          
        }
        if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
          tmp3 = kcg_true;
          outC->EstablishmentOfACommunicationSession_SM_state_nxt =
            SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
        }
        else {
          tmp3 = kcg_false;
          outC->EstablishmentOfACommunicationSession_SM_state_nxt =
            SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
        }
      }
      outC->init1 = kcg_false;
      break;
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      tmp3 = kcg_false;
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
      tmp = kcg_false;
      break;
    
  }
  outC->terminateTheCommunicationSession = tmp4 | tmp3;
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed =
    outC->terminateTheCommunicationSession;
  outC->establishingACommunicationSessionAborted =
    outC->finalAttemptToSetupTheSafeRadioConnectionFailed;
  outC->sendASessionEstablishedReportToTrackside = tmp2 | tmp1;
  outC->requestsToSetupTheSafeRadioConnectionStopped =
    outC->finalAttemptToSetupTheSafeRadioConnectionFailed |
    connectionSuccessfullyEstablished;
  outC->InformTheDriverThatNoConnectionWasSetup =
    outC->sendMessage_NoCompatibleVersionSupported | tmp;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** establish_a_Session_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

