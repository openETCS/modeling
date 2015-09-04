/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_V_Release_TA_Lib_internal.h"

void EVAL_V_Release_reset_TA_Lib_internal(
  outC_EVAL_V_Release_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::EVAL_V_Release */
void EVAL_V_Release_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_V_Release::V_NV_in */kcg_int V_NV_in,
  /* TA_Lib_internal::EVAL_V_Release::V_in */kcg_int V_in,
  outC_EVAL_V_Release_TA_Lib_internal *outC)
{
  outC->_L7 = V_in;
  outC->_L8 = 126 * 5;
  outC->_L9 = outC->_L7 == outC->_L8;
  outC->calc_onboard = outC->_L9;
  outC->_L11 = 0;
  outC->_L1 = V_in;
  outC->_L3 = 127 * 5;
  outC->_L2 = outC->_L1 == outC->_L3;
  outC->_L5 = V_NV_in;
  outC->_L6 = V_in;
  if (outC->_L2) {
    outC->_L4 = outC->_L5;
  }
  else {
    outC->_L4 = outC->_L6;
  }
  if (outC->_L9) {
    outC->_L10 = outC->_L11;
  }
  else {
    outC->_L10 = outC->_L4;
  }
  outC->V_out = outC->_L10;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_V_Release_TA_Lib_internal.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

