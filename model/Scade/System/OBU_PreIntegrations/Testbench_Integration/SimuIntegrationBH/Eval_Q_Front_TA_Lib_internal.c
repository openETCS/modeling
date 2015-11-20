/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_Front_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_Q_Front */
kcg_bool Eval_Q_Front_TA_Lib_internal(
  /* TA_Lib_internal::Eval_Q_Front::q_front */ Q_FRONT q_front)
{
  /* TA_Lib_internal::Eval_Q_Front::add_train_length */
  static kcg_bool _1_add_train_length;
  /* TA_Lib_internal::Eval_Q_Front::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TA_Lib_internal::Eval_Q_Front::add_train_length */
  static kcg_bool add_train_length;
  /* TA_Lib_internal::Eval_Q_Front::IfBlock1::else::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* TA_Lib_internal::Eval_Q_Front::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Eval_Q_Front::q_front_in */
  static Q_FRONT q_front_in;
  /* TA_Lib_internal::Eval_Q_Front::_L1 */
  static Q_FRONT _L1;
  /* TA_Lib_internal::Eval_Q_Front::add_train_length */
  static kcg_bool _2_add_train_length;
  
  _L1 = q_front;
  q_front_in = _L1;
  IfBlock1_clock = q_front_in == ENUM_Q_FRONT_train_length_delay_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = kcg_true;
    _1_add_train_length = _L2_IfBlock1;
    _2_add_train_length = _1_add_train_length;
  }
  else {
    _L1_IfBlock1 = kcg_false;
    add_train_length = _L1_IfBlock1;
    _2_add_train_length = add_train_length;
  }
  return _2_add_train_length;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Eval_Q_Front_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

