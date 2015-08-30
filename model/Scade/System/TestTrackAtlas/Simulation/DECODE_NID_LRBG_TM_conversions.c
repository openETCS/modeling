/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

void DECODE_NID_LRBG_reset_TM_conversions(
  outC_DECODE_NID_LRBG_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_NID_C_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_NID_BG_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::DECODE_NID_LRBG */
void DECODE_NID_LRBG_TM_conversions(
  /* TM_conversions::DECODE_NID_LRBG::nid_lrbg */NID_LRBG nid_lrbg,
  outC_DECODE_NID_LRBG_TM_conversions *outC)
{
  NID_C noname;
  NID_BG _1_noname;
  
  outC->_L8 = nid_lrbg;
  outC->_L11 = 0;
  outC->_L10 = outC->_L8 == outC->_L11;
  outC->_L9 = 426;
  if (outC->_L10) {
    outC->_L12 = outC->_L11;
  }
  else {
    outC->_L12 = outC->_L9;
  }
  outC->_L6 = nid_lrbg;
  outC->_L5 = 100000;
  outC->_L7 = outC->_L6 % outC->_L5;
  /* 1 */ CAST_Int_to_NID_BG_TM_conversions(outC->_L7, &outC->Context_1);
  outC->_L3 = outC->Context_1.nid_bg;
  _1_noname = outC->_L3;
  outC->_L1 = nid_lrbg;
  outC->_L4 = outC->_L1 / outC->_L5;
  /* 1 */ CAST_Int_to_NID_C_TM_conversions(outC->_L4, &outC->_1_Context_1);
  outC->_L2 = outC->_1_Context_1.nid_c;
  noname = outC->_L2;
  outC->nid_bg = outC->_L8;
  outC->nid_c = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DECODE_NID_LRBG_TM_conversions.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

