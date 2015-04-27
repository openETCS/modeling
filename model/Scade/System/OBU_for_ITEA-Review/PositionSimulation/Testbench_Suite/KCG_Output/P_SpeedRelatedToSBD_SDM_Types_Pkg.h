/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _P_SpeedRelatedToSBD_SDM_Types_Pkg_H_
#define _P_SpeedRelatedToSBD_SDM_Types_Pkg_H_

#include "kcg_types.h"
#include "getSpeedOnCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */


/* SDM_Types_Pkg::P_SpeedRelatedToSBD */
extern V_internal_real_Type_SDM_Types_Pkg P_SpeedRelatedToSBD_SDM_Types_Pkg(
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::d_estfront */ L_internal_real_Type_SDM_Types_Pkg d_estfront,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::guiParabola */ ParabolaCurve_T_CalcBrakingCurves_types *guiParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::t_bs1 */ T_internal_real_Type_SDM_Types_Pkg t_bs1,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::sdbParabola */ ParabolaCurve_T_CalcBrakingCurves_types *sdbParabola,
  /* SDM_Types_Pkg::P_SpeedRelatedToSBD::d_eoa */ L_internal_real_Type_SDM_Types_Pkg d_eoa);

#endif /* _P_SpeedRelatedToSBD_SDM_Types_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** P_SpeedRelatedToSBD_SDM_Types_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

