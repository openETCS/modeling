/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_ENGINE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_ENGINE */
NID_ENGINE CAST_Int_to_NID_ENGINE_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_ENGINE::nid_engine_int */kcg_int nid_engine_int)
{
  /* TM_conversions::CAST_Int_to_NID_ENGINE::nid_engine */
  static NID_ENGINE nid_engine;
  
  nid_engine = nid_engine_int;
  return nid_engine;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_ENGINE_TM_conversions.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

