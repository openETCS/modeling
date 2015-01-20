/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/Valerio/Desktop/DMI Funzionante/2014-09-02 RailDriverMachineInterface/RailDriverMachineInterface/Test/Simulation/config.txt
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Train.h"

void Train_init(outC_Train *outC)
{
  outC->_L30 = 0.0;
  outC->_L27 = 0.0;
  outC->_L26 = 0.0;
  outC->_L25 = 0.0;
  outC->_L24 = 0.0;
  outC->_L23 = 0.0;
  outC->_L22 = 0.0;
  outC->_L21 = 0.0;
  outC->_L20 = 0.0;
  outC->_L18 = 0.0;
  outC->_L17 = 0.0;
  outC->_L16 = 0.0;
  outC->_L15 = 0.0;
  outC->_L14 = 0.0;
  outC->_L13 = 0.0;
  outC->_L12 = 0.0;
  outC->_L7 = 0.0;
  outC->_L6 = 0.0;
  outC->_L3 = kcg_true;
  outC->_L1 = 0.0;
  outC->localTrainSpeed = 0.0;
  outC->Acceleration = 0.0;
  outC->SpeedGap = 0.0;
  outC->_L11_IfBlock1 = 0.0;
  outC->_L12_IfBlock1 = 0.0;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_IfBlock1 = 0.0;
  outC->LUS_Input_2 = 0.0;
  outC->LowLimit_2 = 0.0;
  outC->HighLimit_2 = 0.0;
  outC->LUS_Output_2 = 0.0;
  outC->_L9_2 = 0.0;
  outC->_L3_2 = 0.0;
  outC->_L2_2 = kcg_true;
  outC->_L15_2 = 0.0;
  outC->_L13_2 = 0.0;
  outC->_L11_2 = 0.0;
  outC->_L1_2 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->A1_2 = kcg_true;
  outC->init = kcg_true;
  outC->_L19 = 0.0;
  outC->_L8 = 0.0;
  outC->TrainSpeed = 0.0;
  outC->TrainPosition = 0.0;
}


void Train_reset(outC_Train *outC)
{
  outC->init = kcg_true;
}

/* Train */
void Train(
  /* Train::TargetSpeed */ kcg_real TargetSpeed,
  /* Train::Brake */ kcg_real Brake,
  /* Train::ResetPosition */ kcg_bool ResetPosition,
  outC_Train *outC)
{
  /* Train::Acceleration */ kcg_real _1_Acceleration;
  /* Train::Acceleration */ kcg_real Acceleration;
  /* Train::Acceleration */ kcg_real _2_Acceleration;
  /* Train::Acceleration */ kcg_real _3_Acceleration;
  /* Train::TrainSpeed */ kcg_real last_TrainSpeed;
  
  if (outC->init) {
    outC->_L30 = 0.0;
  }
  else {
    outC->_L30 = outC->_L8;
  }
  outC->LUS_Input_2 = outC->_L30;
  outC->_L3_2 = outC->LUS_Input_2;
  outC->HighLimit_2 = 400.0;
  outC->_L15_2 = outC->HighLimit_2;
  outC->_L1_2 = outC->_L3_2 >= outC->_L15_2;
  outC->LowLimit_2 = 0.0;
  outC->_L13_2 = outC->LowLimit_2;
  outC->_L2_2 = outC->_L3_2 <= outC->_L13_2;
  if (outC->_L2_2) {
    outC->_L11_2 = outC->_L13_2;
  }
  else {
    outC->_L11_2 = outC->_L3_2;
  }
  if (outC->_L1_2) {
    outC->_L9_2 = outC->_L15_2;
  }
  else {
    outC->_L9_2 = outC->_L11_2;
  }
  outC->LUS_Output_2 = outC->_L9_2;
  outC->A1_2 = outC->LowLimit_2 <= outC->HighLimit_2;
  if (outC->init) {
    last_TrainSpeed = 0.0;
  }
  else {
    last_TrainSpeed = outC->TrainSpeed;
  }
  outC->localTrainSpeed = outC->LUS_Output_2;
  outC->_L27 = 2500.0;
  outC->_L25 = Brake;
  outC->_L26 = outC->_L25 / outC->_L27;
  outC->_L1 = TargetSpeed;
  outC->_L7 = last_TrainSpeed;
  outC->_L6 = outC->_L1 - outC->_L7;
  outC->SpeedGap = outC->_L6;
  outC->IfBlock1_clock = outC->SpeedGap > 0.01;
  if (outC->IfBlock1_clock) {
    outC->_L1_IfBlock1 = 0.01;
    _1_Acceleration = outC->_L1_IfBlock1;
    outC->Acceleration = _1_Acceleration;
  }
  else {
    outC->else_clock_IfBlock1 = outC->SpeedGap < - 0.01;
    if (outC->else_clock_IfBlock1) {
      outC->_L11_IfBlock1 = - 0.01;
      _3_Acceleration = outC->_L11_IfBlock1;
      Acceleration = _3_Acceleration;
    }
    else {
      outC->_L12_IfBlock1 = 0.0;
      _2_Acceleration = outC->_L12_IfBlock1;
      Acceleration = _2_Acceleration;
    }
    outC->Acceleration = Acceleration;
  }
  outC->_L12 = outC->Acceleration;
  outC->_L24 = outC->_L12 - outC->_L26;
  outC->_L23 = outC->localTrainSpeed;
  outC->_L22 = 20.0;
  outC->_L21 = outC->_L24 * outC->_L22;
  outC->_L20 = 0.0;
  if (outC->init) {
    outC->_L18 = 0.0;
  }
  else {
    outC->_L18 = outC->_L19;
  }
  outC->_L3 = ResetPosition;
  outC->_L14 = 3600.0;
  outC->_L13 = outC->_L23 / outC->_L14;
  outC->_L16 = 20.0;
  outC->_L15 = outC->_L13 * outC->_L16;
  outC->_L17 = outC->_L15 + outC->_L18;
  if (outC->_L3) {
    outC->_L19 = outC->_L20;
  }
  else {
    outC->_L19 = outC->_L17;
  }
  outC->_L8 = outC->_L21 + outC->localTrainSpeed;
  outC->TrainSpeed = outC->localTrainSpeed;
  outC->TrainPosition = outC->_L19;
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Train.c
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

