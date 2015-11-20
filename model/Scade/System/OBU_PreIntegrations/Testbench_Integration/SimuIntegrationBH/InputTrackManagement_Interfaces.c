/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTrackManagement_Interfaces.h"

/* Interfaces::InputTrackManagement */
void InputTrackManagement_Interfaces(
  /* Interfaces::InputTrackManagement::Data_From_Track */ T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track,
  /* Interfaces::InputTrackManagement::MA_SSP_Gradient_Available */ kcg_bool *MA_SSP_Gradient_Available,
  /* Interfaces::InputTrackManagement::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Interfaces::InputTrackManagement::Shunting_Granted_By_RBC */ kcg_bool *Shunting_Granted_By_RBC,
  /* Interfaces::InputTrackManagement::Trip_Order_Given_By_Balise */ kcg_bool *Trip_Order_Given_By_Balise,
  /* Interfaces::InputTrackManagement::List_BG_Related_To_SR_Empty */ kcg_bool *List_BG_Related_To_SR_Empty,
  /* Interfaces::InputTrackManagement::Stop_If_In_Shunting */ kcg_bool *Stop_If_In_Shunting,
  /* Interfaces::InputTrackManagement::Stop_If_In_SR */ kcg_bool *Stop_If_In_SR,
  /* Interfaces::InputTrackManagement::RCB_Ack_And_EB_Revocked */ kcg_bool *RCB_Ack_And_EB_Revocked,
  /* Interfaces::InputTrackManagement::RBC_Authorized_SR */ kcg_bool *RBC_Authorized_SR,
  /* Interfaces::InputTrackManagement::Reversing_Data */ T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* Interfaces::InputTrackManagement::Emergency_Stop_Message_Received */ kcg_bool *Emergency_Stop_Message_Received)
{
  /* Interfaces::InputTrackManagement::_L1 */
  static T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg _L1;
  /* Interfaces::InputTrackManagement::_L38 */
  static kcg_bool _L38;
  /* Interfaces::InputTrackManagement::_L37 */
  static T_Mode_Profile_Table_Level_And_Mode_Types_Pkg _L37;
  /* Interfaces::InputTrackManagement::_L36 */
  static kcg_bool _L36;
  /* Interfaces::InputTrackManagement::_L35 */
  static kcg_bool _L35;
  /* Interfaces::InputTrackManagement::_L34 */
  static kcg_bool _L34;
  /* Interfaces::InputTrackManagement::_L33 */
  static kcg_bool _L33;
  /* Interfaces::InputTrackManagement::_L32 */
  static kcg_bool _L32;
  /* Interfaces::InputTrackManagement::_L31 */
  static kcg_bool _L31;
  /* Interfaces::InputTrackManagement::_L30 */
  static kcg_bool _L30;
  /* Interfaces::InputTrackManagement::_L29 */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg _L29;
  /* Interfaces::InputTrackManagement::_L28 */
  static kcg_bool _L28;
  /* Interfaces::InputTrackManagement::_L39 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L39;
  
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    &_L1,
    Data_From_Track);
  _L38 = _L1.MA_SSP_Gradient_Available;
  *MA_SSP_Gradient_Available = _L38;
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &_L37,
    &_L1.Mode_Profile_On_Board);
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(&_L39, &_L37[1]);
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    Mode_Profile_On_Board,
    &_L39);
  _L36 = _L1.Shunting_granted_By_RBC;
  *Shunting_Granted_By_RBC = _L36;
  _L35 = _L1.Trip_Order_Given_By_Balise;
  *Trip_Order_Given_By_Balise = _L35;
  _L34 = _L1.List_Bg_Related_To_SR_Empty;
  *List_BG_Related_To_SR_Empty = _L34;
  _L33 = _L1.Stop_If_In_shunting;
  *Stop_If_In_Shunting = _L33;
  _L32 = _L1.Stop_If_In_SR;
  *Stop_If_In_SR = _L32;
  _L31 = _L1.RBC_Ack_TR_EB_Revocked;
  *RCB_Ack_And_EB_Revocked = _L31;
  _L30 = _L1.RBC_Authorized_SR;
  *RBC_Authorized_SR = _L30;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &_L29,
    &_L1.Reversing_Data);
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(Reversing_Data, &_L29);
  _L28 = _L1.Emergency_Stop_Message_Received;
  *Emergency_Stop_Message_Received = _L28;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputTrackManagement_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

