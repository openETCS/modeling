/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators_H_
#define _BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "OneCycle_CalcBrakingCurves_Pkg_internalOperators.h"
#include "setArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward */
extern void BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Index */kcg_int Index,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC_acc */BCAccumulator_type_CalcBrakingCurves_Pkg *BC_acc,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::Asafe */ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::d_est_front */L_internal_real_Type_SDM_Types_Pkg d_est_front,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::exitCond */kcg_bool *exitCond,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorBackward::BC */BCAccumulator_type_CalcBrakingCurves_Pkg *BC);

#endif /* _BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BCFoldOperatorBackward_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

