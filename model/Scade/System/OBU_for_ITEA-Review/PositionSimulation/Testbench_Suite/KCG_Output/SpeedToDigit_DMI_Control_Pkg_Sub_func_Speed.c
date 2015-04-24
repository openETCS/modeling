/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed.h"

/* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit */
void SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed(
  /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::TrainSpeed */ kcg_real TrainSpeed,
  /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::SpeedDigitOne */ kcg_real *SpeedDigitOne,
  /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::SpeedDigitTwo */ kcg_real *SpeedDigitTwo,
  /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::SpeedDigitThree */ kcg_real *SpeedDigitThree)
{
  /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L2 */ kcg_int _L2;
  /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L5 */ kcg_int _L5;
  /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::_L8 */ kcg_int _L8;
  
  _L5 = (kcg_int) TrainSpeed;
  _L8 = _L5 % 100;
  *SpeedDigitOne = (kcg_real) ((_L5 - _L8) / 100);
  _L2 = _L5 % 10;
  *SpeedDigitTwo = (kcg_real) ((_L8 - _L2) / 10);
  *SpeedDigitThree = (kcg_real) _L2;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

