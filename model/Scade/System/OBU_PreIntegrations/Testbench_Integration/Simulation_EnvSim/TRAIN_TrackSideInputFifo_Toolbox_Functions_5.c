/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_TrackSideInputFifo_Toolbox_Functions_5.h"

void TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* Toolbox::Functions::TRAIN_TrackSideInputFifo */
void TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inData */API_TrackSideInput_T_API_Msg_Pkg *inData,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inValid */kcg_bool inValid,
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::inReady */kcg_bool inReady,
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  static kcg_int tmp1;
  static kcg_int tmp;
  static array__158707 tmp2;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L19 */
  static array__158707 _L19_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::IfBlock1::then::_L9 */
  static kcg_int _L9_IfBlock1;
  /* Toolbox::Functions::TRAIN_TrackSideInputFifo::_L44 */
  static kcg_bool _L44;
  
  for (tmp1 = 0; tmp1 < 5; tmp1++) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &tmp2[tmp1],
      (API_TrackSideInput_T_API_Msg_Pkg *)
        &cEmtpyTrackSideInputMessage_Toolbox);
  }
  if (outC->init1) {
    _L9_IfBlock1 = 0;
  }
  else {
    _L9_IfBlock1 = outC->_L32;
  }
  if (_L9_IfBlock1 <= 5) {
    outC->size = _L9_IfBlock1;
  }
  else {
    outC->size = 5;
  }
  if (inValid) {
    for (tmp1 = 0; tmp1 < 5; tmp1++) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &_L19_IfBlock1[tmp1],
        (API_TrackSideInput_T_API_Msg_Pkg *)
          &cEmtpyTrackSideInputMessage_Toolbox);
    }
    if (outC->init) {
      _L9_IfBlock1 = 0;
      kcg_copy_array__158707(&outC->_L4_IfBlock1, &_L19_IfBlock1);
    }
    else {
      _L9_IfBlock1 = outC->_L20_IfBlock1;
    }
    if ((0 <= _L9_IfBlock1) & (_L9_IfBlock1 < 5)) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &outC->_L4_IfBlock1[_L9_IfBlock1],
        inData);
    }
    kcg_copy_array__158707(&outC->buffer, &outC->_L4_IfBlock1);
    outC->_L20_IfBlock1 = (_L9_IfBlock1 + 1) % 5;
    tmp1 = 1;
    outC->init = kcg_false;
  }
  else {
    if (outC->init1) {
      kcg_copy_array__158707(&outC->buffer, &tmp2);
    }
    tmp1 = 0;
  }
  if (outC->init1) {
    outC->init1 = kcg_false;
    _L9_IfBlock1 = 0;
  }
  else {
    _L9_IfBlock1 = outC->_L50;
  }
  if ((0 <= _L9_IfBlock1) & (_L9_IfBlock1 < 5)) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->outData,
      &outC->buffer[_L9_IfBlock1]);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->outData,
      (API_TrackSideInput_T_API_Msg_Pkg *)
        &cEmtpyTrackSideInputMessage_Toolbox);
  }
  _L44 = inReady & (outC->size > 0);
  if (_L44) {
    tmp = - 1;
  }
  else {
    tmp = 0;
  }
  outC->_L32 = outC->size + tmp1 + tmp;
  if (inValid & (outC->size == 5)) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  if (_L44) {
    tmp1 = 1;
    outC->outValid = kcg_true;
  }
  else {
    tmp1 = 0;
    outC->outValid = kcg_false;
  }
  outC->_L50 = (_L9_IfBlock1 + tmp1 + tmp) % 5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TRAIN_TrackSideInputFifo_Toolbox_Functions_5.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

