/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _RSMForDMI_SDM_Commands_Pkg_H_
#define _RSMForDMI_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "TargetDistance_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */


/* SDM_Commands_Pkg::RSMForDMI */
extern void RSMForDMI_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::RSMForDMI::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::RSMForDMI::target */ TargetType_T_TargetManagement_types target,
  /* SDM_Commands_Pkg::RSMForDMI::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::RSMForDMI::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::RSMForDMI::v_mrdt */ V_internal_real_Type_SDM_Types_Pkg *v_mrdt,
  /* SDM_Commands_Pkg::RSMForDMI::targetDistance */ L_internal_real_Type_SDM_Types_Pkg *targetDistance);

#endif /* _RSMForDMI_SDM_Commands_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** RSMForDMI_SDM_Commands_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

