/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__GetSeconds */
T_TRAIN Clock__GetSeconds_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__GetSeconds::inClock */Clock_T *inClock)
{
  /* RBC_Time_Pkg::Clock__GetSeconds::outValue */
  static T_TRAIN outValue;
  
  outValue = (*inClock).m_Value;
  return outValue;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Clock__GetSeconds_RBC_Time_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

