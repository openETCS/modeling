/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_NVDERUN_TM_conversions.h"

void CAST_Int_to_M_NVDERUN_reset_TM_conversions(
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_M_NVDERUN */
void CAST_Int_to_M_NVDERUN_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun_int */kcg_int m_nvderun_int,
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */ M_NVDERUN _2_m_nvderun;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */ M_NVDERUN m_nvderun;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */ M_NVDERUN _3_m_nvderun;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::m_nvderun */ M_NVDERUN _5_m_nvderun;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L21 = m_nvderun_int;
  outC->m_nvderun_in = outC->_L21;
  outC->IfBlock1_clock = outC->m_nvderun_in == INT_M_NVDERUN_no_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L8_IfBlock1 = ENUM_M_NVDERUN_no_TM_conversions;
    outC->_L7_IfBlock1 = kcg_false;
    error1 = outC->_L7_IfBlock1;
    _2_m_nvderun = outC->_L8_IfBlock1;
    outC->m_nvderun = _2_m_nvderun;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_nvderun_in ==
      INT_M_NVDERUN_yes_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L71_IfBlock1 = ENUM_M_NVDERUN_yes_TM_conversions;
      outC->_L6_IfBlock1 = kcg_false;
      error6 = outC->_L6_IfBlock1;
      _5_m_nvderun = outC->_L71_IfBlock1;
      error = error6;
      m_nvderun = _5_m_nvderun;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_M_NVDERUN_yes_TM_conversions;
      _3_m_nvderun = outC->_L1_IfBlock1;
      error = error4;
      m_nvderun = _3_m_nvderun;
    }
    outC->m_nvderun = m_nvderun;
    outC->error = error;
  }
  outC->_L20 = outC->error;
  noname = outC->_L20;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_NVDERUN_TM_conversions.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

