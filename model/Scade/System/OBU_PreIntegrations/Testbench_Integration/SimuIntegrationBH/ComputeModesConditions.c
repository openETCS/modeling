/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeModesConditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ComputeModesConditions_init(outC_ComputeModesConditions *outC)
{
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
  outC->rem_Override_Function_Active = kcg_true;
  outC->rem_Train_Overpass_EOA_Antenna = kcg_true;
  outC->rem_Failure_Occured = kcg_true;
  outC->On_Going_Mission = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Ack_UN_Req_To_Driver = kcg_true;
  outC->Ack_TR_Req_To_Driver = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_SN_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_RV_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->Condition_Trip = kcg_true;
  outC->Condition74 = kcg_true;
  outC->Condition73 = kcg_true;
  outC->Condition72 = kcg_true;
  outC->Condition71 = kcg_true;
  outC->Condition70 = kcg_true;
  outC->Condition68 = kcg_true;
  outC->Condition63 = kcg_true;
  outC->Condition62 = kcg_true;
  outC->Condition61 = kcg_true;
  outC->Condition60 = kcg_true;
  outC->Condition59 = kcg_true;
  outC->Condition58 = kcg_true;
  outC->Condition56 = kcg_true;
  outC->Condition51 = kcg_true;
  outC->Condition50 = kcg_true;
  outC->Condition47 = kcg_true;
  outC->Condition46 = kcg_true;
  outC->Condition45 = kcg_true;
  outC->Condition44 = kcg_true;
  outC->Condition40 = kcg_true;
  outC->Condition37 = kcg_true;
  outC->Condition34 = kcg_true;
  outC->Condition32 = kcg_true;
  outC->Condition31 = kcg_true;
  outC->Condition30 = kcg_true;
  outC->Condition29 = kcg_true;
  outC->Condition28 = kcg_true;
  outC->Condition27 = kcg_true;
  outC->Condition26 = kcg_true;
  outC->Condition25 = kcg_true;
  outC->Condition23 = kcg_true;
  outC->Condition22 = kcg_true;
  outC->Condition21 = kcg_true;
  outC->Condition19 = kcg_true;
  outC->Condition15 = kcg_true;
  outC->Condition14 = kcg_true;
  outC->Condition13 = kcg_true;
  outC->Condition10 = kcg_true;
  outC->Condition8 = kcg_true;
  outC->Condition7 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition5 = kcg_true;
  outC->Condition4 = kcg_true;
  outC->Condition3 = kcg_true;
  outC->Condition2 = kcg_true;
  outC->Condition1 = kcg_true;
  /* 1 */ Procedure_Train_Trip_init_Procedures(&outC->_10_Context_1);
  /* 1 */ Procedure_StartOfMission_init_Procedures(&outC->_9_Context_1);
  /* 1 */ Procedure_Train_Reversing_init_Procedures(&outC->_8_Context_1);
  /* 1 */ ToTrip_init_Conditions(&outC->_7_Context_1);
  /* 1 */ ToSystemNational_init_Conditions(&outC->_6_Context_1);
  /* 1 */ ToUnfitted_init_Conditions(&outC->_5_Context_1);
  /* 1 */ ToStaffResponsible_init_Conditions(&outC->_4_Context_1);
  /* 1 */ Procedure_OnSight_init_Procedures(&outC->_3_Context_1);
  /* 1 */ Procedure_LimitedSupervision_init_Procedures(&outC->_2_Context_1);
  /* 1 */ ToFullSupervision_init_Conditions(&outC->_1_Context_1);
  /* 1 */ ToShunting_init_Conditions(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ComputeModesConditions_reset(outC_ComputeModesConditions *outC)
{
  outC->init = kcg_true;
  /* 1 */ Procedure_Train_Trip_reset_Procedures(&outC->_10_Context_1);
  /* 1 */ Procedure_StartOfMission_reset_Procedures(&outC->_9_Context_1);
  /* 1 */ Procedure_Train_Reversing_reset_Procedures(&outC->_8_Context_1);
  /* 1 */ ToTrip_reset_Conditions(&outC->_7_Context_1);
  /* 1 */ ToSystemNational_reset_Conditions(&outC->_6_Context_1);
  /* 1 */ ToUnfitted_reset_Conditions(&outC->_5_Context_1);
  /* 1 */ ToStaffResponsible_reset_Conditions(&outC->_4_Context_1);
  /* 1 */ Procedure_OnSight_reset_Procedures(&outC->_3_Context_1);
  /* 1 */ Procedure_LimitedSupervision_reset_Procedures(&outC->_2_Context_1);
  /* 1 */ ToFullSupervision_reset_Conditions(&outC->_1_Context_1);
  /* 1 */ ToShunting_reset_Conditions(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ComputeModesConditions */
void ComputeModesConditions(
  /* ComputeModesConditions::Current_Level */ M_LEVEL Current_Level,
  /* ComputeModesConditions::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* ComputeModesConditions::Train_Permitted_NL */ kcg_bool Train_Permitted_NL,
  /* ComputeModesConditions::Train_Permitted_PS */ kcg_bool Train_Permitted_PS,
  /* ComputeModesConditions::Train_Req_SL */ kcg_bool Train_Req_SL,
  /* ComputeModesConditions::All_Desks_Closed */ kcg_bool All_Desks_Closed,
  /* ComputeModesConditions::Desk_Open */ kcg_bool Desk_Open,
  /* ComputeModesConditions::OnBoard_Powered */ kcg_bool OnBoard_Powered,
  /* ComputeModesConditions::Valid_Train_Data_Stored */ kcg_bool Valid_Train_Data_Stored,
  /* ComputeModesConditions::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* ComputeModesConditions::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* ComputeModesConditions::Driver_Ack_RV */ kcg_bool Driver_Ack_RV,
  /* ComputeModesConditions::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* ComputeModesConditions::Driver_Ack_SN */ kcg_bool Driver_Ack_SN,
  /* ComputeModesConditions::Driver_Ack_SR */ kcg_bool Driver_Ack_SR,
  /* ComputeModesConditions::Driver_Ack_TR */ kcg_bool Driver_Ack_TR,
  /* ComputeModesConditions::Driver_Ack_UN */ kcg_bool Driver_Ack_UN,
  /* ComputeModesConditions::Driver_Req_Exit_SH */ kcg_bool Driver_Req_Exit_SH,
  /* ComputeModesConditions::Driver_Req_NL */ kcg_bool Driver_Req_NL,
  /* ComputeModesConditions::Driver_Req_Override */ kcg_bool Driver_Req_Override,
  /* ComputeModesConditions::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* ComputeModesConditions::Driver_Req_Start */ kcg_bool Driver_Req_Start,
  /* ComputeModesConditions::ETCS_Isolated */ kcg_bool ETCS_Isolated,
  /* ComputeModesConditions::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  /* ComputeModesConditions::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* ComputeModesConditions::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* ComputeModesConditions::Trip_Order_Given_By_Balise */ kcg_bool Trip_Order_Given_By_Balise,
  /* ComputeModesConditions::List_BG_Related_To_SR_Empty */ kcg_bool List_BG_Related_To_SR_Empty,
  /* ComputeModesConditions::Stop_If_In_Shunting */ kcg_bool Stop_If_In_Shunting,
  /* ComputeModesConditions::Stop_If_In_SR */ kcg_bool Stop_If_In_SR,
  /* ComputeModesConditions::RBC_Ack_And_EB_Revocked */ kcg_bool RBC_Ack_And_EB_Revocked,
  /* ComputeModesConditions::RBC_Authorized_SR */ kcg_bool RBC_Authorized_SR,
  /* ComputeModesConditions::Reversing_Data */ T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* ComputeModesConditions::Emergency_Stop_Message_Received */ kcg_bool Emergency_Stop_Message_Received,
  /* ComputeModesConditions::Estimated_Front_End_Overpass_SR_Distance */ kcg_bool Estimated_Front_End_Overpass_SR_Distance,
  /* ComputeModesConditions::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */ kcg_bool Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
  /* ComputeModesConditions::Override_Function_Active */ kcg_bool Override_Function_Active,
  /* ComputeModesConditions::Train_Overpass_EOA_Antenna */ kcg_bool Train_Overpass_EOA_Antenna,
  /* ComputeModesConditions::Train_Overpass_EOA_Front_End */ kcg_bool Train_Overpass_EOA_Front_End,
  /* ComputeModesConditions::Train_Speed_Under_Override_Limit */ kcg_bool Train_Speed_Under_Override_Limit,
  /* ComputeModesConditions::BG_In_Expected_List_In_SR */ kcg_bool BG_In_Expected_List_In_SR,
  /* ComputeModesConditions::BG_In_Expected_List_In_SH */ kcg_bool BG_In_Expected_List_In_SH,
  /* ComputeModesConditions::Linked_BG_Pased_In_Wrong_Direction */ kcg_bool Linked_BG_Pased_In_Wrong_Direction,
  /* ComputeModesConditions::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* ComputeModesConditions::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* ComputeModesConditions::Train_Standstill */ kcg_bool Train_Standstill,
  /* ComputeModesConditions::Interface_To_National_System */ kcg_bool Interface_To_National_System,
  /* ComputeModesConditions::National_Trip_Order */ kcg_bool National_Trip_Order,
  /* ComputeModesConditions::T_NVCONTACT_Overpass */ kcg_bool T_NVCONTACT_Overpass,
  /* ComputeModesConditions::Error_BG_System_Version */ kcg_bool Error_BG_System_Version,
  /* ComputeModesConditions::Failure_Occured */ kcg_bool Failure_Occured,
  /* ComputeModesConditions::Continue_Shunting_Function_Active */ kcg_bool Continue_Shunting_Function_Active,
  /* ComputeModesConditions::Stop_Shunting_Stored */ kcg_bool Stop_Shunting_Stored,
  /* ComputeModesConditions::Linking_Reaction_To_Trip */ kcg_bool Linking_Reaction_To_Trip,
  /* ComputeModesConditions::TripModeFromLevel */ kcg_bool TripModeFromLevel,
  outC_ComputeModesConditions *outC)
{
  /* ComputeModesConditions::On_Going_Mission */
  static kcg_bool last_On_Going_Mission;
  /* ComputeModesConditions::End_Of_Mission_Procedure_Req */
  static kcg_bool last_End_Of_Mission_Procedure_Req;
  /* ComputeModesConditions::Failure_Occured */
  static kcg_bool last_Failure_Occured;
  /* ComputeModesConditions::Train_Overpass_EOA_Antenna */
  static kcg_bool last_Train_Overpass_EOA_Antenna;
  /* ComputeModesConditions::Override_Function_Active */
  static kcg_bool last_Override_Function_Active;
  /* ComputeModesConditions::Current_Level */
  static M_LEVEL last_Current_Level;
  /* ComputeModesConditions::Condition_to_Trip */
  static kcg_bool Condition_to_Trip;
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
  /* ComputeModesConditions::Loc_Cond_46_NL */
  static kcg_bool Loc_Cond_46_NL;
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
  /* ComputeModesConditions::_L1 */
  static kcg_bool _L1;
  /* ComputeModesConditions::_L2 */
  static kcg_bool _L2;
  /* ComputeModesConditions::_L3 */
  static kcg_bool _L3;
  /* ComputeModesConditions::_L4 */
  static kcg_bool _L4;
  /* ComputeModesConditions::_L5 */
  static kcg_bool _L5;
  /* ComputeModesConditions::_L6 */
  static kcg_bool _L6;
  /* ComputeModesConditions::_L7 */
  static kcg_bool _L7;
  /* ComputeModesConditions::_L10 */
  static kcg_bool _L10;
  /* ComputeModesConditions::_L11 */
  static kcg_bool _L11;
  /* ComputeModesConditions::_L27 */
  static kcg_bool _L27;
  /* ComputeModesConditions::_L28 */
  static kcg_bool _L28;
  /* ComputeModesConditions::_L29 */
  static kcg_bool _L29;
  /* ComputeModesConditions::_L30 */
  static kcg_bool _L30;
  /* ComputeModesConditions::_L31 */
  static kcg_bool _L31;
  /* ComputeModesConditions::_L33 */
  static kcg_bool _L33;
  /* ComputeModesConditions::_L39 */
  static kcg_bool _L39;
  /* ComputeModesConditions::_L40 */
  static kcg_bool _L40;
  /* ComputeModesConditions::_L32 */
  static kcg_bool _L32;
  /* ComputeModesConditions::_L41 */
  static kcg_bool _L41;
  /* ComputeModesConditions::_L42 */
  static kcg_bool _L42;
  /* ComputeModesConditions::_L45 */
  static kcg_bool _L45;
  /* ComputeModesConditions::_L46 */
  static kcg_bool _L46;
  /* ComputeModesConditions::_L50 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L50;
  /* ComputeModesConditions::_L57 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L57;
  /* ComputeModesConditions::_L59 */
  static kcg_bool _L59;
  /* ComputeModesConditions::_L60 */
  static kcg_bool _L60;
  /* ComputeModesConditions::_L64 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L64;
  /* ComputeModesConditions::_L68 */
  static kcg_bool _L68;
  /* ComputeModesConditions::_L73 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L73;
  /* ComputeModesConditions::_L77 */
  static kcg_bool _L77;
  /* ComputeModesConditions::_L79 */
  static kcg_bool _L79;
  /* ComputeModesConditions::_L80 */
  static kcg_bool _L80;
  /* ComputeModesConditions::_L81 */
  static kcg_bool _L81;
  /* ComputeModesConditions::_L82 */
  static kcg_bool _L82;
  /* ComputeModesConditions::_L83 */
  static kcg_bool _L83;
  /* ComputeModesConditions::_L84 */
  static kcg_bool _L84;
  /* ComputeModesConditions::_L85 */
  static kcg_bool _L85;
  /* ComputeModesConditions::_L86 */
  static kcg_bool _L86;
  /* ComputeModesConditions::_L87 */
  static kcg_bool _L87;
  /* ComputeModesConditions::_L88 */
  static kcg_bool _L88;
  /* ComputeModesConditions::_L89 */
  static kcg_bool _L89;
  /* ComputeModesConditions::_L90 */
  static kcg_bool _L90;
  /* ComputeModesConditions::_L91 */
  static kcg_bool _L91;
  /* ComputeModesConditions::_L92 */
  static kcg_bool _L92;
  /* ComputeModesConditions::_L93 */
  static kcg_bool _L93;
  /* ComputeModesConditions::_L96 */
  static kcg_bool _L96;
  /* ComputeModesConditions::_L97 */
  static kcg_bool _L97;
  /* ComputeModesConditions::_L98 */
  static kcg_bool _L98;
  /* ComputeModesConditions::_L99 */
  static kcg_bool _L99;
  /* ComputeModesConditions::_L100 */
  static kcg_bool _L100;
  /* ComputeModesConditions::_L101 */
  static kcg_bool _L101;
  /* ComputeModesConditions::_L102 */
  static kcg_bool _L102;
  /* ComputeModesConditions::_L103 */
  static kcg_bool _L103;
  /* ComputeModesConditions::_L104 */
  static kcg_bool _L104;
  /* ComputeModesConditions::_L105 */
  static kcg_bool _L105;
  /* ComputeModesConditions::_L106 */
  static kcg_bool _L106;
  /* ComputeModesConditions::_L107 */
  static kcg_bool _L107;
  /* ComputeModesConditions::_L109 */
  static kcg_bool _L109;
  /* ComputeModesConditions::_L110 */
  static kcg_bool _L110;
  /* ComputeModesConditions::_L113 */
  static kcg_bool _L113;
  /* ComputeModesConditions::_L112 */
  static kcg_bool _L112;
  /* ComputeModesConditions::_L111 */
  static kcg_bool _L111;
  /* ComputeModesConditions::_L119 */
  static kcg_bool _L119;
  /* ComputeModesConditions::_L120 */
  static kcg_bool _L120;
  /* ComputeModesConditions::_L121 */
  static kcg_bool _L121;
  /* ComputeModesConditions::_L122 */
  static kcg_bool _L122;
  /* ComputeModesConditions::_L123 */
  static kcg_bool _L123;
  /* ComputeModesConditions::_L124 */
  static kcg_bool _L124;
  /* ComputeModesConditions::_L127 */
  static kcg_bool _L127;
  /* ComputeModesConditions::_L128 */
  static kcg_bool _L128;
  /* ComputeModesConditions::_L129 */
  static kcg_bool _L129;
  /* ComputeModesConditions::_L141 */
  static kcg_bool _L141;
  /* ComputeModesConditions::_L147 */
  static kcg_bool _L147;
  /* ComputeModesConditions::_L164 */
  static kcg_bool _L164;
  /* ComputeModesConditions::_L165 */
  static kcg_bool _L165;
  /* ComputeModesConditions::_L166 */
  static kcg_bool _L166;
  /* ComputeModesConditions::_L174 */
  static kcg_bool _L174;
  /* ComputeModesConditions::_L175 */
  static kcg_bool _L175;
  /* ComputeModesConditions::_L178 */
  static kcg_bool _L178;
  /* ComputeModesConditions::_L179 */
  static kcg_bool _L179;
  /* ComputeModesConditions::_L180 */
  static kcg_bool _L180;
  /* ComputeModesConditions::_L181 */
  static kcg_bool _L181;
  /* ComputeModesConditions::_L182 */
  static kcg_bool _L182;
  /* ComputeModesConditions::_L183 */
  static kcg_bool _L183;
  /* ComputeModesConditions::_L184 */
  static kcg_bool _L184;
  /* ComputeModesConditions::_L186 */
  static kcg_bool _L186;
  /* ComputeModesConditions::_L187 */
  static kcg_bool _L187;
  /* ComputeModesConditions::_L190 */
  static kcg_bool _L190;
  /* ComputeModesConditions::_L191 */
  static kcg_bool _L191;
  /* ComputeModesConditions::_L192 */
  static kcg_bool _L192;
  /* ComputeModesConditions::_L193 */
  static kcg_bool _L193;
  /* ComputeModesConditions::_L195 */
  static kcg_bool _L195;
  /* ComputeModesConditions::_L200 */
  static kcg_bool _L200;
  /* ComputeModesConditions::_L201 */
  static kcg_bool _L201;
  /* ComputeModesConditions::_L202 */
  static kcg_bool _L202;
  /* ComputeModesConditions::_L203 */
  static kcg_bool _L203;
  /* ComputeModesConditions::_L206 */
  static T_Mode_Level_And_Mode_Types_Pkg _L206;
  /* ComputeModesConditions::_L207 */
  static kcg_bool _L207;
  /* ComputeModesConditions::_L208 */
  static kcg_bool _L208;
  /* ComputeModesConditions::_L212 */
  static kcg_bool _L212;
  /* ComputeModesConditions::_L213 */
  static kcg_bool _L213;
  /* ComputeModesConditions::_L214 */
  static kcg_bool _L214;
  /* ComputeModesConditions::_L215 */
  static kcg_bool _L215;
  /* ComputeModesConditions::_L220 */
  static kcg_bool _L220;
  /* ComputeModesConditions::_L221 */
  static Speed_T_Obu_BasicTypes_Pkg _L221;
  /* ComputeModesConditions::_L223 */
  static T_Mode_Level_And_Mode_Types_Pkg _L223;
  /* ComputeModesConditions::_L225 */
  static Speed_T_Obu_BasicTypes_Pkg _L225;
  /* ComputeModesConditions::_L226 */
  static T_Mode_Level_And_Mode_Types_Pkg _L226;
  /* ComputeModesConditions::_L228 */
  static Speed_T_Obu_BasicTypes_Pkg _L228;
  /* ComputeModesConditions::_L43 */
  static M_LEVEL _L43;
  /* ComputeModesConditions::_L54 */
  static M_LEVEL _L54;
  /* ComputeModesConditions::_L130 */
  static M_LEVEL _L130;
  /* ComputeModesConditions::_L155 */
  static M_LEVEL _L155;
  /* ComputeModesConditions::_L248 */
  static kcg_bool _L248;
  /* ComputeModesConditions::_L247 */
  static kcg_bool _L247;
  /* ComputeModesConditions::_L246 */
  static kcg_bool _L246;
  /* ComputeModesConditions::_L245 */
  static kcg_bool _L245;
  /* ComputeModesConditions::_L244 */
  static kcg_bool _L244;
  /* ComputeModesConditions::_L242 */
  static kcg_bool _L242;
  /* ComputeModesConditions::_L241 */
  static kcg_bool _L241;
  /* ComputeModesConditions::_L240 */
  static kcg_bool _L240;
  /* ComputeModesConditions::_L239 */
  static kcg_bool _L239;
  /* ComputeModesConditions::_L238 */
  static kcg_bool _L238;
  /* ComputeModesConditions::_L237 */
  static kcg_bool _L237;
  /* ComputeModesConditions::_L236 */
  static kcg_bool _L236;
  /* ComputeModesConditions::_L235 */
  static kcg_bool _L235;
  /* ComputeModesConditions::_L234 */
  static kcg_bool _L234;
  /* ComputeModesConditions::_L233 */
  static kcg_bool _L233;
  /* ComputeModesConditions::_L232 */
  static kcg_bool _L232;
  /* ComputeModesConditions::_L231 */
  static kcg_bool _L231;
  /* ComputeModesConditions::_L230 */
  static kcg_bool _L230;
  /* ComputeModesConditions::_L229 */
  static kcg_bool _L229;
  /* ComputeModesConditions::_L249 */
  static M_LEVEL _L249;
  /* ComputeModesConditions::_L250 */
  static T_Mode_Level_And_Mode_Types_Pkg _L250;
  /* ComputeModesConditions::_L251 */
  static kcg_bool _L251;
  /* ComputeModesConditions::_L252 */
  static kcg_bool _L252;
  /* ComputeModesConditions::_L253 */
  static kcg_bool _L253;
  /* ComputeModesConditions::_L254 */
  static kcg_bool _L254;
  /* ComputeModesConditions::_L255 */
  static kcg_bool _L255;
  /* ComputeModesConditions::_L256 */
  static kcg_bool _L256;
  /* ComputeModesConditions::_L257 */
  static kcg_bool _L257;
  /* ComputeModesConditions::_L258 */
  static kcg_bool _L258;
  /* ComputeModesConditions::_L260 */
  static kcg_bool _L260;
  /* ComputeModesConditions::_L261 */
  static kcg_bool _L261;
  /* ComputeModesConditions::_L262 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L262;
  /* ComputeModesConditions::_L263 */
  static kcg_bool _L263;
  /* ComputeModesConditions::_L264 */
  static kcg_bool _L264;
  /* ComputeModesConditions::_L265 */
  static kcg_bool _L265;
  /* ComputeModesConditions::_L266 */
  static kcg_bool _L266;
  /* ComputeModesConditions::_L267 */
  static kcg_bool _L267;
  /* ComputeModesConditions::_L268 */
  static kcg_bool _L268;
  /* ComputeModesConditions::_L269 */
  static kcg_bool _L269;
  /* ComputeModesConditions::_L270 */
  static kcg_bool _L270;
  /* ComputeModesConditions::_L287 */
  static kcg_bool _L287;
  /* ComputeModesConditions::_L286 */
  static kcg_bool _L286;
  /* ComputeModesConditions::_L285 */
  static kcg_bool _L285;
  /* ComputeModesConditions::_L280 */
  static kcg_bool _L280;
  /* ComputeModesConditions::_L277 */
  static kcg_bool _L277;
  /* ComputeModesConditions::_L275 */
  static kcg_bool _L275;
  /* ComputeModesConditions::_L294 */
  static kcg_bool _L294;
  /* ComputeModesConditions::_L295 */
  static T_Mode_Level_And_Mode_Types_Pkg _L295;
  /* ComputeModesConditions::_L296 */
  static kcg_bool _L296;
  /* ComputeModesConditions::_L297 */
  static kcg_bool _L297;
  /* ComputeModesConditions::_L298 */
  static kcg_bool _L298;
  /* ComputeModesConditions::_L299 */
  static kcg_bool _L299;
  /* ComputeModesConditions::_L300 */
  static kcg_bool _L300;
  /* ComputeModesConditions::_L301 */
  static kcg_bool _L301;
  /* ComputeModesConditions::_L302 */
  static kcg_bool _L302;
  /* ComputeModesConditions::_L303 */
  static kcg_bool _L303;
  /* ComputeModesConditions::_L304 */
  static kcg_bool _L304;
  /* ComputeModesConditions::_L305 */
  static kcg_bool _L305;
  /* ComputeModesConditions::_L306 */
  static kcg_bool _L306;
  /* ComputeModesConditions::_L309 */
  static kcg_bool _L309;
  /* ComputeModesConditions::_L312 */
  static kcg_bool _L312;
  /* ComputeModesConditions::_L315 */
  static kcg_bool _L315;
  /* ComputeModesConditions::_L317 */
  static kcg_bool _L317;
  /* ComputeModesConditions::_L318 */
  static kcg_bool _L318;
  /* ComputeModesConditions::_L319 */
  static kcg_bool _L319;
  /* ComputeModesConditions::_L324 */
  static kcg_bool _L324;
  /* ComputeModesConditions::_L326 */
  static kcg_bool _L326;
  /* ComputeModesConditions::_L327 */
  static kcg_bool _L327;
  /* ComputeModesConditions::_L328 */
  static kcg_bool _L328;
  /* ComputeModesConditions::_L329 */
  static trainPosition_T_TrainPosition_Types_Pck _L329;
  /* ComputeModesConditions::_L330 */
  static trainPosition_T_TrainPosition_Types_Pck _L330;
  /* ComputeModesConditions::_L331 */
  static trainPosition_T_TrainPosition_Types_Pck _L331;
  /* ComputeModesConditions::_L333 */
  static kcg_bool _L333;
  /* ComputeModesConditions::_L334 */
  static M_LEVEL _L334;
  /* ComputeModesConditions::_L335 */
  static T_Mode_Level_And_Mode_Types_Pkg _L335;
  /* ComputeModesConditions::_L336 */
  static kcg_bool _L336;
  /* ComputeModesConditions::_L337 */
  static kcg_bool _L337;
  /* ComputeModesConditions::_L338 */
  static kcg_bool _L338;
  /* ComputeModesConditions::_L339 */
  static kcg_bool _L339;
  /* ComputeModesConditions::_L340 */
  static kcg_bool _L340;
  /* ComputeModesConditions::_L341 */
  static kcg_bool _L341;
  /* ComputeModesConditions::_L342 */
  static kcg_bool _L342;
  /* ComputeModesConditions::_L343 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L343;
  /* ComputeModesConditions::_L344 */
  static kcg_bool _L344;
  /* ComputeModesConditions::_L345 */
  static kcg_bool _L345;
  /* ComputeModesConditions::_L346 */
  static kcg_bool _L346;
  /* ComputeModesConditions::_L347 */
  static kcg_bool _L347;
  /* ComputeModesConditions::_L348 */
  static kcg_bool _L348;
  /* ComputeModesConditions::_L349 */
  static kcg_bool _L349;
  /* ComputeModesConditions::_L350 */
  static kcg_bool _L350;
  /* ComputeModesConditions::_L351 */
  static M_LEVEL _L351;
  /* ComputeModesConditions::_L352 */
  static kcg_bool _L352;
  /* ComputeModesConditions::_L353 */
  static kcg_bool _L353;
  /* ComputeModesConditions::_L354 */
  static kcg_bool _L354;
  /* ComputeModesConditions::_L355 */
  static kcg_bool _L355;
  /* ComputeModesConditions::_L356 */
  static kcg_bool _L356;
  /* ComputeModesConditions::_L357 */
  static kcg_bool _L357;
  /* ComputeModesConditions::_L358 */
  static kcg_bool _L358;
  /* ComputeModesConditions::_L359 */
  static kcg_bool _L359;
  /* ComputeModesConditions::_L360 */
  static kcg_bool _L360;
  /* ComputeModesConditions::_L362 */
  static kcg_bool _L362;
  /* ComputeModesConditions::_L361 */
  static kcg_bool _L361;
  /* ComputeModesConditions::_L363 */
  static T_Mode_Level_And_Mode_Types_Pkg _L363;
  /* ComputeModesConditions::_L364 */
  static trainPosition_T_TrainPosition_Types_Pck _L364;
  /* ComputeModesConditions::_L365 */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg _L365;
  /* ComputeModesConditions::_L176 */
  static M_LEVEL _L176;
  /* ComputeModesConditions::_L366 */
  static T_Mode_Level_And_Mode_Types_Pkg _L366;
  /* ComputeModesConditions::_L367 */
  static kcg_bool _L367;
  /* ComputeModesConditions::_L372 */
  static kcg_bool _L372;
  /* ComputeModesConditions::_L380 */
  static kcg_bool _L380;
  /* ComputeModesConditions::_L381 */
  static kcg_bool _L381;
  /* ComputeModesConditions::_L386 */
  static kcg_bool _L386;
  /* ComputeModesConditions::_L387 */
  static kcg_bool _L387;
  /* ComputeModesConditions::_L388 */
  static kcg_bool _L388;
  /* ComputeModesConditions::_L390 */
  static kcg_bool _L390;
  /* ComputeModesConditions::_L391 */
  static kcg_bool _L391;
  /* ComputeModesConditions::_L392 */
  static kcg_bool _L392;
  /* ComputeModesConditions::_L393 */
  static kcg_bool _L393;
  /* ComputeModesConditions::_L394 */
  static kcg_bool _L394;
  /* ComputeModesConditions::_L395 */
  static kcg_bool _L395;
  /* ComputeModesConditions::_L400 */
  static kcg_bool _L400;
  /* ComputeModesConditions::_L401 */
  static kcg_bool _L401;
  /* ComputeModesConditions::_L402 */
  static kcg_bool _L402;
  /* ComputeModesConditions::_L403 */
  static kcg_bool _L403;
  /* ComputeModesConditions::_L404 */
  static kcg_bool _L404;
  /* ComputeModesConditions::_L405 */
  static kcg_bool _L405;
  /* ComputeModesConditions::_L406 */
  static kcg_bool _L406;
  /* ComputeModesConditions::_L407 */
  static kcg_bool _L407;
  /* ComputeModesConditions::_L408 */
  static kcg_bool _L408;
  /* ComputeModesConditions::_L411 */
  static kcg_bool _L411;
  /* ComputeModesConditions::_L412 */
  static kcg_bool _L412;
  /* ComputeModesConditions::_L413 */
  static kcg_bool _L413;
  /* ComputeModesConditions::_L414 */
  static kcg_bool _L414;
  /* ComputeModesConditions::_L415 */
  static kcg_bool _L415;
  /* ComputeModesConditions::_L416 */
  static kcg_bool _L416;
  /* ComputeModesConditions::_L417 */
  static kcg_bool _L417;
  /* ComputeModesConditions::_L418 */
  static kcg_bool _L418;
  /* ComputeModesConditions::_L426 */
  static kcg_bool _L426;
  /* ComputeModesConditions::_L427 */
  static kcg_bool _L427;
  /* ComputeModesConditions::_L428 */
  static kcg_bool _L428;
  /* ComputeModesConditions::_L429 */
  static kcg_bool _L429;
  /* ComputeModesConditions::_L430 */
  static kcg_bool _L430;
  /* ComputeModesConditions::_L431 */
  static kcg_bool _L431;
  /* ComputeModesConditions::_L432 */
  static kcg_bool _L432;
  /* ComputeModesConditions::_L433 */
  static kcg_bool _L433;
  /* ComputeModesConditions::_L434 */
  static kcg_bool _L434;
  /* ComputeModesConditions::_L435 */
  static kcg_bool _L435;
  /* ComputeModesConditions::_L436 */
  static kcg_bool _L436;
  /* ComputeModesConditions::_L437 */
  static kcg_bool _L437;
  /* ComputeModesConditions::_L438 */
  static kcg_bool _L438;
  /* ComputeModesConditions::_L439 */
  static kcg_bool _L439;
  /* ComputeModesConditions::_L440 */
  static kcg_bool _L440;
  /* ComputeModesConditions::_L441 */
  static kcg_bool _L441;
  /* ComputeModesConditions::_L442 */
  static kcg_bool _L442;
  /* ComputeModesConditions::_L443 */
  static kcg_bool _L443;
  /* ComputeModesConditions::_L444 */
  static kcg_bool _L444;
  /* ComputeModesConditions::_L446 */
  static kcg_bool _L446;
  /* ComputeModesConditions::_L447 */
  static kcg_bool _L447;
  /* ComputeModesConditions::_L465 */
  static kcg_bool _L465;
  /* ComputeModesConditions::_L464 */
  static kcg_bool _L464;
  /* ComputeModesConditions::_L463 */
  static kcg_bool _L463;
  /* ComputeModesConditions::_L462 */
  static kcg_bool _L462;
  /* ComputeModesConditions::_L461 */
  static kcg_bool _L461;
  /* ComputeModesConditions::_L460 */
  static kcg_bool _L460;
  /* ComputeModesConditions::_L459 */
  static kcg_bool _L459;
  /* ComputeModesConditions::_L458 */
  static kcg_bool _L458;
  /* ComputeModesConditions::_L457 */
  static kcg_bool _L457;
  /* ComputeModesConditions::_L456 */
  static kcg_bool _L456;
  /* ComputeModesConditions::_L455 */
  static kcg_bool _L455;
  /* ComputeModesConditions::_L454 */
  static kcg_bool _L454;
  /* ComputeModesConditions::_L453 */
  static kcg_bool _L453;
  /* ComputeModesConditions::_L452 */
  static kcg_bool _L452;
  /* ComputeModesConditions::_L451 */
  static kcg_bool _L451;
  /* ComputeModesConditions::_L450 */
  static kcg_bool _L450;
  /* ComputeModesConditions::_L449 */
  static kcg_bool _L449;
  /* ComputeModesConditions::_L448 */
  static kcg_bool _L448;
  /* ComputeModesConditions::_L484 */
  static kcg_bool _L484;
  /* ComputeModesConditions::_L485 */
  static kcg_bool _L485;
  /* ComputeModesConditions::_L486 */
  static kcg_bool _L486;
  /* ComputeModesConditions::_L487 */
  static kcg_bool _L487;
  /* ComputeModesConditions::_L488 */
  static kcg_bool _L488;
  /* ComputeModesConditions::_L489 */
  static kcg_bool _L489;
  /* ComputeModesConditions::_L490 */
  static kcg_bool _L490;
  /* ComputeModesConditions::_L494 */
  static kcg_bool _L494;
  /* ComputeModesConditions::_L495 */
  static kcg_bool _L495;
  /* ComputeModesConditions::_L496 */
  static kcg_bool _L496;
  /* ComputeModesConditions::_L497 */
  static kcg_bool _L497;
  
  _L2 = ETCS_Isolated;
  _L1 = /* 1 */ ToIsolate_Conditions(_L2);
  _L4 = Failure_Occured;
  _L3 = /* 1 */ ToSystemFailure_Conditions(_L4);
  _L6 = OnBoard_Powered;
  _L5 = /* 1 */ ToNoPower_Conditions(_L6);
  _L485 = All_Desks_Closed;
  _L10 = Train_Standstill;
  _L11 = Train_Req_SL;
  _L7 = /* 1 */ ToSleeping_Conditions(_L485, _L10, _L11);
  _L487 = Desk_Open;
  _L486 = All_Desks_Closed;
  _L27 = Train_Standstill;
  _L28 = Train_Req_SL;
  _L29 = OnBoard_Powered;
  _L30 = Train_Permitted_PS;
  _L31 = Train_Permitted_NL;
  _L32 = Continue_Shunting_Function_Active;
  _L33 = Driver_Req_Exit_SH;
  _L41 = Stop_Shunting_Stored;
  /* last_init_ck_On_Going_Mission */ if (outC->init) {
    last_On_Going_Mission = kcg_false;
  }
  else {
    last_On_Going_Mission = outC->On_Going_Mission;
  }
  _L295 = Current_Mode;
  _L352 = kcg_true;
  _L353 = kcg_true;
  _L354 = kcg_true;
  _L355 = kcg_true;
  _L356 = kcg_true;
  _L357 = kcg_true;
  _L358 = kcg_true;
  _L359 = kcg_false;
  switch (_L295) {
    case FS_Level_And_Mode_Types_Pkg :
      _L294 = _L352;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L294 = _L353;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L294 = _L354;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L294 = _L355;
      break;
    case NL_Level_And_Mode_Types_Pkg :
      _L294 = _L356;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      _L294 = _L357;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L294 = _L358;
      break;
    
    default :
      _L294 = _L359;
  }
  _L298 = last_On_Going_Mission;
  /* last_init_ck_End_Of_Mission_Procedure_Req */ if (outC->init) {
    last_End_Of_Mission_Procedure_Req = kcg_true;
  }
  else {
    last_End_Of_Mission_Procedure_Req = outC->End_Of_Mission_Procedure_Req;
  }
  _L360 = last_End_Of_Mission_Procedure_Req;
  _L297 = _L298 & _L360;
  _L296 = _L294 | _L297;
  outC->On_Going_Mission = _L296;
  _L300 = outC->On_Going_Mission;
  /* 1 */
  ToStandBy_Conditions(
    _L487,
    _L486,
    _L27,
    _L28,
    _L29,
    _L30,
    _L31,
    _L32,
    _L33,
    _L41,
    _L300,
    &_L79,
    &_L80,
    &_L81,
    &_L82,
    &_L83,
    &_L84,
    &_L85,
    &_L86,
    &_L87,
    &_L299);
  _L43 = Current_Level;
  _L206 = Current_Mode;
  _L489 = Desk_Open;
  _L46 = Driver_Ack_SH;
  _L42 = Driver_Req_SH;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L50,
    Mode_Profile_On_Board);
  _L220 = outC->On_Going_Mission;
  _L40 = Shunting_Granted_By_RBC;
  _L45 = Stop_Shunting_Stored;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L329, Train_Position);
  _L221 = Train_Speed;
  _L39 = Train_Standstill;
  /* 1 */
  ToShunting_Conditions(
    _L43,
    _L206,
    _L489,
    _L46,
    _L42,
    &_L50,
    _L220,
    _L40,
    _L45,
    &_L329,
    _L221,
    _L39,
    &outC->Context_1);
  _L88 = outC->Context_1.Condition5;
  _L89 = outC->Context_1.Condition6;
  _L90 = outC->Context_1.Condition23;
  _L91 = outC->Context_1.Condition50;
  _L92 = outC->Context_1.Condition51;
  _L93 = outC->Context_1.Condition61;
  _L203 = outC->Context_1.Ack_SH_Req_To_Driver;
  _L208 = outC->Context_1.Clean_BG_List_SH_Area;
  _L207 = outC->Context_1.End_Of_Mission_Procedure_Req;
  _L201 = outC->Context_1.Request_For_SH_To_RBC;
  _L202 = outC->Context_1.Service_Brake_Command;
  _L200 = outC->Context_1.SH_refused_By_RBC_To_DMI;
  _L54 = Current_Level;
  _L59 = Trip_Order_Given_By_Balise;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L57,
    Mode_Profile_On_Board);
  _L60 = MA_SSP_Gradiant_Available;
  /* 1 */
  ToFullSupervision_Conditions(_L54, _L59, &_L57, _L60, &outC->_1_Context_1);
  _L96 = outC->_1_Context_1.Condition25;
  _L97 = outC->_1_Context_1.Condition31;
  _L98 = outC->_1_Context_1.Condition32;
  _L223 = Current_Mode;
  _L68 = Driver_Ack_LS;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L64,
    Mode_Profile_On_Board);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L330, Train_Position);
  _L225 = Train_Speed;
  /* 1 */
  Procedure_LimitedSupervision_Procedures(
    _L223,
    _L68,
    &_L64,
    &_L330,
    _L225,
    &outC->_2_Context_1);
  _L100 = outC->_2_Context_1.Condition70;
  _L101 = outC->_2_Context_1.Condition71;
  _L102 = outC->_2_Context_1.Condition72;
  _L99 = outC->_2_Context_1.Condition74;
  _L215 = outC->_2_Context_1.Ack_LS_Req_To_Driver;
  _L214 = outC->_2_Context_1.Service_Brake_Command;
  _L226 = Current_Mode;
  _L77 = Driver_Ack_OS;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L73,
    Mode_Profile_On_Board);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L331, Train_Position);
  _L228 = Train_Speed;
  /* 1 */
  Procedure_OnSight_Procedures(
    _L226,
    _L77,
    &_L73,
    &_L331,
    _L228,
    &outC->_3_Context_1);
  _L103 = outC->_3_Context_1.Condition15;
  _L104 = outC->_3_Context_1.Condition34;
  _L105 = outC->_3_Context_1.Condition40;
  _L106 = outC->_3_Context_1.Condition73;
  _L213 = outC->_3_Context_1.Ack_OS_Req_To_Driver;
  _L212 = outC->_3_Context_1.Service_Brake_Command;
  outC->Condition29 = _L5;
  outC->Condition2 = _L79;
  outC->Condition3 = _L80;
  outC->Condition4 = _L81;
  outC->Condition19 = _L82;
  outC->Condition22 = _L83;
  outC->Condition27 = _L84;
  outC->Condition28 = _L85;
  outC->Condition30 = _L86;
  outC->Condition47 = _L87;
  _L110 = Train_Permitted_PS;
  _L109 = Continue_Shunting_Function_Active;
  _L488 = All_Desks_Closed;
  _L107 = /* 1 */ ToPassiveShunting_Conditions(_L110, _L109, _L488);
  outC->Condition26 = _L107;
  outC->Condition23 = _L90;
  outC->Condition61 = _L93;
  outC->Condition25 = _L96;
  outC->Condition32 = _L98;
  outC->Condition74 = _L99;
  outC->Condition71 = _L101;
  outC->Condition72 = _L102;
  _L351 = Current_Level;
  _L119 = Driver_Req_Override;
  _L120 = Train_Speed_Under_Override_Limit;
  _L121 = Override_Function_Active;
  _L122 = Emergency_Stop_Message_Received;
  /* 1 */
  ToStaffResponsible_Conditions(
    _L351,
    _L119,
    _L120,
    _L121,
    _L122,
    &outC->_4_Context_1);
  _L111 = outC->_4_Context_1.Condition44;
  _L112 = outC->_4_Context_1.Condition45;
  _L113 = outC->_4_Context_1.Condition37;
  outC->Condition44 = _L111;
  outC->Condition45 = _L112;
  outC->Condition37 = _L113;
  outC->Condition34 = _L104;
  outC->Condition40 = _L105;
  outC->Condition73 = _L106;
  outC->Condition14 = _L7;
  _L127 = Train_Permitted_NL;
  _L128 = Train_Standstill;
  _L129 = Driver_Req_NL;
  _L123 = /* 1 */ ToNonLeading_Conditions(_L127, _L128, _L129);
  outC->Condition1 = _L1;
  outC->Condition13 = _L3;
  _L130 = Current_Level;
  /* 1 */ ToUnfitted_Conditions(_L130, &outC->_5_Context_1);
  _L124 = outC->_5_Context_1.Condition21;
  outC->Condition21 = _L124;
  _L155 = Current_Level;
  /* 1 */ ToSystemNational_Conditions(_L155, &outC->_6_Context_1);
  _L141 = outC->_6_Context_1.Condition56;
  _L174 = BG_In_Expected_List_In_SH;
  _L175 = BG_In_Expected_List_In_SR;
  _L176 = Current_Level;
  _L366 = Current_Mode;
  _L490 = Driver_Req_SH;
  _L178 = Emergency_Stop_Message_Received;
  _L179 = Error_BG_System_Version;
  _L180 = Estimated_Front_End_Overpass_SR_Distance;
  _L181 = Estimated_Front_End_Rear_Location_SSP_Or_Gradient;
  _L182 = Interface_To_National_System;
  _L183 = Linked_BG_Pased_In_Wrong_Direction;
  _L166 = Linking_Reaction_To_Trip;
  _L184 = List_BG_Related_To_SR_Empty;
  _L496 = MA_SSP_Gradiant_Available;
  _L186 = National_Trip_Order;
  _L187 = Override_Function_Active;
  /* last_init_ck_Override_Function_Active */ if (outC->init) {
    last_Override_Function_Active = kcg_false;
  }
  else {
    last_Override_Function_Active = outC->rem_Override_Function_Active;
  }
  _L495 = last_Override_Function_Active;
  _L190 = Stop_If_In_Shunting;
  _L191 = Stop_If_In_SR;
  _L367 = T_NVCONTACT_Overpass;
  _L192 = Train_Overpass_EOA_Antenna;
  _L193 = Train_Overpass_EOA_Front_End;
  /* last_init_ck_Train_Overpass_EOA_Antenna */ if (outC->init) {
    last_Train_Overpass_EOA_Antenna = kcg_false;
  }
  else {
    last_Train_Overpass_EOA_Antenna = outC->rem_Train_Overpass_EOA_Antenna;
  }
  _L494 = last_Train_Overpass_EOA_Antenna;
  _L195 = Trip_Order_Given_By_Balise;
  _L497 = TripModeFromLevel;
  /* 1 */
  ToTrip_Conditions(
    _L174,
    _L175,
    _L176,
    _L366,
    _L490,
    _L178,
    _L179,
    _L180,
    _L181,
    _L182,
    _L183,
    _L166,
    _L184,
    _L496,
    _L186,
    _L187,
    _L495,
    _L190,
    _L191,
    _L367,
    _L192,
    _L193,
    _L494,
    _L195,
    _L497,
    &outC->_7_Context_1);
  _L147 = outC->_7_Context_1.Condition2Trip;
  outC->Condition56 = _L141;
  _L164 = Train_Standstill;
  _L165 = Driver_Ack_RV;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L364, Train_Position);
  _L363 = Current_Mode;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(&_L365, Reversing_Data);
  /* 1 */
  Procedure_Train_Reversing_Procedures(
    _L165,
    _L164,
    &_L364,
    _L363,
    &_L365,
    &outC->_8_Context_1);
  _L361 = outC->_8_Context_1.Condition_59;
  _L362 = outC->_8_Context_1.Ack_RV_Req_To_Driver;
  outC->Condition59 = _L361;
  Loc_SH_Refused_By_RBC_To_DMI_SH = _L200;
  _L372 = Loc_SH_Refused_By_RBC_To_DMI_SH;
  _L249 = Current_Level;
  _L250 = Current_Mode;
  _L484 = Desk_Open;
  _L251 = Driver_Ack_LS;
  _L252 = Driver_Ack_OS;
  _L253 = Driver_Ack_SH;
  _L254 = Driver_Ack_SN;
  _L255 = Driver_Ack_SR;
  _L256 = Driver_Ack_UN;
  _L257 = Driver_Req_NL;
  _L258 = Driver_Req_SH;
  _L260 = Driver_Req_Start;
  _L261 = MA_SSP_Gradiant_Available;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L262,
    Mode_Profile_On_Board);
  _L267 = RBC_Authorized_SR;
  _L263 = Shunting_Granted_By_RBC;
  _L264 = Train_Permitted_NL;
  _L265 = Train_Standstill;
  _L266 = Valid_Train_Data_Stored;
  /* 1 */
  Procedure_StartOfMission_Procedures(
    _L249,
    _L250,
    _L484,
    _L251,
    _L252,
    _L253,
    _L254,
    _L255,
    _L256,
    _L257,
    _L258,
    _L260,
    _L261,
    &_L262,
    _L267,
    _L263,
    _L264,
    _L265,
    _L266,
    &outC->_9_Context_1);
  _L268 = outC->_9_Context_1.Ack_LS_Req_To_Driver;
  _L269 = outC->_9_Context_1.Ack_OS_Req_To_Driver;
  _L270 = outC->_9_Context_1.Ack_SH_Req_To_Driver;
  _L230 = outC->_9_Context_1.Ack_SN_Req_To_Driver;
  _L229 = outC->_9_Context_1.Ack_SR_Req_To_Driver;
  _L231 = outC->_9_Context_1.Ack_UN_Req_To_Driver;
  _L232 = outC->_9_Context_1.Clean_BG_List_SH_Area;
  _L233 = outC->_9_Context_1.Condition_5;
  _L234 = outC->_9_Context_1.Condition_6;
  _L235 = outC->_9_Context_1.Condition_8;
  _L236 = outC->_9_Context_1.Condition_10;
  _L246 = outC->_9_Context_1.Condition_15;
  _L237 = outC->_9_Context_1.Condition_46;
  _L247 = outC->_9_Context_1.Condition_50;
  _L239 = outC->_9_Context_1.Condition_58;
  _L238 = outC->_9_Context_1.Condition_60;
  _L248 = outC->_9_Context_1.Condition_70;
  _L241 = outC->_9_Context_1.EB_Requested;
  _L240 = outC->_9_Context_1.End_Of_Mission_Procedure_Req;
  _L242 = outC->_9_Context_1.MA_Req_To_RBC;
  _L245 = outC->_9_Context_1.Request_For_SH_To_RBC;
  _L244 = outC->_9_Context_1.SH_Refused_By_RBC_To_DMI;
  Loc_SH_Refused_By_RBC_To_DMI_SoM = _L244;
  _L380 = Loc_SH_Refused_By_RBC_To_DMI_SoM;
  Condition_to_Trip = _L147;
  _L333 = Condition_to_Trip;
  _L334 = Current_Level;
  _L335 = Current_Mode;
  _L336 = Driver_Ack_LS;
  _L337 = Driver_Ack_OS;
  _L338 = Driver_Ack_SH;
  _L339 = Driver_Ack_SR;
  _L340 = Driver_Ack_TR;
  _L341 = Driver_Req_SH;
  _L345 = Driver_Req_Start;
  _L342 = MA_SSP_Gradiant_Available;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L343,
    Mode_Profile_On_Board);
  _L344 = outC->On_Going_Mission;
  _L350 = RBC_Ack_And_EB_Revocked;
  _L346 = RBC_Authorized_SR;
  _L347 = Shunting_Granted_By_RBC;
  _L348 = Train_Standstill;
  _L349 = Valid_Train_Data_Stored;
  /* 1 */
  Procedure_Train_Trip_Procedures(
    _L333,
    _L334,
    _L335,
    _L336,
    _L337,
    _L338,
    _L339,
    _L340,
    _L341,
    _L345,
    _L342,
    &_L343,
    _L344,
    _L350,
    _L346,
    _L347,
    _L348,
    _L349,
    &outC->_10_Context_1);
  _L328 = outC->_10_Context_1.Ack_LS_Req_To_Driver;
  _L327 = outC->_10_Context_1.Ack_OS_Req_To_Driver;
  _L326 = outC->_10_Context_1.Ack_SH_Req_To_Driver;
  _L324 = outC->_10_Context_1.Ack_SR_Req_To_Driver;
  _L275 = outC->_10_Context_1.Ack_TR_Req_To_Driver;
  _L304 = outC->_10_Context_1.Clean_BG_List_SH_Area;
  _L277 = outC->_10_Context_1.Condition_Trip;
  _L306 = outC->_10_Context_1.Condition_5;
  _L305 = outC->_10_Context_1.Condition_6;
  _L280 = outC->_10_Context_1.Condition_7;
  _L319 = outC->_10_Context_1.Condition_8;
  _L318 = outC->_10_Context_1.Condition_31;
  _L317 = outC->_10_Context_1.Condition_15;
  _L315 = outC->_10_Context_1.Condition_50;
  _L285 = outC->_10_Context_1.Condition_62;
  _L286 = outC->_10_Context_1.Condition_63;
  _L287 = outC->_10_Context_1.Condition_68;
  _L312 = outC->_10_Context_1.Condition_70;
  _L303 = outC->_10_Context_1.End_Of_Mission_Procedure_Req;
  _L309 = outC->_10_Context_1.MA_Req_To_RBC;
  _L302 = outC->_10_Context_1.Request_For_SH_To_RBC;
  _L301 = outC->_10_Context_1.SH_Refused_By_RBC_To_DMI;
  Loc_SH_Refused_By_RBC_To_DMI_TR = _L301;
  _L381 = Loc_SH_Refused_By_RBC_To_DMI_TR;
  Loc_Ack_LS_Req_To_Driver_LS = _L215;
  _L386 = Loc_Ack_LS_Req_To_Driver_LS;
  Loc_Ack_LS_Req_To_Driver_SoM = _L268;
  _L387 = Loc_Ack_LS_Req_To_Driver_SoM;
  Loc_Ack_LS_Req_To_Driver_TR = _L328;
  _L388 = Loc_Ack_LS_Req_To_Driver_TR;
  Loc_Ack_OS_Req_To_Driver_OS = _L213;
  _L390 = Loc_Ack_OS_Req_To_Driver_OS;
  Loc_Ack_OS_Req_To_Driver_SoM = _L269;
  _L391 = Loc_Ack_OS_Req_To_Driver_SoM;
  Loc_Ack_OS_Req_To_Driver_TR = _L327;
  _L392 = Loc_Ack_OS_Req_To_Driver_TR;
  Loc_Ack_SH_Req_To_Driver_SH = _L203;
  _L393 = Loc_Ack_SH_Req_To_Driver_SH;
  Loc_Ack_SH_Req_To_Driver_SoM = _L270;
  _L394 = Loc_Ack_SH_Req_To_Driver_SoM;
  Loc_Ack_SH_Req_To_Driver_TR = _L326;
  _L395 = Loc_Ack_SH_Req_To_Driver_TR;
  Loc_Ack_SR_Req_To_Driver_SoM = _L229;
  _L400 = Loc_Ack_SR_Req_To_Driver_SoM;
  Loc_Ack_SR_Req_To_Driver_TR = _L324;
  _L401 = Loc_Ack_SR_Req_To_Driver_TR;
  Loc_Clean_BG_List_Of_SoM = _L232;
  _L402 = Loc_Clean_BG_List_Of_SoM;
  Loc_Clean_BG_List_SH_Area_SH = _L208;
  _L403 = Loc_Clean_BG_List_SH_Area_SH;
  Loc_Clean_BG_List_SH_Area_TR = _L304;
  _L404 = Loc_Clean_BG_List_SH_Area_TR;
  Loc_End_Of_Mission_Procedure_Req_SB = _L299;
  _L405 = Loc_End_Of_Mission_Procedure_Req_SB;
  Loc_End_Of_Mission_Procedure_Req_SH = _L207;
  _L406 = Loc_End_Of_Mission_Procedure_Req_SH;
  Loc_End_Of_Mission_Procedure_Req_SoM = _L240;
  _L407 = Loc_End_Of_Mission_Procedure_Req_SoM;
  Loc_End_Of_Mission_Procedure_Req_TR = _L303;
  _L408 = Loc_End_Of_Mission_Procedure_Req_TR;
  Loc_MA_Req_To_RBC_SoM = _L242;
  _L411 = Loc_MA_Req_To_RBC_SoM;
  Loc_MA_Req_To_RBC_TR = _L309;
  _L412 = Loc_MA_Req_To_RBC_TR;
  Loc_Request_For_SH_To_RBC_SH = _L201;
  _L413 = Loc_Request_For_SH_To_RBC_SH;
  Loc_Request_For_SH_To_RBC_SoM = _L245;
  _L414 = Loc_Request_For_SH_To_RBC_SoM;
  Loc_Request_For_SH_To_RBC_TR = _L302;
  _L415 = Loc_Request_For_SH_To_RBC_TR;
  Loc_Service_Brake_Command_LS = _L214;
  _L416 = Loc_Service_Brake_Command_LS;
  Loc_Service_Brake_Command_OS = _L212;
  _L417 = Loc_Service_Brake_Command_OS;
  Loc_Service_Brake_Command_SH = _L202;
  _L418 = Loc_Service_Brake_Command_SH;
  Loc_Cond_15_OS = _L103;
  _L426 = Loc_Cond_15_OS;
  Loc_Cond_15_SoM = _L246;
  _L427 = Loc_Cond_15_SoM;
  Loc_Cond_15_TR = _L317;
  _L428 = Loc_Cond_15_TR;
  Loc_Cond_31_FS = _L97;
  _L429 = Loc_Cond_31_FS;
  Loc_Cond_31_TR = _L318;
  _L430 = Loc_Cond_31_TR;
  Loc_Cond_46_NL = _L123;
  _L431 = Loc_Cond_46_NL;
  Loc_Cond_46_SoM = _L237;
  _L432 = Loc_Cond_46_SoM;
  Loc_Cond_50_SH = _L91;
  _L433 = Loc_Cond_50_SH;
  Loc_Cond_50_SoM = _L247;
  _L434 = Loc_Cond_50_SoM;
  Loc_Cond_50_TR = _L315;
  _L435 = Loc_Cond_50_TR;
  Loc_Cond_5_SH = _L88;
  _L436 = Loc_Cond_5_SH;
  Loc_Cond_5_SoM = _L233;
  _L437 = Loc_Cond_5_SoM;
  Loc_Cond_5_TR = _L306;
  _L438 = Loc_Cond_5_TR;
  Loc_Cond_6_SH = _L89;
  _L439 = Loc_Cond_6_SH;
  Loc_Cond_6_SoM = _L234;
  _L440 = Loc_Cond_6_SoM;
  Loc_Cond_6_TR = _L305;
  _L441 = Loc_Cond_6_TR;
  Loc_Cond_70_LS = _L100;
  _L442 = Loc_Cond_70_LS;
  Loc_Cond_70_SoM = _L248;
  _L443 = Loc_Cond_70_SoM;
  Loc_Cond_70_TR = _L312;
  _L444 = Loc_Cond_70_TR;
  Loc_Cond_8_SoM = _L235;
  _L446 = Loc_Cond_8_SoM;
  Loc_Cond_8_TR = _L319;
  _L447 = Loc_Cond_8_TR;
  /* 1 */
  Merge_Conditions(
    _L372,
    _L380,
    _L381,
    _L386,
    _L387,
    _L388,
    _L390,
    _L391,
    _L392,
    _L393,
    _L394,
    _L395,
    _L400,
    _L401,
    _L402,
    _L403,
    _L404,
    _L405,
    _L406,
    _L407,
    _L408,
    _L411,
    _L412,
    _L413,
    _L414,
    _L415,
    _L416,
    _L417,
    _L418,
    _L426,
    _L427,
    _L428,
    _L429,
    _L430,
    _L431,
    _L432,
    _L433,
    _L434,
    _L435,
    _L436,
    _L437,
    _L438,
    _L439,
    _L440,
    _L441,
    _L442,
    _L443,
    _L444,
    _L446,
    _L447,
    &_L448,
    &_L449,
    &_L450,
    &_L451,
    &_L452,
    &_L453,
    &_L454,
    &_L455,
    &_L456,
    &_L457,
    &_L458,
    &_L459,
    &_L460,
    &_L461,
    &_L462,
    &_L463,
    &_L464,
    &_L465);
  outC->Request_For_SH_To_RBC = _L456;
  outC->Service_Brake_Command = _L457;
  outC->End_Of_Mission_Procedure_Req = _L454;
  outC->Ack_SN_Req_To_Driver = _L230;
  outC->Ack_UN_Req_To_Driver = _L231;
  outC->EB_Requested = _L241;
  outC->MA_Req_To_RBC = _L455;
  outC->Condition10 = _L236;
  outC->Condition58 = _L239;
  outC->Condition60 = _L238;
  outC->Condition7 = _L280;
  outC->Condition62 = _L285;
  outC->Condition63 = _L286;
  outC->Condition68 = _L287;
  outC->Ack_TR_Req_To_Driver = _L275;
  outC->Condition_Trip = _L277;
  outC->Ack_RV_Req_To_Driver = _L362;
  outC->Condition51 = _L92;
  outC->SH_Refused_By_RBC_To_DMI = _L448;
  outC->Ack_LS_Req_To_Driver = _L449;
  outC->Ack_OS_Req_To_Driver = _L450;
  outC->Ack_SH_Req_To_Driver = _L451;
  outC->Ack_SR_Req_To_Driver = _L452;
  outC->Clean_BG_List_SH_Area = _L453;
  outC->Condition15 = _L458;
  outC->Condition31 = _L459;
  outC->Condition46 = _L460;
  outC->Condition50 = _L461;
  outC->Condition5 = _L462;
  outC->Condition6 = _L463;
  outC->Condition70 = _L464;
  outC->Condition8 = _L465;
  /* last_init_ck_Current_Level */ if (outC->init) {
    last_Current_Level = M_LEVEL_Level_0;
  }
  else {
    last_Current_Level = outC->rem_Current_Level;
  }
  /* last_init_ck_Failure_Occured */ if (outC->init) {
    last_Failure_Occured = kcg_false;
  }
  else {
    last_Failure_Occured = outC->rem_Failure_Occured;
  }
  outC->rem_Current_Level = Current_Level;
  outC->rem_Override_Function_Active = Override_Function_Active;
  outC->rem_Train_Overpass_EOA_Antenna = Train_Overpass_EOA_Antenna;
  outC->rem_Failure_Occured = Failure_Occured;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ComputeModesConditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

