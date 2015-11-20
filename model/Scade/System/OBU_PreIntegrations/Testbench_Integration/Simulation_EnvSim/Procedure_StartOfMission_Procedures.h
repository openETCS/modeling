/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Procedure_StartOfMission_Procedures_H_
#define _Procedure_StartOfMission_Procedures_H_

#include "kcg_types.h"
#include "SH_Initiated_By_Driver_On_Procedures.h"
#include "Procedure_Start_L1_L2_L3_Procedures.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */ Ack_LS_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */ Ack_OS_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */ Ack_SH_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */ Ack_SN_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */ Ack_SR_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */ Ack_UN_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */ Clean_BG_List_SH_Area;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_5 */ Condition_5;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_6 */ Condition_6;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_8 */ Condition_8;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_10 */ Condition_10;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_15 */ Condition_15;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_46 */ Condition_46;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_50 */ Condition_50;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_58 */ Condition_58;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_60 */ Condition_60;
  kcg_bool /* Procedures::Procedure_StartOfMission::Condition_70 */ Condition_70;
  kcg_bool /* Procedures::Procedure_StartOfMission::EB_Requested */ EB_Requested;
  kcg_bool /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */ End_Of_Mission_Procedure_Req;
  kcg_bool /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */ MA_Req_To_RBC;
  kcg_bool /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */ Request_For_SH_To_RBC;
  kcg_bool /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */ SH_Refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init2;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */ SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  SSM_ST_SM_StartOfMissionProcedure /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */ SM_StartOfMissionProcedure_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SH_Initiated_By_Driver_On_Procedures /* 1 */ _1_Context_1;
  outC_Procedure_Start_L1_L2_L3_Procedures /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_StartOfMission_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_StartOfMission */
extern void Procedure_StartOfMission_Procedures(
  /* Procedures::Procedure_StartOfMission::Current_Level */M_LEVEL Current_Level,
  /* Procedures::Procedure_StartOfMission::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_StartOfMission::Desk_Open */kcg_bool Desk_Open,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_LS */kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_OS */kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SH */kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SN */kcg_bool Driver_Ack_SN,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SR */kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_UN */kcg_bool Driver_Ack_UN,
  /* Procedures::Procedure_StartOfMission::Driver_Req_NL */kcg_bool Driver_Req_NL,
  /* Procedures::Procedure_StartOfMission::Driver_Req_SH */kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_StartOfMission::Driver_Req_Start */kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_StartOfMission::MA_SSP_Gradiant_Available */kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_StartOfMission::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_StartOfMission::RBC_Authorizes_SR */kcg_bool RBC_Authorizes_SR,
  /* Procedures::Procedure_StartOfMission::Shunting_Granted_By_RBC */kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_StartOfMission::Train_Permitted_NL */kcg_bool Train_Permitted_NL,
  /* Procedures::Procedure_StartOfMission::Train_Standstill */kcg_bool Train_Standstill,
  /* Procedures::Procedure_StartOfMission::Valid_Train_Data_Stored */kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_StartOfMission_Procedures *outC);

extern void Procedure_StartOfMission_reset_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC);

#endif /* _Procedure_StartOfMission_Procedures_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_StartOfMission_Procedures.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

