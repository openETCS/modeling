/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.h"

void initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}

/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2 */
void initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::p42_SessionManagement */p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::eventsAndPhases */obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::mode */M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::sessionStatus */sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::currentTime */time_Type_MoRC_Pck currentTime,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::reset */kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::maxWaitingTimeUntilTerminationOrderReceived */T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeUntilTerminationOrderReceived,
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::noOfRetriesUntilTerminationOrderIsReceived */kcg_int noOfRetriesUntilTerminationOrderIsReceived,
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  static SSM_TR_TrainExitedFromRBCArea_SM tmp;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */
  static kcg_bool WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */
  static kcg_bool br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
  static kcg_bool TrainExitedFromRBCArea_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::orderToTerminateTheSessionIsReceived */
  static kcg_bool orderToTerminateTheSessionIsReceived;
  
  orderToTerminateTheSessionIsReceived = (*p42_SessionManagement).valid &
    /* 2 */
    validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
      p42_SessionManagement,
      mode) & (((*p42_SessionManagement).q_rbc ==
        Q_RBC_Terminate_communication_session) |
      (((*p42_SessionManagement).q_rbc ==
          Q_RBC_Establish_communication_session) &
        !(((*p42_SessionManagement).nid_c == (*sessionStatus).nid_c) &
          ((*p42_SessionManagement).nid_RBC == (*sessionStatus).nid_rbc) &
          ((*p42_SessionManagement).nid_radio == (*sessionStatus).nid_radio) &
          (*sessionStatus).valid & ((*sessionStatus).phase !=
            sp_terminated_RCM_Session_Types_Pkg))));
  if (outC->init) {
    outC->init = kcg_false;
    TrainExitedFromRBCArea_SM_state_sel = SSM_st_Idle_TrainExitedFromRBCArea_SM;
  }
  else {
    TrainExitedFromRBCArea_SM_state_sel =
      outC->TrainExitedFromRBCArea_SM_state_nxt;
  }
  switch (TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        orderToTerminateTheSessionIsReceived | reset;
      if (br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession) {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      TrainExitedFromRBCArea_SM_reset_act =
        br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      if (reset) {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
        TrainExitedFromRBCArea_SM_reset_act = kcg_true;
      }
      else {
        if ((*eventsAndPhases).trainExitedFromAnRBCArea) {
          TrainExitedFromRBCArea_SM_state_act =
            SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        }
        else {
          TrainExitedFromRBCArea_SM_state_act =
            SSM_st_Idle_TrainExitedFromRBCArea_SM;
        }
        TrainExitedFromRBCArea_SM_reset_act =
          (*eventsAndPhases).trainExitedFromAnRBCArea;
      }
      break;
    
  }
  switch (TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      switch (TrainExitedFromRBCArea_SM_state_sel) {
        case SSM_st_Idle_TrainExitedFromRBCArea_SM :
          if (reset) {
            tmp = SSM_TR_Idle_1_TrainExitedFromRBCArea_SM;
          }
          else if ((*eventsAndPhases).trainExitedFromAnRBCArea) {
            tmp = SSM_TR_Idle_2_TrainExitedFromRBCArea_SM;
          }
          else {
            tmp = SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
          }
          break;
        case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
          if (br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession) {
            tmp =
              SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM;
          }
          else {
            tmp = SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
          }
          break;
        
      }
      WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM =
        tmp != SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      if (TrainExitedFromRBCArea_SM_reset_act) {
        /* 1 */ waitAndRepeatTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer_MoRC_Pck_Utils(
        currentTime,
        kcg_false,
        kcg_false,
        maxWaitingTimeUntilTerminationOrderReceived,
        noOfRetriesUntilTerminationOrderIsReceived,
        &outC->Context_1);
      if (WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
          kcg_false;
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      else if (outC->Context_1.elapsed) {
        br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
          kcg_true;
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else {
        br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
          kcg_false;
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      outC->sendAPositionReport = outC->Context_1.triggerAction;
      break;
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        kcg_false;
      outC->TrainExitedFromRBCArea_SM_state_nxt =
        SSM_st_Idle_TrainExitedFromRBCArea_SM;
      outC->sendAPositionReport = kcg_false;
      break;
    
  }
  outC->initiateTermination = orderToTerminateTheSessionIsReceived |
    br_1_guard_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession |
    (*eventsAndPhases).errorConditionRequiringTerminationDetected |
    (*eventsAndPhases).trainIsRejectedByRBC_duringStartOfMission |
    (*eventsAndPhases).driverClosesTheDeskduringStartOfMission |
    (((*eventsAndPhases).level_1_isLeft &
        (*eventsAndPhases).isInCommunicationSessionWithAnRIU) |
      ((*eventsAndPhases).isInCommunicationSessionWithAnRIU &
        (*eventsAndPhases).endOfMissionIsExecuted));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

