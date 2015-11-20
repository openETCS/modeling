/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__GetSeconds */
T_TRAIN Clock__GetSeconds_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__GetSeconds::inClock */ Clock_T *inClock)
{
  /* RBC_Time_Pkg::Clock__GetSeconds::_L1 */
  static Clock_T _L1;
  /* RBC_Time_Pkg::Clock__GetSeconds::_L2 */
  static T_TRAIN _L2;
  /* RBC_Time_Pkg::Clock__GetSeconds::outValue */
  static T_TRAIN outValue;
  
  kcg_copy_Clock_T(&_L1, inClock);
  _L2 = _L1.m_Value;
  outValue = _L2;
  return outValue;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Clock__GetSeconds_RBC_Time_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

