/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "trainData_trainData_pkg.h"

void trainData_reset_trainData_pkg(outC_trainData_trainData_pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ sendAcknowledgementRBC_reset_trainData_pkg(&outC->Context_1);
  /* 1 */ sendValidTrainDataRBC_reset_trainData_pkg(&outC->_1_Context_1);
  /* 1 */ trainDataStorage_reset_trainData_pkg(&outC->_2_Context_1);
}

/* trainData_pkg::trainData */
void trainData_trainData_pkg(
  /* trainData_pkg::trainData::reset */kcg_bool reset,
  /* trainData_pkg::trainData::trainDatafromTIU */trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainData_pkg::trainData::trainDatafromDriver */DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainData_pkg::trainData::trainDataAckfromDriver */DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trainData_pkg::trainData::trackMessages */ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* trainData_pkg::trainData::eventsForTrainData */trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  /* trainData_pkg::trainData::nidEngine */NID_ENGINE nidEngine,
  /* trainData_pkg::trainData::p0_positionReport */PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::trainData::p1_positionReport */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::trainData::inMessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *inMessageBus,
  /* trainData_pkg::trainData::inVersion */M_VERSION inVersion,
  /* trainData_pkg::trainData::t_train */T_TRAIN t_train,
  outC_trainData_trainData_pkg *outC)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  static kcg_bool tmp2;
  /* trainData_pkg::trainData::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* trainData_pkg::trainData::ackReceived */
  static kcg_bool ackReceived;
  /* trainData_pkg::trainData::statusAfterCheck */
  static trainDataStatus_T_trainData_Types_pkg statusAfterCheck;
  /* trainData_pkg::trainData::_L45 */
  static trainDataStatus_T_trainData_Types_pkg _L45;
  
  kcg_copy_trainData_Trigger_T_trainData_Types_pkg(
    &outC->triggerFromTrainData,
    (trainData_Trigger_T_trainData_Types_pkg *)
      &cNoTrigger_trainData_Types_pkg);
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &_L45,
      (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  }
  else {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L45, &outC->updatedStatus);
  }
  tmp2 = !_L45.RBCsystemVersionOnboard;
  if (tmp2) {
    /* 1 */
    checkRBCSystemVersion_trainData_pkg(
      trackMessages,
      &_L45,
      &statusAfterCheck);
  }
  else {
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(&statusAfterCheck, &_L45);
  }
  if (_L45.waitingForRBCResponse) {
    /* 1 */
    checkRadioMessages_trainData_pkg(
      trackMessages,
      &statusAfterCheck,
      &tmp1,
      &tmp2);
    tmp = tmp1;
  }
  else {
    tmp = kcg_false;
  }
  if (statusAfterCheck.validatedbyRBC) {
    /* 1 */
    checkAcknowledgmentGeneral_trainData_pkg(
      trackMessages,
      &ackReceived,
      &IfBlock1_clock);
    tmp1 = ackReceived;
  }
  else {
    tmp1 = kcg_false;
  }
  ackReceived = tmp | tmp1;
  if (_L45.waitingForRBCResponse) {
    tmp1 = tmp2;
  }
  else {
    tmp1 = kcg_false;
  }
  if (statusAfterCheck.validatedbyRBC) {
    tmp = IfBlock1_clock;
  }
  else {
    tmp = kcg_false;
  }
  tmp2 = tmp1 | tmp;
  IfBlock1_clock = ackReceived & tmp2;
  /* 1 */
  trainDataStorage_trainData_pkg(
    reset,
    trainDatafromTIU,
    trainDatafromDriver,
    trainDataAckfromDriver,
    &statusAfterCheck,
    eventsForTrainData,
    &outC->_2_Context_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->actualTrainData,
    &outC->_2_Context_1.actualTrainData);
  if (IfBlock1_clock) {
    /* 1 */
    sendAcknowledgementRBC_trainData_pkg(
      t_train,
      nidEngine,
      (*trackMessages).Radio_Common_Header.t_train,
      &outC->_2_Context_1.updatedStatus,
      inMessageBus,
      inVersion,
      &outC->Context_1);
    kcg_copy_trainDataStatus_T_trainData_Types_pkg(
      &outC->updatedStatus,
      &outC->Context_1.updatedStatus);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->outMessageBus,
      &outC->Context_1.outMessageBus);
  }
  else {
    tmp = ackReceived & !tmp2;
    if (tmp) {
      kcg_copy_trainDataStatus_T_trainData_Types_pkg(
        &outC->updatedStatus,
        &outC->_2_Context_1.updatedStatus);
      outC->updatedStatus.validatedbyRBC = kcg_true;
      outC->updatedStatus.waitingForRBCResponse = kcg_false;
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &outC->outMessageBus,
        inMessageBus);
    }
    else {
      tmp1 = statusAfterCheck.valid & statusAfterCheck.validatedByDriver &
        !statusAfterCheck.validatedbyRBC &
        !statusAfterCheck.waitingForRBCResponse &
        statusAfterCheck.RBCsystemVersionOnboard &
        ((*eventsForTrainData).communicationSessionEstablished &
          (*eventsForTrainData).MoRCreadyFlag);
      if (tmp1) {
        /* 1 */
        sendValidTrainDataRBC_trainData_pkg(
          trainDatafromTIU,
          t_train,
          nidEngine,
          &outC->_2_Context_1.updatedStatus,
          p0_positionReport,
          p1_positionReport,
          inMessageBus,
          inVersion,
          &outC->_1_Context_1);
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->updatedStatus,
          &outC->_1_Context_1.updatedStatus);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->outMessageBus,
          &outC->_1_Context_1.outMessageBus);
      }
      else {
        kcg_copy_trainDataStatus_T_trainData_Types_pkg(
          &outC->updatedStatus,
          &outC->_2_Context_1.updatedStatus);
        kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
          &outC->outMessageBus,
          inMessageBus);
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** trainData_trainData_pkg.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

