/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DataBusFactory_RBC_DataBus_Pkg.h"

void DataBusFactory_reset_RBC_DataBus_Pkg(
  outC_DataBusFactory_RBC_DataBus_Pkg *outC)
{
  outC->init = kcg_true;
}

/* RBC_DataBus_Pkg::DataBusFactory */
void DataBusFactory_RBC_DataBus_Pkg(
  /* RBC_DataBus_Pkg::DataBusFactory::initConfig */DynamicConfig_T *initConfig,
  /* RBC_DataBus_Pkg::DataBusFactory::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_DataBusFactory_RBC_DataBus_Pkg *outC)
{
  static DynamicConfig_T tmp4;
  static array__155736 tmp3;
  static RadioTrackTrainMessageQueue_T tmp2;
  static Clock_T tmp1;
  static CompressedRadioMessage_TM tmp;
  static kcg_int times;
  /* RBC_DataBus_Pkg::DataBusFactory::_L3 */
  static kcg_bool _L3;
  
  if (outC->init) {
    outC->init = kcg_false;
    times = 1;
  }
  else {
    times = outC->times;
  }
  if (times < 0) {
    outC->times = times;
  }
  else {
    outC->times = times - 1;
  }
  _L3 = outC->times == 0;
  if (_L3) {
    kcg_copy_SessionManagement_T(
      &outC->outDataBus.session,
      (SessionManagement_T *) &SESSION_MANAGEMENT_DEFAULT);
    kcg_copy_DynamicConfig_T(&tmp4, initConfig);
    kcg_copy_array__155736(
      &tmp3,
      (array__155736 *) &DIAG_MSG_DEFAULT_ARRAY_RBC_Diagnostic_Pkg);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &tmp2,
      (RadioTrackTrainMessageQueue_T *)
        &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_DEFAULT);
    kcg_copy_Clock_T(&tmp1, (Clock_T *) &CLOCK_DEFAULT);
    kcg_copy_CompressedRadioMessage_TM(
      &tmp,
      (CompressedRadioMessage_TM *)
        &Empty_RadioTrackTrainMessage_RBC_Messaging_Pkg);
  }
  else {
    kcg_copy_SessionManagement_T(
      &outC->outDataBus.session,
      &(*inDataBus).session);
    kcg_copy_DynamicConfig_T(&tmp4, &(*inDataBus).config);
    kcg_copy_array__155736(&tmp3, &(*inDataBus).diagnostic);
    kcg_copy_RadioTrackTrainMessageQueue_T(&tmp2, &(*inDataBus).messageQueue);
    /* 1 */ Clock__Limit_RBC_Time_Pkg(&(*inDataBus).clockk, &tmp1);
    kcg_copy_CompressedRadioMessage_TM(
      &tmp,
      &(*inDataBus).lastSentTrackTrainMessage);
  }
  kcg_copy_DynamicConfig_T(&outC->outDataBus.config, &tmp4);
  kcg_copy_array__155736(&outC->outDataBus.diagnostic, &tmp3);
  kcg_copy_RadioTrackTrainMessageQueue_T(&outC->outDataBus.messageQueue, &tmp2);
  kcg_copy_Clock_T(&outC->outDataBus.clockk, &tmp1);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outDataBus.lastSentTrackTrainMessage,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DataBusFactory_RBC_DataBus_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

