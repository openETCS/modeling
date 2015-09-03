/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_SCALE_to_int_TM_conversions.h"

void CAST_Q_SCALE_to_int_reset_TM_conversions(
  outC_CAST_Q_SCALE_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Q_SCALE_to_int */
void CAST_Q_SCALE_to_int_TM_conversions(
  /* TM_conversions::CAST_Q_SCALE_to_int::q_scale_int */Q_SCALE q_scale_int,
  outC_CAST_Q_SCALE_to_int_TM_conversions *outC)
{
  /* TM_conversions::CAST_Q_SCALE_to_int::d */ kcg_int d2;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */ kcg_bool error1;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */ kcg_int d;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */ kcg_bool error;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */ kcg_bool error10;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */ kcg_int d9;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */ kcg_bool error8;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */ kcg_int d7;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */ kcg_int d3;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */ kcg_bool error4;
  /* TM_conversions::CAST_Q_SCALE_to_int::d */ kcg_int d5;
  /* TM_conversions::CAST_Q_SCALE_to_int::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L2 = q_scale_int;
  outC->q_scale_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_scale_in == ENUM_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = kcg_false;
    error1 = outC->_L3_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->q_scale_in ==
      ENUM_Q_SCALE_1m_TM_conversions;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L32_IfBlock1 = kcg_false;
      error6 = outC->_L32_IfBlock1;
      error = error6;
    }
    else {
      outC->else_clock_IfBlock1 = outC->q_scale_in ==
        ENUM_Q_SCALE_10m_TM_conversions;
      if (outC->else_clock_IfBlock1) {
        outC->_L4_IfBlock1 = kcg_false;
        error10 = outC->_L4_IfBlock1;
        error4 = error10;
      }
      else {
        outC->_L25_IfBlock1 = kcg_true;
        error8 = outC->_L25_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = INT_Q_SCALE_10cm_TM_conversions;
    d2 = outC->_L2_IfBlock1;
    outC->d = d2;
  }
  else {
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = INT_Q_SCALE_1m_TM_conversions;
      d5 = outC->_L1_IfBlock1;
      d = d5;
    }
    else {
      if (outC->else_clock_IfBlock1) {
        outC->_L13_IfBlock1 = INT_Q_SCALE_10m_TM_conversions;
        d9 = outC->_L13_IfBlock1;
        d3 = d9;
      }
      else {
        outC->_L14_IfBlock1 = INT_Q_SCALE_10cm_TM_conversions;
        d7 = outC->_L14_IfBlock1;
        d3 = d7;
      }
      d = d3;
    }
    outC->d = d;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Q_SCALE_to_int_TM_conversions.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

