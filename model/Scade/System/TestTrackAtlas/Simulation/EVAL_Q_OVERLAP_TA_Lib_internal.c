/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_OVERLAP_TA_Lib_internal.h"

void EVAL_Q_OVERLAP_reset_TA_Lib_internal(
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::EVAL_Q_OVERLAP */
void EVAL_Q_OVERLAP_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_OVERLAP::q_overlap */Q_OVERLAP q_overlap,
  outC_EVAL_Q_OVERLAP_TA_Lib_internal *outC)
{
  outC->_L3 = ENUM_Q_OVERLAP_overlap_info_TM_conversions;
  outC->_L1 = q_overlap;
  outC->_L2 = outC->_L3 == outC->_L1;
  outC->q_dp_bool = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_Q_OVERLAP_TA_Lib_internal.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

