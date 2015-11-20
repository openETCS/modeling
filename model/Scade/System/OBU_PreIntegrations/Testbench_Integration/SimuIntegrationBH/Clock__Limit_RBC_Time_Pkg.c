/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Clock__Limit_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::Clock__Limit */
void Clock__Limit_RBC_Time_Pkg(
  /* RBC_Time_Pkg::Clock__Limit::inClock */ Clock_T *inClock,
  /* RBC_Time_Pkg::Clock__Limit::outClock */ Clock_T *outClock)
{
  /* RBC_Time_Pkg::Clock__Limit::_L1 */
  static Clock_T _L1;
  /* RBC_Time_Pkg::Clock__Limit::_L9 */
  static kcg_bool _L9;
  /* RBC_Time_Pkg::Clock__Limit::_L8 */
  static kcg_int _L8;
  /* RBC_Time_Pkg::Clock__Limit::_L7 */
  static Clock_T _L7;
  /* RBC_Time_Pkg::Clock__Limit::_L6 */
  static kcg_bool _L6;
  /* RBC_Time_Pkg::Clock__Limit::_L5 */
  static kcg_bool _L5;
  /* RBC_Time_Pkg::Clock__Limit::_L4 */
  static T_TRAIN _L4;
  /* RBC_Time_Pkg::Clock__Limit::_L3 */
  static T_TRAIN _L3;
  /* RBC_Time_Pkg::Clock__Limit::_L2 */
  static T_TRAIN _L2;
  /* RBC_Time_Pkg::Clock__Limit::_L10 */
  static T_TRAIN _L10;
  /* RBC_Time_Pkg::Clock__Limit::_L11 */
  static Clock_T _L11;
  
  kcg_copy_Clock_T(&_L1, inClock);
  _L10 = /* 1 */ Clock__GetSeconds_RBC_Time_Pkg(&_L1);
  _L4 = T_TRAIN_MIN;
  _L6 = _L10 >= _L4;
  _L3 = T_TRAIN_MAX;
  _L2 = CYCLE_TIME;
  _L8 = _L3 - _L2;
  _L5 = _L10 <= _L8;
  _L9 = _L6 & _L5;
  /* 1 */ Clock__Reset_RBC_Time_Pkg(&_L1, &_L11);
  /* 1 */ if (_L9) {
    kcg_copy_Clock_T(&_L7, &_L1);
  }
  else {
    kcg_copy_Clock_T(&_L7, &_L11);
  }
  kcg_copy_Clock_T(outClock, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Clock__Limit_RBC_Time_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

