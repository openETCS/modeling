/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "D_behavior.h"

void D_behavior_reset(outC_D_behavior *outC)
{
  outC->init = kcg_true;
  /* 1 */ ZoomLevel_reset(&outC->Context_1);
}

/* D_behavior */
void D_behavior(
  /* D_behavior::MousePressed */kcg_bool MousePressed,
  /* D_behavior::OverD9 */kcg_bool OverD9,
  /* D_behavior::OverD12 */kcg_bool OverD12,
  /* D_behavior::TrainPosition */kcg_real TrainPosition,
  /* D_behavior::GradientsStart */array_real_12 *GradientsStart,
  /* D_behavior::GradientsEnd */array_real_12 *GradientsEnd,
  /* D_behavior::PASP_SpeedPoints */tSpeedPoints *PASP_SpeedPoints,
  /* D_behavior::CPS */kcg_real CPS,
  /* D_behavior::Indicationlocation */kcg_int Indicationlocation,
  outC_D_behavior *outC)
{
  kcg_real tmp;
  kcg_int i;
  /* D_behavior::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* D_behavior::IfBlock1::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* D_behavior::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* D_behavior::_L35 */ tScale _L35;
  /* D_behavior::_L158 */ tPASPOutput_Array _L158;
  /* D_behavior::_L202 */ kcg_real _L202;
  /* D_behavior::_L204 */ array_real_10 _L204;
  
  tmp = (kcg_real) Indicationlocation / (kcg_real) 100;
  /* 1 */
  ZoomLevel(
    (kcg_bool) (OverD9 & MousePressed),
    (kcg_bool) (OverD12 & MousePressed),
    &outC->Context_1);
  kcg_copy_tScale(&outC->Scale, &outC->Context_1.Scale);
  if ((0 <= outC->Context_1.zoomlevel) & (outC->Context_1.zoomlevel < 6)) {
    kcg_copy_tScale(&_L35, (tScale *) &Scales[outC->Context_1.zoomlevel]);
  }
  else {
    kcg_copy_tScale(&_L35, (tScale *) &illegalScalesIndex);
  }
  IfBlock1_clock = (tmp <= _L35[5]) & (tmp > 0.0);
  if (IfBlock1_clock) {
    if ((0 <= outC->Context_1.zoomlevel) & (outC->Context_1.zoomlevel < 6)) {
      _L202 = LinearScaleFactors[outC->Context_1.zoomlevel];
    }
    else {
      _L202 = - 1.0;
    }
    outC->toDisplay[0] = tmp / _L202;
  }
  else {
    _2_else_clock_IfBlock1 = tmp == 0.0;
    if (_2_else_clock_IfBlock1) {
      if (outC->init) {
        outC->toDisplay[0] = 0.0;
      }
    }
    else {
      _1_else_clock_IfBlock1 = tmp < 0.0;
      if (_1_else_clock_IfBlock1) {
        outC->toDisplay[0] = - 500.0;
      }
      else {
        else_clock_IfBlock1 = tmp > _L35[8];
        if (else_clock_IfBlock1) {
          outC->toDisplay[0] = - 500.0;
        }
        else {
          outC->toDisplay[0] = logScaleFactor * (/* 1 */ LogR_mathext(tmp) -
              /* 2 */ LogR_mathext(_L35[5])) + ScaleLine5;
        }
      }
    }
  }
  outC->init = kcg_false;
  _L202 = CPS;
  for (i = 0; i < 10; i++) {
    tmp = _L202;
    /* 1 */
    SPDI_ComputeSpeedChangeIndex_SPDI(
      tmp,
      _L35[8],
      (*PASP_SpeedPoints)[0][i] - TrainPosition,
      (*PASP_SpeedPoints)[1][i],
      &_L202,
      &_L204[i],
      &outC->SPDI_SpeedChangeIndex[i],
      &outC->SPDI_SpeedChangeSymbolsVisible[i]);
    outC->SPDI_SpeedChangePosition[i] = /* 4 */
      ComputeDistDisplay(
        _L35[5],
        _L35[8],
        (*PASP_SpeedPoints)[0][i],
        TrainPosition,
        outC->Context_1.zoomlevel);
  }
  /* 1 */
  impPASPgetRelavantBreakingValues_PASP(
    CPS,
    &(*PASP_SpeedPoints)[0],
    &(*PASP_SpeedPoints)[1],
    &_L158,
    &outC->PASP_Speeds);
  for (i = 0; i < 4; i++) {
    outC->PASP_Distances[i] = /* 3 */
      ComputeDistDisplay(
        _L35[5],
        _L35[8],
        _L158[i],
        TrainPosition,
        outC->Context_1.zoomlevel);
  }
  for (i = 0; i < 12; i++) {
    outC->GradientVisible[i] = kcg_true;
    outC->GradientEndInterpolated[i] = /* 2 */
      ComputeDistDisplay(
        _L35[5],
        _L35[8],
        (*GradientsEnd)[i],
        TrainPosition,
        outC->Context_1.zoomlevel);
    outC->GradientStartInterpolated[i] = /* 1 */
      ComputeDistDisplay(
        _L35[5],
        _L35[8],
        (*GradientsStart)[i],
        TrainPosition,
        outC->Context_1.zoomlevel);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** D_behavior.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

