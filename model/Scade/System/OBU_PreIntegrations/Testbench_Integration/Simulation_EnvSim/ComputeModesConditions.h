/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _ComputeModesConditions_H_
#define _ComputeModesConditions_H_

#include "kcg_types.h"
#include "Merge_Conditions.h"
#include "ToIsolate_Conditions.h"
#include "ToSystemFailure_Conditions.h"
#include "ToNoPower_Conditions.h"
#include "ToSleeping_Conditions.h"
#include "ToStandBy_Conditions.h"
#include "ToPassiveShunting_Conditions.h"
#include "ToNonLeading_Conditions.h"
#include "ToShunting_Conditions.h"
#include "ToFullSupervision_Conditions.h"
#include "ToStaffResponsible_Conditions.h"
#include "ToUnfitted_Conditions.h"
#include "ToSystemNational_Conditions.h"
#include "ToTrip_Conditions.h"
#include "Procedure_LimitedSupervision_Procedures.h"
#include "Procedure_OnSight_Procedures.h"
#include "Procedure_StartOfMission_Procedures.h"
#include "Procedure_Train_Trip_Procedures.h"
#include "Procedure_Train_Reversing_Procedures.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ComputeModesConditions::Condition1 */ Condition1;
  kcg_bool /* ComputeModesConditions::Condition2 */ Condition2;
  kcg_bool /* ComputeModesConditions::Condition3 */ Condition3;
  kcg_bool /* ComputeModesConditions::Condition4 */ Condition4;
  kcg_bool /* ComputeModesConditions::Condition5 */ Condition5;
  kcg_bool /* ComputeModesConditions::Condition6 */ Condition6;
  kcg_bool /* ComputeModesConditions::Condition7 */ Condition7;
  kcg_bool /* ComputeModesConditions::Condition8 */ Condition8;
  kcg_bool /* ComputeModesConditions::Condition10 */ Condition10;
  kcg_bool /* ComputeModesConditions::Condition13 */ Condition13;
  kcg_bool /* ComputeModesConditions::Condition14 */ Condition14;
  kcg_bool /* ComputeModesConditions::Condition15 */ Condition15;
  kcg_bool /* ComputeModesConditions::Condition19 */ Condition19;
  kcg_bool /* ComputeModesConditions::Condition21 */ Condition21;
  kcg_bool /* ComputeModesConditions::Condition22 */ Condition22;
  kcg_bool /* ComputeModesConditions::Condition23 */ Condition23;
  kcg_bool /* ComputeModesConditions::Condition25 */ Condition25;
  kcg_bool /* ComputeModesConditions::Condition26 */ Condition26;
  kcg_bool /* ComputeModesConditions::Condition27 */ Condition27;
  kcg_bool /* ComputeModesConditions::Condition28 */ Condition28;
  kcg_bool /* ComputeModesConditions::Condition29 */ Condition29;
  kcg_bool /* ComputeModesConditions::Condition30 */ Condition30;
  kcg_bool /* ComputeModesConditions::Condition31 */ Condition31;
  kcg_bool /* ComputeModesConditions::Condition32 */ Condition32;
  kcg_bool /* ComputeModesConditions::Condition34 */ Condition34;
  kcg_bool /* ComputeModesConditions::Condition37 */ Condition37;
  kcg_bool /* ComputeModesConditions::Condition40 */ Condition40;
  kcg_bool /* ComputeModesConditions::Condition44 */ Condition44;
  kcg_bool /* ComputeModesConditions::Condition45 */ Condition45;
  kcg_bool /* ComputeModesConditions::Condition46 */ Condition46;
  kcg_bool /* ComputeModesConditions::Condition47 */ Condition47;
  kcg_bool /* ComputeModesConditions::Condition50 */ Condition50;
  kcg_bool /* ComputeModesConditions::Condition51 */ Condition51;
  kcg_bool /* ComputeModesConditions::Condition56 */ Condition56;
  kcg_bool /* ComputeModesConditions::Condition58 */ Condition58;
  kcg_bool /* ComputeModesConditions::Condition59 */ Condition59;
  kcg_bool /* ComputeModesConditions::Condition60 */ Condition60;
  kcg_bool /* ComputeModesConditions::Condition61 */ Condition61;
  kcg_bool /* ComputeModesConditions::Condition62 */ Condition62;
  kcg_bool /* ComputeModesConditions::Condition63 */ Condition63;
  kcg_bool /* ComputeModesConditions::Condition68 */ Condition68;
  kcg_bool /* ComputeModesConditions::Condition70 */ Condition70;
  kcg_bool /* ComputeModesConditions::Condition71 */ Condition71;
  kcg_bool /* ComputeModesConditions::Condition72 */ Condition72;
  kcg_bool /* ComputeModesConditions::Condition73 */ Condition73;
  kcg_bool /* ComputeModesConditions::Condition74 */ Condition74;
  kcg_bool /* ComputeModesConditions::Condition_Trip */ Condition_Trip;
  kcg_bool /* ComputeModesConditions::Ack_LS_Req_To_Driver */ Ack_LS_Req_To_Driver;
  kcg_bool /* ComputeModesConditions::Ack_OS_Req_To_Driver */ Ack_OS_Req_To_Driver;
  kcg_bool /* ComputeModesConditions::Ack_RV_Req_To_Driver */ Ack_RV_Req_To_Driver;
  kcg_bool /* ComputeModesConditions::Ack_SH_Req_To_Driver */ Ack_SH_Req_To_Driver;
  kcg_bool /* ComputeModesConditions::Ack_SN_Req_To_Driver */ Ack_SN_Req_To_Driver;
  kcg_bool /* ComputeModesConditions::Ack_SR_Req_To_Driver */ Ack_SR_Req_To_Driver;
  kcg_bool /* ComputeModesConditions::Ack_TR_Req_To_Driver */ Ack_TR_Req_To_Driver;
  kcg_bool /* ComputeModesConditions::Ack_UN_Req_To_Driver */ Ack_UN_Req_To_Driver;
  kcg_bool /* ComputeModesConditions::Clean_BG_List_SH_Area */ Clean_BG_List_SH_Area;
  kcg_bool /* ComputeModesConditions::EB_Requested */ EB_Requested;
  kcg_bool /* ComputeModesConditions::End_Of_Mission_Procedure_Req */ End_Of_Mission_Procedure_Req;
  kcg_bool /* ComputeModesConditions::MA_Req_To_RBC */ MA_Req_To_RBC;
  kcg_bool /* ComputeModesConditions::Request_For_SH_To_RBC */ Request_For_SH_To_RBC;
  kcg_bool /* ComputeModesConditions::Service_Brake_Command */ Service_Brake_Command;
  kcg_bool /* ComputeModesConditions::SH_Refused_By_RBC_To_DMI */ SH_Refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* ComputeModesConditions::On_Going_Mission */ On_Going_Mission;
  kcg_bool /* ComputeModesConditions::Train_Overpass_EOA_Antenna */ rem_Train_Overpass_EOA_Antenna;
  kcg_bool /* ComputeModesConditions::Override_Function_Active */ rem_Override_Function_Active;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ToShunting_Conditions /* 1 */ _10_Context_1;
  outC_Procedure_StartOfMission_Procedures /* 1 */ _9_Context_1;
  outC_ToTrip_Conditions /* 1 */ _8_Context_1;
  outC_Procedure_Train_Trip_Procedures /* 1 */ _7_Context_1;
  outC_Procedure_LimitedSupervision_Procedures /* 1 */ _6_Context_1;
  outC_Procedure_OnSight_Procedures /* 1 */ _5_Context_1;
  outC_ToFullSupervision_Conditions /* 1 */ _4_Context_1;
  outC_Procedure_Train_Reversing_Procedures /* 1 */ _3_Context_1;
  outC_ToSystemNational_Conditions /* 1 */ _2_Context_1;
  outC_ToUnfitted_Conditions /* 1 */ _1_Context_1;
  outC_ToStaffResponsible_Conditions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ComputeModesConditions;

/* ===========  node initialization and cycle functions  =========== */
/* ComputeModesConditions */
extern void ComputeModesConditions(
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
  outC_ComputeModesConditions *outC);

extern void ComputeModesConditions_reset(outC_ComputeModesConditions *outC);

#endif /* _ComputeModesConditions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeModesConditions.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

