/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM */
Q_NVSBTSMPERM CAST_Int_to_Q_NVSBTSMPERM_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM::q_nvsbtsmperm_int */kcg_int q_nvsbtsmperm_int)
{
  /* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM::q_nvsbtsmperm */ Q_NVSBTSMPERM q_nvsbtsmperm;
  
  IfBlock1_clock = q_nvsbtsmperm_int == INT_Q_NVSBTSMPERM_Yes_TM_conversions;
  if (IfBlock1_clock) {
    q_nvsbtsmperm = ENUM_Q_NVSBTSMPERM_Yes_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_nvsbtsmperm_int ==
      INT_Q_NVSBTSMPERM_No_TM_conversions;
    if (else_clock_IfBlock1) {
      q_nvsbtsmperm = ENUM_Q_NVSBTSMPERM_No_TM_conversions;
    }
    else {
      q_nvsbtsmperm = ENUM_Q_NVSBTSMPERM_No_TM_conversions;
    }
  }
  return q_nvsbtsmperm;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

