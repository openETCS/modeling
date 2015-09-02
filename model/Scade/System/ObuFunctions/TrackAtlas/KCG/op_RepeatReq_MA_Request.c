/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_RepeatReq_MA_Request.h"

void op_RepeatReq_reset_MA_Request(outC_op_RepeatReq_MA_Request *outC)
{
  outC->init = kcg_true;
}

/* MA_Request::op_RepeatReq */
void op_RepeatReq_MA_Request(
  /* MA_Request::op_RepeatReq::tcycreq */T_CYCLOC tcycreq,
  /* MA_Request::op_RepeatReq::setRepeater */kcg_bool setRepeater,
  /* MA_Request::op_RepeatReq::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_MA_Request *outC)
{
  kcg_int tmp;
  
  if (setRepeater) {
    outC->_L6 = systemTime;
  }
  else if (outC->init) {
    outC->_L6 = 0;
  }
  tmp = /* 1 */ Safe_MOD_int(systemTime - outC->_L6, tcycreq);
  outC->trigger = tmp == 0;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_RepeatReq_MA_Request.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

