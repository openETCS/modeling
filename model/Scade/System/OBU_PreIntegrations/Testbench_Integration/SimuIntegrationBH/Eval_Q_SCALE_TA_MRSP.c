/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* TA_MRSP::Eval_Q_SCALE */
L_internal_Type_Obu_BasicTypes_Pkg Eval_Q_SCALE_TA_MRSP(
  /* TA_MRSP::Eval_Q_SCALE::q_scale_in */ Q_SCALE q_scale_in,
  /* TA_MRSP::Eval_Q_SCALE::d_in */ kcg_int d_in)
{
  /* TA_MRSP::Eval_Q_SCALE::_L1 */
  static Q_SCALE _L1;
  /* TA_MRSP::Eval_Q_SCALE::_L2 */
  static kcg_int _L2;
  /* TA_MRSP::Eval_Q_SCALE::_L3 */
  static Q_SCALE _L3;
  /* TA_MRSP::Eval_Q_SCALE::_L4 */
  static Q_SCALE _L4;
  /* TA_MRSP::Eval_Q_SCALE::_L6 */
  static kcg_bool _L6;
  /* TA_MRSP::Eval_Q_SCALE::_L7 */
  static kcg_int _L7;
  /* TA_MRSP::Eval_Q_SCALE::_L8 */
  static kcg_int _L8;
  /* TA_MRSP::Eval_Q_SCALE::_L9 */
  static kcg_bool _L9;
  /* TA_MRSP::Eval_Q_SCALE::_L10 */
  static kcg_int _L10;
  /* TA_MRSP::Eval_Q_SCALE::_L11 */
  static kcg_int _L11;
  /* TA_MRSP::Eval_Q_SCALE::_L12 */
  static kcg_int _L12;
  /* TA_MRSP::Eval_Q_SCALE::_L14 */
  static kcg_int _L14;
  /* TA_MRSP::Eval_Q_SCALE::d_out */
  static L_internal_Type_Obu_BasicTypes_Pkg d_out;
  
  _L1 = q_scale_in;
  _L2 = d_in;
  _L3 = ENUM_Q_SCALE_10cm_QSCALE_TM;
  _L6 = _L1 == _L3;
  _L8 = 10;
  _L4 = ENUM_Q_SCALE_10m_QSCALE_TM;
  _L9 = _L1 == _L4;
  _L11 = 10 * 100;
  _L12 = 100;
  /* 2 */ if (_L9) {
    _L10 = _L11;
  }
  else {
    _L10 = _L12;
  }
  /* 1 */ if (_L6) {
    _L7 = _L8;
  }
  else {
    _L7 = _L10;
  }
  _L14 = _L7 * _L2;
  d_out = _L14;
  return d_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Eval_Q_SCALE_TA_MRSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

