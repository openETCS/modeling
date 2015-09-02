/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_NVCONTACT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_NVCONTACT */
M_NVCONTACT CAST_Int_to_M_NVCONTACT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::int_in */kcg_int int_in)
{
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */ M_NVCONTACT m_nvcontact;
  
  IfBlock1_clock = int_in == INT_M_NVCONTACT_Apply_service_brake_TM_conversions;
  if (IfBlock1_clock) {
    m_nvcontact = ENUM_M_NVCONTACT_No_Reaction_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = int_in ==
      INT_M_NVCONTACT_No_Reaction_TM_conversions;
    if (_1_else_clock_IfBlock1) {
      m_nvcontact = ENUM_M_NVCONTACT_Apply_service_brake_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = int_in == INT_M_NVCONTACT_Train_trip_TM_conversions;
      if (else_clock_IfBlock1) {
        m_nvcontact = ENUM_M_NVCONTACT_Train_trip_TM_conversions;
      }
      else {
        m_nvcontact = ENUM_M_NVCONTACT_Train_trip_TM_conversions;
      }
    }
  }
  return m_nvcontact;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_NVCONTACT_TM_conversions.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

