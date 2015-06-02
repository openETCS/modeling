/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"

void CAST_Int_to_Q_LINKORIENTATION_reset_TM_conversions(
  outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION */
void CAST_Int_to_Q_LINKORIENTATION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::q_linkorientation_int */kcg_int q_linkorientation_int,
  outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::q_linkorientation */ Q_LINKORIENTATION _2_q_linkorientation;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::q_linkorientation */ Q_LINKORIENTATION q_linkorientation;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::q_linkorientation */ Q_LINKORIENTATION _3_q_linkorientation;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::q_linkorientation */ Q_LINKORIENTATION _5_q_linkorientation;
  /* TM_conversions::CAST_Int_to_Q_LINKORIENTATION::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_linkorientation_int;
  outC->q_linkorientation_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_linkorientation_in ==
    INT_Q_LINKORIENTATION_nominal_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_LINKORIENTATION_nominal_TM_conversions;
    _2_q_linkorientation = outC->_L4_IfBlock1;
    outC->q_linkorientation = _2_q_linkorientation;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_linkorientation_in ==
      INT_Q_LINKORIENTATION_reverse_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_LINKORIENTATION_reverse_TM_conversions;
      _5_q_linkorientation = outC->_L3_IfBlock1;
      error = error6;
      q_linkorientation = _5_q_linkorientation;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_LINKORIENTATION_reverse_TM_conversions;
      _3_q_linkorientation = outC->_L1_IfBlock1;
      error = error4;
      q_linkorientation = _3_q_linkorientation;
    }
    outC->q_linkorientation = q_linkorientation;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LINKORIENTATION_TM_conversions.c
** Generation date: 2015-06-02T15:02:42
*************************************************************$ */

