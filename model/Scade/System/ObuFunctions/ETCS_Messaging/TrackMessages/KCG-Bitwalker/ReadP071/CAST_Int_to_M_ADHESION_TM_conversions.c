/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP071\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:11:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ADHESION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_ADHESION */
M_ADHESION CAST_Int_to_M_ADHESION_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion_int */kcg_int m_adhesion_int)
{
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_ADHESION::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_ADHESION::m_adhesion */ M_ADHESION m_adhesion;
  
  IfBlock1_clock = m_adhesion_int ==
    INT_M_ADHESION_slippery_rail_TM_conversions;
  if (IfBlock1_clock) {
    m_adhesion = ENUM_M_ADHESION_slippery_rail_TM_conversions;
  }
  else {
    else_clock_IfBlock1 = m_adhesion_int ==
      INT_M_ADHESION_no_slippery_rail_TM_conversions;
    if (else_clock_IfBlock1) {
      m_adhesion = ENUM_M_ADHESION_no_slippery_rail_TM_conversions;
    }
    else {
      m_adhesion = ENUM_M_ADHESION_slippery_rail_TM_conversions;
    }
  }
  return m_adhesion;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_ADHESION_TM_conversions.c
** Generation date: 2015-08-21T16:11:55
*************************************************************$ */

