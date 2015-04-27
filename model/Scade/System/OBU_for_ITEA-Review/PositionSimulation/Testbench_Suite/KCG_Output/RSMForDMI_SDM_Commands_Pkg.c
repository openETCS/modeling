/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RSMForDMI_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::RSMForDMI */
void RSMForDMI_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::RSMForDMI::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::RSMForDMI::target */ TargetType_T_TargetManagement_types target,
  /* SDM_Commands_Pkg::RSMForDMI::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::RSMForDMI::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::RSMForDMI::v_mrdt */ V_internal_real_Type_SDM_Types_Pkg *v_mrdt,
  /* SDM_Commands_Pkg::RSMForDMI::targetDistance */ L_internal_real_Type_SDM_Types_Pkg *targetDistance)
{
  *targetDistance = /* 2 */
    TargetDistance_SDM_Types_Pkg(
      (*locations).d_P_of_V_target,
      (*trainLocations).d_maxSafeFrontEndPos,
      (*trainLocations).d_est_frontendPos,
      (*locations).d_svl,
      (*locations).d_eoa,
      target);
  *v_mrdt = (*speeds).v_p_mrdt;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RSMForDMI_SDM_Commands_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

