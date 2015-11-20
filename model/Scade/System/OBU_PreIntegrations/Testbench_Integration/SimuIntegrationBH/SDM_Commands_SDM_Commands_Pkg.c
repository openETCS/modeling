/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void SDM_Commands_init_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->eoaOverpassed = kcg_true;
  outC->targetSpeedReached = kcg_true;
  outC->sdmCmd.valid = kcg_true;
  outC->sdmCmd.estimatedSpeed = 0;
  outC->sdmCmd.valid_v_est = kcg_true;
  outC->sdmCmd.permittedSpeed = 0;
  outC->sdmCmd.valid_v_permitted = kcg_true;
  outC->sdmCmd.releaseSpeed = 0;
  outC->sdmCmd.valid_v_release = kcg_true;
  outC->sdmCmd.mrdtSpeed = 0;
  outC->sdmCmd.valid_v_mrdt = kcg_true;
  outC->sdmCmd.sbiSpeed = 0;
  outC->sdmCmd.valid_v_sbi = kcg_true;
  outC->sdmCmd.targetDistance = 0;
  outC->sdmCmd.valid_targetDistance = kcg_true;
  outC->sdmCmd.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCmd.sdmType = CSM_SDM_Types_Pkg;
  outC->sdmCmd.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCmd.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCmd.revokedSB = kcg_true;
  outC->sdmCmd.triggeredSB = kcg_true;
  outC->sdmCmd.revokedEB = kcg_true;
  outC->sdmCmd.triggeredEB = kcg_true;
  outC->sdmCmd.revokedTCO = kcg_true;
  outC->sdmCmd.triggeredTCO = kcg_true;
  outC->sdmCmd.ebCmd = kcg_true;
  outC->sdmToDMI.valid = kcg_true;
  outC->sdmToDMI.targetSpeed = 0;
  outC->sdmToDMI.permittedSpeed = 0;
  outC->sdmToDMI.releaseSpeed = 0;
  outC->sdmToDMI.locationBrakeTarget = 0;
  outC->sdmToDMI.location_brake_curve_starting_point = 0;
  outC->sdmToDMI.interventionSpeed = 0;
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.distanceIndicationPoint = 0;
  /* 1 */ CalcBrakeCmd_init_SDM_Commands_Pkg(&outC->_2_Context_1);
  /* 1 */ CalcDMI_output_init_SDM_Commands_Pkg(&outC->_1_Context_1);
  /* 2 */ MergeMLRequests_init_SDM_Commands_Pkg(&outC->Context_2);
  /* 1 */ CmdTrainSupervisionStatus_init_SDM_Commands_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SDM_Commands_reset_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  /* 1 */ CalcBrakeCmd_reset_SDM_Commands_Pkg(&outC->_2_Context_1);
  /* 1 */ CalcDMI_output_reset_SDM_Commands_Pkg(&outC->_1_Context_1);
  /* 2 */ MergeMLRequests_reset_SDM_Commands_Pkg(&outC->Context_2);
  /* 1 */ CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::SDM_Commands */
