/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.h"

void CAST_Int_to_Q_NVDRIVER_ADHES_reset_TM_conversions(
  outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES */
void CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::q_nvdriver_adhes_int */kcg_int q_nvdriver_adhes_int,
  outC_CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::q_nvdriveradhes */ Q_NVDRIVER_ADHES _2_q_nvdriveradhes;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::q_nvdriveradhes */ Q_NVDRIVER_ADHES q_nvdriveradhes;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::q_nvdriveradhes */ Q_NVDRIVER_ADHES _3_q_nvdriveradhes;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::q_nvdriveradhes */ Q_NVDRIVER_ADHES _5_q_nvdriveradhes;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_nvdriver_adhes_int;
  outC->q_nvdriver_adhes_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_nvdriver_adhes_in ==
    INT_Q_NVDRIVER_ADHES_Allowed_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_NVDRIVER_ADHES_Allowed_TM_conversions;
    _2_q_nvdriveradhes = outC->_L4_IfBlock1;
    outC->q_nvdriveradhes = _2_q_nvdriveradhes;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_nvdriver_adhes_in ==
      INT_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions;
      _5_q_nvdriveradhes = outC->_L3_IfBlock1;
      error = error6;
      q_nvdriveradhes = _5_q_nvdriveradhes;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions;
      _3_q_nvdriveradhes = outC->_L1_IfBlock1;
      error = error4;
      q_nvdriveradhes = _3_q_nvdriveradhes;
    }
    outC->q_nvdriveradhes = q_nvdriveradhes;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

