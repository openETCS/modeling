/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators_H_
#define _BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators_H_

#include "kcg_types.h"
#include "OneCycle_CalcBrakingCurves_Pkg_internalOperators.h"
#include "setArc_CalcBrakingCurves_Pkg_internalOperators.h"

/* =====================  no input structure  ====================== */


/* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward */
extern void BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators(
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::Index */kcg_int Index,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::BC_acc */BCAccumulator_type_CalcBrakingCurves_Pkg *BC_acc,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::Asafe */ASafe_T_CalcBrakingCurves_types *Asafe,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::LOA_MRSP_Target_speed */V_internal_real_Type_SDM_Types_Pkg LOA_MRSP_Target_speed,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::exitCond */kcg_bool *exitCond,
  /* CalcBrakingCurves_Pkg::internalOperators::BCFoldOperatorForward::BC */BCAccumulator_type_CalcBrakingCurves_Pkg *BC);

#endif /* _BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BCFoldOperatorForward_CalcBrakingCurves_Pkg_internalOperators.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

