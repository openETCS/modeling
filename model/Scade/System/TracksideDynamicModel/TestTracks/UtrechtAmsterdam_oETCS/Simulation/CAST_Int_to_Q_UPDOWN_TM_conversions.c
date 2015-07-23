/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_UPDOWN_TM_conversions.h"

void CAST_Int_to_Q_UPDOWN_reset_TM_conversions(
  outC_CAST_Int_to_Q_UPDOWN_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_UPDOWN */
void CAST_Int_to_Q_UPDOWN_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown_int */kcg_int q_updown_int,
  outC_CAST_Int_to_Q_UPDOWN_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN _2_q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */
  static kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */
  static kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN _3_q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */
  static kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN _5_q_updown;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::error */
  static kcg_bool error6;
  static kcg_bool noname;
  
  outC->_L12 = q_updown_int;
  outC->q_updown_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_updown_in ==
    INT_Q_UPDOWN_downlink_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_UPDOWN_downlink_TM_conversions;
    _2_q_updown = outC->_L4_IfBlock1;
    outC->q_updown = _2_q_updown;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_updown_in ==
      INT_Q_UPDOWN_uplink_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_UPDOWN_uplink_TM_conversions;
      _5_q_updown = outC->_L3_IfBlock1;
      error = error6;
      q_updown = _5_q_updown;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_UPDOWN_downlink_TM_conversions;
      _3_q_updown = outC->_L1_IfBlock1;
      error = error4;
      q_updown = _3_q_updown;
    }
    outC->q_updown = q_updown;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_UPDOWN_TM_conversions.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

