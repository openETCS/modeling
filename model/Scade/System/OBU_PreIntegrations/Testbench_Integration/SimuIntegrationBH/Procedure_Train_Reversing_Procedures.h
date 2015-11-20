/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Procedure_Train_Reversing_Procedures_H_
#define _Procedure_Train_Reversing_Procedures_H_

#include "kcg_types.h"
#include "Reversing_Calculations_Librairies.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_Train_Reversing::Condition_59 */ Condition_59;
  kcg_bool /* Procedures::Procedure_Train_Reversing::Ack_RV_Req_To_Driver */ Ack_RV_Req_To_Driver;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_Train_Reversing /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */ SM_Train_Reversing_state_nxt;
  kcg_bool /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */ SM_Train_Reversing_reset_act;
  kcg_bool /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */ SM_Train_Reversing_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_Train_Reversing_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_Train_Reversing */
extern void Procedure_Train_Reversing_Procedures(
  /* Procedures::Procedure_Train_Reversing::Driver_Ack_RV */ kcg_bool Driver_Ack_RV,
  /* Procedures::Procedure_Train_Reversing::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_Train_Reversing::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_Train_Reversing::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_Train_Reversing::Reversing_Data */ T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  outC_Procedure_Train_Reversing_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_Train_Reversing_reset_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_Train_Reversing_init_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Procedure_Train_Reversing_Procedures_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_Train_Reversing_Procedures.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

