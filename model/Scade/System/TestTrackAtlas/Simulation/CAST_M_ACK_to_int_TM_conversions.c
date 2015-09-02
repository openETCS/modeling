/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ACK_to_int_TM_conversions.h"

void CAST_M_ACK_to_int_reset_TM_conversions(
  outC_CAST_M_ACK_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_M_ACK_to_int */
void CAST_M_ACK_to_int_TM_conversions(
  /* TM_conversions::CAST_M_ACK_to_int::m_ack */M_ACK m_ack,
  outC_CAST_M_ACK_to_int_TM_conversions *outC)
{
  /* TM_conversions::CAST_M_ACK_to_int::m_ack_int */ kcg_int _2_m_ack_int;
  /* TM_conversions::CAST_M_ACK_to_int::error */ kcg_bool error1;
  /* TM_conversions::CAST_M_ACK_to_int::m_ack_int */ kcg_int m_ack_int;
  /* TM_conversions::CAST_M_ACK_to_int::error */ kcg_bool error;
  /* TM_conversions::CAST_M_ACK_to_int::m_ack_int */ kcg_int _3_m_ack_int;
  /* TM_conversions::CAST_M_ACK_to_int::error */ kcg_bool error4;
  /* TM_conversions::CAST_M_ACK_to_int::m_ack_int */ kcg_int _5_m_ack_int;
  /* TM_conversions::CAST_M_ACK_to_int::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L4 = m_ack;
  outC->m_ack_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_ack_in ==
    ENUM_M_ACK_acknowledgement_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L8_IfBlock1 = INT_M_ACK_acknowledgement_TM_conversions;
    outC->_L7_IfBlock1 = kcg_false;
    error1 = outC->_L7_IfBlock1;
    _2_m_ack_int = outC->_L8_IfBlock1;
    outC->m_ack_int = _2_m_ack_int;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_ack_in ==
      ENUM_M_ACK_no_acknowledgement_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L71_IfBlock1 = INT_M_ACK_no_acknowledgement_TM_conversions;
      outC->_L6_IfBlock1 = kcg_false;
      error6 = outC->_L6_IfBlock1;
      _5_m_ack_int = outC->_L71_IfBlock1;
      error = error6;
      m_ack_int = _5_m_ack_int;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = INT_M_ACK_acknowledgement_TM_conversions;
      _3_m_ack_int = outC->_L1_IfBlock1;
      error = error4;
      m_ack_int = _3_m_ack_int;
    }
    outC->m_ack_int = m_ack_int;
    outC->error = error;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_M_ACK_to_int_TM_conversions.c
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

