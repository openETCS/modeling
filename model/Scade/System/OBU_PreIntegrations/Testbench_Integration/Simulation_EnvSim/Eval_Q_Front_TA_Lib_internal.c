/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_Front_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_Q_Front */
kcg_bool Eval_Q_Front_TA_Lib_internal(
  /* TA_Lib_internal::Eval_Q_Front::q_front */Q_FRONT q_front)
{
  /* TA_Lib_internal::Eval_Q_Front::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Eval_Q_Front::add_train_length */
  static kcg_bool add_train_length;
  
  IfBlock1_clock = q_front == ENUM_Q_FRONT_train_length_delay_TM_conversions;
  if (IfBlock1_clock) {
    add_train_length = kcg_true;
  }
  else {
    add_train_length = kcg_false;
  }
  return add_train_length;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_Q_Front_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

