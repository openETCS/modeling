/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDMI_output_SDM_OutputWrapper.h"

/* SDM_OutputWrapper::CalcDMI_output */
void CalcDMI_output_SDM_OutputWrapper(
  /* SDM_OutputWrapper::CalcDMI_output::in_sdmCmd */ SDM_Commands_real_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_OutputWrapper::CalcDMI_output::preindicationTarget */ L_internal_real_Type_SDM_Types_Pkg preindicationTarget,
  /* SDM_OutputWrapper::CalcDMI_output::sdmToDMI */ speedSupervisionForDMI_T_DMI_Types_Pkg *sdmToDMI)
{
  /* SDM_OutputWrapper::CalcDMI_output::IfBlock2::else */ kcg_bool _3_else_clock_IfBlock2;
  /* SDM_OutputWrapper::CalcDMI_output::IfBlock2::else::else::else */ kcg_bool _1_else_clock_IfBlock2;
  /* SDM_OutputWrapper::CalcDMI_output::IfBlock2::else::else::else::else */ kcg_bool else_clock_IfBlock2;
  /* SDM_OutputWrapper::CalcDMI_output::IfBlock2::else::else */ kcg_bool _2_else_clock_IfBlock2;
  /* SDM_OutputWrapper::CalcDMI_output::IfBlock2 */ kcg_bool IfBlock2_clock;
  
  (*sdmToDMI).valid = (*in_sdmCmd).supervisionStatus !=
    Undefined_Supervision_SDM_Types_Pkg;
  IfBlock2_clock = (*in_sdmCmd).supervisionStatus ==
    Normal_Supervision_SDM_Types_Pkg;
  _2_else_clock_IfBlock2 = (*in_sdmCmd).sdmType == CSM_SDM_Types_Pkg;
  if ((*in_sdmCmd).valid_v_mrdt) {
    (*sdmToDMI).targetSpeed = /* 5 */
      TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).mrdtSpeed);
  }
  else {
    (*sdmToDMI).targetSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  if ((*in_sdmCmd).valid_v_permitted) {
    (*sdmToDMI).permittedSpeed = /* 4 */
      TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).permittedSpeed);
  }
  else {
    (*sdmToDMI).permittedSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  if ((*in_sdmCmd).valid_v_release) {
    (*sdmToDMI).releaseSpeed = /* 3 */
      TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).releaseSpeed);
  }
  else {
    (*sdmToDMI).releaseSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  (*sdmToDMI).locationBrakeTarget = /* 1 */
    TransformL_realToL_int_SDM_Types_Pkg((*in_sdmCmd).targetDistance);
  (*sdmToDMI).location_brake_curve_starting_point = /* 6 */
    TransformV_realToV_int_SDM_Types_Pkg(preindicationTarget);
  if ((*in_sdmCmd).valid_v_sbi) {
    (*sdmToDMI).interventionSpeed = /* 2 */
      TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).sbiSpeed);
  }
  else {
    (*sdmToDMI).interventionSpeed = cDMIUnknownSpeed_DMI_Types_Pkg;
  }
  if (_2_else_clock_IfBlock2) {
    (*sdmToDMI).sup_status = CSM_DMI_Types_Pkg;
  }
  else {
    _1_else_clock_IfBlock2 = (*in_sdmCmd).sdmType == RSM_SDM_Types_Pkg;
    if (_1_else_clock_IfBlock2) {
      (*sdmToDMI).sup_status = RSM_DMI_Types_Pkg;
    }
    else {
      else_clock_IfBlock2 = (*in_sdmCmd).sdmType == TSM_SDM_Types_Pkg;
      if (else_clock_IfBlock2) {
        (*sdmToDMI).sup_status = TSM_DMI_Types_Pkg;
      }
      else {
        (*sdmToDMI).sup_status = supervision_status_unknown_DMI_Types_Pkg;
      }
    }
  }
  if (IfBlock2_clock) {
    (*sdmToDMI).supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  }
  else {
    _3_else_clock_IfBlock2 = (*in_sdmCmd).supervisionStatus ==
      Indication_Supervision_SDM_Types_Pkg;
    if (_3_else_clock_IfBlock2) {
      (*sdmToDMI).supervisionDisplay = supDis_indication_DMI_Types_Pkg;
    }
    else {
      _2_else_clock_IfBlock2 = (*in_sdmCmd).supervisionStatus ==
        Overspeed_Supervision_SDM_Types_Pkg;
      if (_2_else_clock_IfBlock2) {
        (*sdmToDMI).supervisionDisplay = supDis_overspeed_DMI_Types_Pkg;
      }
      else {
        _1_else_clock_IfBlock2 = (*in_sdmCmd).supervisionStatus ==
          Warning_Supervision_SDM_Types_Pkg;
        if (_1_else_clock_IfBlock2) {
          (*sdmToDMI).supervisionDisplay = supDis_warning_DMI_Types_Pkg;
        }
        else {
          else_clock_IfBlock2 = (*in_sdmCmd).supervisionStatus ==
            Intervention_Supervision_SDM_Types_Pkg;
          if (else_clock_IfBlock2) {
            (*sdmToDMI).supervisionDisplay = supDis_intervention_DMI_Types_Pkg;
          }
          else {
            (*sdmToDMI).supervisionDisplay = supDis_normal_DMI_Types_Pkg;
          }
        }
      }
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcDMI_output_SDM_OutputWrapper.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

