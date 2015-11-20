/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CmdTrainSupervisionStatus_SDM_Commands_Pkg_H_
#define _CmdTrainSupervisionStatus_SDM_Commands_Pkg_H_

#include "kcg_types.h"
#include "CalcRevokationCondForTSM_SDM_Commands_Pkg.h"
#include "CalcTriggerCondForTSM_SDM_Commands_Pkg.h"
#include "CalcRSMandPreindicationLocation_SDM_Commands_Pkg.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */ CSM_reset_nxt_modeInterplay_CSM;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */ CSM_reset_act_modeInterplay_CSM;
  SSM_ST_CSM_modeInterplay_CSM /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */ CSM_state_nxt_modeInterplay_CSM;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */ SM4_reset_nxt_modeInterplay_TSM;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */ SM4_reset_act_modeInterplay_TSM;
  SSM_ST_SM4_modeInterplay_TSM /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */ SM4_state_nxt_modeInterplay_TSM;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */ RSM_reset_nxt_modeInterplay_RSM;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */ RSM_reset_act_modeInterplay_RSM;
  SSM_ST_RSM_modeInterplay_RSM /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */ RSM_state_nxt_modeInterplay_RSM;
  SSM_ST_modeInterplay /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */ modeInterplay_state_nxt;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */ modeInterplay_reset_act;
  kcg_bool /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */ modeInterplay_reset_nxt;
  SupervisionStatus_T_SDM_Types_Pkg /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */ status;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus */
extern void CmdTrainSupervisionStatus_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::SupervisedTargetsListUpdated */ kcg_bool SupervisedTargetsListUpdated,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CmdTrainSupervisionStatus_init_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CmdTrainSupervisionStatus_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CmdTrainSupervisionStatus_SDM_Commands_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

