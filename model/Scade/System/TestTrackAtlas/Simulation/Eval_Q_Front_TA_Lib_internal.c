/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_Front_TA_Lib_internal.h"

void Eval_Q_Front_reset_TA_Lib_internal(outC_Eval_Q_Front_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::Eval_Q_Front */
void Eval_Q_Front_TA_Lib_internal(
  /* TA_Lib_internal::Eval_Q_Front::q_front */Q_FRONT q_front,
  outC_Eval_Q_Front_TA_Lib_internal *outC)
{
  /* TA_Lib_internal::Eval_Q_Front::add_train_length */ kcg_bool _1_add_train_length;
  /* TA_Lib_internal::Eval_Q_Front::add_train_length */ kcg_bool add_train_length;
  
  outC->_L1 = q_front;
  outC->q_front_in = outC->_L1;
  outC->IfBlock1_clock = outC->q_front_in ==
    ENUM_Q_FRONT_train_length_delay_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = kcg_true;
    _1_add_train_length = outC->_L2_IfBlock1;
    outC->add_train_length = _1_add_train_length;
  }
  else {
    outC->_L1_IfBlock1 = kcg_false;
    add_train_length = outC->_L1_IfBlock1;
    outC->add_train_length = add_train_length;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_Q_Front_TA_Lib_internal.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

