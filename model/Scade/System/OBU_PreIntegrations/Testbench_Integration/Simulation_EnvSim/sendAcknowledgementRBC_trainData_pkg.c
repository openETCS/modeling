/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendAcknowledgementRBC_trainData_pkg.h"

void sendAcknowledgementRBC_reset_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  /* 1 */ Send_M146_reset_TM_radio_messages(&outC->Context_1);
}

/* trainData_pkg::sendAcknowledgementRBC */
void sendAcknowledgementRBC_trainData_pkg(
  /* trainData_pkg::sendAcknowledgementRBC::EVC_t_train */T_TRAIN EVC_t_train,
  /* trainData_pkg::sendAcknowledgementRBC::nidEngine */NID_ENGINE nidEngine,
  /* trainData_pkg::sendAcknowledgementRBC::RBC_timeStamp */T_TRAIN RBC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::actualStatus */trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendAcknowledgementRBC::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* trainData_pkg::sendAcknowledgementRBC::inVersion */M_VERSION inVersion,
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  static M_146_T_TM_radio_messages tmp;
  
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    actualStatus);
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_false;
  /* 2 */
  headerMsg146_ng_trainData_pkg(nidEngine, EVC_t_train, RBC_timeStamp, &tmp);
  /* 1 */
  Send_M146_TM_radio_messages(
    EVC_t_train,
    MessageBus,
    &tmp,
    inVersion,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->outMessageBus,
    &outC->Context_1.MessageBus_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendAcknowledgementRBC_trainData_pkg.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

