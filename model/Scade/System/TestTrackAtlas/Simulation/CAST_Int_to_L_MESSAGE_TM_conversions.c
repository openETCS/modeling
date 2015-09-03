/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_MESSAGE_TM_conversions.h"

void CAST_Int_to_L_MESSAGE_reset_TM_conversions(
  outC_CAST_Int_to_L_MESSAGE_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_L_MESSAGE */
void CAST_Int_to_L_MESSAGE_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_MESSAGE::l_message_int */kcg_int l_message_int,
  outC_CAST_Int_to_L_MESSAGE_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L13 = 1023;
  outC->_L12 = 0;
  outC->_L1 = l_message_int;
  outC->l_message = outC->_L1;
  outC->_L9 = outC->_L1 > outC->_L13;
  outC->_L8 = outC->_L1 < outC->_L12;
  _1_noname = outC->_L8;
  noname = outC->_L9;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_L_MESSAGE_TM_conversions.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

