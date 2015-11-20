/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__SetSeconds_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__SetSeconds */
void Clock__SetSeconds_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__SetSeconds::inClock */ Clock_T *inClock,
  /* RBC_Time_Pkg::Clock__SetSeconds::inValue */ T_TRAIN inValue,
  /* RBC_Time_Pkg::Clock__SetSeconds::outClock */ Clock_T *outClock)
{
  /* RBC_Time_Pkg::Clock__SetSeconds::_L1 */
  static Clock_T _L1;
  /* RBC_Time_Pkg::Clock__SetSeconds::_L2 */
  static Clock_T _L2;
  /* RBC_Time_Pkg::Clock__SetSeconds::_L3 */
  static T_TRAIN _L3;
  
  kcg_copy_Clock_T(&_L1, inClock);
  _L3 = inValue;
  kcg_copy_Clock_T(&_L2, &_L1);
  if (kcg_true) {
    _L2.m_Value = _L3;
  }
  kcg_copy_Clock_T(outClock, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Clock__SetSeconds_RBC_Time_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

