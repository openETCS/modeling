/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC_InputBuffer_Toolbox_Functions.h"

void EVC_InputBuffer_reset_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC)
{
  outC->init = kcg_true;
  /* 1 */ TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(&outC->Context_1);
  /* 2 */ TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(&outC->Context_2);
}

/* Toolbox::Functions::EVC_InputBuffer */
void EVC_InputBuffer_Toolbox_Functions(
  /* Toolbox::Functions::EVC_InputBuffer::BTMMessage */API_TrackSideInput_T_API_Msg_Pkg *BTMMessage,
  /* Toolbox::Functions::EVC_InputBuffer::RTMMessage */API_TrackSideInput_T_API_Msg_Pkg *RTMMessage,
  outC_EVC_InputBuffer_Toolbox_Functions *outC)
{
  /* Toolbox::Functions::EVC_InputBuffer::_L16 */
  static kcg_bool _L16;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L16 = kcg_true;
  }
  else {
    _L16 = outC->sendRTM;
  }
  /* 2 */
  TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
    BTMMessage,
    (*BTMMessage).valid,
    (kcg_bool) !_L16,
    &outC->Context_2);
  if (outC->Context_2.size == 0) {
    outC->sendRTM = kcg_true;
  }
  else {
    outC->sendRTM = kcg_false;
  }
  /* 1 */
  TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
    RTMMessage,
    (*RTMMessage).valid,
    _L16,
    &outC->Context_1);
  if (_L16) {
    if (outC->Context_1.outValid) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &outC->TrackMessageToEVC,
        &outC->Context_1.outData);
    }
    else {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &outC->TrackMessageToEVC,
        (API_TrackSideInput_T_API_Msg_Pkg *)
          &cEmtpyTrackSideInputMessage_Toolbox);
    }
  }
  else if (outC->Context_2.outValid) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->TrackMessageToEVC,
      &outC->Context_2.outData);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->TrackMessageToEVC,
      (API_TrackSideInput_T_API_Msg_Pkg *)
        &cEmtpyTrackSideInputMessage_Toolbox);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVC_InputBuffer_Toolbox_Functions.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

