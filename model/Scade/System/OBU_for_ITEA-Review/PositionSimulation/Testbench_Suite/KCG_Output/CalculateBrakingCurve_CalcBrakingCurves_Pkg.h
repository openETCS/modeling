/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _CalculateBrakingCurve_CalcBrakingCurves_Pkg_H_
#define _CalculateBrakingCurve_CalcBrakingCurves_Pkg_H_

#include "kcg_types.h"
#include "emptyBCAcc_CalcBrakingCurves_Pkg.h"
#include "BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.h"
#include "InitalValues_CalcBrakingCurves_Pkg_internalOperators.h"
#include "SortByDistances_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */


/* CalcBrakingCurves_Pkg::CalculateBrakingCurve */
extern void CalculateBrakingCurve_CalcBrakingCurves_Pkg(
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Asafe */ ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::Target */ Target_real_T_TargetManagement_types *Target,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::d_est_front */ kcg_real d_est_front,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::cond */ kcg_bool *cond,
  /* CalcBrakingCurves_Pkg::CalculateBrakingCurve::BC */ ParabolaCurve_T_CalcBrakingCurves_types *BC);

#endif /* _CalculateBrakingCurve_CalcBrakingCurves_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalculateBrakingCurve_CalcBrakingCurves_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

