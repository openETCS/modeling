/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_ACK */
M_ACK CAST_Int_to_M_ACK_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack_int */kcg_int m_ack_int)
{
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */
  static M_ACK m_ack;
  
  IfBlock1_clock = m_ack_int == INT_M_ACK_acknowledgement_TM_conversions;
  if (IfBlock1_clock) {
    m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = m_ack_int ==
      INT_M_ACK_no_acknowledgement_TM_conversions;
    if (else_clock_IfBlock1) {
      m_ack = ENUM_M_ACK_no_acknowledgement_TM_conversions;
    }
    else {
      m_ack = ENUM_M_ACK_acknowledgement_TM_conversions;
    }
  }
  return m_ack;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_ACK_TM_conversions.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

