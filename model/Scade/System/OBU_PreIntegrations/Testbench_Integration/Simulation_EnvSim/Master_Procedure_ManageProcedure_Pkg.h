/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _Master_Procedure_ManageProcedure_Pkg_H_
#define _Master_Procedure_ManageProcedure_Pkg_H_

#include "kcg_types.h"
#include "SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.h"
#include "SoM_NTC_SN_SoMProcedure_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* ManageProcedure_Pkg::Master_Procedure::DMI_Entry_Request_to_DMI */ DMI_Entry_Request_to_DMI;
  radioManagementMessage_T_Common_Types_Pkg /* ManageProcedure_Pkg::Master_Procedure::request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC */ request_Start_Mobile_Terminal_and_RBC_Registration_to_MoRC;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::powerUp_to_MoRC */ powerUp_to_MoRC;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::statusstartofmissionongoing_to_MoRC */ statusstartofmissionongoing_to_MoRC;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::powerOff_to_MoRC */ powerOff_to_MoRC;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management */ request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management */ request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::start_ack_to_TIU */ start_ack_to_TIU;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init3;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  struct__158634 _2_fby_tmp;
  struct__158634 fby_tmp;
  SSM_ST_SM3_SM1_Awakness_of_Train /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */ SM3_state_nxt_SM1_Awakness_of_Train;
  _41_SSM_ST_SM1 /* ManageProcedure_Pkg::Master_Procedure::SM1 */ SM1_state_nxt;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::SM1 */ SM1_reset_nxt;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */ sendingPositionReport_to_RBC;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */ sendingTrainData_to_RBC;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg /* 1 */ _1_Context_1;
  outC_SoM_NTC_SN_SoMProcedure_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Master_Procedure_ManageProcedure_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ManageProcedure_Pkg::Master_Procedure */
extern void Master_Procedure_ManageProcedure_Pkg(
  /* ManageProcedure_Pkg::Master_Procedure::statusDMI_from_DMI */DMI_EVC_status_T_DMI_Types_Pkg *statusDMI_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* ManageProcedure_Pkg::Master_Procedure::systemtime */T_internal_Type_Obu_BasicTypes_Pkg systemtime,
  /* ManageProcedure_Pkg::Master_Procedure::StatusModeandLevel_from_Level_and_Mode_Management */T_Mode_Level_Level_And_Mode_Types_Pkg *StatusModeandLevel_from_Level_and_Mode_Management,
  /* ManageProcedure_Pkg::Master_Procedure::mobileStatus */morcStatus_T_RCM_Session_Types_Pkg *mobileStatus,
  /* ManageProcedure_Pkg::Master_Procedure::cabStatus_from_TIU */TIU_trainStatus_T_TIU_Types_Pkg *cabStatus_from_TIU,
  /* ManageProcedure_Pkg::Master_Procedure::statusValid_Position_from_Position_Calculation */kcg_bool statusValid_Position_from_Position_Calculation,
  /* ManageProcedure_Pkg::Master_Procedure::status_DMIlevel_from_DMI */DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *status_DMIlevel_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::LevelValid_from_Level_and_Mode_Management */kcg_bool LevelValid_from_Level_and_Mode_Management,
  outC_Master_Procedure_ManageProcedure_Pkg *outC);

extern void Master_Procedure_reset_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC);

#endif /* _Master_Procedure_ManageProcedure_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Master_Procedure_ManageProcedure_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

