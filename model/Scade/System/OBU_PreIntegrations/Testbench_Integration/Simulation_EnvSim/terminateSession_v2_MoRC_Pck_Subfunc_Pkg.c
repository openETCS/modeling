/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminateSession_v2_MoRC_Pck_Subfunc_Pkg.h"

void terminateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2 */
void terminateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::initiateTermination */kcg_bool initiateTermination,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::m39_AckOfTerminationOfACommunicationSession */m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_AckOfTerminationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::currentTime */time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::prevSessionStatus */sessionStatus_T_RCM_Session_Types_Pkg *prevSessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::reset */kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::noOfRetriesOfSendingTerminationMessage */kcg_int noOfRetriesOfSendingTerminationMessage,
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::maxWaitingTimeForAckMessageReceived */T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived,
  outC_terminateSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  static _9_SSM_TR_SM1 tmp2;
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::waitForAckTerminationOfCommunicationSessionReceived */
  static kcg_bool br_2_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1::idle */
  static kcg_bool br_1_guard_SM1_idle;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _7_SSM_ST_SM1 SM1_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
  static _7_SSM_ST_SM1 SM1_state_act;
  
  outC->sessionStatus.valid = kcg_true;
  outC->sessionStatus.phase = sp_terminating_RCM_Session_Types_Pkg;
  if (outC->init) {
    SM1_state_sel = SSM_st_idle_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_terminated_SM1 :
      if (reset) {
        SM1_state_act = SSM_st_idle_SM1;
      }
      else {
        SM1_state_act = SSM_st_terminated_SM1;
      }
      tmp1 = reset;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      if (reset) {
        SM1_state_act = SSM_st_idle_SM1;
      }
      else {
        SM1_state_act =
          SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      }
      tmp1 = reset;
      break;
    case SSM_st_idle_SM1 :
      br_1_guard_SM1_idle = initiateTermination;
      if (br_1_guard_SM1_idle) {
        SM1_state_act =
          SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      }
      else {
        SM1_state_act = SSM_st_idle_SM1;
      }
      tmp1 = br_1_guard_SM1_idle;
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_terminated_SM1 :
      outC->requestReleaseOfSafeRadioConnection = kcg_false;
      outC->terminated = kcg_true;
      outC->SM1_state_nxt = SSM_st_terminated_SM1;
      tmp = kcg_false;
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      switch (SM1_state_sel) {
        case SSM_st_idle_SM1 :
          if (br_1_guard_SM1_idle) {
            tmp2 = SSM_TR_idle_1_SM1;
          }
          else {
            tmp2 = _8_SSM_TR_no_trans_SM1;
          }
          break;
        case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
          if (reset) {
            tmp2 =
              SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_1_SM1;
          }
          else {
            tmp2 = _8_SSM_TR_no_trans_SM1;
          }
          break;
        case SSM_st_terminated_SM1 :
          if (reset) {
            tmp2 = SSM_TR_terminated_1_SM1;
          }
          else {
            tmp2 = _8_SSM_TR_no_trans_SM1;
          }
          break;
        
      }
      tmp = tmp2 != _8_SSM_TR_no_trans_SM1;
      if (tmp1) {
        /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer_MoRC_Pck_Utils(
        currentTime,
        kcg_false,
        kcg_false,
        maxWaitingTimeForAckMessageReceived,
        noOfRetriesOfSendingTerminationMessage,
        &outC->Context_1);
      outC->terminated = kcg_false;
      if (tmp) {
        outC->requestReleaseOfSafeRadioConnection = kcg_false;
        outC->SM1_state_nxt =
          SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
      }
      else {
        br_2_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived =
          (*m39_AckOfTerminationOfACommunicationSession).valid |
          outC->Context_1.elapsed;
        if (br_2_guard_SM1_waitForAckTerminationOfCommunicationSessionReceived) {
          outC->requestReleaseOfSafeRadioConnection = kcg_true;
          outC->SM1_state_nxt = SSM_st_terminated_SM1;
        }
        else {
          outC->requestReleaseOfSafeRadioConnection = kcg_false;
          outC->SM1_state_nxt =
            SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1;
        }
      }
      tmp = outC->Context_1.triggerAction;
      break;
    case SSM_st_idle_SM1 :
      outC->requestReleaseOfSafeRadioConnection = kcg_false;
      outC->terminated = kcg_false;
      outC->SM1_state_nxt = SSM_st_idle_SM1;
      tmp = kcg_false;
      break;
    
  }
  outC->notReady = outC->requestReleaseOfSafeRadioConnection;
  if ((*prevSessionStatus).valid) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L92,
      prevSessionStatus);
  }
  else if (outC->init) {
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L92,
      prevSessionStatus);
  }
  outC->init = kcg_false;
  outC->sessionStatus.nid_c = outC->_L92.nid_c;
  outC->sessionStatus.nid_rbc = outC->_L92.nid_rbc;
  outC->sessionStatus.nid_radio = outC->_L92.nid_radio;
  switch (SM1_state_sel) {
    case SSM_st_idle_SM1 :
      if (br_1_guard_SM1_idle) {
        tmp1 = kcg_true;
      }
      else {
        tmp1 = kcg_false;
      }
      break;
    case SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1 :
      tmp1 = kcg_false;
      break;
    case SSM_st_terminated_SM1 :
      tmp1 = kcg_false;
      break;
    
  }
  outC->send_m156_TerminationOfCommunicationSession = tmp1 | tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** terminateSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

