/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_DUP_TM_conversions.h"

void CAST_Int_to_M_DUP_reset_TM_conversions(
  outC_CAST_Int_to_M_DUP_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_M_DUP */
void CAST_Int_to_M_DUP_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_DUP::int_in */kcg_int int_in,
  outC_CAST_Int_to_M_DUP_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup2;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup9;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup7;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup3;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_DUP::m_dup */ M_DUP m_dup5;
  /* TM_conversions::CAST_Int_to_M_DUP::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L2 = int_in;
  outC->m_dup_in = outC->_L2;
  outC->IfBlock1_clock = outC->m_dup_in ==
    INT_M_DUP_duplicate_of_next_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L7_IfBlock1 = kcg_false;
    error1 = outC->_L7_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->m_dup_in ==
      INT_M_DUP_duplicate_of_previous_TM_conversions;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L62_IfBlock1 = kcg_false;
      error6 = outC->_L62_IfBlock1;
      error = error6;
    }
    else {
      outC->else_clock_IfBlock1 = outC->m_dup_in ==
        INT_M_DUP_no_duplicates_TM_conversions;
      if (outC->else_clock_IfBlock1) {
        outC->_L53_IfBlock1 = kcg_false;
        error10 = outC->_L53_IfBlock1;
        error4 = error10;
      }
      else {
        outC->_L2_IfBlock1 = kcg_true;
        error8 = outC->_L2_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L3 = outC->error;
  noname = outC->_L3;
  if (outC->IfBlock1_clock) {
    outC->_L6_IfBlock1 = ENUM_M_DUP_duplicate_of_next_TM_conversions;
    m_dup2 = outC->_L6_IfBlock1;
    outC->m_dup = m_dup2;
  }
  else {
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L5_IfBlock1 = ENUM_M_DUP_duplicate_of_previous_TM_conversions;
      m_dup5 = outC->_L5_IfBlock1;
      m_dup = m_dup5;
    }
    else {
      if (outC->else_clock_IfBlock1) {
        outC->_L4_IfBlock1 = ENUM_M_DUP_no_duplicates_TM_conversions;
        m_dup9 = outC->_L4_IfBlock1;
        m_dup3 = m_dup9;
      }
      else {
        outC->_L3_IfBlock1 = ENUM_M_DUP_duplicate_of_next_TM_conversions;
        m_dup7 = outC->_L3_IfBlock1;
        m_dup3 = m_dup7;
      }
      m_dup = m_dup3;
    }
    outC->m_dup = m_dup;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_DUP_TM_conversions.c
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

