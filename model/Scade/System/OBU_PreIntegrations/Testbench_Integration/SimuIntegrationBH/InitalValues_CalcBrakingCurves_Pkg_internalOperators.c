/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitalValues_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::InitalValues */
void InitalValues_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::target */ Target_real_T_TargetManagement_types *target,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe,
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::BCAcc */ BCAccumulator_type_CalcBrakingCurves_Pkg *BCAcc)
{
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues */
  static L_internal_real_Type_SDM_Types_Pkg op_call;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues */
  static kcg_bool ck_every;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::EBDFootMRSPorLOA */
  static L_internal_real_Type_SDM_Types_Pkg EBDFootMRSPorLOA;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::targetIsMRSPorLOA */
  static kcg_bool targetIsMRSPorLOA;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L2 */
  static ASafe_T_CalcBrakingCurves_types _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L1 */
  static Target_real_T_TargetManagement_types _L1;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L27 */
  static Target_real_T_TargetManagement_types _L27;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L39 */
  static ASafe_T_CalcBrakingCurves_types _L39;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L40 */
  static Target_real_T_TargetManagement_types _L40;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L97 */
  static kcg_bool _L97;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L103 */
  static L_internal_real_Type_SDM_Types_Pkg _L103;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L141 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L141;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L146 */
  static kcg_bool _L146;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L147 */
  static L_internal_real_Type_SDM_Types_Pkg _L147;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L148 */
  static L_internal_real_Type_SDM_Types_Pkg _L148;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L149 */
  static Target_real_T_TargetManagement_types _L149;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L150 */
  static L_internal_real_Type_SDM_Types_Pkg _L150;
  /* CalcBrakingCurves_Pkg::internalOperators::InitalValues::_L151 */
  static kcg_real _L151;
  
  kcg_copy_Target_real_T_TargetManagement_types(&_L27, target);
  _L97 = /* isMRSPorLOATarget */
    isMRSPorLOATarget_CalcBrakingCurves_Pkg_internalOperators(&_L27);
  ck_every = _L97;
  kcg_copy_Target_real_T_TargetManagement_types(&_L40, target);
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L39, aSafe);
  /* ck_InitalValues */ if (ck_every) {
    op_call = /* CalculateEBDFootForMRSPorLOA */
      CalculateEBDFootForMRSPorLOA_CalcBrakingCurves_Pkg_internalOperators(
        _L97,
        &_L40,
        &_L39);
  }
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L2, aSafe);
  kcg_copy_Target_real_T_TargetManagement_types(&_L1, target);
  targetIsMRSPorLOA = _L97;
  _L146 = targetIsMRSPorLOA;
  _L151 = 0.0;
  /* ck_InitalValues */ if (ck_every) {
    _L103 = op_call;
  }
  else {
    _L103 = _L151;
  }
  EBDFootMRSPorLOA = _L103;
  _L147 = EBDFootMRSPorLOA;
  kcg_copy_Target_real_T_TargetManagement_types(&_L149, target);
  _L150 = _L149.distance;
  /* 4 */ if (_L146) {
    _L148 = _L147;
  }
  else {
    _L148 = _L150;
  }
  /* InitAccWithTargetArc */
  InitAccWithTargetArc_CalcBrakingCurves_Pkg_internalOperators(
    _L148,
    &_L1,
    &_L2,
    &_L141);
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(BCAcc, &_L141);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InitalValues_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

