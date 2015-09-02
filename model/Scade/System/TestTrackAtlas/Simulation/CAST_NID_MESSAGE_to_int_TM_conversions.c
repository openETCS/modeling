/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_MESSAGE_to_int_TM_conversions.h"

void CAST_NID_MESSAGE_to_int_reset_TM_conversions(
  outC_CAST_NID_MESSAGE_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_NID_MESSAGE_to_int */
void CAST_NID_MESSAGE_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_MESSAGE_to_int::nid_message */NID_MESSAGE nid_message,
  outC_CAST_NID_MESSAGE_to_int_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L5 = 0;
  outC->_L1 = nid_message;
  outC->_L4 = outC->_L1 < outC->_L5;
  outC->_L3 = 256;
  outC->_L2 = outC->_L1 > outC->_L3;
  _1_noname = outC->_L2;
  noname = outC->_L4;
  outC->nid_message_int = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_MESSAGE_to_int_TM_conversions.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

