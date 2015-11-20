/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Clock_Tick_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::RBC_Clock_Tick */
void RBC_Clock_Tick_RBC_Time_Pkg(
  /* RBC_Time_Pkg::RBC_Clock_Tick::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Time_Pkg::RBC_Clock_Tick::outDataBus */ RBC_Data_T_RBC_DataBus_Pkg *outDataBus,
  /* RBC_Time_Pkg::RBC_Clock_Tick::outClock */ Clock_T *outClock)
{
  /* RBC_Time_Pkg::RBC_Clock_Tick::_L3 */
  static RBC_Data_T_RBC_DataBus_Pkg _L3;
  /* RBC_Time_Pkg::RBC_Clock_Tick::_L2 */
  static Clock_T _L2;
  /* RBC_Time_Pkg::RBC_Clock_Tick::_L1 */
  static Clock_T _L1;
  /* RBC_Time_Pkg::RBC_Clock_Tick::_L4 */
  static RBC_Data_T_RBC_DataBus_Pkg _L4;
  
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L4, inDataBus);
  kcg_copy_Clock_T(&_L1, &_L4.clockk);
  /* 1 */ Clock__Tick_RBC_Time_Pkg(&_L1, &_L2);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&_L3, &_L4);
  if (kcg_true) {
    kcg_copy_Clock_T(&_L3.clockk, &_L2);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(outDataBus, &_L3);
  kcg_copy_Clock_T(outClock, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_Clock_Tick_RBC_Time_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

