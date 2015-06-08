/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T10:39:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"

void CAST_Int_to_NID_C_reset_TM_conversions(
  outC_CAST_Int_to_NID_C_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_NID_C */
void CAST_Int_to_NID_C_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_C::nid_c_int */kcg_int nid_c_int,
  outC_CAST_Int_to_NID_C_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L11 = 0;
  outC->_L10 = 1023;
  outC->_L1 = nid_c_int;
  outC->_L9 = outC->_L1 > outC->_L10;
  outC->_L8 = outC->_L1 < outC->_L11;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->nid_c = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_C_TM_conversions.c
** Generation date: 2015-06-05T10:39:17
*************************************************************$ */

