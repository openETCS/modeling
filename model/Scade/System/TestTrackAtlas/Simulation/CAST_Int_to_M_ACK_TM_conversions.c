/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"

void CAST_Int_to_M_ACK_reset_TM_conversions(
  outC_CAST_Int_to_M_ACK_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_M_ACK */
void CAST_Int_to_M_ACK_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack_int */kcg_int m_ack_int,
  outC_CAST_Int_to_M_ACK_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */ M_ACK m_ack2;
  /* TM_conversions::CAST_Int_to_M_ACK::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */ M_ACK m_ack;
  /* TM_conversions::CAST_Int_to_M_ACK::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */ M_ACK m_ack3;
  /* TM_conversions::CAST_Int_to_M_ACK::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */ M_ACK m_ack5;
  /* TM_conversions::CAST_Int_to_M_ACK::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L4 = m_ack_int;
  outC->m_ack_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_ack_in ==
    INT_M_ACK_acknowledgement_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L8_IfBlock1 = ENUM_M_ACK_acknowledgement_TM_conversions;
    outC->_L7_IfBlock1 = kcg_false;
    error1 = outC->_L7_IfBlock1;
    m_ack2 = outC->_L8_IfBlock1;
    outC->m_ack = m_ack2;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_ack_in ==
      INT_M_ACK_no_acknowledgement_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L71_IfBlock1 = ENUM_M_ACK_no_acknowledgement_TM_conversions;
      outC->_L6_IfBlock1 = kcg_false;
      error6 = outC->_L6_IfBlock1;
      m_ack5 = outC->_L71_IfBlock1;
      error = error6;
      m_ack = m_ack5;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_M_ACK_acknowledgement_TM_conversions;
      m_ack3 = outC->_L1_IfBlock1;
      error = error4;
      m_ack = m_ack3;
    }
    outC->m_ack = m_ack;
    outC->error = error;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_ACK_TM_conversions.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

