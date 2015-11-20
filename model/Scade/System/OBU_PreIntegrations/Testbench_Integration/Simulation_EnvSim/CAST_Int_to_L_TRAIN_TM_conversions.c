/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_TRAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_TRAIN */
L_TRAIN CAST_Int_to_L_TRAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_TRAIN::l_train_int */kcg_int l_train_int)
{
  /* TM_conversions::CAST_Int_to_L_TRAIN::l_train */
  static L_TRAIN l_train;
  
  l_train = l_train_int;
  return l_train;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_L_TRAIN_TM_conversions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

