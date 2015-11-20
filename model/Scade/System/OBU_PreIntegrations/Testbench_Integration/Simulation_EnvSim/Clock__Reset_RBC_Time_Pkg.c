/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__Reset_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__Reset */
void Clock__Reset_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__Reset::inClock */Clock_T *inClock,
  /* RBC_Time_Pkg::Clock__Reset::outClock */Clock_T *outClock)
{
  /* 1 */ Clock__SetSeconds_RBC_Time_Pkg(inClock, T_TRAIN_DEFAULT, outClock);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Clock__Reset_RBC_Time_Pkg.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

