/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_NVCONTACT_TM_conversions.h"

void CAST_Int_to_M_NVCONTACT_reset_TM_conversions(
  outC_CAST_Int_to_M_NVCONTACT_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_M_NVCONTACT */
void CAST_Int_to_M_NVCONTACT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::int_in */kcg_int int_in,
  outC_CAST_Int_to_M_NVCONTACT_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */ M_NVCONTACT _2_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */ M_NVCONTACT m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */ M_NVCONTACT _9_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */ M_NVCONTACT _7_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */ M_NVCONTACT _3_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::m_nvcontact */ M_NVCONTACT _5_m_nvcontact;
  /* TM_conversions::CAST_Int_to_M_NVCONTACT::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L2 = int_in;
  outC->m_nvcontact_in = outC->_L2;
  outC->IfBlock1_clock = outC->m_nvcontact_in ==
    INT_M_NVCONTACT_Apply_service_brake_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->m_nvcontact_in ==
      INT_M_NVCONTACT_No_Reaction_TM_conversions;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L42_IfBlock1 = kcg_false;
      error6 = outC->_L42_IfBlock1;
      error = error6;
    }
    else {
      outC->else_clock_IfBlock1 = outC->m_nvcontact_in ==
        INT_M_NVCONTACT_Train_trip_TM_conversions;
      if (outC->else_clock_IfBlock1) {
        outC->_L33_IfBlock1 = kcg_false;
        error10 = outC->_L33_IfBlock1;
        error4 = error10;
      }
      else {
        outC->_L34_IfBlock1 = kcg_true;
        error8 = outC->_L34_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L3 = outC->error;
  noname = outC->_L3;
  if (outC->IfBlock1_clock) {
    outC->_L4_IfBlock1 = ENUM_M_NVCONTACT_No_Reaction_TM_conversions;
    _2_m_nvcontact = outC->_L4_IfBlock1;
    outC->m_nvcontact = _2_m_nvcontact;
  }
  else {
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L3_IfBlock1 = ENUM_M_NVCONTACT_Apply_service_brake_TM_conversions;
      _5_m_nvcontact = outC->_L3_IfBlock1;
      m_nvcontact = _5_m_nvcontact;
    }
    else {
      if (outC->else_clock_IfBlock1) {
        outC->_L2_IfBlock1 = ENUM_M_NVCONTACT_Train_trip_TM_conversions;
        _9_m_nvcontact = outC->_L2_IfBlock1;
        _3_m_nvcontact = _9_m_nvcontact;
      }
      else {
        outC->_L25_IfBlock1 = ENUM_M_NVCONTACT_Train_trip_TM_conversions;
        _7_m_nvcontact = outC->_L25_IfBlock1;
        _3_m_nvcontact = _7_m_nvcontact;
      }
      m_nvcontact = _3_m_nvcontact;
    }
    outC->m_nvcontact = m_nvcontact;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_NVCONTACT_TM_conversions.c
** Generation date: 2015-07-02T23:19:43
*************************************************************$ */

