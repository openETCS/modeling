/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"

void SDM_Commands_init_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  outC->eoaOverpassed = kcg_true;
  outC->targetSpeedReached = kcg_true;
  outC->sdmCmd.ebCmd = kcg_true;
  outC->sdmCmd.triggeredTCO = kcg_true;
  outC->sdmCmd.revokedTCO = kcg_true;
  outC->sdmCmd.triggeredEB = kcg_true;
  outC->sdmCmd.revokedEB = kcg_true;
  outC->sdmCmd.triggeredSB = kcg_true;
  outC->sdmCmd.revokedSB = kcg_true;
  outC->sdmCmd.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCmd.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCmd.sdmType = CSM_SDM_Types_Pkg;
  outC->sdmCmd.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCmd.valid_targetDistance = kcg_true;
  outC->sdmCmd.targetDistance = 0.0;
  outC->sdmCmd.valid_v_sbi = kcg_true;
  outC->sdmCmd.sbiSpeed = 0.0;
  outC->sdmCmd.valid_v_mrdt = kcg_true;
  outC->sdmCmd.mrdtSpeed = 0.0;
  outC->sdmCmd.valid_v_release = kcg_true;
  outC->sdmCmd.releaseSpeed = 0.0;
  outC->sdmCmd.valid_v_permitted = kcg_true;
  outC->sdmCmd.permittedSpeed = 0.0;
  outC->sdmCmd.valid_v_est = kcg_true;
  outC->sdmCmd.estimatedSpeed = 0.0;
  outC->sdmCmd.valid = kcg_true;
  CmdTrainSupervisionStatus_init_SDM_Commands_Pkg(&outC->Context_1);
}


void SDM_Commands_reset_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  /* 1 */ CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(&outC->Context_1);
}

/* SDM_Commands_Pkg::SDM_Commands */
void SDM_Commands_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::SDM_Commands::allTargets */ TargetCollection_T_TargetManagement_types *allTargets,
  /* SDM_Commands_Pkg::SDM_Commands::odometry */ Odometry_real_T_SDM_Types_Pkg *odometry,
  /* SDM_Commands_Pkg::SDM_Commands::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::SDM_Commands::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::SDM_Commands::noSupervisedReleaseSpeed */ kcg_bool noSupervisedReleaseSpeed,
  /* SDM_Commands_Pkg::SDM_Commands::m_level */ M_LEVEL m_level,
  /* SDM_Commands_Pkg::SDM_Commands::mrdt */ Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::SDM_Commands::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::SDM_Commands::floiIsSB1 */ kcg_bool floiIsSB1,
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::SDM_Commands::_L11 */ SupervisionStatus_T_SDM_Types_Pkg _L11;
  /* SDM_Commands_Pkg::SDM_Commands::_L7 */ SDM_Types_T_SDM_Types_Pkg _L7;
  /* SDM_Commands_Pkg::SDM_Commands::_L27 */ kcg_bool _L27;
  /* SDM_Commands_Pkg::SDM_Commands::_L26 */ kcg_bool _L26;
  /* SDM_Commands_Pkg::SDM_Commands::_L25 */ kcg_bool _L25;
  /* SDM_Commands_Pkg::SDM_Commands::_L24 */ kcg_bool _L24;
  /* SDM_Commands_Pkg::SDM_Commands::_L23 */ kcg_bool _L23;
  /* SDM_Commands_Pkg::SDM_Commands::_L22 */ kcg_bool _L22;
  /* SDM_Commands_Pkg::SDM_Commands::_L67 */ L_internal_real_Type_SDM_Types_Pkg _L67;
  /* SDM_Commands_Pkg::SDM_Commands::_L68 */ V_internal_real_Type_SDM_Types_Pkg _L68;
  /* SDM_Commands_Pkg::SDM_Commands::_L69 */ V_internal_real_Type_SDM_Types_Pkg _L69;
  /* SDM_Commands_Pkg::SDM_Commands::_L70 */ V_internal_real_Type_SDM_Types_Pkg _L70;
  /* SDM_Commands_Pkg::SDM_Commands::_L71 */ V_internal_real_Type_SDM_Types_Pkg _L71;
  
  outC->sdmCmd.valid = kcg_true;
  /* CalcModeTransOutput */
  CalcModeTransOutput_SDM_Commands_Pkg(
    m_level,
    trainLocations,
    locations,
    speeds,
    &outC->eoaOverpassed,
    &outC->targetSpeedReached);
  /* 1 */
  CmdTrainSupervisionStatus_SDM_Commands_Pkg(
    (*allTargets).updatedTargetList,
    (*odometry).motionState,
    speeds,
    locations,
    mrdt,
    noSupervisedReleaseSpeed,
    trainLocations,
    m_level,
    floiIsSB1,
    &outC->Context_1);
  outC->sdmCmd.revokedSupervisionStatus =
    outC->Context_1.revokedSupervisionStatus;
  outC->sdmCmd.triggeredSupervisionStatus =
    outC->Context_1.triggeredSupervisionStatus;
  outC->sdmCmd.revokedSB = outC->Context_1.revokedSB;
  outC->sdmCmd.triggeredSB = outC->Context_1.triggeredSB;
  outC->sdmCmd.revokedEB = outC->Context_1.revokedEB;
  outC->sdmCmd.triggeredEB = outC->Context_1.triggeredEB;
  outC->sdmCmd.revokedTCO = outC->Context_1.revokedTCO;
  outC->sdmCmd.triggeredTCO = outC->Context_1.triggeredTCO;
  outC->sdmCmd.ebCmd = outC->Context_1.ebCmd;
  _L11 = outC->Context_1.supVisStatus;
  outC->sdmCmd.supervisionStatus = _L11;
  _L7 = outC->Context_1.sdmType;
  outC->sdmCmd.sdmType = _L7;
  /* 1 */
  CalcDriverOutput_SDM_Commands_Pkg(
    _L7,
    _L11,
    mrdt,
    speeds,
    locations,
    trainLocations,
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
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SDM_Commands_SDM_Commands_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

