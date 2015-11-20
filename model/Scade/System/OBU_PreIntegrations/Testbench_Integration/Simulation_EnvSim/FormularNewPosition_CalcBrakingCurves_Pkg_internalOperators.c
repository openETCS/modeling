/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition */
L_internal_real_Type_SDM_Types_Pkg FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginDistance */L_internal_real_Type_SDM_Types_Pkg inBeginDistance,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inEndSpeed */V_internal_real_Type_SDM_Types_Pkg inEndSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inBeginSpeed */V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::inAcceleration */A_internal_real_Type_SDM_Types_Pkg inAcceleration)
{
  static kcg_real tmp;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::_L20 */
  static kcg_bool _L20;
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewPosition::outD1 */
  static L_internal_real_Type_SDM_Types_Pkg outD1;
  
  _L20 = inAcceleration != 0.0;
  if (_L20) {
    tmp = (/* 2 */ Square_mathext_V_internal_real_Type(inEndSpeed) - /* 1 */
        Square_mathext_V_internal_real_Type(inBeginSpeed)) / (2.0 *
        inAcceleration);
  }
  else {
    tmp = 0.0;
  }
  outD1 = inBeginDistance - tmp;
  return outD1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FormularNewPosition_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

