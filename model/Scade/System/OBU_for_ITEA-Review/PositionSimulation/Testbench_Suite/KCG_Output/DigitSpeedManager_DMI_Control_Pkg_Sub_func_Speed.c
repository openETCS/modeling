/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.h"

/* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager */
void DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed(
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::SpeedDigitOne */ kcg_real *SpeedDigitOne,
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::SpeedDigitTwo */ kcg_real *SpeedDigitTwo,
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::SpeedDigitThree */ kcg_real *SpeedDigitThree,
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::TrainSpeed */ kcg_real *TrainSpeed)
{
  if (- 1 == (*DMI_dynamic).v_train) {
    *TrainSpeed = (kcg_real) 0;
  }
  else {
    *TrainSpeed = (kcg_real) (*DMI_dynamic).v_train;
  }
  /* 1 */
  SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed(
    *TrainSpeed,
    SpeedDigitOne,
    SpeedDigitTwo,
    SpeedDigitThree);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

