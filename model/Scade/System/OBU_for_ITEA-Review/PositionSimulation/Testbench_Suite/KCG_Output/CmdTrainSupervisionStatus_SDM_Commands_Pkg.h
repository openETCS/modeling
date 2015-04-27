/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _CmdTrainSupervisionStatus_SDM_Commands_Pkg_H_
#define _CmdTrainSupervisionStatus_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "CalcRevokationCondForTSM_SDM_Commands_Pkg.h"
#include "CalcTriggerCondForTSM_SDM_Commands_Pkg.h"
#include "CalcRSMandPreindicationLocation_SDM_Commands_Pkg.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SupervisionStatus_T_SDM_Types_Pkg /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::supVisStatus */ supVisStatus;
  SDM_Types_T_SDM_Types_Pkg /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */ sdmType;
  SupervisionStatus_T_SDM_Types_Pkg /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */ revokedSupervisionStatus;
  SupervisionStatus_T_SDM_Types_Pkg /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */ triggeredSupervisionStatus;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */ revokedSB;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */ triggeredSB;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */ revokedEB;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */ triggeredEB;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */ revokedTCO;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */ triggeredTCO;
  EB_command_T_SDM_Commands_Pkg /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::ebCmd */ ebCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_CSM_modeInterplay_CSM /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */ CSM_state_nxt_modeInterplay_CSM;
  SSM_ST_SM4_modeInterplay_TSM /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */ SM4_state_nxt_modeInterplay_TSM;
  SSM_ST_RSM_modeInterplay_RSM /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */ RSM_state_nxt_modeInterplay_RSM;
  SSM_ST_modeInterplay /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */ modeInterplay_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus */
extern void CmdTrainSupervisionStatus_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::SupervisedTargetsListUpdated */ kcg_bool SupervisedTargetsListUpdated,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::TrainAtStandstill */ odoMotionState_T_Obu_BasicTypes_Pkg TrainAtStandstill,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::mrdt */ Target_real_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::noSupervisedReleaseSpeed */ kcg_bool noSupervisedReleaseSpeed,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::m_level */ M_LEVEL m_level,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::floiIsSB1 */ kcg_bool floiIsSB1,
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);

extern void CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);
extern void CmdTrainSupervisionStatus_init_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);

#endif /* _CmdTrainSupervisionStatus_SDM_Commands_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CmdTrainSupervisionStatus_SDM_Commands_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

