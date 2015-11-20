/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Procedure_SH_Ordered_By_Track_Procedures_H_
#define _Procedure_SH_Ordered_By_Track_Procedures_H_

#include "kcg_types.h"
#include "Procedure_With_Mode_Profile_Procedures.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Condition50 */ Condition50;
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Condition51 */ Condition51;
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Condition61 */ Condition61;
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Ack_SH_Req_To_Driver */ Ack_SH_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_SH_Ordered_By_Track::Service_Brake_Command */ Service_Brake_Command;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_With_Mode_Profile_Procedures /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_SH_Ordered_By_Track_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_SH_Ordered_By_Track */
extern void Procedure_SH_Ordered_By_Track_Procedures(
  /* Procedures::Procedure_SH_Ordered_By_Track::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_SH_Ordered_By_Track::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_SH_Ordered_By_Track::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_SH_Ordered_By_Track::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_SH_Ordered_By_Track_reset_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_SH_Ordered_By_Track_init_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Procedure_SH_Ordered_By_Track_Procedures_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_SH_Ordered_By_Track_Procedures.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

