/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_LTRBG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_LTRBG */
NID_LTRBG CAST_Int_to_NID_LTRBG_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_LTRBG::nid_ltrbg_int */kcg_int nid_ltrbg_int)
{
  /* TM_conversions::CAST_Int_to_NID_LTRBG::nid_ltrbg */
  static NID_LTRBG nid_ltrbg;
  
  nid_ltrbg = nid_ltrbg_int;
  return nid_ltrbg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_LTRBG_TM_conversions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

