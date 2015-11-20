/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__Reset_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__Reset */
void Clock__Reset_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__Reset::inClock */ Clock_T *inClock,
  /* RBC_Time_Pkg::Clock__Reset::outClock */ Clock_T *outClock)
{
  /* RBC_Time_Pkg::Clock__Reset::_L1 */
  static Clock_T _L1;
  /* RBC_Time_Pkg::Clock__Reset::_L2 */
  static Clock_T _L2;
  /* RBC_Time_Pkg::Clock__Reset::_L3 */
  static T_TRAIN _L3;
  
  kcg_copy_Clock_T(&_L1, inClock);
  _L3 = T_TRAIN_DEFAULT;
  /* 1 */ Clock__SetSeconds_RBC_Time_Pkg(&_L1, _L3, &_L2);
  kcg_copy_Clock_T(outClock, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Clock__Reset_RBC_Time_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

