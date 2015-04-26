/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TSMForDMI_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::TSMForDMI */
void TSMForDMI_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::TSMForDMI::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::TSMForDMI::mrdt */ Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::TSMForDMI::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::TSMForDMI::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::TSMForDMI::v_permitted */ V_internal_real_Type_SDM_Types_Pkg *v_permitted,
  /* SDM_Commands_Pkg::TSMForDMI::v_mrdt */ V_internal_real_Type_SDM_Types_Pkg *v_mrdt,
  /* SDM_Commands_Pkg::TSMForDMI::v_floi */ V_internal_real_Type_SDM_Types_Pkg *v_floi,
  /* SDM_Commands_Pkg::TSMForDMI::targetDistance */ L_internal_real_Type_SDM_Types_Pkg *targetDistance)
{
  *targetDistance = /* 1 */
    TargetDistance_SDM_Types_Pkg(
      (*locations).d_P_of_V_target,
      (*trainLocations).d_maxSafeFrontEndPos,
      (*trainLocations).d_est_frontendPos,
      (*locations).d_svl,
      (*locations).d_eoa,
      (*mrdt).targetType);
  *v_mrdt = (*mrdt).speed;
  *v_floi = /* 1 */
    FloiSpeed_SDM_Types_Pkg(
      (*speeds).v_sbi_mrdt,
      *v_mrdt,
      (*speeds).V_MRSP,
      (*speeds).V_release,
      (*mrdt).targetType);
  *v_permitted = /* 1 */
    DisplayedPermittedSpeed_SDM_Types_Pkg(
      (*speeds).v_p_mrdt,
      *v_mrdt,
      (*speeds).V_MRSP);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TSMForDMI_SDM_Commands_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

