/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_BG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_BG */
NID_BG CAST_Int_to_NID_BG_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_BG::nid_bg_int */kcg_int nid_bg_int)
{
  /* TM_conversions::CAST_Int_to_NID_BG::nid_bg */
  static NID_BG nid_bg;
  
  nid_bg = nid_bg_int;
  return nid_bg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_BG_TM_conversions.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

