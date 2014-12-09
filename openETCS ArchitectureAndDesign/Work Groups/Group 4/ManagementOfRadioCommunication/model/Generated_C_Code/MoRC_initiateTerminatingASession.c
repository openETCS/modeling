/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_initiateTerminatingASession.h"

void MoRC_initiateTerminatingASession_init(
  MoRC_outC_initiateTerminatingASession *outC)
{
  outC->init = kcg_true;
  outC->TrainExitedFromRBCArea_SM_state_nxt =
    MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM;
  outC->sendAPositionReport = kcg_true;
  outC->initiateTermination = kcg_true;
  MoRC_waitAndRepeatTimer_init(&outC->Context_1);
}


void MoRC_initiateTerminatingASession_reset(
  MoRC_outC_initiateTerminatingASession *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_waitAndRepeatTimer_reset(&outC->Context_1);
}

/* initiateTerminatingASession */
void MoRC_initiateTerminatingASession(
  /* initiateTerminatingASession::orderReceivedFromTrackside */ MoRC_orderToContactAnRBC_Type *orderReceivedFromTrackside,
  /* initiateTerminatingASession::errorConditionRequiringTerminationDetected */ kcg_bool errorConditionRequiringTerminationDetected,
  /* initiateTerminatingASession::trainIsRejectedByRBC_duringStartOfMission */ kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* initiateTerminatingASession::driverClosesTheDeskduringStartOfMission */ kcg_bool driverClosesTheDeskduringStartOfMission,
  /* initiateTerminatingASession::trainExitedFromAnRBCArea */ kcg_bool trainExitedFromAnRBCArea,
  /* initiateTerminatingASession::receivedOrderToTerminateTheSession */ MoRC_orderToContactAnRBC_Type *receivedOrderToTerminateTheSession,
  /* initiateTerminatingASession::actualTime */ MoRC_time_Type actualTime,
  /* initiateTerminatingASession::isInCommunicationSessionWithAnRIU */ kcg_bool isInCommunicationSessionWithAnRIU,
  /* initiateTerminatingASession::level_1_isLeft */ kcg_bool level_1_isLeft,
  /* initiateTerminatingASession::endOfMissionIsExecuted */ kcg_bool endOfMissionIsExecuted,
  MoRC_outC_initiateTerminatingASession *outC)
{
  MoRC_SSM_TR_TrainExitedFromRBCArea_SM tmp1;
  kcg_bool tmp;
  /* initiateTerminatingASession::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */ kcg_bool WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM;
  /* initiateTerminatingASession::TrainExitedFromRBCArea_SM */ MoRC_SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_sel;
  /* initiateTerminatingASession::TrainExitedFromRBCArea_SM */ MoRC_SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_act;
  /* initiateTerminatingASession::TrainExitedFromRBCArea_SM */ kcg_bool TrainExitedFromRBCArea_SM_reset_act;
  
  tmp = (*receivedOrderToTerminateTheSession).valid &&
    (*receivedOrderToTerminateTheSession).actionToBePerformed ==
    MoRC_morc_rbca_terminateSesssion;
  if (outC->init) {
    outC->init = kcg_false;
    TrainExitedFromRBCArea_SM_state_sel =
      MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM;
  }
  else {
    TrainExitedFromRBCArea_SM_state_sel =
      outC->TrainExitedFromRBCArea_SM_state_nxt;
  }
  switch (TrainExitedFromRBCArea_SM_state_sel) {
    case MoRC_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      if (tmp) {
        TrainExitedFromRBCArea_SM_state_act =
          MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_state_act =
          MoRC_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      TrainExitedFromRBCArea_SM_reset_act = tmp;
      break;
    case MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM :
      if (trainExitedFromAnRBCArea) {
        TrainExitedFromRBCArea_SM_state_act =
          MoRC_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_state_act =
          MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      TrainExitedFromRBCArea_SM_reset_act = trainExitedFromAnRBCArea;
      break;
    
  }
  switch (TrainExitedFromRBCArea_SM_state_act) {
    case MoRC_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      switch (TrainExitedFromRBCArea_SM_state_sel) {
        case MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM :
          if (trainExitedFromAnRBCArea) {
            tmp1 = MoRC_SSM_TR_Idle_1_TrainExitedFromRBCArea_SM;
          }
          else {
            tmp1 = MoRC_SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
          }
          break;
        case MoRC_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
          if (tmp) {
            tmp1 =
              MoRC_SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM;
          }
          else {
            tmp1 = MoRC_SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
          }
          break;
        
      }
      WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM =
        tmp1 != MoRC_SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      if (TrainExitedFromRBCArea_SM_reset_act) {
        /* 1 */ MoRC_waitAndRepeatTimer_reset(&outC->Context_1);
      }
      /* 1 */
      MoRC_waitAndRepeatTimer(
        actualTime,
        kcg_false,
        kcg_false,
        MoRC_cPositionReportRepetitionInterval,
        MoRC_cPositionReoport_MaxNoOfRepetitions,
        &outC->Context_1);
      if (WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        tmp = kcg_false;
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          MoRC_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      else if (outC->Context_1.elapsed) {
        tmp = kcg_true;
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else {
        tmp = kcg_false;
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          MoRC_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      outC->sendAPositionReport = outC->Context_1.triggerAction;
      break;
    case MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM :
      tmp = kcg_false;
      outC->TrainExitedFromRBCArea_SM_state_nxt =
        MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM;
      outC->sendAPositionReport = kcg_false;
      break;
    
  }
  outC->initiateTermination = ((*orderReceivedFromTrackside).valid &&
      (*orderReceivedFromTrackside).actionToBePerformed ==
      MoRC_morc_rbca_terminateSesssion) ||
    errorConditionRequiringTerminationDetected ||
    trainIsRejectedByRBC_duringStartOfMission ||
    driverClosesTheDeskduringStartOfMission || tmp || ((level_1_isLeft &&
        isInCommunicationSessionWithAnRIU) ||
      (isInCommunicationSessionWithAnRIU && endOfMissionIsExecuted));
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_initiateTerminatingASession.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