void SDM_Commands_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::SDM_Commands::allTargets */ TargetCollection_T_TargetManagement_types *allTargets,
  /* SDM_Commands_Pkg::SDM_Commands::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::SDM_Commands::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::SDM_Commands::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::SDM_Commands::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::SDM_Commands::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestSB */ kcg_bool MLrequestSB,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestEB */ kcg_bool MLrequestEB,
  /* SDM_Commands_Pkg::SDM_Commands::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Commands_Pkg::SDM_Commands::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::SDM_Commands::_L11 */
  static SupervisionStatus_T_SDM_Types_Pkg _L11;
  /* SDM_Commands_Pkg::SDM_Commands::_L10 */
  static EB_command_T_SDM_Commands_Pkg _L10;
  /* SDM_Commands_Pkg::SDM_Commands::_L9 */
  static kcg_bool _L9;
  /* SDM_Commands_Pkg::SDM_Commands::_L8 */
  static kcg_bool _L8;
  /* SDM_Commands_Pkg::SDM_Commands::_L7 */
  static SDM_Types_T_SDM_Types_Pkg _L7;
  /* SDM_Commands_Pkg::SDM_Commands::_L6 */
  static SupervisionStatus_T_SDM_Types_Pkg _L6;
  /* SDM_Commands_Pkg::SDM_Commands::_L5 */
  static SupervisionStatus_T_SDM_Types_Pkg _L5;
  /* SDM_Commands_Pkg::SDM_Commands::_L4 */
  static kcg_bool _L4;
  /* SDM_Commands_Pkg::SDM_Commands::_L3 */
  static kcg_bool _L3;
  /* SDM_Commands_Pkg::SDM_Commands::_L2 */
  static kcg_bool _L2;
  /* SDM_Commands_Pkg::SDM_Commands::_L1 */
  static kcg_bool _L1;
  /* SDM_Commands_Pkg::SDM_Commands::_L12 */
  static TargetCollection_T_TargetManagement_types _L12;
  /* SDM_Commands_Pkg::SDM_Commands::_L14 */
  static Speeds_T_SDM_Types_Pkg _L14;
  /* SDM_Commands_Pkg::SDM_Commands::_L15 */
  static SDM_Locations_T_SDM_Types_Pkg _L15;
  /* SDM_Commands_Pkg::SDM_Commands::_L27 */
  static kcg_bool _L27;
  /* SDM_Commands_Pkg::SDM_Commands::_L26 */
  static kcg_bool _L26;
  /* SDM_Commands_Pkg::SDM_Commands::_L25 */
  static kcg_bool _L25;
  /* SDM_Commands_Pkg::SDM_Commands::_L24 */
  static kcg_bool _L24;
  /* SDM_Commands_Pkg::SDM_Commands::_L23 */
  static kcg_bool _L23;
  /* SDM_Commands_Pkg::SDM_Commands::_L22 */
  static kcg_bool _L22;
  /* SDM_Commands_Pkg::SDM_Commands::_L28 */
  static Target_T_TargetManagement_types _L28;
  /* SDM_Commands_Pkg::SDM_Commands::_L63 */
  static SDM_Commands_T_SDM_Types_Pkg _L63;
  /* SDM_Commands_Pkg::SDM_Commands::_L64 */
  static kcg_bool _L64;
  /* SDM_Commands_Pkg::SDM_Commands::_L67 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L67;
  /* SDM_Commands_Pkg::SDM_Commands::_L68 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L68;
  /* SDM_Commands_Pkg::SDM_Commands::_L69 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L69;
  /* SDM_Commands_Pkg::SDM_Commands::_L70 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L70;
  /* SDM_Commands_Pkg::SDM_Commands::_L71 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L71;
  /* SDM_Commands_Pkg::SDM_Commands::_L72 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L72;
  /* SDM_Commands_Pkg::SDM_Commands::_L73 */
  static kcg_bool _L73;
  /* SDM_Commands_Pkg::SDM_Commands::_L74 */
  static trainPosition_T_TrainPosition_Types_Pck _L74;
  /* SDM_Commands_Pkg::SDM_Commands::_L98 */
  static kcg_bool _L98;
  /* SDM_Commands_Pkg::SDM_Commands::_L97 */
  static kcg_bool _L97;
  /* SDM_Commands_Pkg::SDM_Commands::_L99 */
  static kcg_bool _L99;
  /* SDM_Commands_Pkg::SDM_Commands::_L220 */
  static kcg_bool _L220;
  /* SDM_Commands_Pkg::SDM_Commands::_L221 */
  static kcg_bool _L221;
  /* SDM_Commands_Pkg::SDM_Commands::_L222 */
  static kcg_bool _L222;
  /* SDM_Commands_Pkg::SDM_Commands::_L224 */
  static kcg_bool _L224;
  /* SDM_Commands_Pkg::SDM_Commands::_L223 */
  static kcg_bool _L223;
  /* SDM_Commands_Pkg::SDM_Commands::_L225 */
  static speedSupervisionForDMI_T_DMI_Types_Pkg _L225;
  /* SDM_Commands_Pkg::SDM_Commands::_L226 */
  static SDM_Locations_T_SDM_Types_Pkg _L226;
  /* SDM_Commands_Pkg::SDM_Commands::_L227 */
  static Brake_command_T_TIU_Types_Pkg _L227;
  /* SDM_Commands_Pkg::SDM_Commands::_L230 */
  static P3_NationalValues_T_Packet_Types_Pkg _L230;
  /* SDM_Commands_Pkg::SDM_Commands::_L229 */
  static trainData_internal_t_SDM_Types_Pkg _L229;
  /* SDM_Commands_Pkg::SDM_Commands::_L235 */
  static Speeds_T_SDM_Types_Pkg _L235;
  /* SDM_Commands_Pkg::SDM_Commands::_L236 */
  static trainData_internal_t_SDM_Types_Pkg _L236;
  /* SDM_Commands_Pkg::SDM_Commands::_L238 */
  static trainPosition_T_TrainPosition_Types_Pck _L238;
  /* SDM_Commands_Pkg::SDM_Commands::_L239 */
  static Target_T_TargetManagement_types _L239;
  
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L12, allTargets);
  _L73 = _L12.updatedTargetList;
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L14, speeds);
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L15, locations);
  kcg_copy_Target_T_TargetManagement_types(&_L28, mrdt);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L74, trainLocations);
  _L99 = floiIsSB1;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L236, TrainData_int);
  /* 1 */
  CmdTrainSupervisionStatus_SDM_Commands_Pkg(
    _L73,
    &_L14,
    &_L15,
    &_L28,
    &_L74,
    _L99,
    &_L236,
    &outC->Context_1);
  _L11 = outC->Context_1.supVisStatus;
  _L7 = outC->Context_1.sdmType;
  _L6 = outC->Context_1.revokedSupervisionStatus;
  _L5 = outC->Context_1.triggeredSupervisionStatus;
  _L1 = outC->Context_1.revokedSB;
  _L4 = outC->Context_1.triggeredSB;
  _L2 = outC->Context_1.revokedEB;
  _L3 = outC->Context_1.triggeredEB;
  _L9 = outC->Context_1.revokedTCO;
  _L8 = outC->Context_1.triggeredTCO;
  _L10 = outC->Context_1.ebCmd;
  /* 1 */
  CalcDriverOutput_SDM_Commands_Pkg(
    _L7,
    _L11,
    &_L28,
    &_L14,
    &_L15,
    &_L72,
    &_L22,
    &_L71,
    &_L23,
    &_L70,
    &_L25,
    &_L69,
    &_L26,
    &_L68,
    &_L24,
    &_L67,
    &_L27);
  _L64 = kcg_true;
  _L220 = MLrequestSB;
  /* 2 */ MergeMLRequests_SDM_Commands_Pkg(_L1, _L220, _L4, &outC->Context_2);
  _L224 = outC->Context_2.revokedSB;
  _L223 = outC->Context_2.triggeredSB;
  _L221 = MLrequestEB;
  _L222 = _L10 | _L221;
  _L63.valid = _L64;
  _L63.estimatedSpeed = _L72;
  _L63.valid_v_est = _L22;
  _L63.permittedSpeed = _L71;
  _L63.valid_v_permitted = _L23;
  _L63.releaseSpeed = _L70;
  _L63.valid_v_release = _L25;
  _L63.mrdtSpeed = _L69;
  _L63.valid_v_mrdt = _L26;
  _L63.sbiSpeed = _L68;
  _L63.valid_v_sbi = _L24;
  _L63.targetDistance = _L67;
  _L63.valid_targetDistance = _L27;
  _L63.supervisionStatus = _L11;
  _L63.sdmType = _L7;
  _L63.revokedSupervisionStatus = _L6;
  _L63.triggeredSupervisionStatus = _L5;
  _L63.revokedSB = _L224;
  _L63.triggeredSB = _L223;
  _L63.revokedEB = _L2;
  _L63.triggeredEB = _L3;
  _L63.revokedTCO = _L9;
  _L63.triggeredTCO = _L8;
  _L63.ebCmd = _L222;
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&outC->sdmCmd, &_L63);
  /* CalcModeTransOutput */
  CalcModeTransOutput_SDM_Commands_Pkg(
    &_L74,
    &_L15,
    &_L14,
    &_L236,
    &_L97,
    &_L98);
  outC->targetSpeedReached = _L98;
  outC->eoaOverpassed = _L97;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L226, locations);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L238, trainLocations);
  kcg_copy_Target_T_TargetManagement_types(&_L239, mrdt);
  /* 1 */
  CalcDMI_output_SDM_Commands_Pkg(
    &_L63,
    &_L226,
    &_L238,
    &_L239,
    &outC->_1_Context_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &_L225,
    &outC->_1_Context_1.sdmToDMI);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&outC->sdmToDMI, &_L225);
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L235, speeds);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L230, NationalValues);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L229, TrainData_int);
  /* 1 */
  CalcBrakeCmd_SDM_Commands_Pkg(
    &_L63,
    &_L235,
    &_L230,
    &_L229,
    &outC->_2_Context_1);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L227, &outC->_2_Context_1.brakeCmd);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->brakeCmd, &_L227);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SDM_Commands_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

