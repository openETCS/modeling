/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVEMRRLS_TM_conversions.h"

void CAST_Int_to_Q_NVEMRRLS_reset_TM_conversions(
  outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_NVEMRRLS */
void CAST_Int_to_Q_NVEMRRLS_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls_int */kcg_int q_nvemrrls_int,
  outC_CAST_Int_to_Q_NVEMRRLS_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */ Q_NVEMRRLS _2_q_nvemrrls;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */ Q_NVEMRRLS q_nvemrrls;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */ Q_NVEMRRLS _3_q_nvemrrls;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::q_nvemrrls */ Q_NVEMRRLS _5_q_nvemrrls;
  /* TM_conversions::CAST_Int_to_Q_NVEMRRLS::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_nvemrrls_int;
  outC->q_nvemrrls_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_nvemrrls_in ==
    INT_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
    _2_q_nvemrrls = outC->_L4_IfBlock1;
    outC->q_nvemrrls = _2_q_nvemrrls;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_nvemrrls_in ==
      INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 =
        ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions;
      _5_q_nvemrrls = outC->_L3_IfBlock1;
      error = error6;
      q_nvemrrls = _5_q_nvemrrls;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
      _3_q_nvemrrls = outC->_L1_IfBlock1;
      error = error4;
      q_nvemrrls = _3_q_nvemrrls;
    }
    outC->q_nvemrrls = q_nvemrrls;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_NVEMRRLS_TM_conversions.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

