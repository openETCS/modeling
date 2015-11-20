/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectRadioOutput_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void collectRadioOutput_init_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->RTMisActive = kcg_true;
  outC->outMN = 0;
  outC->outRadio = 0;
  outC->API_RTM_management.valid = kcg_true;
  outC->API_RTM_management.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->API_RTM_management.networkID = 0;
  outC->toRBC.Message.valid = kcg_true;
  outC->toRBC.Message.nid_message = 0;
  outC->toRBC.Message.l_message = 0;
  outC->toRBC.Message.t_train = 0;
  outC->toRBC.Message.nid_engine = 0;
  outC->toRBC.Message.field1 = 0;
  outC->toRBC.Message.field2 = 0;
  outC->toRBC.Message.field3 = 0;
  for (i = 0; i < 50; i++) {
    outC->toRBC.OptionalPackets[i] = 0;
  }
  /* 1 */ BufferOutput_init_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ mapCMDToRTM_init_radioOutput_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void collectRadioOutput_reset_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ BufferOutput_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ mapCMDToRTM_reset_radioOutput_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::collectRadioOutput */
void collectRadioOutput_radioOutput_Pkg(
  /* radioOutput_Pkg::collectRadioOutput::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::collectRadioOutput::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  /* radioOutput_Pkg::collectRadioOutput::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* radioOutput_Pkg::collectRadioOutput::mobileRadioStatus */ morcStatus_T_RCM_Session_Types_Pkg *mobileRadioStatus,
  /* radioOutput_Pkg::collectRadioOutput::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::collectRadioOutput::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  /* radioOutput_Pkg::collectRadioOutput::inVersion */ M_VERSION inVersion,
  /* radioOutput_Pkg::collectRadioOutput::inT_TRAIN */ T_TRAIN inT_TRAIN,
  outC_collectRadioOutput_radioOutput_Pkg *outC)
{
  static M_VERSION noname;
  static T_TRAIN _1_noname;
  /* radioOutput_Pkg::collectRadioOutput::RTMisActive */
  static kcg_bool last_RTMisActive;
  /* radioOutput_Pkg::collectRadioOutput::_L1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1;
  /* radioOutput_Pkg::collectRadioOutput::_L19 */
  static M_VERSION _L19;
  /* radioOutput_Pkg::collectRadioOutput::_L20 */
  static T_TRAIN _L20;
  /* radioOutput_Pkg::collectRadioOutput::_L22 */
  static RadioManagement_T_API_RadioCommunication_Pkg _L22;
  /* radioOutput_Pkg::collectRadioOutput::_L24 */
  static morcStatus_T_RCM_Session_Types_Pkg _L24;
  /* radioOutput_Pkg::collectRadioOutput::_L25 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L25;
  /* radioOutput_Pkg::collectRadioOutput::_L27 */
  static kcg_bool _L27;
  /* radioOutput_Pkg::collectRadioOutput::_L28 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L28;
  /* radioOutput_Pkg::collectRadioOutput::_L29 */
  static kcg_bool _L29;
  /* radioOutput_Pkg::collectRadioOutput::_L30 */
  static kcg_bool _L30;
  /* radioOutput_Pkg::collectRadioOutput::_L31 */
  static M_TrainTrack_Message_T_TM_radio_messages _L31;
  /* radioOutput_Pkg::collectRadioOutput::_L32 */
  static kcg_bool _L32;
  /* radioOutput_Pkg::collectRadioOutput::_L33 */
  static M_TrainTrack_Message_T_TM_radio_messages _L33;
  /* radioOutput_Pkg::collectRadioOutput::_L34 */
  static kcg_bool _L34;
  /* radioOutput_Pkg::collectRadioOutput::_L35 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L35;
  /* radioOutput_Pkg::collectRadioOutput::_L36 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L36;
  /* radioOutput_Pkg::collectRadioOutput::_L37 */
  static mobileRegistrationCmd_T_RCM_Types_Pkg _L37;
  /* radioOutput_Pkg::collectRadioOutput::_L38 */
  static NID_MN _L38;
  /* radioOutput_Pkg::collectRadioOutput::_L39 */
  static NID_RADIO _L39;
  /* radioOutput_Pkg::collectRadioOutput::_L40 */
  static kcg_bool _L40;
  /* radioOutput_Pkg::collectRadioOutput::_L41 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L41;
  
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L1, MessageBus);
  _L19 = inVersion;
  noname = _L19;
  _L20 = inT_TRAIN;
  _1_noname = _L20;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&_L36, mobileConnectionCMD);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(&_L37, mobileRegistrationCMD);
  /* 1 */ mapCMDToRTM_radioOutput_Pkg(&_L36, &_L37, &outC->Context_1);
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &_L22,
    &outC->Context_1.toRTM);
  _L39 = outC->Context_1.outRadio;
  _L38 = outC->Context_1.outMN;
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(
    &outC->API_RTM_management,
    &_L22);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L24, mobileRadioStatus);
  /* last_init_ck_RTMisActive */ if (outC->init) {
    last_RTMisActive = kcg_false;
  }
  else {
    last_RTMisActive = outC->RTMisActive;
  }
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L25, &_L24.session);
  _L40 = _L25.valid;
  _L41 = _L25.phase;
  _L28 = sp_terminated_RCM_Session_Types_Pkg;
  _L27 = _L41 != _L28;
  _L30 = last_RTMisActive;
  /* 1 */ if (_L40) {
    _L29 = _L27;
  }
  else {
    _L29 = _L30;
  }
  outC->RTMisActive = _L29;
  _L32 = outC->RTMisActive;
  /* 1 */ BufferOutput_TM_lib_internal(&_L1, _L32, &outC->_1_Context_1);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L31,
    &outC->_1_Context_1.Out);
  _L34 = insafeSessionEstablished;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L35, inModeAndLevel);
  /* 1 */ patchMsgFlow_RadioSupport_Pkg(&_L31, _L34, &_L35, &_L33);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->toRBC, &_L33);
  outC->outRadio = _L39;
  outC->outMN = _L38;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** collectRadioOutput_radioOutput_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

