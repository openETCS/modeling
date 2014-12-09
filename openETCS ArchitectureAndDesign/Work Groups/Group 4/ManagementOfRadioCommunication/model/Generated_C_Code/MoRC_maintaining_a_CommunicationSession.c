/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_maintaining_a_CommunicationSession.h"

void MoRC_maintaining_a_CommunicationSession_init(
  MoRC_outC_maintaining_a_CommunicationSession *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->Maintaining_SM_state_nxt =
    MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
  outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
    MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
  outC->requestsToSetupTheSafeRadioConnectionStopped = kcg_true;
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed = kcg_true;
  outC->firstRequestToSetupASafeRadioConnection = kcg_true;
  outC->informTheDriverThatNoConnectionWasSetup = kcg_true;
  outC->tryToSetupANewSafeRadioConnection = kcg_true;
  MoRC_countDownTimer_init(&outC->Context_1);
}


void MoRC_maintaining_a_CommunicationSession_reset(
  MoRC_outC_maintaining_a_CommunicationSession *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  /* 1 */ MoRC_countDownTimer_reset(&outC->Context_1);
}

/* maintaining_a_CommunicationSession */
void MoRC_maintaining_a_CommunicationSession(
  /* maintaining_a_CommunicationSession::communicationSessionEstablished */ kcg_bool communicationSessionEstablished,
  /* maintaining_a_CommunicationSession::safeRadioConnectionReestablished */ kcg_bool safeRadioConnectionReestablished,
  /* maintaining_a_CommunicationSession::lossOfTheSafeRadioConnection */ kcg_bool lossOfTheSafeRadioConnection,
  /* maintaining_a_CommunicationSession::disconnectionHasNotBeenOrdered */ kcg_bool disconnectionHasNotBeenOrdered,
  /* maintaining_a_CommunicationSession::trainFrontInsideInAnAnnouncedRadioHole */ kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* maintaining_a_CommunicationSession::actualTime */ MoRC_time_Type actualTime,
  MoRC_outC_maintaining_a_CommunicationSession *outC)
{
  MoRC_SSM_TR_Maintaining_SM tmp1;
  kcg_bool tmp;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */ MoRC_SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */ MoRC_SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished */ kcg_bool CommunicationSessionEstablished_weakb_clock_Maintaining_SM;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM::SafeRadio_connected */ kcg_bool br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM::SafeRadio_connected */ kcg_bool br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished */ kcg_bool br_1_guard_Maintaining_SM_CommunicationSessionEstablished;
  /* maintaining_a_CommunicationSession::Maintaining_SM */ MoRC_SSM_ST_Maintaining_SM Maintaining_SM_state_sel;
  /* maintaining_a_CommunicationSession::Maintaining_SM */ MoRC_SSM_ST_Maintaining_SM Maintaining_SM_state_act;
  /* maintaining_a_CommunicationSession::Maintaining_SM */ kcg_bool Maintaining_SM_reset_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    Maintaining_SM_state_sel =
      MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
  }
  else {
    Maintaining_SM_state_sel = outC->Maintaining_SM_state_nxt;
  }
  switch (Maintaining_SM_state_sel) {
    case MoRC_SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      Maintaining_SM_state_act =
        MoRC_SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      Maintaining_SM_reset_act = kcg_false;
      break;
    case MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      if (communicationSessionEstablished) {
        Maintaining_SM_state_act =
          MoRC_SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      }
      else {
        Maintaining_SM_state_act =
          MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
      }
      Maintaining_SM_reset_act = communicationSessionEstablished;
      break;
    
  }
  switch (Maintaining_SM_state_act) {
    case MoRC_SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      switch (Maintaining_SM_state_sel) {
        case MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
          if (communicationSessionEstablished) {
            tmp1 =
              MoRC_SSM_TR_CommunicationSessionNotEstablished_1_Maintaining_SM;
          }
          else {
            tmp1 = MoRC_SSM_TR_no_trans_Maintaining_SM;
          }
          break;
        case MoRC_SSM_st_CommunicationSessionEstablished_Maintaining_SM :
          tmp1 = MoRC_SSM_TR_no_trans_Maintaining_SM;
          break;
        
      }
      CommunicationSessionEstablished_weakb_clock_Maintaining_SM = tmp1 !=
        MoRC_SSM_TR_no_trans_Maintaining_SM;
      if (Maintaining_SM_reset_act) {
        outC->init1 = kcg_true;
        /* 1 */ MoRC_countDownTimer_reset(&outC->Context_1);
      }
      if (outC->init1) {
        RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished =
          MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
      }
      else {
        RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished =
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished;
      }
      switch (RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished) {
        case MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected =
            trainFrontInsideInAnAnnouncedRadioHole &&
            lossOfTheSafeRadioConnection;
          br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected =
            lossOfTheSafeRadioConnection && disconnectionHasNotBeenOrdered;
          if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          }
          else if (br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            outC->firstRequestToSetupASafeRadioConnection = kcg_true;
          }
          else {
            outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          }
          break;
        case MoRC_SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          break;
        case MoRC_SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          break;
        case MoRC_SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          tmp = !trainFrontInsideInAnAnnouncedRadioHole;
          if (tmp) {
            outC->firstRequestToSetupASafeRadioConnection = kcg_true;
          }
          else {
            outC->firstRequestToSetupASafeRadioConnection = kcg_false;
          }
          break;
        
      }
      /* 1 */
      MoRC_countDownTimer(
        outC->firstRequestToSetupASafeRadioConnection,
        kcg_false,
        actualTime,
        kcg_false,
        MoRC_cRadioConnectionReestablishingTimeout,
        &outC->Context_1);
      switch (RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished) {
        case MoRC_SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (tmp) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              MoRC_SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              MoRC_SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          tmp = kcg_false;
          break;
        case MoRC_SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
            MoRC_SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          tmp = kcg_false;
          break;
        case MoRC_SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (safeRadioConnectionReestablished) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else if (outC->Context_1.expired) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              MoRC_SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              MoRC_SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          tmp = kcg_false;
          break;
        case MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              MoRC_SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
            tmp = kcg_true;
          }
          else {
            if (br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
              RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
                MoRC_SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
            }
            else {
              RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
                MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
            }
            tmp = kcg_false;
          }
          break;
        
      }
      switch (RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished) {
        case MoRC_SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            MoRC_SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          outC->tryToSetupANewSafeRadioConnection = kcg_false;
          break;
        case MoRC_SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            MoRC_SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          outC->tryToSetupANewSafeRadioConnection = kcg_false;
          break;
        case MoRC_SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            MoRC_SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          outC->tryToSetupANewSafeRadioConnection = kcg_true;
          break;
        case MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          outC->tryToSetupANewSafeRadioConnection = kcg_false;
          break;
        
      }
      if (CommunicationSessionEstablished_weakb_clock_Maintaining_SM) {
        outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
        outC->Maintaining_SM_state_nxt =
          MoRC_SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      }
      else {
        br_1_guard_Maintaining_SM_CommunicationSessionEstablished =
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished ==
          MoRC_SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
        if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished) {
          outC->informTheDriverThatNoConnectionWasSetup = kcg_true;
          outC->Maintaining_SM_state_nxt =
            MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
        }
        else {
          outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
          outC->Maintaining_SM_state_nxt =
            MoRC_SSM_st_CommunicationSessionEstablished_Maintaining_SM;
        }
      }
      outC->init1 = kcg_false;
      break;
    case MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
      tmp = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->tryToSetupANewSafeRadioConnection = kcg_false;
      outC->Maintaining_SM_state_nxt =
        MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
      break;
    
  }
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed =
    outC->informTheDriverThatNoConnectionWasSetup;
  outC->requestsToSetupTheSafeRadioConnectionStopped =
    outC->finalAttemptToSetupTheSafeRadioConnectionFailed || tmp;
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_maintaining_a_CommunicationSession.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

