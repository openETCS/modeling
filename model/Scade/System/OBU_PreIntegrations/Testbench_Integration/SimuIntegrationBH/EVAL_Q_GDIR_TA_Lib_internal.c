/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_GDIR_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_Q_GDIR */
G_internal_Type_Obu_BasicTypes_Pkg EVAL_Q_GDIR_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_GDIR::q_gdir */ Q_GDIR q_gdir,
  /* TA_Lib_internal::EVAL_Q_GDIR::g_a */ G_A g_a)
{
  /* TA_Lib_internal::EVAL_Q_GDIR::_L1 */
  static Q_GDIR _L1;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L2 */
  static G_A _L2;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L3 */
  static Q_GDIR _L3;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L4 */
  static kcg_bool _L4;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L5 */
  static kcg_int _L5;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L6 */
  static kcg_int _L6;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L7 */
  static kcg_int _L7;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L8 */
  static kcg_int _L8;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L10 */
  static kcg_bool _L10;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L11 */
  static kcg_int _L11;
  /* TA_Lib_internal::EVAL_Q_GDIR::_L13 */
  static kcg_int _L13;
  /* TA_Lib_internal::EVAL_Q_GDIR::gradient */
  static G_internal_Type_Obu_BasicTypes_Pkg gradient;
  
  _L1 = q_gdir;
  _L2 = g_a;
  _L11 = 255;
  _L10 = _L2 == _L11;
  _L3 = ENUM_Q_GDIR_uphill_TM_conversions;
  _L4 = _L3 == _L1;
  _L5 = 1;
  _L6 = - 1;
  /* 1 */ if (_L4) {
    _L7 = _L5;
  }
  else {
    _L7 = _L6;
  }
  _L8 = _L7 * _L2;
  /* 2 */ if (_L10) {
    _L13 = _L11;
  }
  else {
    _L13 = _L8;
  }
  gradient = _L13;
  return gradient;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVAL_Q_GDIR_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

