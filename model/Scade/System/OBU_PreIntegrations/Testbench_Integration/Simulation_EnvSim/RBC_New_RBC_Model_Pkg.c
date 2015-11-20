/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_New_RBC_Model_Pkg.h"

void RBC_New_reset_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ RBC__ProcessController_reset_RBC_Model_Pkg(&outC->Context_1);
  /* 1 */
  RadioTrainTrackInputHandler_reset_RBC_Messaging_Pkg(&outC->_1_Context_1);
  /* 1 */
  ToOldRadioTrainTrackMsg_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_2_Context_1);
  /* 1 */ DataBusFactory_reset_RBC_DataBus_Pkg(&outC->_3_Context_1);
}

/* RBC_Model_Pkg::RBC_New */
void RBC_New_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC_New::inDynamicConfigInit */DynamicConfig_T *inDynamicConfigInit,
  /* RBC_Model_Pkg::RBC_New::inRadioTrainTrackMsg */M_TrainTrack_Message_T_TM_radio_messages *inRadioTrainTrackMsg,
  /* RBC_Model_Pkg::RBC_New::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC_New_RBC_Model_Pkg *outC)
{
  /* RBC_Model_Pkg::RBC_New::_L245 */
  static RBC_Data_T_RBC_DataBus_Pkg _L245;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
      &_L245,
      (RBC_Data_T_RBC_DataBus_Pkg *) &RBC_DATA_BUS_DEFAULT_RBC_DataBus_Pkg);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L245, &outC->dataBus);
  }
  /* 1 */
  DataBusFactory_RBC_DataBus_Pkg(
    inDynamicConfigInit,
    &_L245,
    &outC->_3_Context_1);
  /* 1 */
  ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
    inRadioTrainTrackMsg,
    &outC->_2_Context_1);
  /* 1 */
  RadioTrainTrackInputHandler_RBC_Messaging_Pkg(
    &outC->_2_Context_1.outOld,
    &outC->_1_Context_1);
  /* 1 */
  RBC__ProcessController_RBC_Model_Pkg(
    &outC->_3_Context_1.outDataBus,
    &outC->_1_Context_1.outRadioTrainTrack,
    inTriggeredRadioTrackTrainMessage,
    &outC->Context_1);
  /* 1 */
  RadioTrackTrainMsgQueue_RBC_Messaging_Pkg(
    &outC->Context_1.outDataBus,
    &_L245,
    &outC->outRadioTrackTrainMessage);
  /* 1 */ RBC_Clock_Tick_RBC_Time_Pkg(&_L245, &outC->dataBus, &outC->outClock);
  kcg_copy_SessionManagement_T(
    &outC->outSessionManagement,
    &outC->dataBus.session);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_New_RBC_Model_Pkg.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

