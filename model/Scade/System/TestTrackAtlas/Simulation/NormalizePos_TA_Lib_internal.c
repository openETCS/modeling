/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalizePos_TA_Lib_internal.h"

void NormalizePos_reset_TA_Lib_internal(outC_NormalizePos_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::NormalizePos */
void NormalizePos_TA_Lib_internal(
  /* TA_Lib_internal::NormalizePos::In */kcg_int In,
  /* TA_Lib_internal::NormalizePos::Value */kcg_int Value,
  outC_NormalizePos_TA_Lib_internal *outC)
{
  outC->_L1 = In;
  outC->_L2 = Value;
  outC->_L3 = outC->_L1 < outC->_L2;
  if (outC->_L3) {
    outC->_L4 = outC->_L2;
  }
  else {
    outC->_L4 = outC->_L1;
  }
  outC->Out = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalizePos_TA_Lib_internal.c
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */

