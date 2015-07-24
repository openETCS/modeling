/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_MEDIA_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_MEDIA */
Q_MEDIA CAST_Int_to_Q_MEDIA_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_MEDIA::q_media_int */kcg_int q_media_int)
{
  /* TM_conversions::CAST_Int_to_Q_MEDIA::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::q_media */
  static Q_MEDIA q_media;
  
  IfBlock1_clock = q_media_int == INT_Q_MEDIA_Balise_TM_conversions;
  if (IfBlock1_clock) {
    q_media = ENUM_Q_MEDIA_Balise_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_media_int == INT_Q_MEDIA_Loop_TM_conversions;
    if (else_clock_IfBlock1) {
      q_media = ENUM_Q_MEDIA_Loop_TM_conversions;
    }
    else {
      q_media = ENUM_Q_MEDIA_Balise_TM_conversions;
    }
  }
  return q_media;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_MEDIA_TM_conversions.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

