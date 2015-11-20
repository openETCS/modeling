/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_T_LOA */
void EVAL_T_LOA_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_T_LOA::t_loa */ P015_OBU_T_TM *t_loa,
  /* TA_Lib_internal::EVAL_T_LOA::t_loa_unlimited */ kcg_bool *t_loa_unlimited,
  /* TA_Lib_internal::EVAL_T_LOA::t_loa_out */ T_internal_Type_Obu_BasicTypes_Pkg *t_loa_out)
{
  /* TA_Lib_internal::EVAL_T_LOA::_L1 */
  static P015_OBU_T_TM _L1;
  /* TA_Lib_internal::EVAL_T_LOA::_L3 */
  static kcg_int _L3;
  /* TA_Lib_internal::EVAL_T_LOA::_L4 */
  static kcg_bool _L4;
  /* TA_Lib_internal::EVAL_T_LOA::_L5 */
  static kcg_int _L5;
  /* TA_Lib_internal::EVAL_T_LOA::_L6 */
  static kcg_int _L6;
  /* TA_Lib_internal::EVAL_T_LOA::_L7 */
  static kcg_int _L7;
  /* TA_Lib_internal::EVAL_T_LOA::_L8 */
  static kcg_int _L8;
  /* TA_Lib_internal::EVAL_T_LOA::_L9 */
  static kcg_bool _L9;
  /* TA_Lib_internal::EVAL_T_LOA::_L10 */
  static kcg_int _L10;
  /* TA_Lib_internal::EVAL_T_LOA::_L11 */
  static T_LOA _L11;
  
  kcg_copy_P015_OBU_T_TM(&_L1, t_loa);
  _L10 = 1023;
  _L11 = _L1.t_loa;
  _L9 = _L10 == _L11;
  *t_loa_unlimited = _L9;
  _L5 = 1023;
  _L4 = _L11 < _L5;
  _L7 = 1000;
  _L8 = 0;
  /* 1 */ if (_L4) {
    _L6 = _L7;
  }
  else {
    _L6 = _L8;
  }
  _L3 = _L11 * _L6;
  *t_loa_out = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVAL_T_LOA_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

