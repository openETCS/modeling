/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _getSpeedOnCurve_CalcBrakingCurves_types_H_
#define _getSpeedOnCurve_CalcBrakingCurves_types_H_

#include "kcg_types.h"
#include "getSpeedOnCurveArc_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */


/* CalcBrakingCurves_types::getSpeedOnCurve */
extern void getSpeedOnCurve_CalcBrakingCurves_types(
  /* CalcBrakingCurves_types::getSpeedOnCurve::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* CalcBrakingCurves_types::getSpeedOnCurve::position */ L_internal_real_Type_SDM_Types_Pkg position,
  /* CalcBrakingCurves_types::getSpeedOnCurve::valid */ kcg_bool *valid,
  /* CalcBrakingCurves_types::getSpeedOnCurve::speed */ V_internal_real_Type_SDM_Types_Pkg *speed);

#endif /* _getSpeedOnCurve_CalcBrakingCurves_types_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** getSpeedOnCurve_CalcBrakingCurves_types.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

