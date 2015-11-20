/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_LOA_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_LOA */
V_LOA CAST_Int_to_V_LOA_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_LOA::v_loa_int */kcg_int v_loa_int)
{
  /* TM_conversions::CAST_Int_to_V_LOA::v_loa */
  static V_LOA v_loa;
  
  v_loa = v_loa_int * 5;
  return v_loa;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_LOA_TM_conversions.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

