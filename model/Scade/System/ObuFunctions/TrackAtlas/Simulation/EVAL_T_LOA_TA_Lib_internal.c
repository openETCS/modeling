/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"

void EVAL_T_LOA_reset_TA_Lib_internal(outC_EVAL_T_LOA_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::EVAL_T_LOA */
void EVAL_T_LOA_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_T_LOA::t_loa */T_LOA t_loa,
  outC_EVAL_T_LOA_TA_Lib_internal *outC)
{
  outC->_L10 = 1023;
  outC->_L1 = t_loa;
  outC->_L9 = outC->_L10 == outC->_L1;
  outC->_L8 = 0;
  outC->_L7 = 1000;
  outC->_L5 = 1023;
  outC->_L4 = outC->_L1 < outC->_L5;
  if (outC->_L4) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  outC->_L3 = outC->_L1 * outC->_L6;
  outC->t_loa_out = outC->_L3;
  outC->t_loa_unlimited = outC->_L9;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_T_LOA_TA_Lib_internal.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

