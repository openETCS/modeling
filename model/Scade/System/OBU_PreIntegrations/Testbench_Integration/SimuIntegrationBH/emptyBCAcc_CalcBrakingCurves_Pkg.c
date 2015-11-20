/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "emptyBCAcc_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::emptyBCAcc */
void emptyBCAcc_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::emptyBCAcc::Output1 */ BCAccumulator_type_CalcBrakingCurves_Pkg *Output1)
{
  /* CalcBrakingCurves_Pkg::emptyBCAcc::_L6 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L6;
  /* CalcBrakingCurves_Pkg::emptyBCAcc::_L7 */
  static kcg_real _L7;
  /* CalcBrakingCurves_Pkg::emptyBCAcc::_L8 */
  static kcg_int _L8;
  /* CalcBrakingCurves_Pkg::emptyBCAcc::_L10 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L10;
  
  _L7 = 0.0;
  _L8 = 0;
  /* 2 */ makeEmptyParabolaCurve_CalcBrakingCurves_types(&_L10);
  _L6.distance = _L7;
  _L6.speed = _L7;
  _L6.distanceIndex = _L8;
  _L6.speedIndex = _L8;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L6.BC, &_L10);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(Output1, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** emptyBCAcc_CalcBrakingCurves_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

