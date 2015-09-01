/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_CAST_Int_to_Q_ENDTIMER_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_ENDTIMER */
UAB_Q_ENDTIMER UAB_CAST_Int_to_Q_ENDTIMER_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_ENDTIMER::q_endtimer_int */kcg_int q_endtimer_int)
{
  /* TM_conversions::CAST_Int_to_Q_ENDTIMER::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_ENDTIMER::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_ENDTIMER::q_endtimer */
  static UAB_Q_ENDTIMER q_endtimer;
  
  IfBlock1_clock = q_endtimer_int ==
    UAB_INT_Q_ENDTIMER_no_endsection_timer_info_TM_conversions;
  if (IfBlock1_clock) {
    q_endtimer = UAB_ENUM_Q_ENDTIMER_no_endsection_timer_info_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_endtimer_int ==
      UAB_INT_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions;
    if (else_clock_IfBlock1) {
      q_endtimer =
        UAB_ENUM_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions;
    }
    else {
      q_endtimer =
        UAB_ENUM_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions;
    }
  }
  return q_endtimer;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_CAST_Int_to_Q_ENDTIMER_TM_conversions.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

