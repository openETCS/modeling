/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_OutputWrapper_SDM_OutputWrapper.h"

void SDM_OutputWrapper_init_SDM_OutputWrapper(
  outC_SDM_OutputWrapper_SDM_OutputWrapper *outC)
{
  outC->Target_Speed_Reached = kcg_true;
  outC->EOA_overpassed = kcg_true;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.valid = kcg_true;
  outC->sdmCommands.ebCmd = kcg_true;
  outC->sdmCommands.triggeredTCO = kcg_true;
  outC->sdmCommands.revokedTCO = kcg_true;
  outC->sdmCommands.triggeredEB = kcg_true;
  outC->sdmCommands.revokedEB = kcg_true;
  outC->sdmCommands.triggeredSB = kcg_true;
  outC->sdmCommands.revokedSB = kcg_true;
  outC->sdmCommands.triggeredSupervisionStatus =
    Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.sdmType = CSM_SDM_Types_Pkg;
  outC->sdmCommands.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.valid_targetDistance = kcg_true;
  outC->sdmCommands.targetDistance = 0;
  outC->sdmCommands.valid_v_sbi = kcg_true;
  outC->sdmCommands.sbiSpeed = 0;
  outC->sdmCommands.valid_v_mrdt = kcg_true;
  outC->sdmCommands.mrdtSpeed = 0;
  outC->sdmCommands.valid_v_release = kcg_true;
  outC->sdmCommands.releaseSpeed = 0;
  outC->sdmCommands.valid_v_permitted = kcg_true;
  outC->sdmCommands.permittedSpeed = 0;
  outC->sdmCommands.valid_v_est = kcg_true;
  outC->sdmCommands.estimatedSpeed = 0;
  outC->sdmCommands.valid = kcg_true;
  outC->out_target.valid = kcg_true;
  outC->out_target.speed = 0;
  outC->out_target.distance = 0;
  outC->out_target.targetType = EoA_TargetManagement_types;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.interventionSpeed = 0;
  outC->sdmToDMI.location_brake_curve_starting_point = 0;
  outC->sdmToDMI.locationBrakeTarget = 0;
  outC->sdmToDMI.releaseSpeed = 0;
  outC->sdmToDMI.permittedSpeed = 0;
  outC->sdmToDMI.targetSpeed = 0;
  outC->sdmToDMI.valid = kcg_true;
  CalcBrakeCmd_init_SDM_OutputWrapper(&outC->Context_1);
}


void SDM_OutputWrapper_reset_SDM_OutputWrapper(
  outC_SDM_OutputWrapper_SDM_OutputWrapper *outC)
{
  /* 1 */ CalcBrakeCmd_reset_SDM_OutputWrapper(&outC->Context_1);
}

