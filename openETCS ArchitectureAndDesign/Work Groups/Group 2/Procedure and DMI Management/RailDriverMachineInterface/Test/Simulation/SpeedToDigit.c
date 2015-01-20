/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/Valerio/Desktop/DMI Funzionante/2014-09-02 RailDriverMachineInterface/RailDriverMachineInterface/Test/Simulation/config.txt
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedToDigit.h"

void SpeedToDigit_init(outC_SpeedToDigit *outC)
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


void SpeedToDigit_reset(outC_SpeedToDigit *outC)
{
}

/* SpeedToDigit */
void SpeedToDigit(
  /* SpeedToDigit::TrainSpeed */ kcg_real TrainSpeed,
  outC_SpeedToDigit *outC)
{
  outC->_L1 = TrainSpeed;
  outC->_L5 = (kcg_int) outC->_L1;
  outC->_L9 = 100;
  outC->_L8 = outC->_L5 % outC->_L9;
  outC->_L13 = outC->_L5 - outC->_L8;
  outC->_L16 = 100;
  outC->_L17 = outC->_L13 / outC->_L16;
  outC->_L15 = 10;
  outC->_L3 = 10;
  outC->_L2 = outC->_L5 % outC->_L3;
  outC->_L12 = outC->_L8 - outC->_L2;
  outC->_L14 = outC->_L12 / outC->_L15;
  outC->_L7 = (kcg_real) outC->_L17;
  outC->_L6 = (kcg_real) outC->_L14;
  outC->_L4 = (kcg_real) outC->_L2;
  outC->SpeedDigitOne = outC->_L7;
  outC->SpeedDigitTwo = outC->_L6;
  outC->SpeedDigitThree = outC->_L4;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SpeedToDigit.c
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

