/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_PRVLRBG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_PRVLRBG */
NID_PRVLRBG CAST_Int_to_NID_PRVLRBG_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_PRVLRBG::nid_prvlrbg_in */kcg_int nid_prvlrbg_in)
{
  /* TM_conversions::CAST_Int_to_NID_PRVLRBG::nid_prvlgb */
  static NID_PRVLRBG nid_prvlgb;
  
  nid_prvlgb = nid_prvlrbg_in;
  return nid_prvlgb;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_PRVLRBG_TM_conversions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

