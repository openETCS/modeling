/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Clock_Tick_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::RBC_Clock_Tick */
void RBC_Clock_Tick_RBC_Time_Pkg(
  /* RBC_Time_Pkg::RBC_Clock_Tick::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Time_Pkg::RBC_Clock_Tick::outDataBus */RBC_Data_T_RBC_DataBus_Pkg *outDataBus,
  /* RBC_Time_Pkg::RBC_Clock_Tick::outClock */Clock_T *outClock)
{
  /* 1 */ Clock__Tick_RBC_Time_Pkg(&(*inDataBus).clockk, outClock);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(outDataBus, inDataBus);
  kcg_copy_Clock_T(&(*outDataBus).clockk, outClock);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_Clock_Tick_RBC_Time_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

