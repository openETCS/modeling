/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_b_MA_Request.h"

void op_3_8_2_3_b_reset_MA_Request(outC_op_3_8_2_3_b_MA_Request *outC)
{
  kcg_int i;
  
  for (i = 0; i < 10; i++) {
    /* 1 */ CompareSectionTimer_reset_MA_Request(&outC->Context_1[i]);
  }
}

/* MA_Request::op_3_8_2_3_b */
void op_3_8_2_3_b_MA_Request(
  /* MA_Request::op_3_8_2_3_b::t_timeoutrqst */kcg_int t_timeoutrqst,
  /* MA_Request::op_3_8_2_3_b::ma_s */MovementAuthority_t_TrackAtlasTypes *ma_s,
  outC_op_3_8_2_3_b_MA_Request *outC)
{
  kcg_int tmp;
  kcg_int i;
  
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L1, ma_s);
  kcg_copy__4_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L11,
    &outC->_L1.sections);
  outC->_L3 = t_timeoutrqst;
  outC->_L5 = 10000;
  outC->_L6 = outC->_L5;
  for (i = 0; i < 10; i++) {
    tmp = outC->_L6;
    /* 1 */
    CompareSectionTimer_MA_Request(tmp, &outC->_L11[i], &outC->Context_1[i]);
    outC->_L6 = outC->Context_1[i].smallestTimer;
  }
  outC->_L10 = outC->_L3 <= outC->_L6;
  outC->_L7 = outC->_L1.t_loa;
  outC->_L8 = outC->_L3 <= outC->_L7;
  outC->_L9 = outC->_L10 | outC->_L8;
  outC->triggerMA = outC->_L9;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_3_8_2_3_b_MA_Request.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

