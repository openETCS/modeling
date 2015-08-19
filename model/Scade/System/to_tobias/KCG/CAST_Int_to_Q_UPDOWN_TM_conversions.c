/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_UPDOWN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_UPDOWN */
Q_UPDOWN CAST_Int_to_Q_UPDOWN_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown_int */kcg_int q_updown_int)
{
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_UPDOWN::q_updown */
  static Q_UPDOWN q_updown;
  
  IfBlock1_clock = q_updown_int == INT_Q_UPDOWN_downlink_TM_conversions;
  if (IfBlock1_clock) {
    q_updown = ENUM_Q_UPDOWN_downlink_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_updown_int == INT_Q_UPDOWN_uplink_TM_conversions;
    if (else_clock_IfBlock1) {
      q_updown = ENUM_Q_UPDOWN_uplink_TM_conversions;
    }
    else {
      q_updown = ENUM_Q_UPDOWN_downlink_TM_conversions;
    }
  }
  return q_updown;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_UPDOWN_TM_conversions.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

