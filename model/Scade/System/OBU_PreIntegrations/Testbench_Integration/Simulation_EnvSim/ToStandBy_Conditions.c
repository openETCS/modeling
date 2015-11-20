/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToStandBy_Conditions.h"

/* Conditions::ToStandBy */
void ToStandBy_Conditions(
  /* Conditions::ToStandBy::Desk_Open */kcg_bool Desk_Open,
  /* Conditions::ToStandBy::All_Desks_Closed */kcg_bool All_Desks_Closed,
  /* Conditions::ToStandBy::Train_Standstill */kcg_bool Train_Standstill,
  /* Conditions::ToStandBy::Train_Req_SL */kcg_bool Train_Req_SL,
  /* Conditions::ToStandBy::OnBoard_Powered */kcg_bool OnBoard_Powered,
  /* Conditions::ToStandBy::Train_Permitted_PS */kcg_bool Train_Permitted_PS,
  /* Conditions::ToStandBy::Train_Permitted_NL */kcg_bool Train_Permitted_NL,
  /* Conditions::ToStandBy::Continue_Shunting_function_Active */kcg_bool Continue_Shunting_function_Active,
  /* Conditions::ToStandBy::Driver_Req_Exit_SH */kcg_bool Driver_Req_Exit_SH,
  /* Conditions::ToStandBy::Stop_Shunting_Stored */kcg_bool Stop_Shunting_Stored,
  /* Conditions::ToStandBy::On_Going_Mission */kcg_bool On_Going_Mission,
  /* Conditions::ToStandBy::Condition2 */kcg_bool *Condition2,
  /* Conditions::ToStandBy::Condition3 */kcg_bool *Condition3,
  /* Conditions::ToStandBy::Condition4 */kcg_bool *Condition4,
  /* Conditions::ToStandBy::Condition19 */kcg_bool *Condition19,
  /* Conditions::ToStandBy::Condition22 */kcg_bool *Condition22,
  /* Conditions::ToStandBy::Condition27 */kcg_bool *Condition27,
  /* Conditions::ToStandBy::Condition28 */kcg_bool *Condition28,
  /* Conditions::ToStandBy::Condition30 */kcg_bool *Condition30,
  /* Conditions::ToStandBy::Condition47 */kcg_bool *Condition47,
  /* Conditions::ToStandBy::End_Of_Mission_Procedure_Req */kcg_bool *End_Of_Mission_Procedure_Req)
{
  *Condition28 = All_Desks_Closed;
  *Condition4 = OnBoard_Powered;
  *Condition2 = Desk_Open;
  *Condition3 = Train_Standstill & !Train_Req_SL;
  *Condition19 = Train_Standstill & Driver_Req_Exit_SH;
  *Condition22 = *Condition2 & Stop_Shunting_Stored;
  *Condition27 = *Condition28 & !Continue_Shunting_function_Active;
  *Condition30 = *Condition28 & !Train_Permitted_PS;
  *Condition47 = !Train_Permitted_NL & Train_Standstill;
  *End_Of_Mission_Procedure_Req = On_Going_Mission & (*Condition2 |
      *Condition3 | *Condition4 | *Condition19 | *Condition22 | *Condition27 |
      *Condition28 | *Condition30 | *Condition47);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ToStandBy_Conditions.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

