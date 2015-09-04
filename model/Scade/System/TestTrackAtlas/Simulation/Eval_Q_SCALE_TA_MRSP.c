/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

void Eval_Q_SCALE_reset_TA_MRSP(outC_Eval_Q_SCALE_TA_MRSP *outC)
{
}

/* TA_MRSP::Eval_Q_SCALE */
void Eval_Q_SCALE_TA_MRSP(
  /* TA_MRSP::Eval_Q_SCALE::q_scale_in */Q_SCALE q_scale_in,
  /* TA_MRSP::Eval_Q_SCALE::d_in */kcg_int d_in,
  outC_Eval_Q_SCALE_TA_MRSP *outC)
{
  outC->_L1 = q_scale_in;
  outC->_L3 = ENUM_Q_SCALE_10cm_QSCALE_TM;
  outC->_L6 = outC->_L1 == outC->_L3;
  outC->_L8 = 10;
  outC->_L4 = ENUM_Q_SCALE_10m_QSCALE_TM;
  outC->_L9 = outC->_L1 == outC->_L4;
  outC->_L11 = 10 * 100;
  outC->_L12 = 100;
  if (outC->_L9) {
    outC->_L10 = outC->_L11;
  }
  else {
    outC->_L10 = outC->_L12;
  }
  if (outC->_L6) {
    outC->_L7 = outC->_L8;
  }
  else {
    outC->_L7 = outC->_L10;
  }
  outC->_L2 = d_in;
  outC->_L14 = outC->_L7 * outC->_L2;
  outC->d_out = outC->_L14;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_Q_SCALE_TA_MRSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

