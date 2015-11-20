/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeModesConditions.h"

void ComputeModesConditions_reset(outC_ComputeModesConditions *outC)
{
  outC->init = kcg_true;
  /* 1 */ ToStaffResponsible_reset_Conditions(&outC->Context_1);
  /* 1 */ ToUnfitted_reset_Conditions(&outC->_1_Context_1);
  /* 1 */ ToSystemNational_reset_Conditions(&outC->_2_Context_1);
  /* 1 */ Procedure_Train_Reversing_reset_Procedures(&outC->_3_Context_1);
  /* 1 */ ToFullSupervision_reset_Conditions(&outC->_4_Context_1);
  /* 1 */ Procedure_OnSight_reset_Procedures(&outC->_5_Context_1);
  /* 1 */ Procedure_LimitedSupervision_reset_Procedures(&outC->_6_Context_1);
  /* 1 */ Procedure_Train_Trip_reset_Procedures(&outC->_7_Context_1);
  /* 1 */ ToTrip_reset_Conditions(&outC->_8_Context_1);
  /* 1 */ Procedure_StartOfMission_reset_Procedures(&outC->_9_Context_1);
  /* 1 */ ToShunting_reset_Conditions(&outC->_10_Context_1);
}

/* ComputeModesConditions */
void ComputeModesConditions(
  /* ComputeModesConditions::Current_Level */M_LEVEL Current_Level,
  /* ComputeModesConditions::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* ComputeModesConditions::Train_Permitted_NL */kcg_bool Train_Permitted_NL,
  /* ComputeModesConditions::Train_Permitted_PS */kcg_bool Train_Permitted_PS,
  /* ComputeModesConditions::Train_Req_SL */kcg_bool Train_Req_SL,
  /* ComputeModesConditions::All_Desks_Closed */kcg_bool All_Desks_Closed,
  /* ComputeModesConditions::Desk_Open */kcg_bool Desk_Open,
  /* ComputeModesConditions::OnBoard_Powered */kcg_bool OnBoard_Powered,
  /* ComputeModesConditions::Valid_Train_Data_Stored */kcg_bool Valid_Train_Data_Stored,
  /* ComputeModesConditions::Driver_Ack_LS */kcg_bool Driver_Ack_LS,
  /* ComputeModesConditions::Driver_Ack_OS */kcg_bool Driver_Ack_OS,
  /* ComputeModesConditions::Driver_Ack_RV */kcg_bool Driver_Ack_RV,
  /* ComputeModesConditions::Driver_Ack_SH */kcg_bool Driver_Ack_SH,
  /* ComputeModesConditions::Driver_Ack_SN */kcg_bool Driver_Ack_SN,
  /* ComputeModesConditions::Driver_Ack_SR */kcg_bool Driver_Ack_SR,
  /* ComputeModesConditions::Driver_Ack_TR */kcg_bool Driver_Ack_TR,
  /* ComputeModesConditions::Driver_Ack_UN */kcg_bool Driver_Ack_UN,
  /* ComputeModesConditions::Driver_Req_Exit_SH */kcg_bool Driver_Req_Exit_SH,
  /* ComputeModesConditions::Driver_Req_NL */kcg_bool Driver_Req_NL,
  /* ComputeModesConditions::Driver_Req_Override */kcg_bool Driver_Req_Override,
  /* ComputeModesConditions::Driver_Req_SH */kcg_bool Driver_Req_SH,
  /* ComputeModesConditions::Driver_Req_Start */kcg_bool Driver_Req_Start,
  /* ComputeModesConditions::ETCS_Isolated */kcg_bool ETCS_Isolated,
  /* ComputeModesConditions::MA_SSP_Gradiant_Available */kcg_bool MA_SSP_Gradiant_Available,
  /* ComputeModesConditions::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* ComputeModesConditions::Shunting_Granted_By_RBC */kcg_bool Shunting_Granted_By_RBC,
  /* ComputeModesConditions::Trip_Order_Given_By_Balise */kcg_bool Trip_Order_Given_By_Balise,
  /* ComputeModesConditions::List_BG_Related_To_SR_Empty */kcg_bool List_BG_Related_To_SR_Empty,
  /* ComputeModesConditions::Stop_If_In_Shunting */kcg_bool Stop_If_In_Shunting,
  /* ComputeModesConditions::Stop_If_In_SR */kcg_bool Stop_If_In_SR,
  /* ComputeModesConditions::RBC_Ack_And_EB_Revocked */kcg_bool RBC_Ack_And_EB_Revocked,
  /* ComputeModesConditions::RBC_Authorized_SR */kcg_bool RBC_Authorized_SR,
  /* ComputeModesConditions::Reversing_Data */T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* ComputeModesConditions::Emergency_Stop_Message_Received */kcg_bool Emergency_Stop_Message_Received,
  /* ComputeModesConditions::Estimated_Front_End_Overpass_SR_Distance */kcg_bool Estimated_Front_End_Overpass_SR_Distance,
  /* ComputeModesConditions::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */kcg_bool Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
  /* ComputeModesConditions::Override_Function_Active */kcg_bool Override_Function_Active,
  /* ComputeModesConditions::Train_Overpass_EOA_Antenna */kcg_bool Train_Overpass_EOA_Antenna,
  /* ComputeModesConditions::Train_Overpass_EOA_Front_End */kcg_bool Train_Overpass_EOA_Front_End,
  /* ComputeModesConditions::Train_Speed_Under_Override_Limit */kcg_bool Train_Speed_Under_Override_Limit,
  /* ComputeModesConditions::BG_In_Expected_List_In_SR */kcg_bool BG_In_Expected_List_In_SR,
  /* ComputeModesConditions::BG_In_Expected_List_In_SH */kcg_bool BG_In_Expected_List_In_SH,
  /* ComputeModesConditions::Linked_BG_Pased_In_Wrong_Direction */kcg_bool Linked_BG_Pased_In_Wrong_Direction,
  /* ComputeModesConditions::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* ComputeModesConditions::Train_Speed */Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* ComputeModesConditions::Train_Standstill */kcg_bool Train_Standstill,
  /* ComputeModesConditions::Interface_To_National_System */kcg_bool Interface_To_National_System,
  /* ComputeModesConditions::National_Trip_Order */kcg_bool National_Trip_Order,
  /* ComputeModesConditions::T_NVCONTACT_Overpass */kcg_bool T_NVCONTACT_Overpass,
  /* ComputeModesConditions::Error_BG_System_Version */kcg_bool Error_BG_System_Version,
  /* ComputeModesConditions::Failure_Occured */kcg_bool Failure_Occured,
  /* ComputeModesConditions::Continue_Shunting_Function_Active */kcg_bool Continue_Shunting_Function_Active,
  /* ComputeModesConditions::Stop_Shunting_Stored */kcg_bool Stop_Shunting_Stored,
  /* ComputeModesConditions::Linking_Reaction_To_Trip */kcg_bool Linking_Reaction_To_Trip,
  /* ComputeModesConditions::TripModeFromLevel */kcg_bool TripModeFromLevel,
  outC_ComputeModesConditions *outC)
{
  static kcg_bool tmp;
  /* ComputeModesConditions::Loc_Service_Brake_Command_SH */
  static kcg_bool Loc_Service_Brake_Command_SH;
  /* ComputeModesConditions::Loc_Clean_BG_List_SH_Area_SH */
  static kcg_bool Loc_Clean_BG_List_SH_Area_SH;
  /* ComputeModesConditions::Loc_Service_Brake_Command_OS */
  static kcg_bool Loc_Service_Brake_Command_OS;
  /* ComputeModesConditions::Loc_Service_Brake_Command_LS */
  static kcg_bool Loc_Service_Brake_Command_LS;
  /* ComputeModesConditions::Loc_Clean_BG_List_Of_SoM */
  static kcg_bool Loc_Clean_BG_List_Of_SoM;
  /* ComputeModesConditions::Loc_End_Of_Mission_Procedure_Req_SH */
  static kcg_bool Loc_End_Of_Mission_Procedure_Req_SH;
  /* ComputeModesConditions::Loc_End_Of_Mission_Procedure_Req_SB */
  static kcg_bool Loc_End_Of_Mission_Procedure_Req_SB;
  /* ComputeModesConditions::Loc_End_Of_Mission_Procedure_Req_TR */
  static kcg_bool Loc_End_Of_Mission_Procedure_Req_TR;
  /* ComputeModesConditions::Loc_Clean_BG_List_SH_Area_TR */
  static kcg_bool Loc_Clean_BG_List_SH_Area_TR;
  /* ComputeModesConditions::Loc_End_Of_Mission_Procedure_Req_SoM */
  static kcg_bool Loc_End_Of_Mission_Procedure_Req_SoM;
  /* ComputeModesConditions::Loc_Request_For_SH_To_RBC_SH */
  static kcg_bool Loc_Request_For_SH_To_RBC_SH;
  /* ComputeModesConditions::Loc_SH_Refused_By_RBC_To_DMI_SH */
  static kcg_bool Loc_SH_Refused_By_RBC_To_DMI_SH;
  /* ComputeModesConditions::Loc_Request_For_SH_To_RBC_TR */
  static kcg_bool Loc_Request_For_SH_To_RBC_TR;
  /* ComputeModesConditions::Loc_SH_Refused_By_RBC_To_DMI_TR */
  static kcg_bool Loc_SH_Refused_By_RBC_To_DMI_TR;
  /* ComputeModesConditions::Loc_SH_Refused_By_RBC_To_DMI_SoM */
  static kcg_bool Loc_SH_Refused_By_RBC_To_DMI_SoM;
  /* ComputeModesConditions::Loc_Request_For_SH_To_RBC_SoM */
  static kcg_bool Loc_Request_For_SH_To_RBC_SoM;
  /* ComputeModesConditions::Loc_Cond_5_SH */
  static kcg_bool Loc_Cond_5_SH;
  /* ComputeModesConditions::Loc_Cond_6_SH */
  static kcg_bool Loc_Cond_6_SH;
  /* ComputeModesConditions::Loc_Cond_50_SH */
  static kcg_bool Loc_Cond_50_SH;
  /* ComputeModesConditions::Loc_Cond_6_TR */
  static kcg_bool Loc_Cond_6_TR;
  /* ComputeModesConditions::Loc_Cond_5_TR */
  static kcg_bool Loc_Cond_5_TR;
  /* ComputeModesConditions::Loc_Cond_50_TR */
  static kcg_bool Loc_Cond_50_TR;
  /* ComputeModesConditions::Loc_Cond_6_SoM */
  static kcg_bool Loc_Cond_6_SoM;
  /* ComputeModesConditions::Loc_Cond_5_SoM */
  static kcg_bool Loc_Cond_5_SoM;
  /* ComputeModesConditions::Loc_Cond_50_SoM */
  static kcg_bool Loc_Cond_50_SoM;
  /* ComputeModesConditions::Loc_Cond_15_OS */
  static kcg_bool Loc_Cond_15_OS;
  /* ComputeModesConditions::Loc_Cond_70_LS */
  static kcg_bool Loc_Cond_70_LS;
  /* ComputeModesConditions::Loc_Cond_70_TR */
  static kcg_bool Loc_Cond_70_TR;
  /* ComputeModesConditions::Loc_Cond_15_TR */
  static kcg_bool Loc_Cond_15_TR;
  /* ComputeModesConditions::Loc_Cond_70_SoM */
  static kcg_bool Loc_Cond_70_SoM;
  /* ComputeModesConditions::Loc_Cond_46_SoM */
  static kcg_bool Loc_Cond_46_SoM;
  /* ComputeModesConditions::Loc_Cond_15_SoM */
  static kcg_bool Loc_Cond_15_SoM;
  /* ComputeModesConditions::Loc_Cond_8_TR */
  static kcg_bool Loc_Cond_8_TR;
  /* ComputeModesConditions::Loc_Cond_8_SoM */
  static kcg_bool Loc_Cond_8_SoM;
  /* ComputeModesConditions::Loc_Ack_LS_Req_To_Driver_TR */
  static kcg_bool Loc_Ack_LS_Req_To_Driver_TR;
  /* ComputeModesConditions::Loc_Ack_OS_Req_To_Driver_TR */
  static kcg_bool Loc_Ack_OS_Req_To_Driver_TR;
  /* ComputeModesConditions::Loc_Ack_SH_Req_To_Driver_TR */
  static kcg_bool Loc_Ack_SH_Req_To_Driver_TR;
  /* ComputeModesConditions::Loc_Ack_SR_Req_To_Driver_TR */
  static kcg_bool Loc_Ack_SR_Req_To_Driver_TR;
  /* ComputeModesConditions::Loc_Ack_SR_Req_To_Driver_SoM */
  static kcg_bool Loc_Ack_SR_Req_To_Driver_SoM;
  /* ComputeModesConditions::Loc_Ack_SH_Req_To_Driver_SoM */
  static kcg_bool Loc_Ack_SH_Req_To_Driver_SoM;
  /* ComputeModesConditions::Loc_Ack_OS_Req_To_Driver_SoM */
  static kcg_bool Loc_Ack_OS_Req_To_Driver_SoM;
  /* ComputeModesConditions::Loc_Ack_LS_Req_To_Driver_SoM */
  static kcg_bool Loc_Ack_LS_Req_To_Driver_SoM;
  /* ComputeModesConditions::Loc_Ack_SH_Req_To_Driver_SH */
  static kcg_bool Loc_Ack_SH_Req_To_Driver_SH;
  /* ComputeModesConditions::Loc_Ack_OS_Req_To_Driver_OS */
  static kcg_bool Loc_Ack_OS_Req_To_Driver_OS;
  /* ComputeModesConditions::Loc_Ack_LS_Req_To_Driver_LS */
  static kcg_bool Loc_Ack_LS_Req_To_Driver_LS;
  /* ComputeModesConditions::Loc_MA_Req_To_RBC_SoM */
  static kcg_bool Loc_MA_Req_To_RBC_SoM;
  /* ComputeModesConditions::Loc_MA_Req_To_RBC_TR */
  static kcg_bool Loc_MA_Req_To_RBC_TR;
  /* ComputeModesConditions::Loc_Cond_31_FS */
  static kcg_bool Loc_Cond_31_FS;
  /* ComputeModesConditions::Loc_Cond_31_TR */
  static kcg_bool Loc_Cond_31_TR;
  
  switch (Current_Mode) {
    case FS_Level_And_Mode_Types_Pkg :
      Loc_Cond_50_SH = kcg_true;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      Loc_Cond_50_SH = kcg_true;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      Loc_Cond_50_SH = kcg_true;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      Loc_Cond_50_SH = kcg_true;
      break;
    case NL_Level_And_Mode_Types_Pkg :
      Loc_Cond_50_SH = kcg_true;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      Loc_Cond_50_SH = kcg_true;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      Loc_Cond_50_SH = kcg_true;
      break;
    
    default :
      Loc_Cond_50_SH = kcg_false;
  }
  if (outC->init) {
    Loc_Cond_5_SH = kcg_true;
    Loc_Cond_6_SH = kcg_false;
    outC->init = kcg_false;
    Loc_Ack_LS_Req_To_Driver_TR = kcg_false;
    Loc_Ack_OS_Req_To_Driver_TR = kcg_false;
  }
  else {
    Loc_Cond_6_SH = outC->On_Going_Mission;
    Loc_Cond_5_SH = outC->End_Of_Mission_Procedure_Req;
    Loc_Ack_OS_Req_To_Driver_TR = outC->rem_Override_Function_Active;
    Loc_Ack_LS_Req_To_Driver_TR = outC->rem_Train_Overpass_EOA_Antenna;
  }
  outC->On_Going_Mission = Loc_Cond_50_SH | (Loc_Cond_6_SH & Loc_Cond_5_SH);
  /* 1 */
  ToShunting_Conditions(
    Current_Level,
    Current_Mode,
    Desk_Open,
    Driver_Ack_SH,
    Driver_Req_SH,
    Mode_Profile_On_Board,
    outC->On_Going_Mission,
    Shunting_Granted_By_RBC,
    Stop_Shunting_Stored,
    Train_Position,
    Train_Speed,
    Train_Standstill,
    &outC->_10_Context_1);
  Loc_Cond_5_SH = outC->_10_Context_1.Condition5;
  Loc_Cond_6_SH = outC->_10_Context_1.Condition6;
  outC->Condition23 = outC->_10_Context_1.Condition23;
  Loc_Cond_50_SH = outC->_10_Context_1.Condition50;
  outC->Condition51 = outC->_10_Context_1.Condition51;
  outC->Condition61 = outC->_10_Context_1.Condition61;
  Loc_Ack_SH_Req_To_Driver_SH = outC->_10_Context_1.Ack_SH_Req_To_Driver;
  Loc_Clean_BG_List_SH_Area_SH = outC->_10_Context_1.Clean_BG_List_SH_Area;
  Loc_End_Of_Mission_Procedure_Req_SH =
    outC->_10_Context_1.End_Of_Mission_Procedure_Req;
  Loc_Request_For_SH_To_RBC_SH = outC->_10_Context_1.Request_For_SH_To_RBC;
  Loc_Service_Brake_Command_SH = outC->_10_Context_1.Service_Brake_Command;
  Loc_SH_Refused_By_RBC_To_DMI_SH =
    outC->_10_Context_1.SH_refused_By_RBC_To_DMI;
  /* 1 */
  Procedure_StartOfMission_Procedures(
    Current_Level,
    Current_Mode,
    Desk_Open,
    Driver_Ack_LS,
    Driver_Ack_OS,
    Driver_Ack_SH,
    Driver_Ack_SN,
    Driver_Ack_SR,
    Driver_Ack_UN,
    Driver_Req_NL,
    Driver_Req_SH,
    Driver_Req_Start,
    MA_SSP_Gradiant_Available,
    Mode_Profile_On_Board,
    RBC_Authorized_SR,
    Shunting_Granted_By_RBC,
    Train_Permitted_NL,
    Train_Standstill,
    Valid_Train_Data_Stored,
    &outC->_9_Context_1);
  Loc_Ack_LS_Req_To_Driver_SoM = outC->_9_Context_1.Ack_LS_Req_To_Driver;
  Loc_Ack_OS_Req_To_Driver_SoM = outC->_9_Context_1.Ack_OS_Req_To_Driver;
  Loc_Ack_SH_Req_To_Driver_SoM = outC->_9_Context_1.Ack_SH_Req_To_Driver;
  outC->Ack_SN_Req_To_Driver = outC->_9_Context_1.Ack_SN_Req_To_Driver;
  Loc_Ack_SR_Req_To_Driver_SoM = outC->_9_Context_1.Ack_SR_Req_To_Driver;
  outC->Ack_UN_Req_To_Driver = outC->_9_Context_1.Ack_UN_Req_To_Driver;
  Loc_Clean_BG_List_Of_SoM = outC->_9_Context_1.Clean_BG_List_SH_Area;
  Loc_Cond_5_SoM = outC->_9_Context_1.Condition_5;
  Loc_Cond_6_SoM = outC->_9_Context_1.Condition_6;
  Loc_Cond_8_SoM = outC->_9_Context_1.Condition_8;
  outC->Condition10 = outC->_9_Context_1.Condition_10;
  Loc_Cond_15_SoM = outC->_9_Context_1.Condition_15;
  Loc_Cond_46_SoM = outC->_9_Context_1.Condition_46;
  Loc_Cond_50_SoM = outC->_9_Context_1.Condition_50;
  outC->Condition58 = outC->_9_Context_1.Condition_58;
  outC->Condition60 = outC->_9_Context_1.Condition_60;
  Loc_Cond_70_SoM = outC->_9_Context_1.Condition_70;
  outC->EB_Requested = outC->_9_Context_1.EB_Requested;
  Loc_End_Of_Mission_Procedure_Req_SoM =
    outC->_9_Context_1.End_Of_Mission_Procedure_Req;
  Loc_MA_Req_To_RBC_SoM = outC->_9_Context_1.MA_Req_To_RBC;
  Loc_Request_For_SH_To_RBC_SoM = outC->_9_Context_1.Request_For_SH_To_RBC;
  Loc_SH_Refused_By_RBC_To_DMI_SoM =
    outC->_9_Context_1.SH_Refused_By_RBC_To_DMI;
  /* 1 */
  ToTrip_Conditions(
    BG_In_Expected_List_In_SH,
    BG_In_Expected_List_In_SR,
    Current_Level,
    Current_Mode,
    Driver_Req_SH,
    Emergency_Stop_Message_Received,
    Error_BG_System_Version,
    Estimated_Front_End_Overpass_SR_Distance,
    Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
    Interface_To_National_System,
    Linked_BG_Pased_In_Wrong_Direction,
    Linking_Reaction_To_Trip,
    List_BG_Related_To_SR_Empty,
    MA_SSP_Gradiant_Available,
    National_Trip_Order,
    Override_Function_Active,
    Loc_Ack_OS_Req_To_Driver_TR,
    Stop_If_In_Shunting,
    Stop_If_In_SR,
    T_NVCONTACT_Overpass,
    Train_Overpass_EOA_Antenna,
    Train_Overpass_EOA_Front_End,
    Loc_Ack_LS_Req_To_Driver_TR,
    Trip_Order_Given_By_Balise,
    TripModeFromLevel,
    &outC->_8_Context_1);
  /* 1 */
  Procedure_Train_Trip_Procedures(
    outC->_8_Context_1.Condition2Trip,
    Current_Level,
    Current_Mode,
    Driver_Ack_LS,
    Driver_Ack_OS,
    Driver_Ack_SH,
    Driver_Ack_SR,
    Driver_Ack_TR,
    Driver_Req_SH,
    Driver_Req_Start,
    MA_SSP_Gradiant_Available,
    Mode_Profile_On_Board,
    outC->On_Going_Mission,
    RBC_Ack_And_EB_Revocked,
    RBC_Authorized_SR,
    Shunting_Granted_By_RBC,
    Train_Standstill,
    Valid_Train_Data_Stored,
    &outC->_7_Context_1);
  Loc_Ack_LS_Req_To_Driver_TR = outC->_7_Context_1.Ack_LS_Req_To_Driver;
  Loc_Ack_OS_Req_To_Driver_TR = outC->_7_Context_1.Ack_OS_Req_To_Driver;
  Loc_Ack_SH_Req_To_Driver_TR = outC->_7_Context_1.Ack_SH_Req_To_Driver;
  Loc_Ack_SR_Req_To_Driver_TR = outC->_7_Context_1.Ack_SR_Req_To_Driver;
  outC->Ack_TR_Req_To_Driver = outC->_7_Context_1.Ack_TR_Req_To_Driver;
  Loc_Clean_BG_List_SH_Area_TR = outC->_7_Context_1.Clean_BG_List_SH_Area;
  outC->Condition_Trip = outC->_7_Context_1.Condition_Trip;
  Loc_Cond_5_TR = outC->_7_Context_1.Condition_5;
  Loc_Cond_6_TR = outC->_7_Context_1.Condition_6;
  outC->Condition7 = outC->_7_Context_1.Condition_7;
  Loc_Cond_8_TR = outC->_7_Context_1.Condition_8;
  Loc_Cond_31_TR = outC->_7_Context_1.Condition_31;
  Loc_Cond_15_TR = outC->_7_Context_1.Condition_15;
  Loc_Cond_50_TR = outC->_7_Context_1.Condition_50;
  outC->Condition62 = outC->_7_Context_1.Condition_62;
  outC->Condition63 = outC->_7_Context_1.Condition_63;
  outC->Condition68 = outC->_7_Context_1.Condition_68;
  Loc_Cond_70_TR = outC->_7_Context_1.Condition_70;
  Loc_End_Of_Mission_Procedure_Req_TR =
    outC->_7_Context_1.End_Of_Mission_Procedure_Req;
  Loc_MA_Req_To_RBC_TR = outC->_7_Context_1.MA_Req_To_RBC;
  Loc_Request_For_SH_To_RBC_TR = outC->_7_Context_1.Request_For_SH_To_RBC;
  Loc_SH_Refused_By_RBC_To_DMI_TR = outC->_7_Context_1.SH_Refused_By_RBC_To_DMI;
  /* 1 */
  Procedure_LimitedSupervision_Procedures(
    Current_Mode,
    Driver_Ack_LS,
    Mode_Profile_On_Board,
    Train_Position,
    Train_Speed,
    &outC->_6_Context_1);
  Loc_Cond_70_LS = outC->_6_Context_1.Condition70;
  outC->Condition71 = outC->_6_Context_1.Condition71;
  outC->Condition72 = outC->_6_Context_1.Condition72;
  outC->Condition74 = outC->_6_Context_1.Condition74;
  Loc_Ack_LS_Req_To_Driver_LS = outC->_6_Context_1.Ack_LS_Req_To_Driver;
  Loc_Service_Brake_Command_LS = outC->_6_Context_1.Service_Brake_Command;
  /* 1 */
  Procedure_OnSight_Procedures(
    Current_Mode,
    Driver_Ack_OS,
    Mode_Profile_On_Board,
    Train_Position,
    Train_Speed,
    &outC->_5_Context_1);
  Loc_Cond_15_OS = outC->_5_Context_1.Condition15;
  outC->Condition34 = outC->_5_Context_1.Condition34;
  outC->Condition40 = outC->_5_Context_1.Condition40;
  outC->Condition73 = outC->_5_Context_1.Condition73;
  Loc_Ack_OS_Req_To_Driver_OS = outC->_5_Context_1.Ack_OS_Req_To_Driver;
  Loc_Service_Brake_Command_OS = outC->_5_Context_1.Service_Brake_Command;
  /* 1 */
  ToStandBy_Conditions(
    Desk_Open,
    All_Desks_Closed,
    Train_Standstill,
    Train_Req_SL,
    OnBoard_Powered,
    Train_Permitted_PS,
    Train_Permitted_NL,
    Continue_Shunting_Function_Active,
    Driver_Req_Exit_SH,
    Stop_Shunting_Stored,
    outC->On_Going_Mission,
    &outC->Condition2,
    &outC->Condition3,
    &outC->Condition4,
    &outC->Condition19,
    &outC->Condition22,
    &outC->Condition27,
    &outC->Condition28,
    &outC->Condition30,
    &outC->Condition47,
    &Loc_End_Of_Mission_Procedure_Req_SB);
  /* 1 */
  ToFullSupervision_Conditions(
    Current_Level,
    Trip_Order_Given_By_Balise,
    Mode_Profile_On_Board,
    MA_SSP_Gradiant_Available,
    &outC->_4_Context_1);
  outC->Condition25 = outC->_4_Context_1.Condition25;
  Loc_Cond_31_FS = outC->_4_Context_1.Condition31;
  outC->Condition32 = outC->_4_Context_1.Condition32;
  tmp = /* 1 */
    ToNonLeading_Conditions(
      Train_Permitted_NL,
      Train_Standstill,
      Driver_Req_NL);
  /* 1 */
  Merge_Conditions(
    Loc_SH_Refused_By_RBC_To_DMI_SH,
    Loc_SH_Refused_By_RBC_To_DMI_SoM,
    Loc_SH_Refused_By_RBC_To_DMI_TR,
    Loc_Ack_LS_Req_To_Driver_LS,
    Loc_Ack_LS_Req_To_Driver_SoM,
    Loc_Ack_LS_Req_To_Driver_TR,
    Loc_Ack_OS_Req_To_Driver_OS,
    Loc_Ack_OS_Req_To_Driver_SoM,
    Loc_Ack_OS_Req_To_Driver_TR,
    Loc_Ack_SH_Req_To_Driver_SH,
    Loc_Ack_SH_Req_To_Driver_SoM,
    Loc_Ack_SH_Req_To_Driver_TR,
    Loc_Ack_SR_Req_To_Driver_SoM,
    Loc_Ack_SR_Req_To_Driver_TR,
    Loc_Clean_BG_List_Of_SoM,
    Loc_Clean_BG_List_SH_Area_SH,
    Loc_Clean_BG_List_SH_Area_TR,
    Loc_End_Of_Mission_Procedure_Req_SB,
    Loc_End_Of_Mission_Procedure_Req_SH,
    Loc_End_Of_Mission_Procedure_Req_SoM,
    Loc_End_Of_Mission_Procedure_Req_TR,
    Loc_MA_Req_To_RBC_SoM,
    Loc_MA_Req_To_RBC_TR,
    Loc_Request_For_SH_To_RBC_SH,
    Loc_Request_For_SH_To_RBC_SoM,
    Loc_Request_For_SH_To_RBC_TR,
    Loc_Service_Brake_Command_LS,
    Loc_Service_Brake_Command_OS,
    Loc_Service_Brake_Command_SH,
    Loc_Cond_15_OS,
    Loc_Cond_15_SoM,
    Loc_Cond_15_TR,
    Loc_Cond_31_FS,
    Loc_Cond_31_TR,
    tmp,
    Loc_Cond_46_SoM,
    Loc_Cond_50_SH,
    Loc_Cond_50_SoM,
    Loc_Cond_50_TR,
    Loc_Cond_5_SH,
    Loc_Cond_5_SoM,
    Loc_Cond_5_TR,
    Loc_Cond_6_SH,
    Loc_Cond_6_SoM,
    Loc_Cond_6_TR,
    Loc_Cond_70_LS,
    Loc_Cond_70_SoM,
    Loc_Cond_70_TR,
    Loc_Cond_8_SoM,
    Loc_Cond_8_TR,
    &outC->SH_Refused_By_RBC_To_DMI,
    &outC->Ack_LS_Req_To_Driver,
    &outC->Ack_OS_Req_To_Driver,
    &outC->Ack_SH_Req_To_Driver,
    &outC->Ack_SR_Req_To_Driver,
    &outC->Clean_BG_List_SH_Area,
    &outC->End_Of_Mission_Procedure_Req,
    &outC->MA_Req_To_RBC,
    &outC->Request_For_SH_To_RBC,
    &outC->Service_Brake_Command,
    &outC->Condition15,
    &outC->Condition31,
    &outC->Condition46,
    &outC->Condition50,
    &outC->Condition5,
    &outC->Condition6,
    &outC->Condition70,
    &outC->Condition8);
  /* 1 */
  Procedure_Train_Reversing_Procedures(
    Driver_Ack_RV,
    Train_Standstill,
    Train_Position,
    Current_Mode,
    Reversing_Data,
    &outC->_3_Context_1);
  outC->Condition59 = outC->_3_Context_1.Condition_59;
  outC->Ack_RV_Req_To_Driver = outC->_3_Context_1.Ack_RV_Req_To_Driver;
  /* 1 */ ToSystemNational_Conditions(Current_Level, &outC->_2_Context_1);
  outC->Condition56 = outC->_2_Context_1.Condition56;
  /* 1 */ ToUnfitted_Conditions(Current_Level, &outC->_1_Context_1);
  outC->Condition21 = outC->_1_Context_1.Condition21;
  /* 1 */
  ToStaffResponsible_Conditions(
    Current_Level,
    Driver_Req_Override,
    Train_Speed_Under_Override_Limit,
    Override_Function_Active,
    Emergency_Stop_Message_Received,
    &outC->Context_1);
  outC->Condition44 = outC->Context_1.Condition44;
  outC->Condition45 = outC->Context_1.Condition45;
  outC->Condition37 = outC->Context_1.Condition37;
  outC->Condition26 = /* 1 */
    ToPassiveShunting_Conditions(
      Train_Permitted_PS,
      Continue_Shunting_Function_Active,
      All_Desks_Closed);
  outC->Condition14 = /* 1 */
    ToSleeping_Conditions(All_Desks_Closed, Train_Standstill, Train_Req_SL);
  outC->Condition29 = /* 1 */ ToNoPower_Conditions(OnBoard_Powered);
  outC->Condition13 = /* 1 */ ToSystemFailure_Conditions(Failure_Occured);
  outC->Condition1 = /* 1 */ ToIsolate_Conditions(ETCS_Isolated);
  outC->rem_Override_Function_Active = Override_Function_Active;
  outC->rem_Train_Overpass_EOA_Antenna = Train_Overpass_EOA_Antenna;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeModesConditions.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

