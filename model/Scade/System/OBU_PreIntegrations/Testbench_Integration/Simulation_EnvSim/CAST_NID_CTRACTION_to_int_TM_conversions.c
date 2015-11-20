/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_CTRACTION_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_CTRACTION_to_int */
kcg_int CAST_NID_CTRACTION_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_CTRACTION_to_int::nid_ctraction */NID_CTRACTION nid_ctraction)
{
  /* TM_conversions::CAST_NID_CTRACTION_to_int::nid_ctraction_int */
  static kcg_int nid_ctraction_int;
  
  nid_ctraction_int = nid_ctraction;
  return nid_ctraction_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_CTRACTION_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

