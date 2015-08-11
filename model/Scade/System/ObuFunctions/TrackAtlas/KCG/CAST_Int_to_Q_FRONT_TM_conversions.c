/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_FRONT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_FRONT */
Q_FRONT CAST_Int_to_Q_FRONT_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front_int */kcg_int q_front_int)
{
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */ Q_FRONT q_front;
  
  IfBlock1_clock = q_front_int == INT_Q_FRONT_train_length_delay_TM_conversions;
  if (IfBlock1_clock) {
    q_front = ENUM_Q_FRONT_train_length_delay_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_front_int ==
      INT_Q_FRONT_no_train_length_delay_TM_conversions;
    if (else_clock_IfBlock1) {
      q_front = ENUM_Q_FRONT_no_train_length_delay_TM_conversions;
    }
    else {
      q_front = ENUM_Q_FRONT_train_length_delay_TM_conversions;
    }
  }
  return q_front;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_FRONT_TM_conversions.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

