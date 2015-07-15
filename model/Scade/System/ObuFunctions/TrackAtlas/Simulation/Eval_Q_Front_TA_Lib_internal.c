/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T18:20:55
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
  /* TA_Lib_internal::Eval_Q_Front::train_length_in */L_internal_Type_Obu_BasicTypes_Pkg train_length_in,
  outC_Eval_Q_Front_TA_Lib_internal *outC)
{
  /* TA_Lib_internal::Eval_Q_Front::added_train_length */ L_internal_Type_Obu_BasicTypes_Pkg _1_added_train_length;
  /* TA_Lib_internal::Eval_Q_Front::added_train_length */ L_internal_Type_Obu_BasicTypes_Pkg added_train_length;
  
  outC->_L1 = q_front;
  outC->q_front_in = outC->_L1;
  outC->IfBlock1_clock = outC->q_front_in ==
    ENUM_Q_FRONT_train_length_delay_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L1_IfBlock1 = train_length_in;
    _1_added_train_length = outC->_L1_IfBlock1;
    outC->added_train_length = _1_added_train_length;
  }
  else {
    outC->_L11_IfBlock1 = 0;
    added_train_length = outC->_L11_IfBlock1;
    outC->added_train_length = added_train_length;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_Q_Front_TA_Lib_internal.c
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */

