/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

/* TM_conversions::DECODE_NID_LRBG */
void DECODE_NID_LRBG_TM_conversions(
  /* TM_conversions::DECODE_NID_LRBG::nid_lrbg */NID_LRBG nid_lrbg,
  /* TM_conversions::DECODE_NID_LRBG::nid_c */NID_C *nid_c,
  /* TM_conversions::DECODE_NID_LRBG::nid_bg */NID_BG *nid_bg)
{
  *nid_bg = /* 1 */ CAST_Int_to_NID_BG_TM_conversions(nid_lrbg % 100000);
  *nid_c = /* 1 */ CAST_Int_to_NID_C_TM_conversions(nid_lrbg / 100000);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DECODE_NID_LRBG_TM_conversions.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

