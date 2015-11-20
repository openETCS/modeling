/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_RepeatReq_TA_MA_Request.h"

#ifndef KCG_USER_DEFINED_INIT
void op_RepeatReq_init_TA_MA_Request(outC_op_RepeatReq_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  outC->rem_setRepeater = kcg_true;
  outC->lastSystemTime = 0;
  outC->exception = kcg_true;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_RepeatReq_reset_TA_MA_Request(outC_op_RepeatReq_TA_MA_Request *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA_Request::op_RepeatReq */
void op_RepeatReq_TA_MA_Request(
  /* TA_MA_Request::op_RepeatReq::tcycreq */ T_CYCLOC tcycreq,
  /* TA_MA_Request::op_RepeatReq::setRepeater */ kcg_bool setRepeater,
  /* TA_MA_Request::op_RepeatReq::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_TA_MA_Request *outC)
{
  /* TA_MA_Request::op_RepeatReq::lastSystemTime */
  static T_internal_Type_Obu_BasicTypes_Pkg last_lastSystemTime;
  /* TA_MA_Request::op_RepeatReq::setRepeater */
  static kcg_bool last_setRepeater;
  /* TA_MA_Request::op_RepeatReq::_L9 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* TA_MA_Request::op_RepeatReq::_L7 */
  static kcg_bool _L7;
  /* TA_MA_Request::op_RepeatReq::_L5 */
  static kcg_int _L5;
  /* TA_MA_Request::op_RepeatReq::_L17 */
  static kcg_bool _L17;
  /* TA_MA_Request::op_RepeatReq::_L18 */
  static kcg_bool _L18;
  /* TA_MA_Request::op_RepeatReq::_L19 */
  static kcg_bool _L19;
  /* TA_MA_Request::op_RepeatReq::_L20 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L20;
  /* TA_MA_Request::op_RepeatReq::_L21 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L21;
  /* TA_MA_Request::op_RepeatReq::_L22 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L22;
  /* TA_MA_Request::op_RepeatReq::_L16 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* TA_MA_Request::op_RepeatReq::_L27 */
  static kcg_int _L27;
  /* TA_MA_Request::op_RepeatReq::_L28 */
  static T_CYCLOC _L28;
  /* TA_MA_Request::op_RepeatReq::_L29 */
  static kcg_int _L29;
  
  _L9 = systemTime;
  /* last_init_ck_lastSystemTime */ if (outC->init) {
    last_lastSystemTime = 0;
  }
  else {
    last_lastSystemTime = outC->lastSystemTime;
  }
  _L16 = last_lastSystemTime;
  _L5 = _L9 - _L16;
  _L27 = cCycleTime_TA_MA_Request;
  _L28 = tcycreq;
  _L29 = _L27 * _L28;
  _L17 = _L5 >= _L29;
  outC->trigger = _L17;
  _L7 = setRepeater;
  _L18 = kcg_false;
  outC->exception = _L18;
  _L19 = _L17 | _L7;
  _L22 = systemTime;
  _L21 = last_lastSystemTime;
  /* 1 */ if (_L19) {
    _L20 = _L22;
  }
  else {
    _L20 = _L21;
  }
  outC->lastSystemTime = _L20;
  /* last_init_ck_setRepeater */ if (outC->init) {
    last_setRepeater = kcg_false;
  }
  else {
    last_setRepeater = outC->rem_setRepeater;
  }
  outC->rem_setRepeater = setRepeater;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_RepeatReq_TA_MA_Request.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

