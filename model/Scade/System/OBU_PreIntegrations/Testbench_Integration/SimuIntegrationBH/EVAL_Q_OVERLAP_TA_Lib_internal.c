/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_OVERLAP_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_Q_OVERLAP */
kcg_bool EVAL_Q_OVERLAP_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_OVERLAP::q_overlap */ Q_OVERLAP q_overlap)
{
  /* TA_Lib_internal::EVAL_Q_OVERLAP::_L1 */
  static Q_OVERLAP _L1;
  /* TA_Lib_internal::EVAL_Q_OVERLAP::_L2 */
  static kcg_bool _L2;
  /* TA_Lib_internal::EVAL_Q_OVERLAP::_L3 */
  static Q_OVERLAP _L3;
  /* TA_Lib_internal::EVAL_Q_OVERLAP::q_dp_bool */
  static kcg_bool q_dp_bool;
  
  _L1 = q_overlap;
  _L3 = ENUM_Q_OVERLAP_overlap_info_TM_conversions;
  _L2 = _L3 == _L1;
  q_dp_bool = _L2;
  return q_dp_bool;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVAL_Q_OVERLAP_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

