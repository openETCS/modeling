/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_FRONT_TM_conversions.h"

void CAST_Int_to_Q_FRONT_reset_TM_conversions(
  outC_CAST_Int_to_Q_FRONT_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_FRONT */
void CAST_Int_to_Q_FRONT_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front_int */kcg_int q_front_int,
  outC_CAST_Int_to_Q_FRONT_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */ Q_FRONT _2_q_front;
  /* TM_conversions::CAST_Int_to_Q_FRONT::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */ Q_FRONT q_front;
  /* TM_conversions::CAST_Int_to_Q_FRONT::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */ Q_FRONT _3_q_front;
  /* TM_conversions::CAST_Int_to_Q_FRONT::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_FRONT::q_front */ Q_FRONT _5_q_front;
  /* TM_conversions::CAST_Int_to_Q_FRONT::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_front_int;
  outC->q_front_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_front_in ==
    INT_Q_FRONT_train_length_delay_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_FRONT_train_length_delay_TM_conversions;
    _2_q_front = outC->_L4_IfBlock1;
    outC->q_front = _2_q_front;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_front_in ==
      INT_Q_FRONT_no_train_length_delay_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_FRONT_no_train_length_delay_TM_conversions;
      _5_q_front = outC->_L3_IfBlock1;
      error = error6;
      q_front = _5_q_front;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_FRONT_train_length_delay_TM_conversions;
      _3_q_front = outC->_L1_IfBlock1;
      error = error4;
      q_front = _3_q_front;
    }
    outC->q_front = q_front;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_FRONT_TM_conversions.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

