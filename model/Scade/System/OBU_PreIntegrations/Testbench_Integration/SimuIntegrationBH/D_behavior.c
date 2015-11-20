/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "D_behavior.h"

#ifndef KCG_USER_DEFINED_INIT
void D_behavior_init(outC_D_behavior *outC)
{
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 1; i++) {
    outC->toDisplay[i] = 0.0;
  }
  for (i1 = 0; i1 < 10; i1++) {
    outC->SPDI_SpeedChangeSymbolsVisible[i1] = kcg_true;
  }
  for (i2 = 0; i2 < 10; i2++) {
    outC->SPDI_SpeedChangeIndex[i2] = 0;
  }
  for (i3 = 0; i3 < 10; i3++) {
    outC->SPDI_SpeedChangePosition[i3] = 0.0;
  }
  for (i4 = 0; i4 < 4; i4++) {
    outC->PASP_Speeds[i4] = 0.0;
  }
  for (i5 = 0; i5 < 4; i5++) {
    outC->PASP_Distances[i5] = 0.0;
  }
  for (i6 = 0; i6 < 12; i6++) {
    outC->GradientVisible[i6] = kcg_true;
  }
  for (i7 = 0; i7 < 12; i7++) {
    outC->GradientEndInterpolated[i7] = 0.0;
  }
  for (i8 = 0; i8 < 12; i8++) {
    outC->GradientStartInterpolated[i8] = 0.0;
  }
  for (i9 = 0; i9 < 9; i9++) {
    outC->Scale[i9] = 0.0;
  }
  /* 1 */ ZoomLevel_init(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void D_behavior_reset(outC_D_behavior *outC)
{
  outC->init = kcg_true;
  /* 1 */ ZoomLevel_reset(&outC->Context_1);
}

/* D_behavior */
void D_behavior(
  /* D_behavior::MousePressed */ kcg_bool MousePressed,
  /* D_behavior::OverD9 */ kcg_bool OverD9,
  /* D_behavior::OverD12 */ kcg_bool OverD12,
  /* D_behavior::TrainPosition */ kcg_real TrainPosition,
  /* D_behavior::GradientsStart */ array_real_12 *GradientsStart,
  /* D_behavior::GradientsEnd */ array_real_12 *GradientsEnd,
  /* D_behavior::PASP_SpeedPoints */ tSpeedPoints *PASP_SpeedPoints,
  /* D_behavior::CPS */ kcg_real CPS,
  /* D_behavior::Indicationlocation */ kcg_int Indicationlocation,
  outC_D_behavior *outC)
{
  static kcg_int i24;
  static kcg_int i23;
  static kcg_int i22;
  static kcg_int i21;
  static kcg_int i20;
  static kcg_int i19;
  static kcg_int i18;
  static kcg_int i17;
  static kcg_int i16;
  static kcg_int i15;
  static kcg_int i14;
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  /* D_behavior */
  static kcg_real acc;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  /* D_behavior::toDisplay */
  static array_real_1 _25_toDisplay;
  /* D_behavior::IfBlock1::then::_L6 */
  static array_real_1 _L6_IfBlock1;
  /* D_behavior::IfBlock1::then::_L5 */
  static kcg_real _L5_IfBlock1;
  /* D_behavior::IfBlock1::then::_L4 */
  static kcg_real _L4_IfBlock1;
  /* D_behavior::IfBlock1::then::_L2 */
  static kcg_real _L2_IfBlock1;
  /* D_behavior::toDisplay */
  static array_real_1 toDisplay;
  /* D_behavior::IfBlock1::else */
  static kcg_bool _34_else_clock_IfBlock1;
  /* D_behavior::toDisplay */
  static array_real_1 _29_toDisplay;
  /* D_behavior::IfBlock1::else::else::then::_L2 */
  static array_real_1 _L236_IfBlock1;
  /* D_behavior::IfBlock1::else::else::then::_L1 */
  static kcg_real _L1_IfBlock1;
  /* D_behavior::toDisplay */
  static array_real_1 _28_toDisplay;
  /* D_behavior::IfBlock1::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L16 */
  static kcg_real _L16_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L15 */
  static array_real_1 _L15_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L14 */
  static kcg_real _L14_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L9 */
  static kcg_real _L9_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L8 */
  static kcg_real _L8_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L7 */
  static kcg_real _L7_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L6 */
  static kcg_real _L641_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L5 */
  static kcg_real _L540_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L3 */
  static kcg_real _L3_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::else::_L2 */
  static kcg_real _L239_IfBlock1;
  /* D_behavior::toDisplay */
  static array_real_1 _30_toDisplay;
  /* D_behavior::IfBlock1::else::else::else::then::_L1 */
  static kcg_real _L138_IfBlock1;
  /* D_behavior::IfBlock1::else::else::else::then::_L2 */
  static array_real_1 _L237_IfBlock1;
  /* D_behavior::toDisplay */
  static array_real_1 _31_toDisplay;
  /* D_behavior::IfBlock1::else::else */
  static kcg_bool _33_else_clock_IfBlock1;
  /* D_behavior::toDisplay */
  static array_real_1 _26_toDisplay;
  /* D_behavior::IfBlock1::else::then::_L5 */
  static array_real_1 _L535_IfBlock1;
  /* D_behavior::toDisplay */
  static array_real_1 _27_toDisplay;
  static kcg_real noname;
  static array_real_10 _32_noname;
  /* D_behavior::toDisplay */
  static array_real_1 last_toDisplay;
  /* D_behavior::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* D_behavior::ZoomIn */
  static kcg_bool ZoomIn;
  /* D_behavior::ZoomOut */
  static kcg_bool ZoomOut;
  /* D_behavior::zoomlevel */
  static kcg_int zoomlevel;
  /* D_behavior::endOfLinearPartArray */
  static array_real_12 endOfLinearPartArray;
  /* D_behavior::endOfLogPartArray */
  static array_real_12 endOfLogPartArray;
  /* D_behavior::trainPositionArray */
  static array_real_12 trainPositionArray;
  /* D_behavior::zoomlevelArray */
  static array_int_12 zoomlevelArray;
  /* D_behavior::endOfLinearPart */
  static kcg_real endOfLinearPart;
  /* D_behavior::endOfLogPart2 */
  static kcg_real endOfLogPart2;
  /* D_behavior::maxLogDistance */
  static kcg_real maxLogDistance;
  /* D_behavior::maxLinearDistance */
  static kcg_real maxLinearDistance;
  /* D_behavior::localdinstance */
  static kcg_real localdinstance;
  /* D_behavior::linearScaleFactor */
  static kcg_real linearScaleFactor;
  /* D_behavior::_L1 */
  static kcg_bool _L1;
  /* D_behavior::_L2 */
  static tScale _L2;
  /* D_behavior::_L3 */
  static kcg_bool _L3;
  /* D_behavior::_L4 */
  static kcg_bool _L4;
  /* D_behavior::_L7 */
  static kcg_bool _L7;
  /* D_behavior::_L6 */
  static kcg_bool _L6;
  /* D_behavior::_L5 */
  static kcg_bool _L5;
  /* D_behavior::_L9 */
  static kcg_bool _L9;
  /* D_behavior::_L10 */
  static kcg_bool _L10;
  /* D_behavior::_L33 */
  static kcg_int _L33;
  /* D_behavior::_L35 */
  static tScale _L35;
  /* D_behavior::_L36 */
  static array_real_9_6 _L36;
  /* D_behavior::_L43 */
  static array_real_12 _L43;
  /* D_behavior::_L45 */
  static array_real_12 _L45;
  /* D_behavior::_L52 */
  static array_real_12 _L52;
  /* D_behavior::_L51 */
  static kcg_real _L51;
  /* D_behavior::_L54 */
  static kcg_int _L54;
  /* D_behavior::_L53 */
  static array_int_12 _L53;
  /* D_behavior::_L137 */
  static array_real_12 _L137;
  /* D_behavior::_L136 */
  static array_real_12 _L136;
  /* D_behavior::_L135 */
  static array_real_12 _L135;
  /* D_behavior::_L134 */
  static array_real_12 _L134;
  /* D_behavior::_L133 */
  static array_real_12 _L133;
  /* D_behavior::_L131 */
  static array_real_12 _L131;
  /* D_behavior::_L130 */
  static array_real_12 _L130;
  /* D_behavior::_L129 */
  static array_real_12 _L129;
  /* D_behavior::_L128 */
  static array_int_12 _L128;
  /* D_behavior::_L127 */
  static array_real_12 _L127;
  /* D_behavior::_L126 */
  static array_real_12 _L126;
  /* D_behavior::_L125 */
  static array_int_12 _L125;
  /* D_behavior::_L170 */
  static array_real_4 _L170;
  /* D_behavior::_L169 */
  static kcg_real _L169;
  /* D_behavior::_L168 */
  static array_int_4 _L168;
  /* D_behavior::_L167 */
  static array_real_4 _L167;
  /* D_behavior::_L165 */
  static array_real_10 _L165;
  /* D_behavior::_L166 */
  static array_real_10 _L166;
  /* D_behavior::_L163 */
  static kcg_real _L163;
  /* D_behavior::_L162 */
  static tSpeedPoints _L162;
  /* D_behavior::_L161 */
  static array_real_4 _L161;
  /* D_behavior::_L160 */
  static kcg_real _L160;
  /* D_behavior::_L158 */
  static tPASPOutput_Array _L158;
  /* D_behavior::_L159 */
  static tPASPOutput_Array _L159;
  /* D_behavior::_L157 */
  static array_real_4 _L157;
  /* D_behavior::_L156 */
  static kcg_int _L156;
  /* D_behavior::_L155 */
  static kcg_real _L155;
  /* D_behavior::_L172 */
  static tSpeedPoints _L172;
  /* D_behavior::_L187 */
  static array_real_10 _L187;
  /* D_behavior::_L186 */
  static array_real_10 _L186;
  /* D_behavior::_L188 */
  static array_real_10 _L188;
  /* D_behavior::_L189 */
  static array_int_10 _L189;
  /* D_behavior::_L190 */
  static kcg_real _L190;
  /* D_behavior::_L191 */
  static kcg_real _L191;
  /* D_behavior::_L192 */
  static kcg_int _L192;
  /* D_behavior::_L193 */
  static kcg_real _L193;
  /* D_behavior::_L194 */
  static array_real_10 _L194;
  /* D_behavior::_L195 */
  static array_real_10 _L195;
  /* D_behavior::_L197 */
  static array_int_10 _L197;
  /* D_behavior::_L196 */
  static array_real_10 _L196;
  /* D_behavior::_L201 */
  static kcg_real _L201;
  /* D_behavior::_L202 */
  static kcg_real _L202;
  /* D_behavior::_L203 */
  static kcg_real _L203;
  /* D_behavior::_L204 */
  static array_real_10 _L204;
  /* D_behavior::_L205 */
  static array_bool_10 _L205;
  /* D_behavior::_L206 */
  static array_real_10 _L206;
  /* D_behavior::_L209 */
  static array_bool_12 _L209;
  /* D_behavior::_L217 */
  static kcg_real _L217;
  /* D_behavior::_L216 */
  static kcg_int _L216;
  /* D_behavior::_L215 */
  static kcg_int _L215;
  /* D_behavior::_L214 */
  static array_real_6 _L214;
  /* D_behavior::_L213 */
  static kcg_int _L213;
  /* D_behavior::_L212 */
  static kcg_real _L212;
  /* D_behavior::_L211 */
  static kcg_real _L211;
  /* D_behavior::_L218 */
  static array_real_10 _L218;
  /* D_behavior::_L219 */
  static kcg_real _L219;
  /* D_behavior::_L220 */
  static array_real_10 _L220;
  
  _L1 = MousePressed;
  _L3 = OverD9;
  _L4 = _L3 & _L1;
  ZoomIn = _L4;
  _L9 = ZoomIn;
  _L7 = OverD12;
  _L6 = MousePressed;
  _L5 = _L7 & _L6;
  ZoomOut = _L5;
  _L10 = ZoomOut;
  /* 1 */ ZoomLevel(_L9, _L10, &outC->Context_1);
  kcg_copy_tScale(&_L2, &outC->Context_1.Scale);
  _L33 = outC->Context_1.zoomlevel;
  kcg_copy_tScale(&outC->Scale, &_L2);
  kcg_copy_array_real_9_6(&_L36, (array_real_9_6 *) &Scales);
  zoomlevel = _L33;
  if ((0 <= zoomlevel) & (zoomlevel < 6)) {
    kcg_copy_tScale(&_L35, &_L36[zoomlevel]);
  }
  else {
    kcg_copy_tScale(&_L35, (tScale *) &illegalScalesIndex);
  }
  endOfLinearPart = _L35[5];
  endOfLogPart2 = _L35[8];
  /* pow */ for (i24 = 0; i24 < 12; i24++) {
    _L43[i24] = endOfLinearPart;
  }
  /* pow */ for (i23 = 0; i23 < 12; i23++) {
    _L45[i23] = endOfLogPart2;
  }
  kcg_copy_array_real_12(&endOfLinearPartArray, &_L43);
  kcg_copy_array_real_12(&endOfLogPartArray, &_L45);
  _L51 = TrainPosition;
  /* pow */ for (i22 = 0; i22 < 12; i22++) {
    _L52[i22] = _L51;
  }
  _L54 = zoomlevel;
  /* pow */ for (i21 = 0; i21 < 12; i21++) {
    _L53[i21] = _L54;
  }
  kcg_copy_array_real_12(&trainPositionArray, &_L52);
  kcg_copy_array_int_12(&zoomlevelArray, &_L53);
  kcg_copy_array_int_12(&_L125, &zoomlevelArray);
  kcg_copy_array_real_12(&_L126, &endOfLinearPartArray);
  kcg_copy_array_real_12(&_L129, &endOfLinearPartArray);
  kcg_copy_array_real_12(&_L131, &endOfLogPartArray);
  kcg_copy_array_real_12(&_L136, GradientsStart);
  kcg_copy_array_real_12(&_L127, &trainPositionArray);
  /* 1 */ for (i20 = 0; i20 < 12; i20++) {
    _L133[i20] = /* 1 */
      ComputeDistDisplay(
        _L129[i20],
        _L131[i20],
        _L136[i20],
        _L127[i20],
        _L125[i20]);
  }
  kcg_copy_array_real_12(&outC->GradientStartInterpolated, &_L133);
  kcg_copy_array_int_12(&_L128, &zoomlevelArray);
  kcg_copy_array_real_12(&_L130, &endOfLogPartArray);
  kcg_copy_array_real_12(&_L137, GradientsEnd);
  kcg_copy_array_real_12(&_L134, &trainPositionArray);
  /* 2 */ for (i19 = 0; i19 < 12; i19++) {
    _L135[i19] = /* 2 */
      ComputeDistDisplay(
        _L126[i19],
        _L130[i19],
        _L137[i19],
        _L134[i19],
        _L128[i19]);
  }
  kcg_copy_array_real_12(&outC->GradientEndInterpolated, &_L135);
  /* pow */ for (i18 = 0; i18 < 12; i18++) {
    _L209[i18] = kcg_true;
  }
  kcg_copy_array_bool_12(&outC->GradientVisible, &_L209);
  _L155 = TrainPosition;
  _L156 = zoomlevel;
  _L169 = endOfLogPart2;
  /* pow */ for (i17 = 0; i17 < 4; i17++) {
    _L157[i17] = _L169;
  }
  _L160 = CPS;
  kcg_copy_tSpeedPoints(&_L162, PASP_SpeedPoints);
  kcg_copy_array_real_10(&_L165, &_L162[0]);
  kcg_copy_array_real_10(&_L166, &_L162[1]);
  /* 1 */
  impPASPgetRelavantBreakingValues_PASP(_L160, &_L165, &_L166, &_L158, &_L159);
  /* pow */ for (i16 = 0; i16 < 4; i16++) {
    _L161[i16] = _L155;
  }
  _L163 = endOfLinearPart;
  /* pow */ for (i15 = 0; i15 < 4; i15++) {
    _L167[i15] = _L163;
  }
  /* pow */ for (i14 = 0; i14 < 4; i14++) {
    _L168[i14] = _L156;
  }
  /* 3 */ for (i13 = 0; i13 < 4; i13++) {
    _L170[i13] = /* 3 */
      ComputeDistDisplay(
        _L167[i13],
        _L157[i13],
        _L158[i13],
        _L161[i13],
        _L168[i13]);
  }
  kcg_copy_array_real_4(&outC->PASP_Distances, &_L170);
  kcg_copy_tPASPOutput_Array(&outC->PASP_Speeds, &_L159);
  kcg_copy_tSpeedPoints(&_L172, PASP_SpeedPoints);
  kcg_copy_array_real_10(&_L187, &_L172[1]);
  kcg_copy_array_real_10(&_L186, &_L172[0]);
  _L190 = endOfLinearPart;
  /* pow */ for (i12 = 0; i12 < 10; i12++) {
    _L194[i12] = _L190;
  }
  _L191 = endOfLogPart2;
  /* pow */ for (i11 = 0; i11 < 10; i11++) {
    _L195[i11] = _L191;
  }
  _L193 = TrainPosition;
  /* pow */ for (i10 = 0; i10 < 10; i10++) {
    _L196[i10] = _L193;
  }
  _L192 = zoomlevel;
  /* pow */ for (i9 = 0; i9 < 10; i9++) {
    _L197[i9] = _L192;
  }
  /* 4 */ for (i8 = 0; i8 < 10; i8++) {
    _L188[i8] = /* 4 */
      ComputeDistDisplay(_L194[i8], _L195[i8], _L186[i8], _L196[i8], _L197[i8]);
  }
  _L201 = CPS;
  _L203 = endOfLogPart2;
  /* pow */ for (i7 = 0; i7 < 10; i7++) {
    _L206[i7] = _L203;
  }
  _L219 = TrainPosition;
  /* pow */ for (i6 = 0; i6 < 10; i6++) {
    _L220[i6] = _L219;
  }
  /* 6 */ for (i5 = 0; i5 < 10; i5++) {
    _L218[i5] = _L186[i5] - _L220[i5];
  }
  _L202 = _L201;
  /* 5 */ for (i4 = 0; i4 < 10; i4++) {
    acc = _L202;
    /* 1 */
    SPDI_ComputeSpeedChangeIndex_SPDI(
      acc,
      _L206[i4],
      _L218[i4],
      _L187[i4],
      &_L202,
      &_L204[i4],
      &_L189[i4],
      &_L205[i4]);
  }
  noname = _L202;
  kcg_copy_array_real_10(&outC->SPDI_SpeedChangePosition, &_L188);
  kcg_copy_array_int_10(&outC->SPDI_SpeedChangeIndex, &_L189);
  kcg_copy_array_real_10(&_32_noname, &_L204);
  kcg_copy_array_bool_10(&outC->SPDI_SpeedChangeSymbolsVisible, &_L205);
  _L215 = Indicationlocation;
  _L213 = 100;
  _L217 = (kcg_real) _L215 / (kcg_real) _L213;
  _L212 = (kcg_real) _L217;
  localdinstance = _L212;
  kcg_copy_array_real_6(&_L214, (array_real_6 *) &LinearScaleFactors);
  _L216 = zoomlevel;
  if ((0 <= _L216) & (_L216 < 6)) {
    _L211 = _L214[_L216];
  }
  else {
    _L211 = - 1.0;
  }
  linearScaleFactor = _L211;
  maxLinearDistance = endOfLinearPart;
  IfBlock1_clock = (localdinstance <= maxLinearDistance) & (localdinstance >
      0.0);
  /* last_init_ck_toDisplay */ if (outC->init) {
    last_toDisplay[0] = 0.0;
  }
  else {
    kcg_copy_array_real_1(&last_toDisplay, &outC->toDisplay);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _34_else_clock_IfBlock1 = localdinstance == 0.0;
    /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
    }
    else {
      _33_else_clock_IfBlock1 = localdinstance < 0.0;
    }
  }
  maxLogDistance = endOfLogPart2;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = localdinstance;
    _L4_IfBlock1 = linearScaleFactor;
    _L2_IfBlock1 = _L5_IfBlock1 / _L4_IfBlock1;
    /* pow */ for (i = 0; i < 1; i++) {
      _L6_IfBlock1[i] = _L2_IfBlock1;
    }
    kcg_copy_array_real_1(&_25_toDisplay, &_L6_IfBlock1);
    kcg_copy_array_real_1(&outC->toDisplay, &_25_toDisplay);
  }
  else {
    /* ck_anon_activ */ if (_34_else_clock_IfBlock1) {
      kcg_copy_array_real_1(&_L535_IfBlock1, &last_toDisplay);
      kcg_copy_array_real_1(&_27_toDisplay, &_L535_IfBlock1);
      kcg_copy_array_real_1(&toDisplay, &_27_toDisplay);
    }
    else {
      /* ck_anon_activ */ if (_33_else_clock_IfBlock1) {
        _L1_IfBlock1 = - 500.0;
        /* pow */ for (i1 = 0; i1 < 1; i1++) {
          _L236_IfBlock1[i1] = _L1_IfBlock1;
        }
        kcg_copy_array_real_1(&_29_toDisplay, &_L236_IfBlock1);
        kcg_copy_array_real_1(&_26_toDisplay, &_29_toDisplay);
      }
      else {
        else_clock_IfBlock1 = localdinstance > maxLogDistance;
        /* ck_anon_activ */ if (else_clock_IfBlock1) {
          _L138_IfBlock1 = - 500.0;
          /* pow */ for (i2 = 0; i2 < 1; i2++) {
            _L237_IfBlock1[i2] = _L138_IfBlock1;
          }
          kcg_copy_array_real_1(&_31_toDisplay, &_L237_IfBlock1);
          kcg_copy_array_real_1(&_28_toDisplay, &_31_toDisplay);
        }
        else {
          _L641_IfBlock1 = logScaleFactor;
          _L14_IfBlock1 = localdinstance;
          _L239_IfBlock1 = /* 1 */ LogR_mathext(_L14_IfBlock1);
          _L16_IfBlock1 = maxLinearDistance;
          _L9_IfBlock1 = /* 2 */ LogR_mathext(_L16_IfBlock1);
          _L3_IfBlock1 = _L239_IfBlock1 - _L9_IfBlock1;
          _L540_IfBlock1 = _L641_IfBlock1 * _L3_IfBlock1;
          _L8_IfBlock1 = ScaleLine5;
          _L7_IfBlock1 = _L540_IfBlock1 + _L8_IfBlock1;
          /* pow */ for (i3 = 0; i3 < 1; i3++) {
            _L15_IfBlock1[i3] = _L7_IfBlock1;
          }
          kcg_copy_array_real_1(&_30_toDisplay, &_L15_IfBlock1);
          kcg_copy_array_real_1(&_28_toDisplay, &_30_toDisplay);
        }
        kcg_copy_array_real_1(&_26_toDisplay, &_28_toDisplay);
      }
      kcg_copy_array_real_1(&toDisplay, &_26_toDisplay);
    }
    kcg_copy_array_real_1(&outC->toDisplay, &toDisplay);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** D_behavior.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

