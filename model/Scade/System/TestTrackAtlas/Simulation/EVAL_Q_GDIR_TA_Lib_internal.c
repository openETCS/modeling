/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_Q_GDIR_TA_Lib_internal.h"

void EVAL_Q_GDIR_reset_TA_Lib_internal(outC_EVAL_Q_GDIR_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::EVAL_Q_GDIR */
void EVAL_Q_GDIR_TA_Lib_internal(
  /* TA_Lib_internal::EVAL_Q_GDIR::q_gdir */Q_GDIR q_gdir,
  /* TA_Lib_internal::EVAL_Q_GDIR::g_a */G_A g_a,
  outC_EVAL_Q_GDIR_TA_Lib_internal *outC)
{
  outC->_L3 = ENUM_Q_GDIR_uphill_TM_conversions;
  outC->_L1 = q_gdir;
  outC->_L4 = outC->_L3 == outC->_L1;
  outC->_L5 = 1;
  outC->_L6 = - 1;
  if (outC->_L4) {
    outC->_L7 = outC->_L5;
  }
  else {
    outC->_L7 = outC->_L6;
  }
  outC->_L2 = g_a;
  outC->_L8 = outC->_L7 * outC->_L2;
  outC->gradient = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVAL_Q_GDIR_TA_Lib_internal.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

