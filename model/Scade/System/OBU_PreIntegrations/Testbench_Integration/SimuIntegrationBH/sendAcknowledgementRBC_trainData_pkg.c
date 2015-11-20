/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendAcknowledgementRBC_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sendAcknowledgementRBC_init_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->outMessageBus[i1].Message.valid = kcg_true;
    outC->outMessageBus[i1].Message.nid_message = 0;
    outC->outMessageBus[i1].Message.l_message = 0;
    outC->outMessageBus[i1].Message.t_train = 0;
    outC->outMessageBus[i1].Message.nid_engine = 0;
    outC->outMessageBus[i1].Message.field1 = 0;
    outC->outMessageBus[i1].Message.field2 = 0;
    outC->outMessageBus[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->outMessageBus[i1].OptionalPackets[i] = 0;
    }
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = 0;
  /* 1 */ Send_M146_init_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendAcknowledgementRBC_reset_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  /* 1 */ Send_M146_reset_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::sendAcknowledgementRBC */
void sendAcknowledgementRBC_trainData_pkg(
  /* trainData_pkg::sendAcknowledgementRBC::EVC_t_train */ T_TRAIN EVC_t_train,
  /* trainData_pkg::sendAcknowledgementRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendAcknowledgementRBC::RBC_timeStamp */ T_TRAIN RBC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendAcknowledgementRBC::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* trainData_pkg::sendAcknowledgementRBC::inVersion */ M_VERSION inVersion,
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  static kcg_int noname;
  /* trainData_pkg::sendAcknowledgementRBC::_L32 */
  static M_146_T_TM_radio_messages _L32;
  /* trainData_pkg::sendAcknowledgementRBC::_L29 */
  static M_VERSION _L29;
  /* trainData_pkg::sendAcknowledgementRBC::_L27 */
  static NID_ENGINE _L27;
  /* trainData_pkg::sendAcknowledgementRBC::_L24 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L24;
  /* trainData_pkg::sendAcknowledgementRBC::_L23 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L23;
  /* trainData_pkg::sendAcknowledgementRBC::_L34 */
  static T_TRAIN _L34;
  /* trainData_pkg::sendAcknowledgementRBC::_L36 */
  static T_TRAIN _L36;
  /* trainData_pkg::sendAcknowledgementRBC::_L37 */
  static T_TRAIN _L37;
  /* trainData_pkg::sendAcknowledgementRBC::_L38 */
  static kcg_int _L38;
  /* trainData_pkg::sendAcknowledgementRBC::_L43 */
  static trainDataStatus_T_trainData_Types_pkg _L43;
  /* trainData_pkg::sendAcknowledgementRBC::_L42 */
  static kcg_bool _L42;
  /* trainData_pkg::sendAcknowledgementRBC::_L41 */
  static trainDataStatus_T_trainData_Types_pkg _L41;
  /* trainData_pkg::sendAcknowledgementRBC::_L40 */
  static trainDataStatus_T_trainData_Types_pkg _L40;
  /* trainData_pkg::sendAcknowledgementRBC::_L39 */
  static kcg_bool _L39;
  
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L23, MessageBus);
  _L36 = EVC_t_train;
  _L27 = nidEngine;
  _L37 = EVC_t_train;
  _L34 = RBC_timeStamp;
  /* 2 */ headerMsg146_ng_trainData_pkg(_L27, _L37, _L34, &_L32);
  _L29 = inVersion;
  /* 1 */
  Send_M146_TM_radio_messages(_L36, &_L23, &_L32, _L29, &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L24,
    &outC->Context_1.MessageBus_out);
  _L38 = outC->Context_1.t_train_assigned;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->outMessageBus,
    &_L24);
  noname = _L38;
  _L39 = kcg_true;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L43, actualStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L40, &_L43);
  if (kcg_true) {
    _L40.validatedbyRBC = _L39;
  }
  _L42 = kcg_false;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L41, &_L40);
  if (kcg_true) {
    _L41.waitingForRBCResponse = _L42;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->updatedStatus, &_L41);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendAcknowledgementRBC_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

