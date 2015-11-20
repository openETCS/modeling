/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_ACK */
M_ACK CAST_Int_to_M_ACK_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack_int */ kcg_int m_ack_int)
{
  /* TM_conversions::CAST_Int_to_M_ACK::error */
  static kcg_bool error2;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */
  static M_ACK m_ack1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::then::_L8 */
  static M_ACK _L8_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */
  static M_ACK m_ack;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else::else::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else::else::_L1 */
  static M_ACK _L1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */
  static M_ACK m_ack3;
  /* TM_conversions::CAST_Int_to_M_ACK::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1::else::then::_L7 */
  static M_ACK _L77_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */
  static M_ACK m_ack5;
  /* TM_conversions::CAST_Int_to_M_ACK::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* TM_conversions::CAST_Int_to_M_ACK::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack_in */
  static kcg_int m_ack_in;
  /* TM_conversions::CAST_Int_to_M_ACK::error */
  static kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_ACK::_L5 */
  static kcg_bool _L5;
  /* TM_conversions::CAST_Int_to_M_ACK::_L4 */
  static kcg_int _L4;
  /* TM_conversions::CAST_Int_to_M_ACK::m_ack */
  static M_ACK m_ack9;
  
  _L4 = m_ack_int;
  m_ack_in = _L4;
  IfBlock1_clock = m_ack_in == INT_M_ACK_acknowledgement_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = kcg_false;
    error2 = _L7_IfBlock1;
    error8 = error2;
  }
  else {
    else_clock_IfBlock1 = m_ack_in ==
      INT_M_ACK_no_acknowledgement_TM_conversions;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L6_IfBlock1 = kcg_false;
      error6 = _L6_IfBlock1;
      error = error6;
    }
    else {
      _L2_IfBlock1 = kcg_true;
      error4 = _L2_IfBlock1;
      error = error4;
    }
    error8 = error;
  }
  _L5 = error8;
  noname = _L5;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L8_IfBlock1 = ENUM_M_ACK_acknowledgement_TM_conversions;
    m_ack1 = _L8_IfBlock1;
    m_ack9 = m_ack1;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L77_IfBlock1 = ENUM_M_ACK_no_acknowledgement_TM_conversions;
      m_ack5 = _L77_IfBlock1;
      m_ack = m_ack5;
    }
    else {
      _L1_IfBlock1 = ENUM_M_ACK_acknowledgement_TM_conversions;
      m_ack3 = _L1_IfBlock1;
      m_ack = m_ack3;
    }
    m_ack9 = m_ack;
  }
  return m_ack9;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_M_ACK_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

