/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward */
void BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Index */kcg_int Index,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC_acc */BCAccumulator_type_CalcBrakingCurves_Pkg *BC_acc,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Asafe */ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::d_est_front */L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::exitCond */kcg_bool *exitCond,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC */BCAccumulator_type_CalcBrakingCurves_Pkg *BC)
{
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L4 */
  static ParabolaArc_T_CalcBrakingCurves_types _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L3 */
  static L_internal_real_Type_SDM_Types_Pkg _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L1 */
  static kcg_int _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::_L18 */
  static kcg_int _L18;
  
  /* 1 */
  OneCycle_CalcBrakingCurves_Pkg_internalOperators(
    (*BC_acc).distance,
    (*BC_acc).speed,
    (*BC_acc).distanceIndex,
    (*BC_acc).speedIndex,
    kcg_true,
    Asafe,
    &_L3,
    &_L2,
    &_L1,
    &_L18,
    &_L4);
  (*BC).distance = _L3;
  (*BC).speed = _L2;
  (*BC).distanceIndex = _L1;
  (*BC).speedIndex = _L18;
  /* 1 */
  setArc_CalcBrakingCurves_Pkg_internalOperators(
    &_L4,
    &(*BC_acc).BC,
    Index + 1,
    &(*BC).BC);
  *exitCond = _L3 > d_est_front;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

