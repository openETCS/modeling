/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_MoRC_withSimplified_IF.h"

void MoRC_MoRC_withSimplified_IF_init(MoRC_outC_MoRC_withSimplified_IF *outC)
{
  outC->init = kcg_true;
  outC->PowerUpSequencer_state_nxt =
    MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer;
  outC->ready = kcg_true;
  outC->mobileSWStatus = MoRC_mswc_unregistered;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->mobileHWCmd = MoRC_mhwa_nop;
  outC->actualRadioNetworkID = 0;
  outC->radioComSesssionEstablished = kcg_true;
  outC->safeRadioCommunication_releaseSetUp = kcg_true;
  outC->safeRadioCommunication_requestSetUp = kcg_true;
  outC->messageToRBC = 0;
  MoRC_managementOfRadioCommunication_init(&outC->Context_1);
  MoRC_FallingEdge_init_digital(&outC->_1_Context_1);
}


void MoRC_MoRC_withSimplified_IF_reset(MoRC_outC_MoRC_withSimplified_IF *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_managementOfRadioCommunication_reset(&outC->Context_1);
  /* 1 */ MoRC_FallingEdge_reset_digital(&outC->_1_Context_1);
}

/* MoRC_withSimplified_IF */
void MoRC_MoRC_withSimplified_IF(
  MoRC_inC_MoRC_withSimplified_IF *inC,
  MoRC_outC_MoRC_withSimplified_IF *outC)
{
  MoRC_validRadioNetworkID_Type tmp;
  MoRC_validRadioNetworkID_Type tmp1;
  MoRC_validRadioNetworkID_Type tmp2;
  MoRC_mobileHWStatus_Type tmp3;
  MoRC_onBoardOrder_Type tmp9;
  kcg_bool tmp8;
  MoRC_orderToContactAnRBC_Type tmp7;
  kcg_bool tmp6;
  kcg_bool tmp5;
  kcg_bool tmp4;
  /* MoRC_withSimplified_IF::PowerUpSequencer::TheVeryFirstCycle::_L2 */ kcg_bool _L2_PowerUpSequencer_TheVeryFirstCycle;
  /* MoRC_withSimplified_IF::PowerUpSequencer::AtPowerUpState */ kcg_bool br_1_guard_PowerUpSequencer_AtPowerUpState;
  /* MoRC_withSimplified_IF::PowerUpSequencer::AfterPowerUp */ kcg_bool br_1_guard_PowerUpSequencer_AfterPowerUp;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else */ kcg_bool _10_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else */ kcg_bool else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec */ kcg_bool MessageFromTrackDec_clock;
  /* MoRC_withSimplified_IF::PowerUpSequencer */ MoRC_SSM_ST_PowerUpSequencer PowerUpSequencer_state_act;
  /* MoRC_withSimplified_IF::establishOrderFromRBC */ MoRC_orderToContactAnRBC_Type establishOrderFromRBC;
  /* MoRC_withSimplified_IF::terminateOrderFromRBC */ MoRC_orderToContactAnRBC_Type terminateOrderFromRBC;
  /* MoRC_withSimplified_IF::enableExecution */ kcg_bool enableExecution;
  /* MoRC_withSimplified_IF::_L47 */ kcg_bool _L47;
  /* MoRC_withSimplified_IF::_L127 */ MoRC_orderToContactAnRBC_Type _L127;
  /* MoRC_withSimplified_IF::_L136 */ kcg_bool _L136;
  
  tmp6 = inC->orderFromOnBoard == MoRC_obo_initiateCommunication;
  MessageFromTrackDec_clock = inC->messageFromRBC ==
    MoRC_cNID_MESSAGE_GeneralMessage;
  if (MessageFromTrackDec_clock) {
  }
  else {
    _10_else_clock_MessageFromTrackDec = inC->messageFromRBC ==
      MoRC_cNID_MESSAGE_GeneralMessage_init;
    if (_10_else_clock_MessageFromTrackDec) {
    }
    else {
      else_clock_MessageFromTrackDec = inC->messageFromRBC ==
        MoRC_cNID_MESSAGE_RBC_RIU_SystemVersion;
      if (else_clock_MessageFromTrackDec) {
      }
      else {
        tmp4 = inC->messageFromRBC ==
          MoRC_cNID_MESSAGE_InitiationOfACommunicationSession_track;
        if (tmp4) {
        }
        else {
          br_1_guard_PowerUpSequencer_AtPowerUpState = inC->messageFromRBC ==
            MoRC_cNID_MESSAGE_AckOfTerminationOfACommunicationSession;
          if (br_1_guard_PowerUpSequencer_AtPowerUpState) {
          }
          else {
            br_1_guard_PowerUpSequencer_AfterPowerUp = inC->messageFromRBC ==
              MoRC_cNID_PACKET_131;
          }
        }
      }
    }
  }
  if (outC->init) {
    outC->init = kcg_false;
    PowerUpSequencer_state_act = MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer;
  }
  else {
    PowerUpSequencer_state_act = outC->PowerUpSequencer_state_nxt;
  }
  switch (PowerUpSequencer_state_act) {
    case MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer :
      _L2_PowerUpSequencer_TheVeryFirstCycle = inC->powerAvailable;
      enableExecution = _L2_PowerUpSequencer_TheVeryFirstCycle;
      break;
    case MoRC_SSM_st_AtPowerUpState_PowerUpSequencer :
      enableExecution = kcg_true;
      break;
    case MoRC_SSM_st_AfterPowerUp_PowerUpSequencer :
      enableExecution = kcg_true;
      break;
    
  }
  MoRC_kcg_copy_orderToContactAnRBC_Type(
    &establishOrderFromRBC,
    (MoRC_orderToContactAnRBC_Type *) &MoRC_cEstablishOrderFromTrackside);
  establishOrderFromRBC.rbc_id = inC->NID_RBC_ID;
  MoRC_kcg_copy_orderToContactAnRBC_Type(
    &terminateOrderFromRBC,
    (MoRC_orderToContactAnRBC_Type *) &MoRC_cTerminateOrderFromTrackside);
  terminateOrderFromRBC.rbc_id = inC->NID_RBC_ID;
  if (tmp6) {
    tmp8 = kcg_true;
  }
  else {
    tmp5 = inC->orderFromOnBoard == MoRC_obo_terminateCommunication;
    tmp8 = kcg_false;
  }
  if (enableExecution) {
    if (MessageFromTrackDec_clock) {
      MoRC_kcg_copy_orderToContactAnRBC_Type(&_L127, &terminateOrderFromRBC);
    }
    else if (_10_else_clock_MessageFromTrackDec) {
      MoRC_kcg_copy_orderToContactAnRBC_Type(&_L127, &establishOrderFromRBC);
    }
    else if (else_clock_MessageFromTrackDec) {
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &_L127,
        (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
    }
    else if (tmp4) {
      MoRC_kcg_copy_orderToContactAnRBC_Type(&_L127, &establishOrderFromRBC);
    }
    else {
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &_L127,
        (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
    }
    tmp9 = inC->orderFromOnBoard;
    if (tmp6) {
      MoRC_kcg_copy_orderToContactAnRBC_Type(&tmp7, &establishOrderFromRBC);
    }
    else if (tmp5) {
      MoRC_kcg_copy_orderToContactAnRBC_Type(&tmp7, &terminateOrderFromRBC);
    }
    else {
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &tmp7,
        (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
    }
  }
  else {
    MoRC_kcg_copy_orderToContactAnRBC_Type(
      &_L127,
      (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
    tmp9 = MoRC_obo_noOrder;
    MoRC_kcg_copy_orderToContactAnRBC_Type(
      &tmp7,
      (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
  }
  _L47 = tmp9 == MoRC_obo_terminateCommunication;
  _L136 = tmp8 && enableExecution;
  /* 1 */ MoRC_FallingEdge_digital(inC->powerAvailable, &outC->_1_Context_1);
  if (MessageFromTrackDec_clock) {
    tmp8 = kcg_false;
    tmp5 = kcg_false;
    tmp6 = kcg_false;
  }
  else if (_10_else_clock_MessageFromTrackDec) {
    tmp8 = kcg_false;
    tmp5 = kcg_false;
    tmp6 = kcg_false;
  }
  else if (else_clock_MessageFromTrackDec) {
    tmp8 = kcg_false;
    tmp5 = kcg_true;
    tmp6 = kcg_false;
  }
  else {
    tmp5 = kcg_false;
    if (tmp4) {
      tmp8 = kcg_false;
      tmp6 = kcg_false;
    }
    else if (br_1_guard_PowerUpSequencer_AtPowerUpState) {
      tmp8 = kcg_true;
      tmp6 = kcg_false;
    }
    else {
      tmp8 = kcg_false;
      if (br_1_guard_PowerUpSequencer_AfterPowerUp) {
        tmp6 = kcg_true;
      }
      else {
        tmp6 = kcg_false;
      }
    }
  }
  tmp3.valid = kcg_true;
  tmp3.connectionStatus = inC->mobileHWConnectionStatus;
  tmp3.settingUpConnectionHasFailed = kcg_true;
  tmp2.valid = kcg_true;
  tmp2.radioNetworkID = inC->RadioNetworkID_fromTrackside;
  tmp1.valid = kcg_true;
  tmp1.radioNetworkID = inC->RadioNetworkID_fromDriver;
  tmp.valid = kcg_true;
  tmp.radioNetworkID = inC->RadioNetworkID_memorized;
  /* 1 */
  MoRC_managementOfRadioCommunication(
    inC->actualTime,
    (kcg_bool) (tmp8 && enableExecution),
    &_L127,
    &_L127,
    &_L127,
    _L47,
    _L47,
    _L47,
    _L47,
    _L47,
    kcg_false,
    inC->powerAvailable,
    outC->_1_Context_1.FE_Output,
    inC->M_Level,
    &tmp,
    &tmp1,
    &tmp2,
    kcg_false,
    kcg_false,
    &tmp3,
    kcg_false,
    kcg_false,
    &tmp7,
    kcg_false,
    (kcg_bool) (enableExecution && tmp6),
    (kcg_bool) (inC->systemVersionIsCompatible && enableExecution),
    (kcg_bool) (tmp5 && enableExecution),
    inC->M_Mode,
    _L136,
    kcg_true,
    _L136,
    (kcg_bool) (MoRC_rhs_end == inC->radioHole_status && enableExecution),
    kcg_false,
    (kcg_bool)
      ((MoRC_rhs_begin == inC->radioHole_status || inC->radioHole_status ==
          MoRC_rhs_inside) && enableExecution),
    kcg_false,
    _L136,
    (MoRC_validRadioNetworkID_Type *) &MoRC_cSampleRadioNetworkID,
    MoRC_cConnectionStatusTimerInterval,
    &outC->Context_1);
  outC->memorizeTheLastRadioNetworkID =
    outC->Context_1.memorizeTheLastRadioNetworkID;
  outC->radioComSesssionEstablished =
    outC->Context_1.sessionSuccessfullyEstablished;
  outC->safeRadioCommunication_requestSetUp =
    outC->Context_1.requestTheSetupOfASafeRadioConnection;
  outC->safeRadioCommunication_releaseSetUp =
    outC->Context_1.requestReleaseOfSafeRadioConnectionWithTrackside;
  outC->mobileHWCmd = outC->Context_1.mobileHWCmd.action;
  if (outC->Context_1.sendTheMessageInitiationOfCommunicationSessionToTrackside) {
    outC->messageToRBC = MoRC_cNID_MESSAGE_InitiationOfACommunicationSession;
  }
  else if (outC->Context_1.sendATerminationOfCommunicationMessage) {
    outC->messageToRBC = MoRC_cNID_MESSAGE_terminationOfACommunicationSession;
  }
  else if (outC->Context_1.sendMessage_NoCompatibleVersionSupported) {
    outC->messageToRBC = MoRC_cNID_MESSAGE_NoCompatibleVersionSupported;
  }
  else if (outC->Context_1.sendASessionEstablishedReportToTrackside) {
    outC->messageToRBC = MoRC_cNID_MESSAGE_SessionEstablished;
  }
  else {
    outC->messageToRBC = MoRC_cNID_MESSAGE_noMessage;
  }
  outC->mobileSWStatus = outC->Context_1.mobileSWStatus.connectionStatus;
  outC->actualRadioNetworkID =
    outC->Context_1.actualRadioNetworkID.radioNetworkID;
  switch (PowerUpSequencer_state_act) {
    case MoRC_SSM_st_AfterPowerUp_PowerUpSequencer :
      br_1_guard_PowerUpSequencer_AfterPowerUp = !inC->powerAvailable;
      if (br_1_guard_PowerUpSequencer_AfterPowerUp) {
        outC->PowerUpSequencer_state_nxt =
          MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer;
        tmp4 = kcg_false;
      }
      else {
        outC->PowerUpSequencer_state_nxt =
          MoRC_SSM_st_AfterPowerUp_PowerUpSequencer;
        tmp4 = kcg_true;
      }
      break;
    case MoRC_SSM_st_AtPowerUpState_PowerUpSequencer :
      if (outC->safeRadioCommunication_requestSetUp) {
        outC->PowerUpSequencer_state_nxt =
          MoRC_SSM_st_AfterPowerUp_PowerUpSequencer;
        tmp4 = kcg_false;
      }
      else {
        outC->PowerUpSequencer_state_nxt =
          MoRC_SSM_st_AtPowerUpState_PowerUpSequencer;
        tmp4 = kcg_true;
      }
      break;
    case MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer :
      if (_L2_PowerUpSequencer_TheVeryFirstCycle) {
        outC->PowerUpSequencer_state_nxt =
          MoRC_SSM_st_AtPowerUpState_PowerUpSequencer;
        tmp4 = kcg_false;
      }
      else {
        outC->PowerUpSequencer_state_nxt =
          MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer;
        tmp4 = kcg_true;
      }
      break;
    
  }
  outC->ready = outC->Context_1.ready && tmp4;
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_MoRC_withSimplified_IF.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

