/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVEMRRLS_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS */
Q_NVEMRRLS CAST_Int_to_Q_NVEMRRLS_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls_int */kcg_int q_nvemrrls_int)
{
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */ Q_NVEMRRLS q_nvemrrls;
  
  IfBlock1_clock = q_nvemrrls_int ==
    INT_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
  if (IfBlock1_clock) {
    q_nvemrrls = ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = q_nvemrrls_int ==
      INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions;
    if (else_clock_IfBlock1) {
      q_nvemrrls = ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions;
    }
    else {
      q_nvemrrls = ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
    }
  }
  return q_nvemrrls;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_NVEMRRLS_TM_conversions.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

