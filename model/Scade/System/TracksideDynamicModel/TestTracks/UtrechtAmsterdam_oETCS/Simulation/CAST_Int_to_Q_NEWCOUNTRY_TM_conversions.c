/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h"

void CAST_Int_to_Q_NEWCOUNTRY_reset_TM_conversions(
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY */
void CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry_int */kcg_int q_newcountry_int,
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry */ Q_NEWCOUNTRY _2_q_newcountry;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry */ Q_NEWCOUNTRY q_newcountry;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry */ Q_NEWCOUNTRY _3_q_newcountry;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::q_newcountry */ Q_NEWCOUNTRY _5_q_newcountry;
  /* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_newcountry_int;
  outC->q_newcountry_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_newcountry_in ==
    INT_Q_NEWCOUNTRY_same_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_NEWCOUNTRY_same_TM_conversions;
    _2_q_newcountry = outC->_L4_IfBlock1;
    outC->q_newcountry = _2_q_newcountry;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_newcountry_in ==
      INT_Q_NEWCOUNTRY_not_same_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_NEWCOUNTRY_not_same_TM_conversions;
      _5_q_newcountry = outC->_L3_IfBlock1;
      error = error6;
      q_newcountry = _5_q_newcountry;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_NEWCOUNTRY_not_same_TM_conversions;
      _3_q_newcountry = outC->_L1_IfBlock1;
      error = error4;
      q_newcountry = _3_q_newcountry;
    }
    outC->q_newcountry = q_newcountry;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.c
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

