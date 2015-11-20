/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.h"

/* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements */
void deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::oldCurve */ ParabolaCurve_T_CalcBrakingCurves_types *oldCurve,
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::condition */ kcg_bool *condition,
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::newCurve */ ParabolaCurve_T_CalcBrakingCurves_types *newCurve)
{
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements */
  static ParabolaCurve_T_CalcBrakingCurves_types op_call;
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements */
  static kcg_bool ck_every;
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::_L2 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L2;
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::_L21 */
  static kcg_bool _L21;
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::_L23 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L23;
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::_L24 */
  static ParabolaCurveValid_T_CalcBrakingCurves_types _L24;
  /* CalcBrakingCurves_Pkg::internalOperators::deleteLeadingUndefinedElements::_L25 */
  static kcg_bool _L25;
  
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L2, oldCurve);
  kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(&_L24, &_L2.valid);
  _L21 = _L24[0];
  _L25 = !_L21;
  ck_every = _L25;
  /* ck_deleteLeadingUndefinedElements */ if (ck_every) {
    /* popLeadingArc */
    popLeadingArc_CalcBrakingCurves_Pkg_internalOperators(&_L2, &op_call);
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L23, &op_call);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L23, &_L2);
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(newCurve, &_L23);
  *condition = _L25;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

