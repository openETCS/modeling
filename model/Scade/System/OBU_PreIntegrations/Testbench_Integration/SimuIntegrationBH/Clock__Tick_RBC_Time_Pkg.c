/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__Tick_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__Tick */
void Clock__Tick_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__Tick::inClock */ Clock_T *inClock,
  /* RBC_Time_Pkg::Clock__Tick::outClock */ Clock_T *outClock)
{
  /* RBC_Time_Pkg::Clock__Tick::_L1 */
  static Clock_T _L1;
  /* RBC_Time_Pkg::Clock__Tick::_L2 */
  static T_TRAIN _L2;
  /* RBC_Time_Pkg::Clock__Tick::_L3 */
  static Clock_T _L3;
  /* RBC_Time_Pkg::Clock__Tick::_L4 */
  static T_TRAIN _L4;
  /* RBC_Time_Pkg::Clock__Tick::_L5 */
  static kcg_int _L5;
  
  kcg_copy_Clock_T(&_L1, inClock);
  _L2 = /* 1 */ Clock__GetSeconds_RBC_Time_Pkg(&_L1);
  _L4 = CYCLE_TIME;
  _L5 = _L2 + _L4;
  /* 1 */ Clock__SetSeconds_RBC_Time_Pkg(&_L1, _L5, &_L3);
  kcg_copy_Clock_T(outClock, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Clock__Tick_RBC_Time_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

