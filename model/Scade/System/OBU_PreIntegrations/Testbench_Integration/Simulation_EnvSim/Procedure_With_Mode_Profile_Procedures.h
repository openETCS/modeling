/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Procedure_With_Mode_Profile_Procedures_H_
#define _Procedure_With_Mode_Profile_Procedures_H_

#include "kcg_types.h"
#include "Mode_Profile_Calculations_Librairies.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */ Condition_15_50_70;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */ Condition_34_61_71;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */ Condition_40_51_72;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */ Condition_73_74;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */ Service_Brake_Command;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Ack_Req_To_Driver */ Ack_Req_To_Driver;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */ SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
  SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */ SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  SSM_ST_SM_Mode_Profile_By_Trackside /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */ SM_Mode_Profile_By_Trackside_state_nxt;
  kcg_int /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */ Loc_Timer;
  kcg_bool /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */ Loc_Confirmation;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int /* 8 */ Context_8;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_With_Mode_Profile_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_With_Mode_Profile */
extern void Procedure_With_Mode_Profile_Procedures(
  /* Procedures::Procedure_With_Mode_Profile::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Driver_Ack_Mode_Profile */kcg_bool Driver_Ack_Mode_Profile,
  /* Procedures::Procedure_With_Mode_Profile::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_With_Mode_Profile::Procedure_Possible */kcg_bool Procedure_Possible,
  /* Procedures::Procedure_With_Mode_Profile::Profile_Mode */T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Selected_Mode */T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Supervision_Modes */kcg_bool Supervision_Modes,
  /* Procedures::Procedure_With_Mode_Profile::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_With_Mode_Profile::Train_Speed */Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_With_Mode_Profile_Procedures *outC);

extern void Procedure_With_Mode_Profile_reset_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC);

#endif /* _Procedure_With_Mode_Profile_Procedures_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_With_Mode_Profile_Procedures.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

