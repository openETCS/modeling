/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed.h"

#ifndef KCG_USER_DEFINED_INIT
void SpeedToDigit_init_DMI_Control_Pkg_Sub_func_Speed(
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  outC->_L17 = 0;
  outC->_L16 = 0;
  outC->_L15 = 0;
  outC->_L14 = 0;
  outC->_L13 = 0;
  outC->_L12 = 0;
  outC->_L8 = 0;
  outC->_L9 = 0;
  outC->_L7 = 0.0;
  outC->_L6 = 0.0;
  outC->_L5 = 0;
  outC->_L4 = 0.0;
  outC->_L3 = 0;
  outC->_L2 = 0;
  outC->_L1 = 0.0;
  outC->SpeedDigitThree = 0.0;
  outC->SpeedDigitTwo = 0.0;
  outC->SpeedDigitOne = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SpeedToDigit_reset_DMI_Control_Pkg_Sub_func_Speed(
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit */
void SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed(
  /* DMI_Control_Pkg::Sub_func::Speed::SpeedToDigit::TrainSpeed */ kcg_real TrainSpeed,
  outC_SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed *outC)
{
  outC->_L1 = TrainSpeed;
  outC->_L5 = (kcg_int) outC->_L1;
  outC->_L3 = 10;
  outC->_L2 = outC->_L5 % outC->_L3;
  outC->_L4 = (kcg_real) outC->_L2;
  outC->SpeedDigitThree = outC->_L4;
  outC->_L9 = 100;
  outC->_L8 = outC->_L5 % outC->_L9;
  outC->_L12 = outC->_L8 - outC->_L2;
  outC->_L15 = 10;
  outC->_L14 = outC->_L12 / outC->_L15;
  outC->_L6 = (kcg_real) outC->_L14;
  outC->SpeedDigitTwo = outC->_L6;
  outC->_L13 = outC->_L5 - outC->_L8;
  outC->_L16 = 100;
  outC->_L17 = outC->_L13 / outC->_L16;
  outC->_L7 = (kcg_real) outC->_L17;
  outC->SpeedDigitOne = outC->_L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SpeedToDigit_DMI_Control_Pkg_Sub_func_Speed.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

