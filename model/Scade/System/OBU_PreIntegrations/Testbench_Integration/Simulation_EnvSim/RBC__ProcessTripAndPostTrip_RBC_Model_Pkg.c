/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.h"

void RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  /* 3 */ RBC__ProcessModeAndLevel_reset_RBC_Model_Pkg(&outC->Context_3);
}

/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
void RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC)
{
  static RadioTrackTrainMessageQueueEntry_T tmp5;
  static CompressedRadioMessage_TM tmp4;
  static NID_LRBG tmp3;
  static PosData_T tmp2;
  static NID_MESSAGE tmp1;
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg tmp;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::MODE_POST_TRIP::_L25 */
  static Radio_TrackTrain_Header_T_TM _L25_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::_L16 */
  static Radio_TrackTrain_Header_T_TM _L16_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM::TRY_PROCESS_ACKNOWLEDGEMENT::IfBlock1 */
  static kcg_bool IfBlock1_clock_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::invalidAck */
  static kcg_bool last_invalidAck;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */
  static T_TRAIN last_recognitionMessageWasSentTimestamp;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_state_sel;
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
  static SSM_ST_TRIP_AND_POST_TRIP_SM TRIP_AND_POST_TRIP_SM_state_act;
  
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    inRadioTrainTrackMessage);
  if (outC->init) {
    last_invalidAck = kcg_false;
    last_recognitionMessageWasSentTimestamp = T_TRAIN_MIN;
    TRIP_AND_POST_TRIP_SM_state_sel = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
  }
  else {
    last_invalidAck = outC->invalidAck;
    last_recognitionMessageWasSentTimestamp =
      outC->recognitionMessageWasSentTimestamp;
    TRIP_AND_POST_TRIP_SM_state_sel = outC->TRIP_AND_POST_TRIP_SM_state_nxt;
  }
  /* 1 */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->outRadioTrainTrackMessage,
    &tmp);
  tmp3 = /* 1 */
    RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &tmp);
  /* 3 */
  RBC__ProcessModeAndLevel_RBC_Model_Pkg(
    &outC->outRadioTrainTrackMessage,
    &outC->Context_3);
  switch (TRIP_AND_POST_TRIP_SM_state_sel) {
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      if ((outC->Context_3.out_mode == M_MODE_Trip) &
        outC->Context_3.out_modeChanged) {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
      }
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      if ((outC->Context_3.out_mode == M_MODE_Post_Trip) &
        outC->Context_3.out_modeChanged) {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      if (tmp3 == 136) {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      if (outC->init) {
        IfBlock1_clock_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          kcg_false;
      }
      else {
        IfBlock1_clock_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT =
          outC->validAck;
      }
      if (IfBlock1_clock_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        TRIP_AND_POST_TRIP_SM_state_act = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
      }
      else if (last_invalidAck & (tmp3 == 136)) {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      else if (last_invalidAck) {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      }
      else {
        TRIP_AND_POST_TRIP_SM_state_act =
          SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      }
      break;
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      TRIP_AND_POST_TRIP_SM_state_act =
        SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      break;
    
  }
  outC->init = kcg_false;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, inDataBus);
  switch (TRIP_AND_POST_TRIP_SM_state_act) {
    case SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      /* 3 */
      SessionManagement__GetPosData_RBC_Session_Pkg(
        &(*inDataBus).session,
        &tmp2);
      tmp3 = /* 3 */ PosData__Get_NID_LRBG_RBC_Session_Pkg(&tmp2);
      /* 3 */
      RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
        T_TRAIN_MIN,
        M_ACK_Acknowledgement_required,
        tmp3,
        &tmp4);
      /* 3 */
      RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg(
        &tmp4,
        &tmp5);
      /* 3 */
      RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg(
        &(*inDataBus).messageQueue,
        &tmp5,
        &outC->outDataBus.messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM;
      outC->recognitionMessageWasSentTimestamp =
        last_recognitionMessageWasSentTimestamp;
      break;
    case SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM :
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      /* 3 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L16_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      tmp1 = /* 3 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L16_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      if (tmp1 == 6) {
        outC->recognitionMessageWasSentTimestamp = /* 2 */
          RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
            &_L16_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT);
      }
      else {
        outC->recognitionMessageWasSentTimestamp =
          last_recognitionMessageWasSentTimestamp;
      }
      /* 2 */
      RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        &outC->outRadioTrainTrackMessage,
        &tmp);
      IfBlock1_clock_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT = /* 1 */
        RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
          &tmp) == outC->recognitionMessageWasSentTimestamp;
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM;
      if (IfBlock1_clock_TRIP_AND_POST_TRIP_SM_TRY_PROCESS_ACKNOWLEDGEMENT) {
        outC->validAck = kcg_true;
        outC->invalidAck = kcg_false;
      }
      else {
        outC->validAck = kcg_false;
        outC->invalidAck = kcg_true;
      }
      break;
    case SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      /* 5 */
      RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
        &(*inDataBus).lastSentTrackTrainMessage,
        &_L25_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP);
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM;
      tmp3 = /* 5 */
        RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
          &_L25_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP);
      if (tmp3 == 6) {
        outC->recognitionMessageWasSentTimestamp = /* 4 */
          RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
            &_L25_TRIP_AND_POST_TRIP_SM_MODE_POST_TRIP);
      }
      else {
        outC->recognitionMessageWasSentTimestamp =
          last_recognitionMessageWasSentTimestamp;
      }
      break;
    case SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->TRIP_AND_POST_TRIP_SM_state_nxt =
        SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM;
      outC->recognitionMessageWasSentTimestamp =
        last_recognitionMessageWasSentTimestamp;
      break;
    case SSM_st_IDLE_TRIP_AND_POST_TRIP_SM :
      outC->validAck = kcg_false;
      outC->invalidAck = kcg_false;
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->outDataBus.messageQueue,
        &(*inDataBus).messageQueue);
      kcg_copy_SessionManagement_T(
        &outC->outDataBus.session,
        &(*inDataBus).session);
      outC->TRIP_AND_POST_TRIP_SM_state_nxt = SSM_st_IDLE_TRIP_AND_POST_TRIP_SM;
      outC->recognitionMessageWasSentTimestamp =
        last_recognitionMessageWasSentTimestamp;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

