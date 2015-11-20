/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_MAXTRAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_MAXTRAIN */
V_MAXTRAIN CAST_Int_to_V_MAXTRAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_MAXTRAIN::v_maxtrain_int */kcg_int v_maxtrain_int)
{
  /* TM_conversions::CAST_Int_to_V_MAXTRAIN::v_maxtrain */
  static V_MAXTRAIN v_maxtrain;
  
  v_maxtrain = v_maxtrain_int * 5;
  return v_maxtrain;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_MAXTRAIN_TM_conversions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

