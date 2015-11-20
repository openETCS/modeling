/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.h"

void RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop */
void RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  static NID_EM tmp5;
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp4;
  static PosData_T tmp3;
  static PosData_T tmp2;
  static RadioTrackTrainMessageQueueEntry_T tmp1;
  static Radio_TrackTrain_Header_T_TM tmp;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM last_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM CONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  if (outC->init) {
    outC->init = kcg_false;
    IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
      kcg_false;
    last_invalidAck = kcg_false;
    last_radioTrackTrainMessageWasSentEmergencyStopId = NID_EM_DEFAULT;
    CONDITIONAL_EMERGENCY_STOP_SM_state_sel =
      SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
  }
  else {
    last_invalidAck = outC->invalidAck;
    IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
      outC->validAck;
    last_radioTrackTrainMessageWasSentEmergencyStopId =
      outC->radioTrackTrainMessageWasSentEmergencyStopId;
    CONDITIONAL_EMERGENCY_STOP_SM_state_sel =
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  }
  /* 4 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->outTriggeredRadioTrackTrainMessage,
    &tmp);
  tmp5 = /* 2 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &tmp);
  /* 4 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->outRadioTrainTrackMessage,
    &tmp4);
  radioTrainTrackMessageId = /* 2 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &tmp4);
  switch (CONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      if (tmp5 == 15) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      if (radioTrainTrackMessageId == 147) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (radioTrainTrackMessageId != 147) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      if (radioTrainTrackMessageId == 147) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      if (IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT &
        (tmp5 == 15)) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (last_invalidAck & (radioTrainTrackMessageId == 147)) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (last_invalidAck) {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        CONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
  switch (CONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      /* 3 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->outRadioTrainTrackMessage,
        &tmp4);
      IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        /* 1 */
        RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &tmp4) == last_radioTrackTrainMessageWasSentEmergencyStopId;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      if (IfBlock1_clock_CONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        /* 5 */
        SessionManagement__GetPosData_RBC_Session_Pkg(
          &(*inDataBus).session,
          &tmp2);
        /* 5 */
        PosData__Update_RBC_Session_Pkg(
          &tmp2,
          &outC->outRadioTrainTrackMessage,
          &tmp3);
        /* 5 */
        SessionManagement__SetPosData_RBC_Session_Pkg(
          &(*inDataBus).session,
          &tmp3,
          &outC->session);
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_SessionManagement_T(&outC->session, &(*inDataBus).session);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      break;
    case SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_SessionManagement_T(&outC->session, &(*inDataBus).session);
      /* 3 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &outC->outTriggeredRadioTrackTrainMessage,
        &tmp1);
      /* 3 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &(*inDataBus).messageQueue,
        &tmp1,
        &outC->outDataBus.messageQueue);
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM;
      /* 3 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->outTriggeredRadioTrackTrainMessage,
        &tmp);
      outC->radioTrackTrainMessageWasSentEmergencyStopId = /* 1 */
        RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &tmp);
      break;
    case SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM :
      kcg_copy_SessionManagement_T(&outC->session, &(*inDataBus).session);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      outC->CONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      break;
    
  }
  kcg_copy_SessionManagement_T(&outC->outDataBus.session, &outC->session);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

