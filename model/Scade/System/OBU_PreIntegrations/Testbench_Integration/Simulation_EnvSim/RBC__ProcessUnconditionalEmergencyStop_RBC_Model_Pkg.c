/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.h"

void RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop */
void RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC)
{
  static NID_EM tmp4;
  static RadioTrackTrainMessageQueueEntry_T tmp3;
  static PosData_T tmp2;
  static PosData_T tmp1;
  static Radio_TrackTrain_Header_T_TM tmp;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L26 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */
  static NID_EM last_radioTrackTrainMessageWasSentEmergencyStopId;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
  static SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM UNCONDITIONAL_EMERGENCY_STOP_SM_state_act;
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrainTrackMessageId */
  static NID_MESSAGE radioTrainTrackMessageId;
  
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  if (outC->init) {
    outC->init = kcg_false;
    IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
      kcg_false;
    last_invalidAck = kcg_false;
    last_radioTrackTrainMessageWasSentEmergencyStopId = NID_EM_DEFAULT;
    UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel =
      SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
  }
  else {
    last_invalidAck = outC->invalidAck;
    IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
      outC->validAck;
    last_radioTrackTrainMessageWasSentEmergencyStopId =
      outC->radioTrackTrainMessageWasSentEmergencyStopId;
    UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel =
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  }
  /* 1 */
  RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->outTriggeredRadioTrackTrainMessage,
    &tmp);
  tmp4 = /* 1 */
    RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &tmp);
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->outRadioTrainTrackMessage,
    &_L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
  radioTrainTrackMessageId = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
  switch (UNCONDITIONAL_EMERGENCY_STOP_SM_state_sel) {
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (tmp4 == 16) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (radioTrainTrackMessageId == 147) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (radioTrainTrackMessageId != 147) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (radioTrainTrackMessageId == 147) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      if (IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT &
        (tmp4 == 16)) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (last_invalidAck & (radioTrainTrackMessageId == 147)) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else if (last_invalidAck) {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      else {
        UNCONDITIONAL_EMERGENCY_STOP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      }
      break;
    
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
  switch (UNCONDITIONAL_EMERGENCY_STOP_SM_state_act) {
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      /* 3 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->outRadioTrainTrackMessage,
        &_L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
        (/* 1 */
          RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
            &_L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) ==
          last_radioTrackTrainMessageWasSentEmergencyStopId) & (/* 1 */
          RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
            &_L26_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) ==
          Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted);
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      if (IfBlock1_clock_UNCONDITIONAL_EMERGENCY_STOP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        /* 5 */
        SessionManagement__GetPosData_RBC_Session_Pkg(
          &(*inDataBus).session,
          &tmp1);
        /* 5 */
        PosData__Update_RBC_Session_Pkg(
          &tmp1,
          &outC->outRadioTrainTrackMessage,
          &tmp2);
        /* 5 */
        SessionManagement__SetPosData_RBC_Session_Pkg(
          &(*inDataBus).session,
          &tmp2,
          &outC->outDataBus.session);
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        kcg_copy_SessionManagement_T(
          &outC->outDataBus.session,
          &(*inDataBus).session);
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      break;
    case SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      break;
    case SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      /* 3 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &outC->outTriggeredRadioTrackTrainMessage,
        &tmp3);
      /* 3 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &(*inDataBus).messageQueue,
        &tmp3,
        &outC->outDataBus.messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM;
      /* 3 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &outC->outTriggeredRadioTrackTrainMessage,
        &tmp);
      outC->radioTrackTrainMessageWasSentEmergencyStopId = /* 1 */
        RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &tmp);
      break;
    case SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt =
        SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM;
      outC->radioTrackTrainMessageWasSentEmergencyStopId =
        last_radioTrackTrainMessageWasSentEmergencyStopId;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

