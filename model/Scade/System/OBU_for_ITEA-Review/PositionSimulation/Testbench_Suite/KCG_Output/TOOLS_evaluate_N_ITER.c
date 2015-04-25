/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_evaluate_N_ITER.h"

/* TOOLS_evaluate_N_ITER */
kcg_bool TOOLS_evaluate_N_ITER(
  /* TOOLS_evaluate_N_ITER::valid_metadata */ kcg_bool valid_metadata,
  /* TOOLS_evaluate_N_ITER::n_section */ kcg_int n_section,
  /* TOOLS_evaluate_N_ITER::N_ITER */ kcg_int _1_N_ITER)
{
  /* TOOLS_evaluate_N_ITER::valid */ kcg_bool valid;
  
  valid = (_1_N_ITER <= n_section) & valid_metadata;
  return valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TOOLS_evaluate_N_ITER.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

