/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToShunting_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToShunting_init_Conditions(outC_ToShunting_Conditions *outC)
{
  outC->SH_refused_By_RBC_To_DMI = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Condition61 = kcg_true;
  outC->Condition51 = kcg_true;
  outC->Condition50 = kcg_true;
  outC->Condition23 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition5 = kcg_true;
  /* 1 */ Procedure_SH_Ordered_By_Track_init_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_SH_Initiated_By_Driver_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToShunting_reset_Conditions(outC_ToShunting_Conditions *outC)
{
  /* 1 */ Procedure_SH_Ordered_By_Track_reset_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_SH_Initiated_By_Driver_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToShunting */
void ToShunting_Conditions(
  /* Conditions::ToShunting::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToShunting::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Conditions::ToShunting::Desk_Open */ kcg_bool Desk_Open,
  /* Conditions::ToShunting::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Conditions::ToShunting::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Conditions::ToShunting::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Conditions::ToShunting::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Conditions::ToShunting::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Conditions::ToShunting::Stop_Shunting_Stored */ kcg_bool Stop_Shunting_Stored,
  /* Conditions::ToShunting::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Conditions::ToShunting::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Conditions::ToShunting::Train_Standstill */ kcg_bool Train_Standstill,
  outC_ToShunting_Conditions *outC)
{
  /* Conditions::ToShunting::_L80 */
  static kcg_bool _L80;
  /* Conditions::ToShunting::_L77 */
  static kcg_bool _L77;
  /* Conditions::ToShunting::_L348 */
  static kcg_bool _L348;
  /* Conditions::ToShunting::_L349 */
  static kcg_bool _L349;
  /* Conditions::ToShunting::_L452 */
  static kcg_bool _L452;
  /* Conditions::ToShunting::_L451 */
  static kcg_bool _L451;
  /* Conditions::ToShunting::_L450 */
  static kcg_bool _L450;
  /* Conditions::ToShunting::_L449 */
  static kcg_bool _L449;
  /* Conditions::ToShunting::_L457 */
  static kcg_bool _L457;
  /* Conditions::ToShunting::_L456 */
  static kcg_bool _L456;
  /* Conditions::ToShunting::_L455 */
  static kcg_bool _L455;
  /* Conditions::ToShunting::_L454 */
  static kcg_bool _L454;
  /* Conditions::ToShunting::_L453 */
  static kcg_bool _L453;
  /* Conditions::ToShunting::_L458 */
  static M_LEVEL _L458;
  /* Conditions::ToShunting::_L459 */
  static kcg_bool _L459;
  /* Conditions::ToShunting::_L460 */
  static T_Mode_Level_And_Mode_Types_Pkg _L460;
  /* Conditions::ToShunting::_L461 */
  static kcg_bool _L461;
  /* Conditions::ToShunting::_L462 */
  static kcg_bool _L462;
  /* Conditions::ToShunting::_L463 */
  static kcg_bool _L463;
  /* Conditions::ToShunting::_L465 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L465;
  /* Conditions::ToShunting::_L466 */
  static T_Mode_Level_And_Mode_Types_Pkg _L466;
  /* Conditions::ToShunting::_L467 */
  static kcg_bool _L467;
  /* Conditions::ToShunting::_L468 */
  static kcg_bool _L468;
  /* Conditions::ToShunting::_L469 */
  static Speed_T_Obu_BasicTypes_Pkg _L469;
  /* Conditions::ToShunting::_L471 */
  static kcg_bool _L471;
  /* Conditions::ToShunting::_L472 */
  static trainPosition_T_TrainPosition_Types_Pck _L472;
  
  _L349 = Stop_Shunting_Stored;
  _L77 = !_L349;
  _L348 = Desk_Open;
  _L80 = _L348 & _L77;
  outC->Condition23 = _L80;
  _L458 = Current_Level;
  _L460 = Current_Mode;
  _L459 = Driver_Req_SH;
  _L468 = On_Going_Mission;
  _L461 = Shunting_Granted_By_RBC;
  _L462 = Train_Standstill;
  /* 1 */
  Procedure_SH_Initiated_By_Driver_Procedures(
    _L458,
    _L460,
    _L459,
    _L468,
    _L461,
    _L462,
    &outC->Context_1);
  _L449 = outC->Context_1.Condition5;
  _L450 = outC->Context_1.Condition6;
  _L471 = outC->Context_1.Clean_BG_List_SH_Area;
  _L467 = outC->Context_1.End_Of_Mission_Procedure_Req;
  _L451 = outC->Context_1.Request_For_SH_To_RBC;
  _L452 = outC->Context_1.SH_Refused_By_RBC_To_DMI;
  _L466 = Current_Mode;
  _L463 = Driver_Ack_SH;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L465,
    Mode_Profile_On_Board);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L472, Train_Position);
  _L469 = Train_Speed;
  /* 1 */
  Procedure_SH_Ordered_By_Track_Procedures(
    _L466,
    _L463,
    &_L465,
    &_L472,
    _L469,
    &outC->_1_Context_1);
  _L454 = outC->_1_Context_1.Condition50;
  _L453 = outC->_1_Context_1.Condition51;
  _L455 = outC->_1_Context_1.Condition61;
  _L456 = outC->_1_Context_1.Ack_SH_Req_To_Driver;
  _L457 = outC->_1_Context_1.Service_Brake_Command;
  outC->Condition5 = _L449;
  outC->Condition6 = _L450;
  outC->Request_For_SH_To_RBC = _L451;
  outC->SH_refused_By_RBC_To_DMI = _L452;
  outC->Condition50 = _L454;
  outC->Condition51 = _L453;
  outC->Condition61 = _L455;
  outC->Ack_SH_Req_To_Driver = _L456;
  outC->Service_Brake_Command = _L457;
  outC->End_Of_Mission_Procedure_Req = _L467;
  outC->Clean_BG_List_SH_Area = _L471;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToShunting_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

