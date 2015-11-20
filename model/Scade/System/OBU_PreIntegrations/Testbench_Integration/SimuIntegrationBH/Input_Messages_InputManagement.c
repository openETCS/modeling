/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Messages_InputManagement.h"

/* InputManagement::Input_Messages */
void Input_Messages_InputManagement(
  /* InputManagement::Input_Messages::Data_From_Track_Messages */ T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* InputManagement::Input_Messages::Emergency_Stop_Message_Received */ kcg_bool *Emergency_Stop_Message_Received,
  /* InputManagement::Input_Messages::Shunting_Granted_By_RBC */ kcg_bool *Shunting_Granted_By_RBC,
  /* InputManagement::Input_Messages::RCB_Ack_And_EB_Revocked */ kcg_bool *RCB_Ack_And_EB_Revocked,
  /* InputManagement::Input_Messages::RBC_Authorized_SR */ kcg_bool *RBC_Authorized_SR)
{
  /* InputManagement::Input_Messages::Loc_Mess_2 */
  static kcg_bool Loc_Mess_2;
  /* InputManagement::Input_Messages::Loc_Mess_6 */
  static kcg_bool Loc_Mess_6;
  /* InputManagement::Input_Messages::Loc_Mess_28 */
  static kcg_bool Loc_Mess_28;
  /* InputManagement::Input_Messages::Loc_Mess_27 */
  static kcg_bool Loc_Mess_27;
  /* InputManagement::Input_Messages::Loc_Mess_16 */
  static kcg_bool Loc_Mess_16;
  /* InputManagement::Input_Messages::Loc_Mess_15 */
  static kcg_bool Loc_Mess_15;
  /* InputManagement::Input_Messages::_L8 */
  static kcg_bool _L8;
  /* InputManagement::Input_Messages::_L7 */
  static kcg_bool _L7;
  /* InputManagement::Input_Messages::_L6 */
  static kcg_bool _L6;
  /* InputManagement::Input_Messages::_L5 */
  static kcg_bool _L5;
  /* InputManagement::Input_Messages::_L4 */
  static kcg_bool _L4;
  /* InputManagement::Input_Messages::_L3 */
  static kcg_bool _L3;
  /* InputManagement::Input_Messages::_L2 */
  static kcg_bool _L2;
  /* InputManagement::Input_Messages::_L1 */
  static kcg_bool _L1;
  /* InputManagement::Input_Messages::_L9 */
  static kcg_bool _L9;
  /* InputManagement::Input_Messages::_L10 */
  static kcg_bool _L10;
  /* InputManagement::Input_Messages::_L11 */
  static kcg_bool _L11;
  /* InputManagement::Input_Messages::_L12 */
  static kcg_bool _L12;
  /* InputManagement::Input_Messages::_L13 */
  static kcg_bool _L13;
  /* InputManagement::Input_Messages::_L14 */
  static kcg_bool _L14;
  /* InputManagement::Input_Messages::_L16 */
  static T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg _L16;
  
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &_L16,
    Data_From_Track_Messages);
  _L11 = _L16.Mess_2;
  Loc_Mess_2 = _L11;
  _L1 = Loc_Mess_2;
  _L12 = _L16.Mess_27;
  Loc_Mess_27 = _L12;
  _L3 = Loc_Mess_27;
  _L13 = _L16.Mess_28;
  Loc_Mess_28 = _L13;
  _L6 = Loc_Mess_28;
  _L2 = _L3 | _L6;
  _L9 = _L16.Mess_15;
  Loc_Mess_15 = _L9;
  _L7 = Loc_Mess_15;
  _L10 = _L16.Mess_16;
  Loc_Mess_16 = _L10;
  _L8 = Loc_Mess_16;
  _L4 = _L7 | _L8;
  _L14 = _L16.Mess_6;
  Loc_Mess_6 = _L14;
  _L5 = Loc_Mess_6;
  *Emergency_Stop_Message_Received = _L4;
  *Shunting_Granted_By_RBC = _L2;
  *RCB_Ack_And_EB_Revocked = _L5;
  *RBC_Authorized_SR = _L1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Messages_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

