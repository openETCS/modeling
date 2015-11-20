/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
L_internal_real_Type_SDM_Types_Pkg CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::IsMRSPorLOATarget */ kcg_bool IsMRSPorLOATarget,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::target */ Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe)
{
  static kcg_int i2;
  static kcg_int i1;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
  static BCAccumulator_type_CalcBrakingCurves_Pkg acc;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  static kcg_bool _3_noname;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L3 */
  static ASafe_T_CalcBrakingCurves_types _L3;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L2 */
  static Target_real_T_TargetManagement_types _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L1 */
  static kcg_bool _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L4 */
  static kcg_int _L4;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L5 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L5;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L6 */
  static V_internal_real_Type_SDM_Types_Pkg _L6;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L7 */
  static array_168822 _L7;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L8 */
  static array_real_113 _L8;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L9 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L9;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L10 */
  static kcg_bool _L10;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L11 */
  static L_internal_real_Type_SDM_Types_Pkg _L11;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L12 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L12;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L14 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L14;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L16 */
  static Target_real_T_TargetManagement_types _L16;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::_L17 */
  static ASafe_T_CalcBrakingCurves_types _L17;
  /* CalcBrakingCurves_Pkg::internalOperators::CalculateEBDFootForMRSPorLOA::EBDfoot */
  static L_internal_real_Type_SDM_Types_Pkg EBDfoot;
  
  kcg_copy_Target_real_T_TargetManagement_types(&_L16, target);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L17, aSafe);
  /* InitilizeAccForEBDFootCalc */
  InitilizeAccForEBDFootCalc_CalcBrakingCurves_Pkg_internalOperators(
    &_L16,
    &_L17,
    &_L14);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L3, aSafe);
  /* pow */ for (i2 = 0; i2 < 113; i2++) {
    kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L7[i2], &_L3);
  }
  kcg_copy_Target_real_T_TargetManagement_types(&_L2, target);
  _L6 = _L2.speed;
  /* pow */ for (i1 = 0; i1 < 113; i1++) {
    _L8[i1] = _L6;
  }
  _L1 = IsMRSPorLOATarget;
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&_L5, &_L14);
  if (_L1) {
    for (i = 0; i < 113; i++) {
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&acc, &_L5);
      /* 1 */
      BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators(
        i,
        &acc,
        &_L7[i],
        _L8[i],
        &cond_iterw,
        &_L5);
      _L4 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L4 = 0;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L9, &_L5.BC);
  /* 1 */ SortByDistances_CalcBrakingCurves_Pkg_internalOperators(&_L9, &_L12);
  /* 1 */ getLocationOnCurve_CalcBrakingCurves_types(&_L12, _L6, &_L10, &_L11);
  EBDfoot = _L11;
  noname = _L4;
  _3_noname = _L10;
  return EBDfoot;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

