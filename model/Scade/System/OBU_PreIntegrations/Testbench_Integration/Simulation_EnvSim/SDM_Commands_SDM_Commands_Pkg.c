/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"

void SDM_Commands_reset_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  /* 1 */ CalcDMI_output_reset_SDM_Commands_Pkg(&outC->Context_1);
  /* 1 */ CalcBrakeCmd_reset_SDM_Commands_Pkg(&outC->_1_Context_1);
  /* 2 */ MergeMLRequests_reset_SDM_Commands_Pkg(&outC->Context_2);
  /* 4 */ MergeMLRequests_reset_SDM_Commands_Pkg(&outC->Context_4);
  /* 1 */ CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(&outC->_2_Context_1);
}

/* SDM_Commands_Pkg::SDM_Commands */
void SDM_Commands_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::SDM_Commands::allTargets */TargetCollection_T_TargetManagement_types *allTargets,
  /* SDM_Commands_Pkg::SDM_Commands::trainLocations */trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::SDM_Commands::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::SDM_Commands::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::SDM_Commands::mrdt */Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::SDM_Commands::floiIsSB1 */kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestSB */kcg_bool MLrequestSB,
  /* SDM_Commands_Pkg::SDM_Commands::MLrequestEB */kcg_bool MLrequestEB,
  /* SDM_Commands_Pkg::SDM_Commands::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Commands_Pkg::SDM_Commands::TrainData_int */trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
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
  
  outC->sdmCmd.valid = kcg_true;
  /* 1 */
  CmdTrainSupervisionStatus_SDM_Commands_Pkg(
    (*allTargets).updatedTargetList,
    speeds,
    locations,
    mrdt,
    trainLocations,
    floiIsSB1,
    TrainData_int,
    &outC->_2_Context_1);
  outC->sdmCmd.supervisionStatus = outC->_2_Context_1.supVisStatus;
  outC->sdmCmd.sdmType = outC->_2_Context_1.sdmType;
  outC->sdmCmd.revokedSupervisionStatus =
    outC->_2_Context_1.revokedSupervisionStatus;
  outC->sdmCmd.triggeredSupervisionStatus =
    outC->_2_Context_1.triggeredSupervisionStatus;
  outC->sdmCmd.revokedTCO = outC->_2_Context_1.revokedTCO;
  outC->sdmCmd.triggeredTCO = outC->_2_Context_1.triggeredTCO;
  outC->sdmCmd.ebCmd = outC->_2_Context_1.ebCmd;
  /* 4 */
  MergeMLRequests_SDM_Commands_Pkg(
    outC->_2_Context_1.revokedEB,
    MLrequestEB,
    outC->_2_Context_1.triggeredEB,
    &outC->Context_4);
  outC->sdmCmd.revokedEB = outC->Context_4.revoked;
  outC->sdmCmd.triggeredEB = outC->Context_4.triggered;
  /* 1 */
  CalcDriverOutput_SDM_Commands_Pkg(
    outC->_2_Context_1.sdmType,
    outC->_2_Context_1.supVisStatus,
    mrdt,
    speeds,
    locations,
    &outC->sdmCmd.estimatedSpeed,
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
  outC->sdmCmd.valid_v_est = _L22;
  outC->sdmCmd.permittedSpeed = _L71;
  outC->sdmCmd.valid_v_permitted = _L23;
  outC->sdmCmd.releaseSpeed = _L70;
  outC->sdmCmd.valid_v_release = _L25;
  outC->sdmCmd.mrdtSpeed = _L69;
  outC->sdmCmd.valid_v_mrdt = _L26;
  outC->sdmCmd.sbiSpeed = _L68;
  outC->sdmCmd.valid_v_sbi = _L24;
  outC->sdmCmd.targetDistance = _L67;
  outC->sdmCmd.valid_targetDistance = _L27;
  /* 2 */
  MergeMLRequests_SDM_Commands_Pkg(
    outC->_2_Context_1.revokedSB,
    MLrequestSB,
    outC->_2_Context_1.triggeredSB,
    &outC->Context_2);
  outC->sdmCmd.revokedSB = outC->Context_2.revoked;
  outC->sdmCmd.triggeredSB = outC->Context_2.triggered;
  /* 1 */
  CalcBrakeCmd_SDM_Commands_Pkg(
    &outC->sdmCmd,
    speeds,
    NationalValues,
    TrainData_int,
    &outC->_1_Context_1);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->brakeCmd,
    &outC->_1_Context_1.brakeCmd);
  /* 1 */
  CalcDMI_output_SDM_Commands_Pkg(
    &outC->sdmCmd,
    locations,
    trainLocations,
    mrdt,
    &outC->Context_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->sdmToDMI,
    &outC->Context_1.sdmToDMI);
  /* CalcModeTransOutput */
  CalcModeTransOutput_SDM_Commands_Pkg(
    trainLocations,
    locations,
    speeds,
    TrainData_int,
    &outC->eoaOverpassed,
    &outC->targetSpeedReached);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDM_Commands_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

