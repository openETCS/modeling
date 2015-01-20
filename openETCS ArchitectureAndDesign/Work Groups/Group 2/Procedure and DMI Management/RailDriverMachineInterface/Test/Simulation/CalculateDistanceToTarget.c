/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/Valerio/Desktop/DMI Funzionante/2014-09-02 RailDriverMachineInterface/RailDriverMachineInterface/Test/Simulation/config.txt
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateDistanceToTarget.h"

void CalculateDistanceToTarget_init(outC_CalculateDistanceToTarget *outC)
{
  outC->_L1_IfBlock1 = 0.0;
  outC->_L2_IfBlock1 = 0.0;
  outC->_L3_IfBlock1 = 0.0;
  outC->_L4_IfBlock1 = 0.0;
  outC->_L5_IfBlock1 = 0.0;
  outC->_L56_IfBlock1 = 0.0;
  outC->_L35_IfBlock1 = 0.0;
  outC->_L24_IfBlock1 = 0.0;
  outC->_L6_IfBlock1 = 0.0;
  outC->_L7_IfBlock1 = 0.0;
  outC->_L83_IfBlock1 = 0.0;
  outC->_L9_IfBlock1 = 0.0;
  outC->_L10_IfBlock1 = 0.0;
  outC->_L12_IfBlock1 = 0.0;
  outC->_L8_IfBlock1 = 0.0;
  outC->IfBlock1_clock = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_1_else_clock_IfBlock1 = kcg_true;
  outC->InterpolatedDistanceToTarget = 0.0;
}


void CalculateDistanceToTarget_reset(outC_CalculateDistanceToTarget *outC)
{
}

/* CalculateDistanceToTarget */
void CalculateDistanceToTarget(
  /* CalculateDistanceToTarget::DistanceToTarget */ kcg_real DistanceToTarget,
  outC_CalculateDistanceToTarget *outC)
{
  /* CalculateDistanceToTarget::InterpolatedDistanceToTarget */ kcg_real _1_InterpolatedDistanceToTarget;
  /* CalculateDistanceToTarget::InterpolatedDistanceToTarget */ kcg_real InterpolatedDistanceToTarget;
  /* CalculateDistanceToTarget::InterpolatedDistanceToTarget */ kcg_real _5_InterpolatedDistanceToTarget;
  /* CalculateDistanceToTarget::InterpolatedDistanceToTarget */ kcg_real _4_InterpolatedDistanceToTarget;
  /* CalculateDistanceToTarget::InterpolatedDistanceToTarget */ kcg_real _2_InterpolatedDistanceToTarget;
  /* CalculateDistanceToTarget::InterpolatedDistanceToTarget */ kcg_real _3_InterpolatedDistanceToTarget;
  
  outC->IfBlock1_clock = DistanceToTarget < 0.0;
  if (outC->IfBlock1_clock) {
    outC->_L8_IfBlock1 = - 89.5;
    _1_InterpolatedDistanceToTarget = outC->_L8_IfBlock1;
    outC->InterpolatedDistanceToTarget = _1_InterpolatedDistanceToTarget;
  }
  else {
    outC->_1_else_clock_IfBlock1 = DistanceToTarget < 100.0;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L3_IfBlock1 = DistanceToTarget;
      outC->_L1_IfBlock1 = 0.33;
      outC->_L5_IfBlock1 = outC->_L3_IfBlock1 * outC->_L1_IfBlock1;
      outC->_L4_IfBlock1 = - 89.5;
      outC->_L2_IfBlock1 = outC->_L4_IfBlock1 + outC->_L5_IfBlock1;
      _3_InterpolatedDistanceToTarget = outC->_L2_IfBlock1;
      InterpolatedDistanceToTarget = _3_InterpolatedDistanceToTarget;
    }
    else {
      outC->else_clock_IfBlock1 = DistanceToTarget > 1000.0;
      if (outC->else_clock_IfBlock1) {
        outC->_L12_IfBlock1 = 96.5;
        _5_InterpolatedDistanceToTarget = outC->_L12_IfBlock1;
        _2_InterpolatedDistanceToTarget = _5_InterpolatedDistanceToTarget;
      }
      else {
        outC->_L10_IfBlock1 = Y100I;
        outC->_L56_IfBlock1 = Px100To1000;
        outC->_L24_IfBlock1 = DistanceToTarget;
        outC->_L6_IfBlock1 = /* 1 */ LogR_mathext(outC->_L24_IfBlock1);
        outC->_L83_IfBlock1 = 2.0;
        outC->_L7_IfBlock1 = outC->_L6_IfBlock1 - outC->_L83_IfBlock1;
        outC->_L35_IfBlock1 = outC->_L56_IfBlock1 * outC->_L7_IfBlock1;
        outC->_L9_IfBlock1 = outC->_L35_IfBlock1 + outC->_L10_IfBlock1;
        _4_InterpolatedDistanceToTarget = outC->_L9_IfBlock1;
        _2_InterpolatedDistanceToTarget = _4_InterpolatedDistanceToTarget;
      }
      InterpolatedDistanceToTarget = _2_InterpolatedDistanceToTarget;
    }
    outC->InterpolatedDistanceToTarget = InterpolatedDistanceToTarget;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalculateDistanceToTarget.c
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

