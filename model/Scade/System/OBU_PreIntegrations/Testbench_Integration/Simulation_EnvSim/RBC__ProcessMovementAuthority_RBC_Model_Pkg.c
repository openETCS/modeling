/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessMovementAuthority_RBC_Model_Pkg.h"

void RBC__ProcessMovementAuthority_reset_RBC_Model_Pkg(
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessMovementAuthority */
void RBC__ProcessMovementAuthority_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessMovementAuthority_RBC_Model_Pkg *outC)
{
  static RadioTrackTrainMessageQueueEntry_T tmp8;
  static PosData_T tmp7;
  static PosData_T tmp6;
  static PosData_T tmp5;
  static PosData_T tmp4;
  static NID_MESSAGE tmp3;
  static T_TRAIN tmp2;
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp1;
  static NID_MESSAGE tmp;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::SEND_MA::IfBlock1 */
  static kcg_bool IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::AWAIT_ACKNOWLEDGEMENT::_L3 */
  static Radio_TrackTrain_Header_T_TM _L3_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L19 */
  static Radio_TrackTrain_Header_T_TM _L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN last_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
  static SSM_ST_MOVEMENT_AUTHORITY_SM MOVEMENT_AUTHORITY_SM_state_act;
  
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  if (outC->init) {
    outC->init = kcg_false;
    IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA = kcg_false;
    IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
      kcg_false;
    last_radioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
    MOVEMENT_AUTHORITY_SM_state_sel = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
  }
  else {
    IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
      outC->invalidAcknowledgement;
    IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA = outC->validAcknowledgement;
    last_radioTrackTrainMessageWasSentTimestamp =
      outC->radioTrackTrainMessageWasSentTimestamp;
    MOVEMENT_AUTHORITY_SM_state_sel = outC->MOVEMENT_AUTHORITY_SM_state_nxt;
  }
  /* 6 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->outTriggeredRadioTrackTrainMessage,
    &_L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
  tmp = /* 5 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &_L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
  /* 5 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->outRadioTrainTrackMessage,
    &tmp1);
  tmp2 = /* 2 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &tmp1);
  switch (MOVEMENT_AUTHORITY_SM_state_sel) {
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      if ((tmp == 3) | ((tmp == 3) & (tmp2 == 132))) {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else if (tmp2 == 132) {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      if ((tmp2 == 146) | (tmp2 == 137)) {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if ((tmp2 != 146) & (tmp2 != 137)) {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      if ((tmp2 == 146) | (tmp2 == 137)) {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      if (IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA & ((tmp == 3) | ((tmp ==
              3) & (tmp2 == 132)))) {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else if (IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA & (tmp2 == 132)) {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      }
      else if (IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA) {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
      }
      else if (IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT &
        ((tmp2 == 146) | (tmp2 == 137))) {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else if (IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      if (tmp == 3) {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      }
      break;
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      if (tmp == 3) {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      }
      else {
        MOVEMENT_AUTHORITY_SM_state_act = SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      }
      break;
    
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
  switch (MOVEMENT_AUTHORITY_SM_state_act) {
    case SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM :
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      /* 1 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp6);
      /* 1 */
      PosData__Update_RBC_Session_Pkg(
        &tmp6,
        &outC->outRadioTrainTrackMessage,
        &tmp7);
      /* 1 */
      SessionManagement__SetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp7,
        &outC->outDataBus.session);
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      break;
    case SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM :
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      /* 5 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      tmp3 = /* 4 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      if (tmp3 == 3) {
        outC->radioTrackTrainMessageWasSentTimestamp = /* 3 */
          RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
            &_L19_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      }
      else {
        outC->radioTrackTrainMessageWasSentTimestamp =
          last_radioTrackTrainMessageWasSentTimestamp;
      }
      /* 4 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->outRadioTrainTrackMessage,
        &tmp1);
      IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 2 */
        RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &tmp1) == outC->radioTrackTrainMessageWasSentTimestamp;
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      if (IfBlock1_clock_MOVEMENT_AUTHORITY_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        outC->validAcknowledgement = kcg_true;
        outC->invalidAcknowledgement = kcg_false;
      }
      else {
        outC->validAcknowledgement = kcg_false;
        outC->invalidAcknowledgement = kcg_true;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM :
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      /* 4 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L3_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT);
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM;
      tmp = /* 3 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L3_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT);
      if (tmp == 3) {
        outC->radioTrackTrainMessageWasSentTimestamp = /* 2 */
          RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
            &_L3_MOVEMENT_AUTHORITY_SM_AWAIT_ACKNOWLEDGEMENT);
      }
      else {
        outC->radioTrackTrainMessageWasSentTimestamp =
          last_radioTrackTrainMessageWasSentTimestamp;
      }
      break;
    case SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM :
      IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA = (tmp == 3) & (tmp2 == 132);
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      /* 2 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &outC->outTriggeredRadioTrackTrainMessage,
        &tmp8);
      /* 2 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &(*inDataBus).messageQueue,
        &tmp8,
        &outC->outDataBus.messageQueue);
      if (IfBlock1_clock_MOVEMENT_AUTHORITY_SM_SEND_MA) {
        /* 3 */
        SessionManagement__GetPosData_RBC_Session_Pkg(
          &(*inDataBus).session,
          &tmp4);
        /* 3 */
        PosData__Update_RBC_Session_Pkg(
          &tmp4,
          &outC->outRadioTrainTrackMessage,
          &tmp5);
        /* 3 */
        SessionManagement__SetPosData_RBC_Session_Pkg(
          &(*inDataBus).session,
          &tmp5,
          &outC->outDataBus.session);
      }
      else {
        kcg_copy_SessionManagement_T(
          &outC->outDataBus.session,
          &(*inDataBus).session);
      }
      outC->MOVEMENT_AUTHORITY_SM_state_nxt =
        SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      break;
    case SSM_st_IDLE_MOVEMENT_AUTHORITY_SM :
      outC->validAcknowledgement = kcg_false;
      outC->invalidAcknowledgement = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->MOVEMENT_AUTHORITY_SM_state_nxt = SSM_st_IDLE_MOVEMENT_AUTHORITY_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessMovementAuthority_RBC_Model_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

