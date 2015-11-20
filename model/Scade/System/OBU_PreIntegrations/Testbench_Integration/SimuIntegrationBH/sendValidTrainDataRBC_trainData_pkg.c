/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendValidTrainDataRBC_trainData_pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sendValidTrainDataRBC_init_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
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
  /* 1 */ Send_M129_init_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendValidTrainDataRBC_reset_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  /* 1 */ Send_M129_reset_TM_radio_messages(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* trainData_pkg::sendValidTrainDataRBC */
void sendValidTrainDataRBC_trainData_pkg(
  /* trainData_pkg::sendValidTrainDataRBC::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::sendValidTrainDataRBC::evc_t_train */ T_TRAIN evc_t_train,
  /* trainData_pkg::sendValidTrainDataRBC::nidEngine */ NID_ENGINE nidEngine,
  /* trainData_pkg::sendValidTrainDataRBC::actualStatus */ trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendValidTrainDataRBC::p0_positionReport */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::p1_positionReport */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* trainData_pkg::sendValidTrainDataRBC::inVersion */ M_VERSION inVersion,
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  /* trainData_pkg::sendValidTrainDataRBC::t_trainUsed */
  static T_TRAIN t_trainUsed;
  /* trainData_pkg::sendValidTrainDataRBC::_L24 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L24;
  /* trainData_pkg::sendValidTrainDataRBC::_L25 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L25;
  /* trainData_pkg::sendValidTrainDataRBC::_L26 */
  static T_TRAIN _L26;
  /* trainData_pkg::sendValidTrainDataRBC::_L28 */
  static M_129_T_TM_radio_messages _L28;
  /* trainData_pkg::sendValidTrainDataRBC::_L29 */
  static NID_ENGINE _L29;
  /* trainData_pkg::sendValidTrainDataRBC::_L30 */
  static T_TRAIN _L30;
  /* trainData_pkg::sendValidTrainDataRBC::_L31 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L31;
  /* trainData_pkg::sendValidTrainDataRBC::_L32 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L32;
  /* trainData_pkg::sendValidTrainDataRBC::_L33 */
  static P000_TM_TrainToTrack _L33;
  /* trainData_pkg::sendValidTrainDataRBC::_L34 */
  static P001_TM_TrainToTrack _L34;
  /* trainData_pkg::sendValidTrainDataRBC::_L35 */
  static M_VERSION _L35;
  /* trainData_pkg::sendValidTrainDataRBC::_L36 */
  static trainData_T_TIU_Types_Pkg _L36;
  /* trainData_pkg::sendValidTrainDataRBC::_L37 */
  static P011_TM_TrainToTrack _L37;
  /* trainData_pkg::sendValidTrainDataRBC::_L38 */
  static kcg_int _L38;
  /* trainData_pkg::sendValidTrainDataRBC::_L45 */
  static trainDataStatus_T_trainData_Types_pkg _L45;
  /* trainData_pkg::sendValidTrainDataRBC::_L44 */
  static trainDataStatus_T_trainData_Types_pkg _L44;
  /* trainData_pkg::sendValidTrainDataRBC::_L43 */
  static T_TRAIN _L43;
  /* trainData_pkg::sendValidTrainDataRBC::_L42 */
  static T_TRAIN _L42;
  /* trainData_pkg::sendValidTrainDataRBC::_L41 */
  static trainDataStatus_T_trainData_Types_pkg _L41;
  /* trainData_pkg::sendValidTrainDataRBC::_L40 */
  static kcg_bool _L40;
  /* trainData_pkg::sendValidTrainDataRBC::_L39 */
  static trainDataStatus_T_trainData_Types_pkg _L39;
  
  _L26 = evc_t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L25, MessageBus);
  _L29 = nidEngine;
  _L30 = evc_t_train;
  /* 1 */ headerMsg129_ng_trainData_pkg(_L29, _L30, &_L28);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L31, p0_positionReport);
  /* 1 */ nextGen_P00_radioOutput_Pkg(&_L31, &_L33);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &_L32,
    p1_positionReport);
  /* 1 */ nextGen_P01_radioOutput_Pkg(&_L32, &_L34);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L36, trainData);
  /* 1 */ packet_11_trainData_pkg(&_L36, &_L37);
  _L35 = inVersion;
  /* 1 */
  Send_M129_TM_radio_messages(
    _L26,
    &_L25,
    &_L28,
    &_L33,
    &_L34,
    &_L37,
    _L35,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L24,
    &outC->Context_1.MessageBus_out);
  _L38 = outC->Context_1.t_train_assigned;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->outMessageBus,
    &_L24);
  t_trainUsed = _L38;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L41, actualStatus);
  _L43 = evc_t_train;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L45, &_L41);
  if (kcg_true) {
    _L45.timeStampValidateToRBC = _L43;
  }
  _L40 = kcg_true;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L44, &_L45);
  if (kcg_true) {
    _L44.waitingForRBCResponse = _L40;
  }
  _L42 = t_trainUsed;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_L39, &_L44);
  if (kcg_true) {
    _L39.timeStampValidateToRBC = _L42;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->updatedStatus, &_L39);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendValidTrainDataRBC_trainData_pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

