/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_MESSAGE_to_int_TM_conversions.h"

/* TM_conversions::CAST_L_MESSAGE_to_int */
kcg_int CAST_L_MESSAGE_to_int_TM_conversions(
  /* TM_conversions::CAST_L_MESSAGE_to_int::l_message */L_MESSAGE l_message)
{
  /* TM_conversions::CAST_L_MESSAGE_to_int::l_message_int */
  static kcg_int l_message_int;
  
  l_message_int = l_message;
  return l_message_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_L_MESSAGE_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

