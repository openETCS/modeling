/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTrackManagement_InputManagement.h"

/* InputManagement::InputTrackManagement */
void InputTrackManagement_InputManagement(
  /* InputManagement::InputTrackManagement::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::InputTrackManagement::Data_From_Track_Messages */ T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* InputManagement::InputTrackManagement::Data_From_Track_MASSPGradient */ T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  /* InputManagement::InputTrackManagement::Data_From_Track_To_Mode */ T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track_To_Mode,
  /* InputManagement::InputTrackManagement::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level)
{
  /* InputManagement::InputTrackManagement::Loc_MA_SSP_Gradient_Available */
  static kcg_bool Loc_MA_SSP_Gradient_Available;
  /* InputManagement::InputTrackManagement::Loc_Mode_Profile_On_Board */
  static T_Mode_Profile_Table_Level_And_Mode_Types_Pkg Loc_Mode_Profile_On_Board;
  /* InputManagement::InputTrackManagement::Loc_Shunting_Granted_By_RBC */
  static kcg_bool Loc_Shunting_Granted_By_RBC;
  /* InputManagement::InputTrackManagement::Loc_Trip_Order_Given_By_Balise */
  static kcg_bool Loc_Trip_Order_Given_By_Balise;
  /* InputManagement::InputTrackManagement::Loc_List_BG_Related_To_SR_Empty */
  static kcg_bool Loc_List_BG_Related_To_SR_Empty;
  /* InputManagement::InputTrackManagement::Loc_Stop_If_In_Shunting */
  static kcg_bool Loc_Stop_If_In_Shunting;
  /* InputManagement::InputTrackManagement::Loc_Stop_If_In_SR */
  static kcg_bool Loc_Stop_If_In_SR;
  /* InputManagement::InputTrackManagement::Loc_RCB_Ack_And_EB_Revocked */
  static kcg_bool Loc_RCB_Ack_And_EB_Revocked;
  /* InputManagement::InputTrackManagement::Loc_RBC_Authorized_SR */
  static kcg_bool Loc_RBC_Authorized_SR;
  /* InputManagement::InputTrackManagement::Loc_Reversing_Data */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg Loc_Reversing_Data;
  /* InputManagement::InputTrackManagement::Loc_Emergency_Stop_Message_Received */
  static kcg_bool Loc_Emergency_Stop_Message_Received;
  /* InputManagement::InputTrackManagement::Loc_conditionalTransitions */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg Loc_conditionalTransitions;
  /* InputManagement::InputTrackManagement::Loc_levelTransitions */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg Loc_levelTransitions;
  /* InputManagement::InputTrackManagement::Loc_received_L2L3MA */
  static kcg_bool Loc_received_L2L3MA;
  /* InputManagement::InputTrackManagement::Loc_received_L1MA */
  static kcg_bool Loc_received_L1MA;
  /* InputManagement::InputTrackManagement::_L28 */
  static T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg _L28;
  /* InputManagement::InputTrackManagement::_L29 */
  static kcg_bool _L29;
  /* InputManagement::InputTrackManagement::_L32 */
  static kcg_bool _L32;
  /* InputManagement::InputTrackManagement::_L33 */
  static kcg_bool _L33;
  /* InputManagement::InputTrackManagement::_L34 */
  static T_Mode_Profile_Table_Level_And_Mode_Types_Pkg _L34;
  /* InputManagement::InputTrackManagement::_L35 */
  static kcg_bool _L35;
  /* InputManagement::InputTrackManagement::_L36 */
  static kcg_bool _L36;
  /* InputManagement::InputTrackManagement::_L37 */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg _L37;
  /* InputManagement::InputTrackManagement::_L38 */
  static kcg_bool _L38;
  /* InputManagement::InputTrackManagement::_L39 */
  static kcg_bool _L39;
  /* InputManagement::InputTrackManagement::_L40 */
  static kcg_bool _L40;
  /* InputManagement::InputTrackManagement::_L42 */
  static kcg_bool _L42;
  /* InputManagement::InputTrackManagement::_L64 */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg _L64;
  /* InputManagement::InputTrackManagement::_L65 */
  static T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg _L65;
  /* InputManagement::InputTrackManagement::_L66 */
  static kcg_bool _L66;
  /* InputManagement::InputTrackManagement::_L67 */
  static kcg_bool _L67;
  /* InputManagement::InputTrackManagement::_L68 */
  static kcg_bool _L68;
  /* InputManagement::InputTrackManagement::_L83 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L83;
  /* InputManagement::InputTrackManagement::_L84 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L84;
  /* InputManagement::InputTrackManagement::_L98 */
  static kcg_bool _L98;
  /* InputManagement::InputTrackManagement::_L99 */
  static kcg_bool _L99;
  /* InputManagement::InputTrackManagement::_L100 */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg _L100;
  /* InputManagement::InputTrackManagement::_L101 */
  static T_Mode_Profile_Table_Level_And_Mode_Types_Pkg _L101;
  /* InputManagement::InputTrackManagement::_L102 */
  static kcg_bool _L102;
  /* InputManagement::InputTrackManagement::_L134 */
  static T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg _L134;
  /* InputManagement::InputTrackManagement::_L222 */
  static kcg_bool _L222;
  /* InputManagement::InputTrackManagement::_L223 */
  static kcg_bool _L223;
  /* InputManagement::InputTrackManagement::_L224 */
  static kcg_bool _L224;
  /* InputManagement::InputTrackManagement::_L225 */
  static kcg_bool _L225;
  /* InputManagement::InputTrackManagement::_L226 */
  static kcg_bool _L226;
  /* InputManagement::InputTrackManagement::_L227 */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg _L227;
  /* InputManagement::InputTrackManagement::_L229 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L229;
  /* InputManagement::InputTrackManagement::_L230 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L230;
  /* InputManagement::InputTrackManagement::_L231 */
  static kcg_bool _L231;
  /* InputManagement::InputTrackManagement::_L232 */
  static kcg_bool _L232;
  /* InputManagement::InputTrackManagement::_L234 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L234;
  
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &_L134,
    Data_From_Track_MASSPGradient);
  /* 1 */ Input_MA_SSP_Gradient_InputManagement(&_L134, &_L67, &_L66, &_L68);
  Loc_MA_SSP_Gradient_Available = _L68;
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &_L227,
    Data_From_Track_Packets);
  /* 1 */
  Input_Modes_InputManagement(
    &_L227,
    &_L98,
    &_L99,
    &_L100,
    &_L101,
    &_L102,
    &_L226);
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &Loc_Mode_Profile_On_Board,
    &_L101);
  Loc_List_BG_Related_To_SR_Empty = _L102;
  Loc_Stop_If_In_Shunting = _L98;
  Loc_Stop_If_In_SR = _L99;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &Loc_Reversing_Data,
    &_L100);
  _L33 = Loc_MA_SSP_Gradient_Available;
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &_L34,
    &Loc_Mode_Profile_On_Board);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &_L65,
    Data_From_Track_Messages);
  /* 1 */ Input_Messages_InputManagement(&_L65, &_L222, &_L223, &_L224, &_L225);
  Loc_Shunting_Granted_By_RBC = _L223;
  _L38 = Loc_Shunting_Granted_By_RBC;
  Loc_Trip_Order_Given_By_Balise = _L226;
  _L42 = Loc_Trip_Order_Given_By_Balise;
  _L32 = Loc_List_BG_Related_To_SR_Empty;
  _L39 = Loc_Stop_If_In_Shunting;
  _L40 = Loc_Stop_If_In_SR;
  Loc_RCB_Ack_And_EB_Revocked = _L224;
  _L36 = Loc_RCB_Ack_And_EB_Revocked;
  Loc_RBC_Authorized_SR = _L225;
  _L35 = Loc_RBC_Authorized_SR;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &_L37,
    &Loc_Reversing_Data);
  Loc_Emergency_Stop_Message_Received = _L222;
  _L29 = Loc_Emergency_Stop_Message_Received;
  _L28.MA_SSP_Gradient_Available = _L33;
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &_L28.Mode_Profile_On_Board,
    &_L34);
  _L28.Shunting_granted_By_RBC = _L38;
  _L28.Trip_Order_Given_By_Balise = _L42;
  _L28.List_Bg_Related_To_SR_Empty = _L32;
  _L28.Stop_If_In_shunting = _L39;
  _L28.Stop_If_In_SR = _L40;
  _L28.RBC_Ack_TR_EB_Revocked = _L36;
  _L28.RBC_Authorized_SR = _L35;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &_L28.Reversing_Data,
    &_L37);
  _L28.Emergency_Stop_Message_Received = _L29;
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    Data_From_Track_To_Mode,
    &_L28);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &_L64,
    Data_From_Track_Packets);
  /* 1 */ Input_Level_Transition_InputManagement(&_L64, &_L84, &_L83);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &Loc_levelTransitions,
    &_L83);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L230,
    &Loc_levelTransitions);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &Loc_conditionalTransitions,
    &_L84);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L229,
    &Loc_conditionalTransitions);
  Loc_received_L2L3MA = _L67;
  _L231 = Loc_received_L2L3MA;
  Loc_received_L1MA = _L66;
  _L232 = Loc_received_L1MA;
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L234.level_transition_priority_table,
    &_L230);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &_L234.conditionnalTransition,
    &_L229);
  _L234.receivedL2L3MA_track = _L231;
  _L234.receivedL1MA_track = _L232;
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    Data_From_Track_to_Level,
    &_L234);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputTrackManagement_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

