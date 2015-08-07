/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_OVERLAP_TM_conversions.h"

void CAST_Int_to_Q_OVERLAP_reset_TM_conversions(
  outC_CAST_Int_to_Q_OVERLAP_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_OVERLAP */
void CAST_Int_to_Q_OVERLAP_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::q_overlap_int */kcg_int q_overlap_int,
  outC_CAST_Int_to_Q_OVERLAP_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::q_overlap */ Q_OVERLAP _2_q_overlap;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::q_overlap */ Q_OVERLAP q_overlap;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::q_overlap */ Q_OVERLAP _3_q_overlap;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::q_overlap */ Q_OVERLAP _5_q_overlap;
  /* TM_conversions::CAST_Int_to_Q_OVERLAP::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_overlap_int;
  outC->q_overlap_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_overlap_in ==
    INT_Q_OVERLAP_overlap_info_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_OVERLAP_overlap_info_TM_conversions;
    _2_q_overlap = outC->_L4_IfBlock1;
    outC->q_overlap = _2_q_overlap;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_overlap_in ==
      INT_Q_OVERLAP_no_overlap_info_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_OVERLAP_no_overlap_info_TM_conversions;
      _5_q_overlap = outC->_L3_IfBlock1;
      error = error6;
      q_overlap = _5_q_overlap;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_OVERLAP_overlap_info_TM_conversions;
      _3_q_overlap = outC->_L1_IfBlock1;
      error = error4;
      q_overlap = _3_q_overlap;
    }
    outC->q_overlap = q_overlap;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_OVERLAP_TM_conversions.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

