/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_to_Real_Utilities.h"

/* Utilities::Int_to_Real */
kcg_real Int_to_Real_Utilities(
  /* Utilities::Int_to_Real::int_in */kcg_int int_in,
  /* Utilities::Int_to_Real::resolution_factor_in */kcg_real resolution_factor_in,
  /* Utilities::Int_to_Real::unit_factor_in */kcg_real unit_factor_in,
  /* Utilities::Int_to_Real::max_value */kcg_int max_value,
  /* Utilities::Int_to_Real::min_value */kcg_int min_value)
{
  /* Utilities::Int_to_Real::real_out */ kcg_real real_out;
  
  real_out = (kcg_real) int_in * unit_factor_in * resolution_factor_in;
  return real_out;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Int_to_Real_Utilities.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

