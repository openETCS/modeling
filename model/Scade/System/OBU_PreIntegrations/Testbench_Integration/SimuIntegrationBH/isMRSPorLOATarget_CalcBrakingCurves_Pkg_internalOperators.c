/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget */
kcg_bool isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::Target */ Target_real_T_TargetManagement_types *Target)
{
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::_L1 */
  static Target_real_T_TargetManagement_types _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::_L2 */
  static V_internal_real_Type_SDM_Types_Pkg _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::_L8 */
  static kcg_bool _L8;
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::_L9 */
  static kcg_real _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::isVnonZero */
  static kcg_bool isVnonZero;
  
  kcg_copy_Target_real_T_TargetManagement_types(&_L1, Target);
  _L2 = _L1.speed;
  _L9 = 0.0;
  _L8 = _L2 > _L9;
  isVnonZero = _L8;
  return isVnonZero;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

