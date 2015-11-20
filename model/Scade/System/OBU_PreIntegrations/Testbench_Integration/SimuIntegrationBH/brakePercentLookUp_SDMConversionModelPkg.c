/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentLookUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePercentLookUp */
void brakePercentLookUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePercentLookUp::lambda0 */ kcg_int lambda0,
  /* SDMConversionModelPkg::brakePercentLookUp::av */ av_Map_t_SDMConversionModelPkg *av)
{
  /* SDMConversionModelPkg::brakePercentLookUp::V_lim */
  static kcg_int V_lim;
  /* SDMConversionModelPkg::brakePercentLookUp::_L1 */
  static kcg_int _L1;
  /* SDMConversionModelPkg::brakePercentLookUp::_L67 */
  static array_int_6_221 _L67;
  /* SDMConversionModelPkg::brakePercentLookUp::_L68 */
  static array_int_6 _L68;
  /* SDMConversionModelPkg::brakePercentLookUp::_L74 */
  static array_int_6 _L74;
  /* SDMConversionModelPkg::brakePercentLookUp::_L76 */
  static kcg_int _L76;
  /* SDMConversionModelPkg::brakePercentLookUp::_L77 */
  static kcg_int _L77;
  /* SDMConversionModelPkg::brakePercentLookUp::_L78 */
  static array_int_4 _L78;
  /* SDMConversionModelPkg::brakePercentLookUp::_L79 */
  static array_int_221 _L79;
  /* SDMConversionModelPkg::brakePercentLookUp::_L80 */
  static kcg_int _L80;
  /* SDMConversionModelPkg::brakePercentLookUp::_L81 */
  static kcg_int _L81;
  /* SDMConversionModelPkg::brakePercentLookUp::_L89 */
  static kcg_int _L89;
  /* SDMConversionModelPkg::brakePercentLookUp::_L91 */
  static kcg_int _L91;
  /* SDMConversionModelPkg::brakePercentLookUp::_L96 */
  static kcg_bool _L96;
  /* SDMConversionModelPkg::brakePercentLookUp::_L97 */
  static kcg_int _L97;
  /* SDMConversionModelPkg::brakePercentLookUp::_L98 */
  static kcg_int _L98;
  /* SDMConversionModelPkg::brakePercentLookUp::_L99 */
  static kcg_int _L99;
  /* SDMConversionModelPkg::brakePercentLookUp::_L100 */
  static kcg_int _L100;
  /* SDMConversionModelPkg::brakePercentLookUp::_L101 */
  static kcg_bool _L101;
  /* SDMConversionModelPkg::brakePercentLookUp::_L102 */
  static kcg_bool _L102;
  /* SDMConversionModelPkg::brakePercentLookUp::_L104 */
  static kcg_int _L104;
  /* SDMConversionModelPkg::brakePercentLookUp::_L105 */
  static kcg_int _L105;
  /* SDMConversionModelPkg::brakePercentLookUp::_L106 */
  static kcg_int _L106;
  /* SDMConversionModelPkg::brakePercentLookUp::_L107 */
  static kcg_int _L107;
  /* SDMConversionModelPkg::brakePercentLookUp::_L108 */
  static kcg_int _L108;
  /* SDMConversionModelPkg::brakePercentLookUp::_L109 */
  static kcg_int _L109;
  /* SDMConversionModelPkg::brakePercentLookUp::_L110 */
  static kcg_int _L110;
  /* SDMConversionModelPkg::brakePercentLookUp::_L111 */
  static kcg_int _L111;
  /* SDMConversionModelPkg::brakePercentLookUp::_L112 */
  static kcg_int _L112;
  /* SDMConversionModelPkg::brakePercentLookUp::_L113 */
  static kcg_bool _L113;
  /* SDMConversionModelPkg::brakePercentLookUp::_L116 */
  static kcg_int _L116;
  /* SDMConversionModelPkg::brakePercentLookUp::_L117 */
  static kcg_int _L117;
  /* SDMConversionModelPkg::brakePercentLookUp::_L120 */
  static av_Map_t_SDMConversionModelPkg _L120;
  /* SDMConversionModelPkg::brakePercentLookUp::_L127 */
  static array_int_6 _L127;
  /* SDMConversionModelPkg::brakePercentLookUp::_L114 */
  static kcg_int _L114;
  
  _L1 = lambda0;
  kcg_copy_array_int_6_221(
    &_L67,
    (array_int_6_221 *) &cBrakePercentALookup_SDMConversionModelPkg);
  kcg_copy_array_int_6(&_L74, &_L67[0]);
  _L77 = cBrakePercentStepsMin_SDMConversionModelPkg;
  _L76 = _L1 - _L77;
  if ((0 <= _L76) & (_L76 < 221)) {
    kcg_copy_array_int_6(&_L68, &_L67[_L76]);
  }
  else {
    kcg_copy_array_int_6(&_L68, &_L74);
  }
  kcg_copy_array_int_4(
    &_L78,
    (array_int_4 *) &cBrakePercentV_lim_SDMConversionModelPkg);
  kcg_copy_array_int_221(
    &_L79,
    (array_int_221 *) &cBrakePercentSpeedLookup_SDMConversionModelPkg);
  _L81 = _L79[0];
  if ((0 <= _L76) & (_L76 < 221)) {
    _L80 = _L79[_L76];
  }
  else {
    _L80 = _L81;
  }
  V_lim = _L80;
  _L89 = V_lim;
  _L91 = _L78[0];
  _L96 = _L89 <= _L91;
  _L98 = _L78[1];
  _L101 = _L89 <= _L98;
  _L99 = _L78[2];
  _L102 = _L89 <= _L99;
  _L100 = _L78[3];
  _L113 = _L89 <= _L100;
  _L114 = 0;
  /* 7 */ if (_L113) {
    _L109 = _L100;
  }
  else {
    _L109 = _L114;
  }
  /* 3 */ if (_L102) {
    _L105 = _L99;
  }
  else {
    _L105 = _L109;
  }
  /* 2 */ if (_L101) {
    _L104 = _L98;
  }
  else {
    _L104 = _L105;
  }
  /* 1 */ if (_L96) {
    _L97 = _L91;
  }
  else {
    _L97 = _L104;
  }
  /* 8 */ if (_L102) {
    _L110 = _L100;
  }
  else {
    _L110 = _L114;
  }
  /* 5 */ if (_L101) {
    _L107 = _L99;
  }
  else {
    _L107 = _L110;
  }
  /* 4 */ if (_L96) {
    _L106 = _L98;
  }
  else {
    _L106 = _L107;
  }
  /* 9 */ if (_L101) {
    _L111 = _L100;
  }
  else {
    _L111 = _L114;
  }
  /* 6 */ if (_L96) {
    _L108 = _L99;
  }
  else {
    _L108 = _L111;
  }
  /* 10 */ if (_L96) {
    _L112 = _L100;
  }
  else {
    _L112 = _L114;
  }
  _L116 = 0;
  _L117 = V_lim;
  _L127[0] = _L116;
  _L127[1] = _L117;
  _L127[2] = _L97;
  _L127[3] = _L106;
  _L127[4] = _L108;
  _L127[5] = _L112;
  kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(&_L120.a, &_L68);
  kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg(&_L120.v, &_L127);
  kcg_copy_av_Map_t_SDMConversionModelPkg(av, &_L120);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** brakePercentLookUp_SDMConversionModelPkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

