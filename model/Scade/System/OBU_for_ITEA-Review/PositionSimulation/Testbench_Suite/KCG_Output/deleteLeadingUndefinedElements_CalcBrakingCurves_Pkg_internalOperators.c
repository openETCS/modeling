/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
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
  *condition = !(*oldCurve).valid[0];
  if (*condition) {
    /* removeLeadingElement */
    removeLeadingElement_CalcBrakingCurves_Pkg_internalOperators(
      oldCurve,
      newCurve);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(newCurve, oldCurve);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** deleteLeadingUndefinedElements_CalcBrakingCurves_Pkg_internalOperators.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

