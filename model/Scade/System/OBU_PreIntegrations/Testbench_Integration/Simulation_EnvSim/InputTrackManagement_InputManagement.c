/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTrackManagement_InputManagement.h"

/* InputManagement::InputTrackManagement */
void InputTrackManagement_InputManagement(
  /* InputManagement::InputTrackManagement::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::InputTrackManagement::Data_From_Track_Messages */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* InputManagement::InputTrackManagement::Data_From_Track_MASSPGradient */T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  /* InputManagement::InputTrackManagement::Data_From_Track_To_Mode */T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track_To_Mode,
  /* InputManagement::InputTrackManagement::Data_From_Track_to_Level */T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level)
{
  /* InputManagement::InputTrackManagement::Loc_Trip_Order_Given_By_Balise */
  static kcg_bool Loc_Trip_Order_Given_By_Balise;
  /* InputManagement::InputTrackManagement::Loc_List_BG_Related_To_SR_Empty */
  static kcg_bool Loc_List_BG_Related_To_SR_Empty;
  /* InputManagement::InputTrackManagement::Loc_Stop_If_In_Shunting */
  static kcg_bool Loc_Stop_If_In_Shunting;
  /* InputManagement::InputTrackManagement::Loc_Stop_If_In_SR */
  static kcg_bool Loc_Stop_If_In_SR;
  /* InputManagement::InputTrackManagement::Loc_Reversing_Data */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg Loc_Reversing_Data;
  /* InputManagement::InputTrackManagement::Loc_conditionalTransitions */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg Loc_conditionalTransitions;
  
  /* 1 */
  Input_Level_Transition_InputManagement(
    Data_From_Track_Packets,
    &Loc_conditionalTransitions,
    &(*Data_From_Track_to_Level).level_transition_priority_table);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &(*Data_From_Track_to_Level).conditionnalTransition,
    &Loc_conditionalTransitions);
  /* 1 */
  Input_MA_SSP_Gradient_InputManagement(
    Data_From_Track_MASSPGradient,
    &(*Data_From_Track_to_Level).receivedL2L3MA_track,
    &Loc_List_BG_Related_To_SR_Empty,
    &(*Data_From_Track_To_Mode).MA_SSP_Gradient_Available);
  (*Data_From_Track_to_Level).receivedL1MA_track =
    Loc_List_BG_Related_To_SR_Empty;
  /* 1 */
  Input_Messages_InputManagement(
    Data_From_Track_Messages,
    &Loc_List_BG_Related_To_SR_Empty,
    &(*Data_From_Track_To_Mode).Shunting_granted_By_RBC,
    &Loc_Stop_If_In_SR,
    &Loc_Stop_If_In_Shunting);
  (*Data_From_Track_To_Mode).RBC_Ack_TR_EB_Revocked = Loc_Stop_If_In_SR;
  (*Data_From_Track_To_Mode).RBC_Authorized_SR = Loc_Stop_If_In_Shunting;
  (*Data_From_Track_To_Mode).Emergency_Stop_Message_Received =
    Loc_List_BG_Related_To_SR_Empty;
  /* 1 */
  Input_Modes_InputManagement(
    Data_From_Track_Packets,
    &Loc_Stop_If_In_Shunting,
    &Loc_Stop_If_In_SR,
    &Loc_Reversing_Data,
    &(*Data_From_Track_To_Mode).Mode_Profile_On_Board,
    &Loc_List_BG_Related_To_SR_Empty,
    &Loc_Trip_Order_Given_By_Balise);
  (*Data_From_Track_To_Mode).Trip_Order_Given_By_Balise =
    Loc_Trip_Order_Given_By_Balise;
  (*Data_From_Track_To_Mode).List_Bg_Related_To_SR_Empty =
    Loc_List_BG_Related_To_SR_Empty;
  (*Data_From_Track_To_Mode).Stop_If_In_shunting = Loc_Stop_If_In_Shunting;
  (*Data_From_Track_To_Mode).Stop_If_In_SR = Loc_Stop_If_In_SR;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &(*Data_From_Track_To_Mode).Reversing_Data,
    &Loc_Reversing_Data);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputTrackManagement_InputManagement.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

