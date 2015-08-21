/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP136\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:12:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY */
Q_NEWCOUNTRY CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry_int */kcg_int q_newcountry_int)
{
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry */ Q_NEWCOUNTRY q_newcountry;
  
  IfBlock1_clock = q_newcountry_int == INT_Q_NEWCOUNTRY_same_TM_conversions;
  if (IfBlock1_clock) {
    q_newcountry = ENUM_Q_NEWCOUNTRY_same_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_newcountry_int ==
      INT_Q_NEWCOUNTRY_not_same_TM_conversions;
    if (else_clock_IfBlock1) {
      q_newcountry = ENUM_Q_NEWCOUNTRY_not_same_TM_conversions;
    }
    else {
      q_newcountry = ENUM_Q_NEWCOUNTRY_not_same_TM_conversions;
    }
  }
  return q_newcountry;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.c
** Generation date: 2015-08-21T16:12:21
*************************************************************$ */

