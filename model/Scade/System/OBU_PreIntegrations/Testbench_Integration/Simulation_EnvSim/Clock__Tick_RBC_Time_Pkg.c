/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__Tick_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__Tick */
void Clock__Tick_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__Tick::inClock */Clock_T *inClock,
  /* RBC_Time_Pkg::Clock__Tick::outClock */Clock_T *outClock)
{
  static T_TRAIN tmp;
  
  tmp = /* 1 */ Clock__GetSeconds_RBC_Time_Pkg(inClock);
  /* 1 */ Clock__SetSeconds_RBC_Time_Pkg(inClock, tmp + CYCLE_TIME, outClock);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Clock__Tick_RBC_Time_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

