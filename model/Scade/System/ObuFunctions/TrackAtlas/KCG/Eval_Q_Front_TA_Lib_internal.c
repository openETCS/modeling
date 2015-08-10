/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_Front_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_Q_Front */
L_internal_Type_Obu_BasicTypes_Pkg Eval_Q_Front_TA_Lib_internal(
  /* TA_Lib_internal::Eval_Q_Front::q_front */Q_FRONT q_front,
  /* TA_Lib_internal::Eval_Q_Front::train_length_in */L_internal_Type_Obu_BasicTypes_Pkg train_length_in)
{
  /* TA_Lib_internal::Eval_Q_Front::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TA_Lib_internal::Eval_Q_Front::added_train_length */ L_internal_Type_Obu_BasicTypes_Pkg added_train_length;
  
  IfBlock1_clock = q_front == ENUM_Q_FRONT_train_length_delay_TM_conversions;
  if (IfBlock1_clock) {
    added_train_length = train_length_in;
  }
  else {
    added_train_length = 0;
  }
  return added_train_length;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Eval_Q_Front_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

