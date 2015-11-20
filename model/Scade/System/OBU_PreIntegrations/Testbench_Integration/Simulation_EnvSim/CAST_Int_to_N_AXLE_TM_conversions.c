/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_N_AXLE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_N_AXLE */
N_AXLE CAST_Int_to_N_AXLE_TM_conversions(
  /* TM_conversions::CAST_Int_to_N_AXLE::n_axlle_in */kcg_int n_axlle_in)
{
  /* TM_conversions::CAST_Int_to_N_AXLE::n_axle */
  static N_AXLE n_axle;
  
  n_axle = n_axlle_in;
  return n_axle;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_N_AXLE_TM_conversions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

