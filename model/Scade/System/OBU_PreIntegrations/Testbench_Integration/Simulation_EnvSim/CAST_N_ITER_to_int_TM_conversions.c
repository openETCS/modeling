/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_N_ITER_to_int_TM_conversions.h"

/* TM_conversions::CAST_N_ITER_to_int */
kcg_int CAST_N_ITER_to_int_TM_conversions(
  /* TM_conversions::CAST_N_ITER_to_int::n_iter */N_ITER n_iter)
{
  /* TM_conversions::CAST_N_ITER_to_int::n_iter_int */
  static kcg_int n_iter_int;
  
  n_iter_int = n_iter;
  return n_iter_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_N_ITER_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

