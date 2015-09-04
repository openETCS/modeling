/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_RepeatReq_MA_Request.h"

void op_RepeatReq_reset_MA_Request(outC_op_RepeatReq_MA_Request *outC)
{
  outC->init = kcg_true;
  /* 1 */ MOD_reset_XCP_numeric(&outC->Context_1);
}

/* MA_Request::op_RepeatReq */
void op_RepeatReq_MA_Request(
  /* MA_Request::op_RepeatReq::tcycreq */T_CYCLOC tcycreq,
  /* MA_Request::op_RepeatReq::setRepeater */kcg_bool setRepeater,
  /* MA_Request::op_RepeatReq::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_MA_Request *outC)
{
  /* MA_Request::op_RepeatReq::setRepeater */ kcg_bool last_setRepeater;
  
  outC->_L7 = setRepeater;
  outC->Write_1 = outC->_L7;
  outC->_L12 = 0;
  outC->Init_1 = outC->_L12;
  if (outC->init) {
    last_setRepeater = kcg_false;
  }
  else {
    last_setRepeater = outC->rem_setRepeater;
  }
  outC->_L15 = - 1;
  outC->_L9 = systemTime;
  outC->_L7_1 = outC->Init_1;
  if (outC->init) {
    outC->_L6_1 = outC->_L7_1;
  }
  else {
    outC->_L6_1 = outC->_L4_1;
  }
  outC->_L5_1 = outC->Write_1;
  outC->BM_Input_1 = outC->_L9;
  outC->_L2_1 = outC->BM_Input_1;
  if (outC->_L5_1) {
    outC->_L4_1 = outC->_L2_1;
  }
  else {
    outC->_L4_1 = outC->_L6_1;
  }
  outC->Memorized_1 = outC->_L4_1;
  outC->_L6 = outC->Memorized_1;
  outC->_L5 = outC->_L9 - outC->_L6;
  outC->_L4 = tcycreq;
  /* 1 */ MOD_XCP_numeric(outC->_L5, outC->_L4, outC->_L15, &outC->Context_1);
  outC->_L13 = outC->Context_1.Result;
  outC->_L14 = outC->Context_1.Exception;
  outC->exception = outC->_L14;
  outC->_L8 = 0;
  outC->_L2 = outC->_L13 == outC->_L8;
  outC->trigger = outC->_L2;
  outC->rem_setRepeater = setRepeater;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_RepeatReq_MA_Request.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