/* SDM_OutputWrapper::SDM_OutputWrapper */
void SDM_OutputWrapper_SDM_OutputWrapper(
  /* SDM_OutputWrapper::SDM_OutputWrapper::in_sdmCmd */ SDM_Commands_real_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_OutputWrapper::SDM_OutputWrapper::targetSpeedReachedIn */ kcg_bool targetSpeedReachedIn,
  /* SDM_OutputWrapper::SDM_OutputWrapper::eoaOverpassedIn */ kcg_bool eoaOverpassedIn,
  /* SDM_OutputWrapper::SDM_OutputWrapper::preindicationTarget */ L_internal_real_Type_SDM_Types_Pkg preindicationTarget,
  /* SDM_OutputWrapper::SDM_OutputWrapper::in_target */ Target_real_T_TargetManagement_types *in_target,
  /* SDM_OutputWrapper::SDM_OutputWrapper::odometry */ Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_OutputWrapper::SDM_OutputWrapper::NationalValues */ NationalValues_real_T_SDM_Types_Pkg *NationalValues,
  /* SDM_OutputWrapper::SDM_OutputWrapper::NoSBInterface */ kcg_bool NoSBInterface,
  outC_SDM_OutputWrapper_SDM_OutputWrapper *outC)
{
  /* SDM_OutputWrapper::SDM_OutputWrapper::_L178 */ kcg_bool _L178;
  /* SDM_OutputWrapper::SDM_OutputWrapper::_L177 */ kcg_bool _L177;
  /* SDM_OutputWrapper::SDM_OutputWrapper::_L176 */ kcg_bool _L176;
  /* SDM_OutputWrapper::SDM_OutputWrapper::_L175 */ kcg_bool _L175;
  
  outC->out_target.targetType = (*in_target).targetType;
  outC->out_target.valid = (*in_target).valid;
  outC->sdmCommands.valid = (*in_sdmCmd).valid;
  outC->sdmCommands.valid_v_est = (*in_sdmCmd).valid_v_est;
  outC->sdmCommands.valid_v_permitted = (*in_sdmCmd).valid_v_permitted;
  outC->sdmCommands.valid_v_release = (*in_sdmCmd).valid_v_release;
  outC->sdmCommands.valid_v_mrdt = (*in_sdmCmd).valid_v_mrdt;
  outC->sdmCommands.valid_v_sbi = (*in_sdmCmd).valid_v_sbi;
  outC->sdmCommands.valid_targetDistance = (*in_sdmCmd).valid_targetDistance;
  outC->sdmCommands.supervisionStatus = (*in_sdmCmd).supervisionStatus;
  outC->sdmCommands.sdmType = (*in_sdmCmd).sdmType;
  outC->sdmCommands.revokedSupervisionStatus =
    (*in_sdmCmd).revokedSupervisionStatus;
  outC->sdmCommands.triggeredSupervisionStatus =
    (*in_sdmCmd).triggeredSupervisionStatus;
  outC->sdmCommands.revokedSB = (*in_sdmCmd).revokedSB;
  outC->sdmCommands.triggeredSB = (*in_sdmCmd).triggeredSB;
  outC->sdmCommands.revokedEB = (*in_sdmCmd).revokedEB;
  outC->sdmCommands.triggeredEB = (*in_sdmCmd).triggeredEB;
  outC->sdmCommands.revokedTCO = (*in_sdmCmd).revokedTCO;
  outC->sdmCommands.triggeredTCO = (*in_sdmCmd).triggeredTCO;
  outC->sdmCommands.ebCmd = (*in_sdmCmd).ebCmd;
  outC->Target_Speed_Reached = targetSpeedReachedIn;
  outC->EOA_overpassed = eoaOverpassedIn;
  /* 1 */
  IncorporateAbsenceOfSB_SDM_OutputWrapper(
    in_sdmCmd,
    odometry,
    NationalValues,
    NoSBInterface,
    &_L175,
    &_L176,
    &_L177,
    &_L178);
  /* 1 */
  CalcBrakeCmd_SDM_OutputWrapper(_L175, _L176, _L177, _L178, &outC->Context_1);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->brakeCmd,
    &outC->Context_1.brakeCmd);
  /* 1 */
  CalcDMI_output_SDM_OutputWrapper(
    in_sdmCmd,
    preindicationTarget,
    &outC->sdmToDMI);
  outC->sdmCommands.estimatedSpeed = /* 2 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).estimatedSpeed);
  outC->sdmCommands.permittedSpeed = /* 3 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).permittedSpeed);
  outC->sdmCommands.releaseSpeed = /* 4 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).releaseSpeed);
  outC->sdmCommands.mrdtSpeed = /* 5 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).mrdtSpeed);
  outC->sdmCommands.sbiSpeed = /* 6 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_sdmCmd).sbiSpeed);
  outC->sdmCommands.targetDistance = /* 2 */
    TransformL_realToL_int_SDM_Types_Pkg((*in_sdmCmd).targetDistance);
  outC->out_target.distance = /* 1 */
    TransformL_realToL_int_SDM_Types_Pkg((*in_target).distance);
  outC->out_target.speed = /* 1 */
    TransformV_realToV_int_SDM_Types_Pkg((*in_target).speed);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SDM_OutputWrapper_SDM_OutputWrapper.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

