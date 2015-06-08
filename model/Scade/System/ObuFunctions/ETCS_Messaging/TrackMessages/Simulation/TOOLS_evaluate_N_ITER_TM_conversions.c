/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_evaluate_N_ITER_TM_conversions.h"

void TOOLS_evaluate_N_ITER_reset_TM_conversions(
  outC_TOOLS_evaluate_N_ITER_TM_conversions *outC)
{
}

/* TM_conversions::TOOLS_evaluate_N_ITER */
void TOOLS_evaluate_N_ITER_TM_conversions(
  /* TM_conversions::TOOLS_evaluate_N_ITER::valid_metadata */kcg_bool valid_metadata,
  /* TM_conversions::TOOLS_evaluate_N_ITER::n_section */kcg_int n_section,
  /* TM_conversions::TOOLS_evaluate_N_ITER::N_ITER */kcg_int N_ITER,
  outC_TOOLS_evaluate_N_ITER_TM_conversions *outC)
{
  outC->_L1 = N_ITER;
  outC->_L2 = n_section;
  outC->_L3 = outC->_L1 <= outC->_L2;
  outC->_L4 = valid_metadata;
  outC->_L5 = outC->_L3 & outC->_L4;
  outC->valid = outC->_L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TOOLS_evaluate_N_ITER_TM_conversions.c
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

