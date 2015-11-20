/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _ToShunting_Conditions_H_
#define _ToShunting_Conditions_H_

#include "kcg_types.h"
#include "Procedure_SH_Initiated_By_Driver_Procedures.h"
#include "Procedure_SH_Ordered_By_Track_Procedures.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Conditions::ToShunting::Condition5 */ Condition5;
  kcg_bool /* Conditions::ToShunting::Condition6 */ Condition6;
  kcg_bool /* Conditions::ToShunting::Condition23 */ Condition23;
  kcg_bool /* Conditions::ToShunting::Condition50 */ Condition50;
  kcg_bool /* Conditions::ToShunting::Condition51 */ Condition51;
  kcg_bool /* Conditions::ToShunting::Condition61 */ Condition61;
  kcg_bool /* Conditions::ToShunting::Ack_SH_Req_To_Driver */ Ack_SH_Req_To_Driver;
  kcg_bool /* Conditions::ToShunting::Clean_BG_List_SH_Area */ Clean_BG_List_SH_Area;
  kcg_bool /* Conditions::ToShunting::End_Of_Mission_Procedure_Req */ End_Of_Mission_Procedure_Req;
  kcg_bool /* Conditions::ToShunting::Request_For_SH_To_RBC */ Request_For_SH_To_RBC;
  kcg_bool /* Conditions::ToShunting::Service_Brake_Command */ Service_Brake_Command;
  kcg_bool /* Conditions::ToShunting::SH_refused_By_RBC_To_DMI */ SH_refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_SH_Ordered_By_Track_Procedures /* 1 */ _1_Context_1;
  outC_Procedure_SH_Initiated_By_Driver_Procedures /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToShunting_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToShunting */
extern void ToShunting_Conditions(
  /* Conditions::ToShunting::Current_Level */M_LEVEL Current_Level,
  /* Conditions::ToShunting::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Conditions::ToShunting::Desk_Open */kcg_bool Desk_Open,
  /* Conditions::ToShunting::Driver_Ack_SH */kcg_bool Driver_Ack_SH,
  /* Conditions::ToShunting::Driver_Req_SH */kcg_bool Driver_Req_SH,
  /* Conditions::ToShunting::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Conditions::ToShunting::On_Going_Mission */kcg_bool On_Going_Mission,
  /* Conditions::ToShunting::Shunting_Granted_By_RBC */kcg_bool Shunting_Granted_By_RBC,
  /* Conditions::ToShunting::Stop_Shunting_Stored */kcg_bool Stop_Shunting_Stored,
  /* Conditions::ToShunting::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Conditions::ToShunting::Train_Speed */Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Conditions::ToShunting::Train_Standstill */kcg_bool Train_Standstill,
  outC_ToShunting_Conditions *outC);

extern void ToShunting_reset_Conditions(outC_ToShunting_Conditions *outC);

#endif /* _ToShunting_Conditions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToShunting_Conditions.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

