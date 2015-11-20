/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.h"

/* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager */
void DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed(
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::DMI_dynamic */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::SpeedDigitOne */kcg_real *SpeedDigitOne,
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::SpeedDigitTwo */kcg_real *SpeedDigitTwo,
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::SpeedDigitThree */kcg_real *SpeedDigitThree,
  /* DMI_Control_Pkg::Sub_func::Speed::DigitSpeedManager::TrainSpeed */kcg_real *TrainSpeed)
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

