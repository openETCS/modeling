/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_RepeatReq_TA_MA_Request.h"

void op_RepeatReq_reset_TA_MA_Request(outC_op_RepeatReq_TA_MA_Request *outC)
{
  outC->init = kcg_true;
}

/* TA_MA_Request::op_RepeatReq */
void op_RepeatReq_TA_MA_Request(
  /* TA_MA_Request::op_RepeatReq::tcycreq */T_CYCLOC tcycreq,
  /* TA_MA_Request::op_RepeatReq::setRepeater */kcg_bool setRepeater,
  /* TA_MA_Request::op_RepeatReq::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_TA_MA_Request *outC)
{
  /* TA_MA_Request::op_RepeatReq::_L21 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L21;
  
  outC->exception = kcg_false;
  if (outC->init) {
    outC->init = kcg_false;
    _L21 = 0;
  }
  else {
    _L21 = outC->lastSystemTime;
  }
  outC->trigger = systemTime - _L21 >= cCycleTime_TA_MA_Request * tcycreq;
  if (outC->trigger | setRepeater) {
    outC->lastSystemTime = systemTime;
  }
  else {
    outC->lastSystemTime = _L21;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** op_RepeatReq_TA_MA_Request.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

