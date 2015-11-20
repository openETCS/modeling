/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Procedure_Train_Trip_Procedures_H_
#define _Procedure_Train_Trip_Procedures_H_

#include "kcg_types.h"
#include "SH_Initiated_By_Driver_On_Procedures.h"
#include "Procedure_Start_L1_L2_L3_Procedures.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */ Ack_LS_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */ Ack_OS_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */ Ack_SH_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */ Ack_SR_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */ Ack_TR_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */ Clean_BG_List_SH_Area;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_Trip */ Condition_Trip;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_5 */ Condition_5;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_6 */ Condition_6;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_7 */ Condition_7;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_8 */ Condition_8;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_31 */ Condition_31;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_15 */ Condition_15;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_50 */ Condition_50;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_62 */ Condition_62;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_63 */ Condition_63;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_68 */ Condition_68;
  kcg_bool /* Procedures::Procedure_Train_Trip::Condition_70 */ Condition_70;
  kcg_bool /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */ End_Of_Mission_Procedure_Req;
  kcg_bool /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */ MA_Req_To_RBC;
  kcg_bool /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */ Request_For_SH_To_RBC;
  kcg_bool /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */ SH_Refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_Train_Trip /* Procedures::Procedure_Train_Trip::SM_Train_Trip */ SM_Train_Trip_state_nxt;
  kcg_bool /* Procedures::Procedure_Train_Trip::SM_Train_Trip */ SM_Train_Trip_reset_act;
  kcg_bool /* Procedures::Procedure_Train_Trip::SM_Train_Trip */ SM_Train_Trip_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SH_Initiated_By_Driver_On_Procedures /* 1 */ _1_Context_1;
  outC_Procedure_Start_L1_L2_L3_Procedures /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_Train_Trip_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_Train_Trip */
extern void Procedure_Train_Trip_Procedures(
  /* Procedures::Procedure_Train_Trip::Condition_To_Trip */ kcg_bool Condition_To_Trip,
  /* Procedures::Procedure_Train_Trip::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_Train_Trip::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_SR */ kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_TR */ kcg_bool Driver_Ack_TR,
  /* Procedures::Procedure_Train_Trip::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_Train_Trip::Driver_Req_Start */ kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_Train_Trip::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_Train_Trip::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_Train_Trip::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::Procedure_Train_Trip::RCB_Ack_And_EB_Revocked */ kcg_bool RCB_Ack_And_EB_Revocked,
  /* Procedures::Procedure_Train_Trip::RBC_Authorizes_SR */ kcg_bool RBC_Authorizes_SR,
  /* Procedures::Procedure_Train_Trip::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_Train_Trip::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_Train_Trip::Valid_Train_Data_Stored */ kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_Train_Trip_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_Train_Trip_reset_Procedures(
  outC_Procedure_Train_Trip_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_Train_Trip_init_Procedures(
  outC_Procedure_Train_Trip_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Procedure_Train_Trip_Procedures_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_Train_Trip_Procedures.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

