/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDriverOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcDriverOutput */
void CalcDriverOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDriverOutput::sdmType */ SDM_Types_T_SDM_Types_Pkg sdmType,
  /* SDM_Commands_Pkg::CalcDriverOutput::supVisStatus */ SupervisionStatus_T_SDM_Types_Pkg supVisStatus,
  /* SDM_Commands_Pkg::CalcDriverOutput::mrdt */ Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcDriverOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcDriverOutput::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_est */ V_internal_real_Type_SDM_Types_Pkg *v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_est */ kcg_bool *valid_v_est,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_permitted */ V_internal_real_Type_SDM_Types_Pkg *v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_permitted */ kcg_bool *valid_v_permitted,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_release */ V_internal_real_Type_SDM_Types_Pkg *v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_release */ kcg_bool *valid_v_release,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_mrdt */ V_internal_real_Type_SDM_Types_Pkg *v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_mrdt */ kcg_bool *valid_v_mrdt,
  /* SDM_Commands_Pkg::CalcDriverOutput::v_floi */ V_internal_real_Type_SDM_Types_Pkg *v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_v_floi */ kcg_bool *valid_v_floi,
  /* SDM_Commands_Pkg::CalcDriverOutput::targetDistance */ L_internal_real_Type_SDM_Types_Pkg *targetDistance,
  /* SDM_Commands_Pkg::CalcDriverOutput::valid_targetDistance */ kcg_bool *valid_targetDistance)
{
  /* SDM_Commands_Pkg::CalcDriverOutput::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* SDM_Commands_Pkg::CalcDriverOutput::IfBlock1::else::else::then::_L15 */ L_internal_real_Type_SDM_Types_Pkg _L15_IfBlock1;
  /* SDM_Commands_Pkg::CalcDriverOutput::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* SDM_Commands_Pkg::CalcDriverOutput::IfBlock1::else::then::_L8 */ L_internal_real_Type_SDM_Types_Pkg _L8_IfBlock1;
  /* SDM_Commands_Pkg::CalcDriverOutput::isCSM */ kcg_bool isCSM;
  /* SDM_Commands_Pkg::CalcDriverOutput::owi */ kcg_bool owi;
  
  *v_release = (*speeds).V_release;
  *v_est = (*speeds).V_est;
  isCSM = CSM_SDM_Types_Pkg == sdmType;
  if (isCSM) {
    *valid_targetDistance = kcg_false;
    *valid_v_release = kcg_false;
    *valid_v_permitted = kcg_true;
    *valid_v_est = kcg_true;
    *v_permitted = (*speeds).V_MRSP;
    *v_mrdt = 0.0;
    *v_floi = (*speeds).v_FLOI;
  }
  else {
    _1_else_clock_IfBlock1 = RSM_SDM_Types_Pkg == sdmType;
    if (_1_else_clock_IfBlock1) {
      *valid_v_permitted = kcg_false;
      /* 1 */
      RSMForDMI_SDM_Commands_Pkg(
        speeds,
        (*mrdt).targetType,
        locations,
        trainLocations,
        v_mrdt,
        &_L8_IfBlock1);
      *valid_targetDistance = (Indication_Supervision_SDM_Types_Pkg ==
          supVisStatus) | (supVisStatus ==
          Intervention_Supervision_SDM_Types_Pkg);
      *valid_v_est = *valid_targetDistance;
      *v_permitted = 0.0;
      *valid_v_release = *valid_targetDistance;
      *v_floi = 0.0;
    }
    else {
      else_clock_IfBlock1 = sdmType == TSM_SDM_Types_Pkg;
      if (else_clock_IfBlock1) {
        /* 1 */
        TSMForDMI_SDM_Commands_Pkg(
          speeds,
          mrdt,
          locations,
          trainLocations,
          v_permitted,
          v_mrdt,
          v_floi,
          &_L15_IfBlock1);
        *valid_targetDistance = Undefined_Supervision_SDM_Types_Pkg !=
          supVisStatus;
        *valid_v_est = *valid_targetDistance;
        *valid_v_permitted = *valid_targetDistance;
        *valid_v_release = *valid_targetDistance &
          ((SvL_TargetManagement_types == (*mrdt).targetType) |
            ((*mrdt).targetType == EoA_TargetManagement_types));
      }
      else {
        *valid_targetDistance = kcg_false;
        *valid_v_release = kcg_false;
        *valid_v_permitted = kcg_false;
        *valid_v_est = kcg_false;
        *v_permitted = 0.0;
        *v_mrdt = 0.0;
        *v_floi = 0.0;
      }
    }
  }
  *valid_v_mrdt = *valid_targetDistance;
  owi = (Overspeed_Supervision_SDM_Types_Pkg == supVisStatus) | (supVisStatus ==
      Warning_Supervision_SDM_Types_Pkg) | (supVisStatus ==
      Intervention_Supervision_SDM_Types_Pkg);
  if (isCSM) {
    *valid_v_floi = owi;
    *targetDistance = 0.0;
  }
  else if (_1_else_clock_IfBlock1) {
    *valid_v_floi = kcg_false;
    *targetDistance = _L8_IfBlock1;
  }
  else if (else_clock_IfBlock1) {
    *valid_v_floi = owi;
    *targetDistance = _L15_IfBlock1;
  }
  else {
    *valid_v_floi = kcg_false;
    *targetDistance = 0.0;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcDriverOutput_SDM_Commands_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

