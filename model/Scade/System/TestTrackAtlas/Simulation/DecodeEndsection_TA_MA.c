/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DecodeEndsection_TA_MA.h"

void DecodeEndsection_reset_TA_MA(outC_DecodeEndsection_TA_MA *outC)
{
  /* 1 */ Eval_Q_SCALE_reset_TA_MRSP(&outC->Context_1);
  /* 3 */ Eval_Q_SCALE_reset_TA_MRSP(&outC->Context_3);
}

/* TA_MA::DecodeEndsection */
void DecodeEndsection_TA_MA(
  /* TA_MA::DecodeEndsection::l_endsection */L_ENDSECTION l_endsection,
  /* TA_MA::DecodeEndsection::q_scale */Q_SCALE q_scale,
  /* TA_MA::DecodeEndsection::q_sectiontimer */Q_SECTIONTIMER q_sectiontimer,
  /* TA_MA::DecodeEndsection::t_sectiontimer */T_SECTIONTIMER t_sectiontimer,
  /* TA_MA::DecodeEndsection::d_sectiontimerstoploc */D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc,
  outC_DecodeEndsection_TA_MA *outC)
{
  outC->_L14 = 1000;
  outC->_L3 = t_sectiontimer;
  outC->_L13 = outC->_L14 * outC->_L3;
  outC->_L11 = Q_SECTIONTIMER_Section_Timer_information_to_follow;
  outC->_L2 = q_sectiontimer;
  outC->_L12 = outC->_L11 == outC->_L2;
  outC->_L8 = q_scale;
  outC->_L4 = d_sectiontimerstoploc;
  /* 3 */ Eval_Q_SCALE_TA_MRSP(outC->_L8, outC->_L4, &outC->Context_3);
  outC->_L10 = outC->Context_3.d_out;
  outC->_L1 = l_endsection;
  /* 1 */ Eval_Q_SCALE_TA_MRSP(outC->_L8, outC->_L1, &outC->Context_1);
  outC->_L7 = outC->Context_1.d_out;
  outC->_L6 = kcg_true;
  outC->_L5.valid = outC->_L6;
  outC->_L5.q_endsection = outC->_L6;
  outC->_L5.l_section = outC->_L7;
  outC->_L5.q_sectiontimer = outC->_L12;
  outC->_L5.t_sectiontimer = outC->_L13;
  outC->_L5.d_sectiontimerstoploc = outC->_L10;
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
    &outC->section,
    &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DecodeEndsection_TA_MA.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

