/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_terminating_a_CommunicationSession.h"

void MoRC_terminating_a_CommunicationSession_init(
  MoRC_outC_terminating_a_CommunicationSession *outC)
{
  outC->init = kcg_true;
  outC->TerminateTheCommunicationSession_SM_state_nxt =
    MoRC_SSM_st_Idle_TerminateTheCommunicationSession_SM;
  outC->communicationSessionTerminated = kcg_true;
  outC->abortEstablishingACommunicationSession = kcg_true;
  outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
    kcg_true;
  outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
  outC->sendATerminationOfCommunicationMessage = kcg_true;
  MoRC_waitAndRepeatTimer_init(&outC->Context_1);
}


void MoRC_terminating_a_CommunicationSession_reset(
  MoRC_outC_terminating_a_CommunicationSession *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_waitAndRepeatTimer_reset(&outC->Context_1);
}

/* terminating_a_CommunicationSession */
void MoRC_terminating_a_CommunicationSession(
  /* terminating_a_CommunicationSession::initiateTermination */ kcg_bool initiateTermination,
  /* terminating_a_CommunicationSession::aSessionIsEstablished */ kcg_bool aSessionIsEstablished,
  /* terminating_a_CommunicationSession::acknowledgementOfTerminationOfCommunicationSessionReceived */ kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* terminating_a_CommunicationSession::aSessionIsCurrentlyBeingEstablished */ kcg_bool aSessionIsCurrentlyBeingEstablished,
  /* terminating_a_CommunicationSession::actualTime */ MoRC_time_Type actualTime,
  /* terminating_a_CommunicationSession::establishingACommunicationSessionAborted */ kcg_bool establishingACommunicationSessionAborted,
  MoRC_outC_terminating_a_CommunicationSession *outC)
{
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::WaitForAcknowledgementMessage */ kcg_bool WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::WaitForAcknowledgementMessage */ kcg_bool br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::EstablishingACommunicationSessionAborted */ kcg_bool EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::Idle */ kcg_bool br_1_guard_TerminateTheCommunicationSession_SM_Idle;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::Idle */ kcg_bool br_2_clock_TerminateTheCommunicationSession_SM_Idle;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ MoRC_SSM_ST_TerminateTheCommunicationSession_SM TerminateTheCommunicationSession_SM_state_sel;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ MoRC_SSM_ST_TerminateTheCommunicationSession_SM TerminateTheCommunicationSession_SM_state_act;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ MoRC_SSM_TR_TerminateTheCommunicationSession_SM TerminateTheCommunicationSession_SM_fired_strong;
  /* terminating_a_CommunicationSession::initiateTerminationOfEstablishingSession */ kcg_bool initiateTerminationOfEstablishingSession;
  
  initiateTerminationOfEstablishingSession = initiateTermination &&
    aSessionIsCurrentlyBeingEstablished;
  if (outC->init) {
    outC->init = kcg_false;
    TerminateTheCommunicationSession_SM_state_sel =
      MoRC_SSM_st_Idle_TerminateTheCommunicationSession_SM;
  }
  else {
    TerminateTheCommunicationSession_SM_state_sel =
      outC->TerminateTheCommunicationSession_SM_state_nxt;
  }
  switch (TerminateTheCommunicationSession_SM_state_sel) {
    case MoRC_SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_state_act =
        MoRC_SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_fired_strong =
        MoRC_SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      br_2_clock_TerminateTheCommunicationSession_SM_Idle = kcg_false;
      break;
    case MoRC_SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_state_act =
        MoRC_SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_fired_strong =
        MoRC_SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      br_2_clock_TerminateTheCommunicationSession_SM_Idle = kcg_false;
      break;
    case MoRC_SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_state_act =
        MoRC_SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_fired_strong =
        MoRC_SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      br_2_clock_TerminateTheCommunicationSession_SM_Idle = kcg_false;
      break;
    case MoRC_SSM_st_Idle_TerminateTheCommunicationSession_SM :
      br_1_guard_TerminateTheCommunicationSession_SM_Idle =
        initiateTermination && aSessionIsEstablished;
      if (br_1_guard_TerminateTheCommunicationSession_SM_Idle) {
        TerminateTheCommunicationSession_SM_state_act =
          MoRC_SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
        TerminateTheCommunicationSession_SM_fired_strong =
          MoRC_SSM_TR_Idle_1_TerminateTheCommunicationSession_SM;
        br_2_clock_TerminateTheCommunicationSession_SM_Idle = kcg_true;
      }
      else {
        if (initiateTerminationOfEstablishingSession) {
          TerminateTheCommunicationSession_SM_state_act =
            MoRC_SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
          TerminateTheCommunicationSession_SM_fired_strong =
            MoRC_SSM_TR_Idle_2_TerminateTheCommunicationSession_SM;
        }
        else {
          TerminateTheCommunicationSession_SM_state_act =
            MoRC_SSM_st_Idle_TerminateTheCommunicationSession_SM;
          TerminateTheCommunicationSession_SM_fired_strong =
            MoRC_SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
        }
        br_2_clock_TerminateTheCommunicationSession_SM_Idle =
          initiateTerminationOfEstablishingSession;
      }
      break;
    
  }
  switch (TerminateTheCommunicationSession_SM_state_act) {
    case MoRC_SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM =
        TerminateTheCommunicationSession_SM_fired_strong !=
        MoRC_SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->communicationSessionTerminated = kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      if (EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM) {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          MoRC_SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      else if (establishingACommunicationSessionAborted) {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          MoRC_SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
      }
      else {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          MoRC_SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      break;
    case MoRC_SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->communicationSessionTerminated = kcg_true;
      outC->TerminateTheCommunicationSession_SM_state_nxt =
        MoRC_SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      break;
    case MoRC_SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM =
        TerminateTheCommunicationSession_SM_fired_strong !=
        MoRC_SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_true;
      outC->communicationSessionTerminated = kcg_false;
      if (br_2_clock_TerminateTheCommunicationSession_SM_Idle) {
        /* 1 */ MoRC_waitAndRepeatTimer_reset(&outC->Context_1);
      }
      /* 1 */
      MoRC_waitAndRepeatTimer(
        actualTime,
        kcg_false,
        kcg_false,
        MoRC_cTerminationOfCommunicationSessionRepetitionInterval,
        MoRC_cTerminationOfCommunicationSession_MaxNoOfRepetitions,
        &outC->Context_1);
      outC->sendATerminationOfCommunicationMessage =
        outC->Context_1.triggerAction;
      if (WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM) {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          MoRC_SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      else {
        br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage =
          acknowledgementOfTerminationOfCommunicationSessionReceived ||
          outC->Context_1.elapsed;
        if (br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage) {
          outC->TerminateTheCommunicationSession_SM_state_nxt =
            MoRC_SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
          outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
        }
        else {
          outC->TerminateTheCommunicationSession_SM_state_nxt =
            MoRC_SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
          outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
        }
      }
      break;
    case MoRC_SSM_st_Idle_TerminateTheCommunicationSession_SM :
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->communicationSessionTerminated = kcg_false;
      outC->TerminateTheCommunicationSession_SM_state_nxt =
        MoRC_SSM_st_Idle_TerminateTheCommunicationSession_SM;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      break;
    
  }
  switch (TerminateTheCommunicationSession_SM_state_sel) {
    case MoRC_SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      outC->abortEstablishingACommunicationSession = kcg_false;
      break;
    case MoRC_SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      outC->abortEstablishingACommunicationSession = kcg_false;
      break;
    case MoRC_SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      outC->abortEstablishingACommunicationSession = kcg_false;
      break;
    case MoRC_SSM_st_Idle_TerminateTheCommunicationSession_SM :
      if (br_1_guard_TerminateTheCommunicationSession_SM_Idle) {
        outC->abortEstablishingACommunicationSession = kcg_false;
      }
      else if (initiateTerminationOfEstablishingSession) {
        outC->abortEstablishingACommunicationSession = kcg_true;
      }
      else {
        outC->abortEstablishingACommunicationSession = kcg_false;
      }
      break;
    
  }
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_terminating_a_CommunicationSession.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

