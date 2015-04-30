/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"

void SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
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
  outC->target.valid = kcg_true;
  outC->target.speed = 0;
  outC->target.distance = 0;
  outC->target.targetType = EoA_TargetManagement_types;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.interventionSpeed = 0;
  outC->sdmToDMI.location_brake_curve_starting_point = 0;
  outC->sdmToDMI.locationBrakeTarget = 0;
  outC->sdmToDMI.releaseSpeed = 0;
  outC->sdmToDMI.permittedSpeed = 0;
  outC->sdmToDMI.targetSpeed = 0;
  outC->sdmToDMI.valid = kcg_true;
  TargetManagement_init_TargetManagement_pkg(&outC->Context_2);
  CalcBrakingCurves_integration_init_CalcBrakingCurves_Pkg(&outC->Context_1);
  SDM_Commands_init_SDM_Commands_Pkg(&outC->_1_Context_1);
  SDM_OutputWrapper_init_SDM_OutputWrapper(&outC->_2_Context_1);
}


void SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  /* 1 */ SDM_OutputWrapper_reset_SDM_OutputWrapper(&outC->_2_Context_1);
  /* 1 */ SDM_Commands_reset_SDM_Commands_Pkg(&outC->_1_Context_1);
  /* 1 */
  CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(&outC->Context_1);
  /* 2 */ TargetManagement_reset_TargetManagement_pkg(&outC->Context_2);
}

/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
void SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRSP */ MRSP_Profile_t *MRSP,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MA */ MAs_t *MA,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::m_level */ M_LEVEL m_level,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MA_updated */ kcg_bool MA_updated,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRSP_updated */ kcg_bool MRSP_updated,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  Speeds_T_SDM_Types_Pkg tmp;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry_internal */ Odometry_real_T_SDM_Types_Pkg odometry_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::V_ura_internal */ V_internal_real_Type_SDM_Types_Pkg V_ura_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::targetCollection */ TargetCollection_T_TargetManagement_types targetCollection;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Trainlocations_internal */ TrainLocations_real_T_SDM_Types_Pkg Trainlocations_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRSP_internal */ MRSP_internal_T_TargetManagement_types MRSP_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::v_mrsp_internal */ V_internal_real_Type_SDM_Types_Pkg v_mrsp_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::v_target_internal */ V_internal_real_Type_SDM_Types_Pkg v_target_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::mrt_internal */ Target_real_T_TargetManagement_types mrt_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::v_p_sbd */ V_internal_real_Type_SDM_Types_Pkg v_p_sbd;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::v_p_ebd */ V_internal_real_Type_SDM_Types_Pkg v_p_ebd;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::v_p_ebd_valid */ kcg_bool v_p_ebd_valid;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L27 */ M_LEVEL _L27;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L55 */ MAs_real_T_TargetManagement_types _L55;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L70 */ NationalValues_real_T_SDM_Types_Pkg _L70;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L74 */ V_internal_real_Type_SDM_Types_Pkg _L74;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L113 */ kcg_bool _L113;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L111 */ SDM_Locations_T_SDM_Types_Pkg _L111;
  
  /* 1 */
  SDM_InputWrapper_SDM_Input_Wrappers(
    NationalValues,
    TrainPosition,
    odometry,
    m_level,
    trainProps,
    MRSP,
    MA,
    MA_updated,
    MRSP_updated,
    &_L27,
    &MRSP_internal,
    &_L55,
    &odometry_internal,
    &V_ura_internal,
    &Trainlocations_internal,
    &v_p_ebd_valid,
    &_L113,
    &_L70);
  /* 2 */
  TargetManagement_TargetManagement_pkg(
    &MRSP_internal,
    _L113,
    &_L55,
    v_p_ebd_valid,
    &Trainlocations_internal,
    &outC->Context_2);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &targetCollection,
    &outC->Context_2.targetCollection);
  _L74 = /* 1 */
    ReleaseSpeed_Selection_SDM_ReleaseSoeed_Selection_pkg(
      outC->Context_2.V_releaseFromMA,
      &_L70,
      outC->Context_2.V_releaseFromMAValid);
  /* 1 */
  CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
    (ASafe_T_CalcBrakingCurves_types *) &TestcaseA_safe_CalcBrakingCurves_Pkg,
    &Trainlocations_internal,
    &targetCollection,
    &outC->Context_1);
  /* 4 */
  SDMLimitLocations_TargetLimits_Pkg(
    &MRSP_internal,
    &odometry_internal,
    &Trainlocations_internal,
    &targetCollection,
    &outC->Context_1.curveCollection,
    _L74,
    V_ura_internal,
    _L70.q_nvinhsmicperm,
    kcg_false,
    0.0,
    0.0,
    0.0,
    &_L111,
    &mrt_internal,
    &_L113,
    &v_target_internal,
    &v_mrsp_internal,
    &v_p_sbd,
    &v_p_ebd,
    &v_p_ebd_valid);
  /* 1 */
  CalcSpeeds_SDM_Types_Pkg(
    &odometry_internal,
    v_mrsp_internal,
    _L74,
    v_target_internal,
    &mrt_internal,
    v_p_ebd,
    v_p_sbd,
    v_p_ebd_valid,
    _L111.FLOI_of_V_est,
    &tmp);
  /* 1 */
  SDM_Commands_SDM_Commands_Pkg(
    &targetCollection,
    &odometry_internal,
    &tmp,
    &_L111,
    kcg_true,
    _L27,
    &mrt_internal,
    &Trainlocations_internal,
    _L113,
    &outC->_1_Context_1);
  /* 1 */
  SDM_OutputWrapper_SDM_OutputWrapper(
    &outC->_1_Context_1.sdmCmd,
    outC->_1_Context_1.targetSpeedReached,
    outC->_1_Context_1.eoaOverpassed,
    0.0,
    &mrt_internal,
    &odometry_internal,
    &_L70,
    kcg_false,
    &outC->_2_Context_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->sdmToDMI,
    &outC->_2_Context_1.sdmToDMI);
  kcg_copy_Target_T_TargetManagement_types(
    &outC->target,
    &outC->_2_Context_1.out_target);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(
    &outC->sdmCommands,
    &outC->_2_Context_1.sdmCommands);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->brakeCmd,
    &outC->_2_Context_1.brakeCmd);
  outC->EOA_overpassed = outC->_2_Context_1.EOA_overpassed;
  outC->Target_Speed_Reached = outC->_2_Context_1.Target_Speed_Reached;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

