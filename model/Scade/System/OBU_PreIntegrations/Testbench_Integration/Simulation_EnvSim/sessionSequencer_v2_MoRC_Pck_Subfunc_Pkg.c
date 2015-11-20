/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.h"

void sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
  /* 1 */ maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
  /* 1 */ establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_2_Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2 */
void sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionEstablishCmd */sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::p42_SessionManagement_in */p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement_in,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m39_AckOfTerminationOfACommunicationSession */m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::m32_SystemVersion */m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_SystemVersion,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::connectionStatus */mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::initiateTermination */kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::currentTime */T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::reset */kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::noOfRetriesOfSendingTerminationMessage */kcg_int noOfRetriesOfSendingTerminationMessage,
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::maxWaitingTimeForAckMessageReceived */T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  static sessionCmd_T_RCM_Session_Types_Pkg tmp1;
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM::establishingSession::_L17 */
  static kcg_bool _L17_Session_SM_establishingSession;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::sessionStatus_l */
  static sessionStatus_T_RCM_Session_Types_Pkg last_sessionStatus_l;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static SSM_ST_Session_SM Session_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
  static kcg_bool Session_SM_reset_sel;
  
  if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &last_sessionStatus_l,
      (sessionStatus_T_RCM_Session_Types_Pkg *)
        &cInitialSessionStatus_RCM_Session_Types_Pkg);
    Session_SM_state_act = SSM_st_sessionTerminated_Session_SM;
    Session_SM_reset_sel = kcg_false;
  }
  else {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &last_sessionStatus_l,
      &outC->sessionStatus_l);
    Session_SM_state_act = outC->Session_SM_state_nxt;
    Session_SM_reset_sel = outC->Session_SM_reset_nxt;
  }
  switch (Session_SM_state_act) {
    case SSM_st_terminatingSession_Session_SM :
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      outC->send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      if (Session_SM_reset_sel) {
        /* 1 */
        terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->Context_1);
      }
      /* 1 */
      terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
        kcg_true,
        m39_AckOfTerminationOfACommunicationSession,
        currentTime,
        &last_sessionStatus_l,
        reset,
        noOfRetriesOfSendingTerminationMessage,
        maxWaitingTimeForAckMessageReceived,
        &outC->Context_1);
      outC->Session_SM_reset_nxt = outC->Context_1.terminated;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &outC->Context_1.sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->Context_1.sessionStatus);
      outC->requestReleaseOfSafeRadioConnection =
        outC->Context_1.requestReleaseOfSafeRadioConnection;
      outC->send_m156_TerminationOfCommunicationSession =
        outC->Context_1.send_m156_TerminationOfCommunicationSession;
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      if (outC->Context_1.terminated) {
        outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
        tmp = kcg_true;
      }
      else {
        outC->Session_SM_state_nxt = SSM_st_terminatingSession_Session_SM;
        tmp = kcg_false;
      }
      outC->notReady = outC->Context_1.notReady | tmp;
      break;
    case SSM_st_maintainingSession_Session_SM :
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      outC->send_m156_TerminationOfCommunicationSession = kcg_false;
      outC->send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->requestReleaseOfSafeRadioConnection = kcg_false;
      if (Session_SM_reset_sel) {
        /* 1 */
        maintainingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_1_Context_1);
      }
      /* 1 */
      maintainingSession_v2_MoRC_Pck_Subfunc_Pkg(
        &last_sessionStatus_l,
        &outC->_1_Context_1);
      outC->Session_SM_reset_nxt = initiateTermination;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &outC->_1_Context_1.sessionStatus);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->_1_Context_1.sessionStatus);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      if (initiateTermination) {
        outC->Session_SM_state_nxt = SSM_st_terminatingSession_Session_SM;
        outC->notReady = kcg_true;
      }
      else {
        outC->Session_SM_state_nxt = SSM_st_maintainingSession_Session_SM;
        outC->notReady = kcg_false;
      }
      break;
    case SSM_st_establishingSession_Session_SM :
      outC->send_m156_TerminationOfCommunicationSession = kcg_false;
      outC->requestReleaseOfSafeRadioConnection = kcg_false;
      if (Session_SM_reset_sel) {
        /* 1 */
        establishSession_v2_reset_MoRC_Pck_Subfunc_Pkg(&outC->_2_Context_1);
      }
      if (outC->init) {
        kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
          &tmp1,
          (sessionCmd_T_RCM_Session_Types_Pkg *)
            &cNoSessionCmd_RCM_Session_Types_Pkg);
      }
      else {
        kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
          &tmp1,
          &outC->rem_sessionEstablishCmd);
      }
      /* 1 */
      establishSession_v2_MoRC_Pck_Subfunc_Pkg(
        &tmp1,
        m32_SystemVersion,
        connectionStatus,
        reset,
        &outC->_2_Context_1);
      _L17_Session_SM_establishingSession =
        outC->_2_Context_1.terminateCommunicationSession | initiateTermination;
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &last_sessionStatus_l);
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus,
        &outC->_2_Context_1.sessionStatus);
      outC->infomDriverNoCompatibleVersionSupported =
        outC->_2_Context_1.infomDriverNoCompatibleVersionSupported;
      outC->requestSafeRadioConnectionSetup =
        outC->_2_Context_1.requestSafeRadioConnectionSetup;
      outC->send_m154_noCompatibleVersionSupported =
        outC->_2_Context_1.send_m154_noCompatibleVersionSupported;
      outC->send_m159_sessionEstablishedReport =
        outC->_2_Context_1.send_m159_sessionEstablishedReport;
      outC->send_m155_initiationOfACommunicationSession =
        outC->_2_Context_1.send_m155_initiationOfACommunicationSession;
      if (outC->_2_Context_1.p42_establishSessionCmd.valid) {
        kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
          &outC->p42_SessionManagement_out,
          &outC->_2_Context_1.p42_establishSessionCmd);
      }
      else {
        kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
          &outC->p42_SessionManagement_out,
          p42_SessionManagement_in);
      }
      if (_L17_Session_SM_establishingSession) {
        outC->Session_SM_reset_nxt = kcg_true;
        outC->Session_SM_state_nxt = SSM_st_terminatingSession_Session_SM;
        outC->notReady = kcg_true;
      }
      else {
        outC->Session_SM_reset_nxt = outC->_2_Context_1.established;
        if (outC->_2_Context_1.established) {
          outC->Session_SM_state_nxt = SSM_st_maintainingSession_Session_SM;
        }
        else {
          outC->Session_SM_state_nxt = SSM_st_establishingSession_Session_SM;
        }
        if (outC->_2_Context_1.established) {
          outC->notReady = kcg_true;
        }
        else {
          outC->notReady = kcg_false;
        }
      }
      break;
    case SSM_st_sessionTerminated_Session_SM :
      outC->send_m155_initiationOfACommunicationSession = kcg_false;
      outC->send_m156_TerminationOfCommunicationSession = kcg_false;
      outC->send_m159_sessionEstablishedReport = kcg_false;
      outC->send_m154_noCompatibleVersionSupported = kcg_false;
      outC->requestSafeRadioConnectionSetup = kcg_false;
      outC->infomDriverNoCompatibleVersionSupported = kcg_false;
      outC->requestReleaseOfSafeRadioConnection = kcg_false;
      outC->Session_SM_reset_nxt = (*sessionEstablishCmd).valid;
      if ((*sessionEstablishCmd).valid) {
        outC->sessionStatus.valid = (*sessionEstablishCmd).valid;
        outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
        outC->sessionStatus.nid_c = (*sessionEstablishCmd).nid_c;
        outC->sessionStatus.nid_rbc = (*sessionEstablishCmd).nid_rbc;
        outC->sessionStatus.nid_radio = (*sessionEstablishCmd).nid_radio;
        outC->Session_SM_state_nxt = SSM_st_establishingSession_Session_SM;
        outC->notReady = kcg_true;
      }
      else {
        kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
          &outC->sessionStatus,
          &last_sessionStatus_l);
        outC->sessionStatus.phase = sp_terminated_RCM_Session_Types_Pkg;
        outC->Session_SM_state_nxt = SSM_st_sessionTerminated_Session_SM;
        outC->notReady = kcg_false;
      }
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &outC->sessionStatus_l,
        &outC->sessionStatus);
      kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
        &outC->p42_SessionManagement_out,
        (p42_sessionManagement_T_RCM_MsgTypes_Pkg *)
          &cNo_p42_SessionManagement_RCM_MsgTypes_Pkg);
      break;
    
  }
  outC->init = kcg_false;
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->rem_sessionEstablishCmd,
    sessionEstablishCmd);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

