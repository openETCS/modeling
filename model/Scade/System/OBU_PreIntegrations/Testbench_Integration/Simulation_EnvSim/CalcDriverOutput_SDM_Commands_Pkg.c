/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDriverOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcDriverOutput */
void CalcDriverOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDriverOutput::sdmType */SDM_Types_T_SDM_Types_Pkg sdmType,
  /* SDM_Commands_Pkg::CalcDriverOutput::supVisStatus */SupervisionStatus_T_SDM_Types_Pkg supVisStatus,
  /* SDM_Commands_Pkg::CalcDriverOutput::mrdt */Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcDriverOutput::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_est */V_odometry_Type_Obu_BasicTypes_Pkg *v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */kcg_bool *valid_v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */V_odometry_Type_Obu_BasicTypes_Pkg *v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */kcg_bool *valid_v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_release */V_odometry_Type_Obu_BasicTypes_Pkg *v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */kcg_bool *valid_v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */V_odometry_Type_Obu_BasicTypes_Pkg *v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */kcg_bool *valid_v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */V_odometry_Type_Obu_BasicTypes_Pkg *v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */kcg_bool *valid_v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */L_internal_Type_Obu_BasicTypes_Pkg *targetDistance,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */kcg_bool *valid_targetDistance)
{
  /* SDM_Commands_Pkg::CalcDriverOutput::owi */
  static kcg_bool owi;
  
  switch (sdmType) {
    case No_SDM_Type_SDM_Types_Pkg :
      *valid_targetDistance = kcg_false;
      *valid_v_release = kcg_false;
      *valid_v_permitted = kcg_false;
      *valid_v_est = kcg_false;
      *v_permitted = 0;
      *v_mrdt = 0;
      *v_floi = 0;
      break;
    case RSM_SDM_Types_Pkg :
      *valid_v_permitted = kcg_false;
      *valid_targetDistance = (Indication_Supervision_SDM_Types_Pkg ==
          supVisStatus) | (supVisStatus ==
          Intervention_Supervision_SDM_Types_Pkg);
      *valid_v_est = *valid_targetDistance;
      *v_permitted = 0;
      *valid_v_release = *valid_targetDistance;
      *v_mrdt = (*speeds).v_p_mrdt;
      *v_floi = 0;
      break;
    case TSM_SDM_Types_Pkg :
      *valid_targetDistance = Undefined_Supervision_SDM_Types_Pkg !=
        supVisStatus;
      *valid_v_est = *valid_targetDistance;
      *v_permitted = (*speeds).v_p_dmi;
      *valid_v_permitted = *valid_targetDistance;
      *valid_v_release = *valid_targetDistance & ((SvL_TargetManagement_types ==
            (*mrdt).targetType) | ((*mrdt).targetType ==
            EoA_TargetManagement_types));
      *v_mrdt = (*speeds).V_target;
      *v_floi = (*speeds).v_FLOI_dmi;
      break;
    case CSM_SDM_Types_Pkg :
      *valid_targetDistance = kcg_false;
      *valid_v_release = kcg_false;
      *valid_v_permitted = kcg_true;
      *valid_v_est = kcg_true;
      *v_permitted = (*speeds).V_MRSP;
      *v_mrdt = 0;
      *v_floi = (*speeds).v_FLOI_dmi;
      break;
    
  }
  *valid_v_mrdt = *valid_targetDistance;
  owi = (Overspeed_Supervision_SDM_Types_Pkg == supVisStatus) | (supVisStatus ==
      Warning_Supervision_SDM_Types_Pkg) | (supVisStatus ==
      Intervention_Supervision_SDM_Types_Pkg);
  switch (sdmType) {
    case CSM_SDM_Types_Pkg :
      *valid_v_floi = owi;
      *targetDistance = 0;
      break;
    case TSM_SDM_Types_Pkg :
      *valid_v_floi = owi;
      *targetDistance = (*locations).d_target;
      break;
    case RSM_SDM_Types_Pkg :
      *valid_v_floi = kcg_false;
      *targetDistance = (*locations).d_target;
      break;
    case No_SDM_Type_SDM_Types_Pkg :
      *valid_v_floi = kcg_false;
      *targetDistance = 0;
      break;
    
  }
  *v_release = (*speeds).V_release;
  *v_est = (*speeds).V_est;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcDriverOutput_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

