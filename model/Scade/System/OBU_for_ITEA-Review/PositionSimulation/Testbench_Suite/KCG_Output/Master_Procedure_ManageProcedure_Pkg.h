/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _Master_Procedure_ManageProcedure_Pkg_H_
#define _Master_Procedure_ManageProcedure_Pkg_H_

#include "kcg_types.h"
#include "SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.h"

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
  kcg_bool init2;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  struct_61193 _1_fby_tmp;
  struct_61193 fby_tmp;
  SSM_ST_SM3_SM1_Awakness_of_Train /* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */ SM3_state_nxt_SM1_Awakness_of_Train;
  _4_SSM_ST_SM1 /* ManageProcedure_Pkg::Master_Procedure::SM1 */ SM1_state_nxt;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::SM1 */ SM1_reset_nxt;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::sendingPositionReport_to_RBC */ sendingPositionReport_to_RBC;
  kcg_bool /* ManageProcedure_Pkg::Master_Procedure::sendingTrainData_to_RBC */ sendingTrainData_to_RBC;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Master_Procedure_ManageProcedure_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ManageProcedure_Pkg::Master_Procedure */
extern void Master_Procedure_ManageProcedure_Pkg(
  /* ManageProcedure_Pkg::Master_Procedure::statusDMI_from_DMI */ DMI_EVC_status_T_DMI_Types_Pkg *statusDMI_from_DMI,
  /* ManageProcedure_Pkg::Master_Procedure::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */ kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* ManageProcedure_Pkg::Master_Procedure::Status_Mode_Change_from_Level_and_Mode_Management */ kcg_bool Status_Mode_Change_from_Level_and_Mode_Management,
  /* ManageProcedure_Pkg::Master_Procedure::systemtime */ T_internal_Type_Obu_BasicTypes_Pkg systemtime,
  /* ManageProcedure_Pkg::Master_Procedure::mobileSwStatus_p_from_MoRC */ mobileSWStatus_Type_MoRC_Pck *mobileSwStatus_p_from_MoRC,
  /* ManageProcedure_Pkg::Master_Procedure::statusRBCSessioneEstabilished_status_from_MoRC */ sessionStatus_Type_Radio_Types_Pkg statusRBCSessioneEstabilished_status_from_MoRC,
  /* ManageProcedure_Pkg::Master_Procedure::cabStatus_from_TIU */ TIU_trainStatus_T_TIU_Types_Pkg *cabStatus_from_TIU,
  /* ManageProcedure_Pkg::Master_Procedure::statusValid_Position_from_Position_Calculation */ kcg_bool statusValid_Position_from_Position_Calculation,
  /* ManageProcedure_Pkg::Master_Procedure::statusLevel_from_Level_and_Mode_Management */ kcg_bool statusLevel_from_Level_and_Mode_Management,
  outC_Master_Procedure_ManageProcedure_Pkg *outC);

extern void Master_Procedure_reset_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC);
extern void Master_Procedure_init_ManageProcedure_Pkg(
  outC_Master_Procedure_ManageProcedure_Pkg *outC);

#endif /* _Master_Procedure_ManageProcedure_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** Master_Procedure_ManageProcedure_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

