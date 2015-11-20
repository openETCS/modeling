/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Procedure_Start_L1_L2_L3_Procedures_H_
#define _Procedure_Start_L1_L2_L3_Procedures_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */ Ack_LS_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */ Ack_OS_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */ Ack_SH_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */ Ack_SR_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */ Condition_8;
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */ Condition_10_31;
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */ Condition_15;
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */ Condition_50;
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */ Condition_70;
  kcg_bool /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */ MA_Req_To_RBC;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_Start_L1_L2_L3 /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */ SM_Start_L1_L2_L3_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_Start_L1_L2_L3_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_Start_L1_L2_L3 */
extern void Procedure_Start_L1_L2_L3_Procedures(
  /* Procedures::Procedure_Start_L1_L2_L3::Current_Level */M_LEVEL Current_Level,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_LS */kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_OS */kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_SH */kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_SR */kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Req_Start */kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_Start_L1_L2_L3::MA_SSP_Gradiant_Available */kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_Start_L1_L2_L3::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_Start_L1_L2_L3::RBC_Authorizes_SR */kcg_bool RBC_Authorizes_SR,
  outC_Procedure_Start_L1_L2_L3_Procedures *outC);

extern void Procedure_Start_L1_L2_L3_reset_Procedures(
  outC_Procedure_Start_L1_L2_L3_Procedures *outC);

#endif /* _Procedure_Start_L1_L2_L3_Procedures_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_Start_L1_L2_L3_Procedures.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

