/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed */
void FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inAcceleration */A_internal_real_Type_SDM_Types_Pkg inAcceleration,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD0 */L_internal_real_Type_SDM_Types_Pkg inD0,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inD1 */L_internal_real_Type_SDM_Types_Pkg inD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::inBeginSpeed */V_internal_real_Type_SDM_Types_Pkg inBeginSpeed,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::outSpeedAtD1 */V_internal_real_Type_SDM_Types_Pkg *outSpeedAtD1,
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::valid */kcg_bool *valid)
{
  /* CalcBrakingCurves_Pkg::internalOperators::FormularNewSpeed::_L10 */
  static kcg_real _L10;
  
  _L10 = 2.0 * inAcceleration * (inD0 - inD1) + /* 1 */
    Square_mathext_V_internal_real_Type(inBeginSpeed);
  *valid = _L10 > 0.0;
  if (*valid) {
    *outSpeedAtD1 = /* 1 */ SqrtR_mathext(_L10);
  }
  else {
    *outSpeedAtD1 = 0.0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FormularNewSpeed_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

