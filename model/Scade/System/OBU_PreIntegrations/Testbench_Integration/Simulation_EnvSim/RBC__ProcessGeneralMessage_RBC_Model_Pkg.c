/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessGeneralMessage_RBC_Model_Pkg.h"

void RBC__ProcessGeneralMessage_reset_RBC_Model_Pkg(
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessGeneralMessage */
void RBC__ProcessGeneralMessage_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessGeneralMessage_RBC_Model_Pkg *outC)
{
  static RadioTrackTrainMessageQueueEntry_T tmp5;
  static NID_MESSAGE tmp4;
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp3;
  static NID_MESSAGE tmp2;
  static M_ACK tmp1;
  static Radio_TrackTrain_Header_T_TM tmp;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::AWAIT_ACKNOWLEDGEMENT::_L3 */
  static Radio_TrackTrain_Header_T_TM _L3_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L23 */
  static Radio_TrackTrain_Header_T_TM _L23_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::radioTrackTrainMessageWasSentTimestamp */
  static T_TRAIN last_radioTrackTrainMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::ackRequired */
  static kcg_bool last_ackRequired;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
  static SSM_ST_GENERAL_MESSAGE_SM GENERAL_MESSAGE_SM_state_act;
  
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  if (outC->init) {
    outC->init = kcg_false;
    last_ackRequired = kcg_false;
    IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT = kcg_false;
    last_invalidAck = kcg_false;
    last_radioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
    GENERAL_MESSAGE_SM_state_sel = SSM_st_IDLE_GENERAL_MESSAGE_SM;
  }
  else {
    last_invalidAck = outC->invalidAck;
    IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
      outC->validAck;
    last_radioTrackTrainMessageWasSentTimestamp =
      outC->radioTrackTrainMessageWasSentTimestamp;
    last_ackRequired = outC->ackRequired;
    GENERAL_MESSAGE_SM_state_sel = outC->GENERAL_MESSAGE_SM_state_nxt;
  }
  /* 7 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->outTriggeredRadioTrackTrainMessage,
    &tmp);
  tmp2 = /* 5 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &tmp);
  /* 6 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->outRadioTrainTrackMessage,
    &tmp3);
  tmp4 = /* 2 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &tmp3);
  switch (GENERAL_MESSAGE_SM_state_sel) {
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      if (tmp2 == 24) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else {
        GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      if (last_ackRequired & (tmp4 == 146)) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (last_ackRequired & (tmp4 != 146)) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (last_ackRequired) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else {
        GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      if (tmp4 == 146) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      if (IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT &
        (tmp2 == 24)) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      }
      else if (IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        GENERAL_MESSAGE_SM_state_act = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      }
      else if (last_invalidAck & (tmp4 == 146)) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else if (last_invalidAck) {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      else {
        GENERAL_MESSAGE_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      }
      break;
    
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
  switch (GENERAL_MESSAGE_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      /* 5 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L23_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      tmp4 = /* 4 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L23_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      if (tmp4 == 24) {
        outC->radioTrackTrainMessageWasSentTimestamp = /* 3 */
          RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
            &_L23_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      }
      else {
        outC->radioTrackTrainMessageWasSentTimestamp =
          last_radioTrackTrainMessageWasSentTimestamp;
      }
      /* 5 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->outRadioTrainTrackMessage,
        &tmp3);
      IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 2 */
        RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &tmp3) == outC->radioTrackTrainMessageWasSentTimestamp;
      outC->GENERAL_MESSAGE_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      outC->ackRequired = last_ackRequired;
      if (IfBlock1_clock_GENERAL_MESSAGE_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      /* 4 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L3_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      outC->GENERAL_MESSAGE_SM_state_nxt =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM;
      tmp2 = /* 3 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L3_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      if (tmp2 == 24) {
        outC->radioTrackTrainMessageWasSentTimestamp = /* 2 */
          RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
            &_L3_GENERAL_MESSAGE_SM_AWAIT_ACKNOWLEDGEMENT);
      }
      else {
        outC->radioTrackTrainMessageWasSentTimestamp =
          last_radioTrackTrainMessageWasSentTimestamp;
      }
      outC->ackRequired = last_ackRequired;
      break;
    case SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      /* 1 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &outC->outTriggeredRadioTrackTrainMessage,
        &tmp5);
      /* 1 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &(*inDataBus).messageQueue,
        &tmp5,
        &outC->outDataBus.messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->GENERAL_MESSAGE_SM_state_nxt =
        SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      /* 10 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->outTriggeredRadioTrackTrainMessage,
        &tmp);
      tmp1 = /* 2 */
        RadioTrackTrainHeader__Get_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &tmp);
      if (tmp1 == M_ACK_Acknowledgement_required) {
        outC->ackRequired = kcg_true;
      }
      else {
        outC->ackRequired = kcg_false;
      }
      break;
    case SSM_st_IDLE_GENERAL_MESSAGE_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->GENERAL_MESSAGE_SM_state_nxt = SSM_st_IDLE_GENERAL_MESSAGE_SM;
      outC->radioTrackTrainMessageWasSentTimestamp =
        last_radioTrackTrainMessageWasSentTimestamp;
      outC->ackRequired = last_ackRequired;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessGeneralMessage_RBC_Model_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

