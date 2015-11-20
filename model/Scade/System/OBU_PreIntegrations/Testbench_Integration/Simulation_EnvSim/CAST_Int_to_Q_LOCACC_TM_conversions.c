/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LOCACC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LOCACC */
Q_LOCACC CAST_Int_to_Q_LOCACC_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LOCACC::q_locacc_int */kcg_int q_locacc_int)
{
  /* TM_conversions::CAST_Int_to_Q_LOCACC::q_locacc */
  static Q_LOCACC q_locacc;
  
  q_locacc = q_locacc_int;
  return q_locacc;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LOCACC_TM_conversions.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

