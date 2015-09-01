/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_CAST_Int_to_Q_SECTIONTIMER_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_SECTIONTIMER */
UAB_Q_SECTIONTIMER UAB_CAST_Int_to_Q_SECTIONTIMER_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer_int */kcg_int q_sectiontimer_int)
{
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_SECTIONTIMER::q_sectiontimer */
  static UAB_Q_SECTIONTIMER q_sectiontimer;
  
  IfBlock1_clock = q_sectiontimer_int ==
    UAB_INT_Q_SECTIONTIMER_sectiontimer_TM_conversions;
  if (IfBlock1_clock) {
    q_sectiontimer = UAB_ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_sectiontimer_int ==
      UAB_INT_Q_SECTIONTIMER_no_sectiontimer_TM_conversions;
    if (else_clock_IfBlock1) {
      q_sectiontimer = UAB_ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions;
    }
    else {
      q_sectiontimer = UAB_ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions;
    }
  }
  return q_sectiontimer;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_CAST_Int_to_Q_SECTIONTIMER_TM_conversions.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

