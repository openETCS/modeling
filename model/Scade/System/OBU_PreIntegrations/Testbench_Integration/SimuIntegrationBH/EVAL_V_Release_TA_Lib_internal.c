/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_V_Release_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_V_Release */
void EVAL_V_Release_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_V_Release::V_in */ kcg_int V_in,
  /* TA_Lib_internal::EVAL_V_Release::V_NV_in */ kcg_int V_NV_in,
  /* TA_Lib_internal::EVAL_V_Release::V_out */ V_internal_Type_Obu_BasicTypes_Pkg *V_out,
  /* TA_Lib_internal::EVAL_V_Release::calc_onboard */ kcg_bool *calc_onboard)
{
  /* TA_Lib_internal::EVAL_V_Release::_L1 */
  static kcg_int _L1;
  /* TA_Lib_internal::EVAL_V_Release::_L2 */
  static kcg_bool _L2;
  /* TA_Lib_internal::EVAL_V_Release::_L3 */
  static kcg_int _L3;
  /* TA_Lib_internal::EVAL_V_Release::_L4 */
  static kcg_int _L4;
  /* TA_Lib_internal::EVAL_V_Release::_L5 */
  static kcg_int _L5;
  /* TA_Lib_internal::EVAL_V_Release::_L6 */
  static kcg_int _L6;
  /* TA_Lib_internal::EVAL_V_Release::_L7 */
  static kcg_int _L7;
  /* TA_Lib_internal::EVAL_V_Release::_L9 */
  static kcg_bool _L9;
  /* TA_Lib_internal::EVAL_V_Release::_L8 */
  static kcg_int _L8;
  /* TA_Lib_internal::EVAL_V_Release::_L10 */
  static kcg_int _L10;
  /* TA_Lib_internal::EVAL_V_Release::_L11 */
  static kcg_int _L11;
  
  _L1 = V_in;
  _L5 = V_NV_in;
  _L7 = V_in;
  _L8 = 126 * 5;
  _L9 = _L7 == _L8;
  _L11 = 0;
  _L3 = 127 * 5;
  _L2 = _L1 == _L3;
  _L6 = V_in;
  /* 1 */ if (_L2) {
    _L4 = _L5;
  }
  else {
    _L4 = _L6;
  }
  /* 2 */ if (_L9) {
    _L10 = _L11;
  }
  else {
    _L10 = _L4;
  }
  *V_out = _L10;
  *calc_onboard = _L9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVAL_V_Release_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

