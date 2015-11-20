/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateBrakingCurve_CalcBrakingCurves_Pkg.h"

/* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
void CalculateBrakingCurve_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Target */ Target_real_T_TargetManagement_types *Target,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::d_est_front */ L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::cond */ kcg_bool *cond,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::BC */ ParabolaCurve_T_CalcBrakingCurves_types *BC)
{
  static kcg_int i2;
  static kcg_int i1;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
  static BCAccumulator_type_CalcBrakingCurves_Pkg acc;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
  static BCAccumulator_type_CalcBrakingCurves_Pkg op_call;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
  static kcg_bool ck_every;
  static kcg_int noname;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L9 */
  static kcg_int _L9;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L11 */
  static array_168822 _L11;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L12 */
  static array_real_113 _L12;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L13 */
  static ASafe_T_CalcBrakingCurves_types _L13;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L15 */
  static L_internal_real_Type_SDM_Types_Pkg _L15;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L19 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L19;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L97 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L97;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L114 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L114;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L125 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L125;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L134 */
  static BCAccumulator_type_CalcBrakingCurves_Pkg _L134;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L136 */
  static Target_real_T_TargetManagement_types _L136;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L137 */
  static ASafe_T_CalcBrakingCurves_types _L137;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L138 */
  static kcg_bool _L138;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L139 */
  static TargetType_T_TargetManagement_types _L139;
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::_L140 */
  static TargetType_T_TargetManagement_types _L140;
  
  _L140 = invalid_TargetManagement_types;
  kcg_copy_Target_real_T_TargetManagement_types(&_L136, Target);
  _L139 = _L136.targetType;
  _L138 = _L140 != _L139;
  ck_every = _L138;
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L137, Asafe);
  /* ck_CalculateBrakingCurve */ if (ck_every) {
    /* InitalValues */
    InitalValues_CalcBrakingCurves_Pkg_internalOperators(
      &_L136,
      &_L137,
      &op_call);
  }
  /* emptyBCAcc */ emptyBCAcc_CalcBrakingCurves_Pkg(&_L134);
  /* ck_CalculateBrakingCurve */ if (ck_every) {
    kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&_L97, &op_call);
  }
  else {
    kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&_L97, &_L134);
  }
  kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L13, Asafe);
  /* pow */ for (i2 = 0; i2 < 113; i2++) {
    kcg_copy_ASafe_T_CalcBrakingCurves_types(&_L11[i2], &_L13);
  }
  _L15 = d_est_front;
  /* pow */ for (i1 = 0; i1 < 113; i1++) {
    _L12[i1] = _L15;
  }
  kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&_L19, &_L97);
  if (_L138) {
    for (i = 0; i < 113; i++) {
      kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(&acc, &_L19);
      /* 1 */
      BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators(
        i,
        &acc,
        &_L11[i],
        _L12[i],
        &cond_iterw,
        &_L19);
      _L9 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L9 = 0;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L125, &_L19.BC);
  /* SortByDistances */
  SortByDistances_CalcBrakingCurves_Pkg_internalOperators(&_L125, &_L114);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(BC, &_L114);
  noname = _L9;
  *cond = _L138;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalculateBrakingCurve_CalcBrakingCurves_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

