/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_StartOfMission_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_StartOfMission_init_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC)
{
  outC->init = kcg_true;
  outC->init2 = kcg_true;
  outC->SM_StartOfMissionProcedure_reset_nxt = kcg_true;
  outC->SM_StartOfMissionProcedure_reset_act = kcg_true;
  outC->SM_StartOfMissionProcedure_state_nxt =
    SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
  outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
    SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
  outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On = kcg_true;
  outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->Condition_70 = kcg_true;
  outC->Condition_60 = kcg_true;
  outC->Condition_58 = kcg_true;
  outC->Condition_50 = kcg_true;
  outC->Condition_46 = kcg_true;
  outC->Condition_15 = kcg_true;
  outC->Condition_10 = kcg_true;
  outC->Condition_8 = kcg_true;
  outC->Condition_6 = kcg_true;
  outC->Condition_5 = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Ack_UN_Req_To_Driver = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_SN_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_init_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_StartOfMission_reset_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC)
{
  outC->init = kcg_true;
  outC->init2 = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_StartOfMission */
void Procedure_StartOfMission_Procedures(
  /* Procedures::Procedure_StartOfMission::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_StartOfMission::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_StartOfMission::Desk_Open */ kcg_bool Desk_Open,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SN */ kcg_bool Driver_Ack_SN,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SR */ kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_UN */ kcg_bool Driver_Ack_UN,
  /* Procedures::Procedure_StartOfMission::Driver_Req_NL */ kcg_bool Driver_Req_NL,
  /* Procedures::Procedure_StartOfMission::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_StartOfMission::Driver_Req_Start */ kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_StartOfMission::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_StartOfMission::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_StartOfMission::RBC_Authorizes_SR */ kcg_bool RBC_Authorizes_SR,
  /* Procedures::Procedure_StartOfMission::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_StartOfMission::Train_Permitted_NL */ kcg_bool Train_Permitted_NL,
  /* Procedures::Procedure_StartOfMission::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_StartOfMission::Valid_Train_Data_Stored */ kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_StartOfMission_Procedures *outC)
{
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_TR_SM_StartOfMissionProcedure _50_SM_StartOfMissionProcedure_fired;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool _49_SM_StartOfMissionProcedure_reset_nxt;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure _48_SM_StartOfMissionProcedure_state_nxt;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _47_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _46_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _45_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _44_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::EB_Requested */
  static kcg_bool _43_EB_Requested;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _42_Condition_70;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _41_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _40_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _39_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _38_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _37_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _36_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _35_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _34_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _33_Condition_5;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _32_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _31_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _30_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _29_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _28_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _27_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _26_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_TR_SM_StartOfMissionProcedure _25_SM_StartOfMissionProcedure_fired;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool _24_SM_StartOfMissionProcedure_reset_nxt;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure _23_SM_StartOfMissionProcedure_state_nxt;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _22_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _21_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _20_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _19_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::EB_Requested */
  static kcg_bool _18_EB_Requested;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _17_Condition_70;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _16_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _15_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _14_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _13_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _12_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _11_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _10_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _9_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _8_Condition_5;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _7_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _6_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _5_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _4_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _3_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _2_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _1_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool SM_SoM_On_reset_prv_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool SM_SoM_On_reset_sel_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On SM_SoM_On_state_sel_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _294_SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _264_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _265_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _266_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _267_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _268_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _269_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Level_NTC */
  static kcg_bool br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_NTC;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _270_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _271_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _272_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Level_0 */
  static kcg_bool br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_0;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _273_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _274_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _275_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool _295_br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool _296_br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _276_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _277_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _278_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _279_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _280_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _281_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _282_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _283_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _284_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Command */
  static kcg_bool br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Command */
  static kcg_bool br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Command */
  static kcg_bool br_3_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _285_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _286_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _287_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L10 */
  static kcg_bool _L10_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L9 */
  static kcg_bool _L9_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L8 */
  static kcg_bool _L8_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L7 */
  static kcg_bool _L7_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L6 */
  static kcg_bool _L6_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L5 */
  static kcg_bool _L5_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L4 */
  static kcg_bool _L4_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L3 */
  static kcg_bool _L3_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L2 */
  static kcg_bool _L2_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L1 */
  static kcg_bool _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L11 */
  static M_LEVEL _L11_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L12 */
  static kcg_bool _L12_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L13 */
  static kcg_bool _L13_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L14 */
  static kcg_bool _L14_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L16 */
  static kcg_bool _L16_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L17 */
  static kcg_bool _L17_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L18 */
  static kcg_bool _L18_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L19 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L19_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L20 */
  static kcg_bool _L20_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _51_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _52_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _53_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _54_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _55_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _56_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _57_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _58_Condition_5;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _59_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _60_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _61_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _62_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _63_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _64_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _65_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _66_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _67_Condition_70;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _68_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _69_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _70_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _71_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::UN_Mode::_L1 */
  static kcg_bool _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_UN_Mode;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _72_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _73_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _74_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _75_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _76_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _77_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _78_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _79_Condition_5;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _80_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _81_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _82_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _83_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _84_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _85_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _86_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _87_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _88_Condition_70;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _89_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _90_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _91_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _92_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _93_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _94_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _95_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::SN_Mode::_L1 */
  static kcg_bool _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_SN_Mode;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _96_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _97_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _98_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _99_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _100_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _101_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _102_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _103_Condition_5;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _104_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _105_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _106_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _107_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _108_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _109_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _110_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _111_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _112_Condition_70;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _113_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _114_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _115_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _116_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _117_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _118_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _119_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Level_NTC::_L1 */
  static kcg_bool _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_NTC;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _120_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _121_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _122_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _123_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _124_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _125_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _126_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _127_Condition_5;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _128_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _129_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _130_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _131_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _132_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _133_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _134_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _135_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _136_Condition_70;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _137_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _138_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _139_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _140_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _141_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _142_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _143_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Level_0::_L1 */
  static kcg_bool _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_0;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _144_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _145_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _146_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _147_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _148_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _149_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _150_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _151_Condition_5;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _152_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _153_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _154_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _155_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _156_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _157_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _158_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _159_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _160_Condition_70;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _161_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _162_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _163_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _164_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _165_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _166_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _167_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _168_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _169_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _170_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _171_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _172_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _173_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _174_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _175_Condition_5;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _176_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _177_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _178_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _179_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _180_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _181_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _182_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _183_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _184_Condition_70;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _185_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _186_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _187_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _188_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _189_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _190_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _191_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L15 */
  static kcg_bool _L15_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L16 */
  static kcg_bool _L16_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L17 */
  static kcg_bool _L17_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L18 */
  static kcg_bool _L18_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L19 */
  static kcg_bool _L19_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L20 */
  static kcg_bool _L20_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L14 */
  static kcg_bool _L14_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L12 */
  static kcg_bool _L12_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L11 */
  static M_LEVEL _L11_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Procedure_SH_Initiated_By_Driver::_L21 */
  static kcg_bool _L21_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _192_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _193_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _194_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _195_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _196_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _197_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _198_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _199_Condition_5;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _200_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _201_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _202_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _203_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _204_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _205_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _206_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _207_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _208_Condition_70;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _209_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _210_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _211_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _212_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _213_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _214_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _215_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::NL_Mode::_L2 */
  static kcg_bool _L2_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_NL_Mode;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _216_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _217_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _218_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _219_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _220_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _221_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _222_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _223_Condition_5;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _224_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _225_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _226_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _227_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _228_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _229_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _230_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _231_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _232_Condition_70;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _233_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _234_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _235_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _236_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _237_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _238_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _239_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool _240_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool _241_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool _242_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool _243_Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool _244_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool _245_Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool _246_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool _247_Condition_5;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool _248_Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool _249_Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool _250_Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool _251_Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool _252_Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool _253_Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool _254_Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool _255_Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool _256_Condition_70;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool _257_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool _258_MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool _259_Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _260_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _261_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool _262_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On _263_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_TR_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_fired;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool SM_StartOfMissionProcedure_reset_nxt;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_state_nxt;
  /* Procedures::Procedure_StartOfMission::SH_Refused_By_RBC_To_DMI */
  static kcg_bool SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_StartOfMission::Request_For_SH_To_RBC */
  static kcg_bool Request_For_SH_To_RBC;
  /* Procedures::Procedure_StartOfMission::MA_Req_To_RBC */
  static kcg_bool MA_Req_To_RBC;
  /* Procedures::Procedure_StartOfMission::End_Of_Mission_Procedure_Req */
  static kcg_bool End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_StartOfMission::EB_Requested */
  static kcg_bool EB_Requested;
  /* Procedures::Procedure_StartOfMission::Condition_70 */
  static kcg_bool Condition_70;
  /* Procedures::Procedure_StartOfMission::Condition_60 */
  static kcg_bool Condition_60;
  /* Procedures::Procedure_StartOfMission::Condition_58 */
  static kcg_bool Condition_58;
  /* Procedures::Procedure_StartOfMission::Condition_50 */
  static kcg_bool Condition_50;
  /* Procedures::Procedure_StartOfMission::Condition_46 */
  static kcg_bool Condition_46;
  /* Procedures::Procedure_StartOfMission::Condition_15 */
  static kcg_bool Condition_15;
  /* Procedures::Procedure_StartOfMission::Condition_10 */
  static kcg_bool Condition_10;
  /* Procedures::Procedure_StartOfMission::Condition_8 */
  static kcg_bool Condition_8;
  /* Procedures::Procedure_StartOfMission::Condition_6 */
  static kcg_bool Condition_6;
  /* Procedures::Procedure_StartOfMission::Condition_5 */
  static kcg_bool Condition_5;
  /* Procedures::Procedure_StartOfMission::Clean_BG_List_SH_Area */
  static kcg_bool Clean_BG_List_SH_Area;
  /* Procedures::Procedure_StartOfMission::Ack_UN_Req_To_Driver */
  static kcg_bool Ack_UN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SR_Req_To_Driver */
  static kcg_bool Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SN_Req_To_Driver */
  static kcg_bool Ack_SN_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_SH_Req_To_Driver */
  static kcg_bool Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_OS_Req_To_Driver */
  static kcg_bool Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::Ack_LS_Req_To_Driver */
  static kcg_bool Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::EB_Requested::_L1 */
  static kcg_bool _L1_SM_StartOfMissionProcedure_EB_Requested;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_TR_SM_StartOfMissionProcedure _293_SM_StartOfMissionProcedure_fired_strong;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool _292_SM_StartOfMissionProcedure_reset_act;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure _291_SM_StartOfMissionProcedure_state_act;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_Off */
  static kcg_bool br_1_guard_SM_StartOfMissionProcedure_Procedure_Off;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_TR_SM_StartOfMissionProcedure _290_SM_StartOfMissionProcedure_fired_strong;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool _289_SM_StartOfMissionProcedure_reset_act;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure _288_SM_StartOfMissionProcedure_state_act;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On */
  static kcg_bool br_2_guard_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On */
  static kcg_bool br_1_guard_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_TR_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_fired_strong;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool SM_StartOfMissionProcedure_reset_act;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_state_act;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::EB_Requested */
  static kcg_bool br_1_guard_SM_StartOfMissionProcedure_EB_Requested;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_state_sel;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure _302_SM_StartOfMissionProcedure_state_act;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool SM_StartOfMissionProcedure_reset_sel;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool SM_StartOfMissionProcedure_reset_prv;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_TR_SM_StartOfMissionProcedure _301_SM_StartOfMissionProcedure_fired_strong;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_TR_SM_StartOfMissionProcedure _300_SM_StartOfMissionProcedure_fired;
  
  /* init_SM_StartOfMissionProcedure */ if (outC->init) {
    SM_StartOfMissionProcedure_state_sel =
      SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
  }
  else {
    SM_StartOfMissionProcedure_state_sel =
      outC->SM_StartOfMissionProcedure_state_nxt;
  }
  /* sel_SM_StartOfMissionProcedure */ switch (SM_StartOfMissionProcedure_state_sel) {
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      br_1_guard_SM_StartOfMissionProcedure_Procedure_Off = (Current_Mode ==
          SB_Level_And_Mode_Types_Pkg) & Train_Standstill & Desk_Open;
      if (br_1_guard_SM_StartOfMissionProcedure_Procedure_Off) {
        _291_SM_StartOfMissionProcedure_state_act =
          SSM_st_Procedure_On_SM_StartOfMissionProcedure;
      }
      else {
        _291_SM_StartOfMissionProcedure_state_act =
          SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      }
      _302_SM_StartOfMissionProcedure_state_act =
        _291_SM_StartOfMissionProcedure_state_act;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      br_1_guard_SM_StartOfMissionProcedure_Procedure_On = (Current_Mode ==
          SB_Level_And_Mode_Types_Pkg) & !Train_Standstill;
      br_2_guard_SM_StartOfMissionProcedure_Procedure_On = !(Current_Mode ==
          SB_Level_And_Mode_Types_Pkg) | !Desk_Open;
      if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On) {
        _288_SM_StartOfMissionProcedure_state_act =
          SSM_st_EB_Requested_SM_StartOfMissionProcedure;
      }
      else if (br_2_guard_SM_StartOfMissionProcedure_Procedure_On) {
        _288_SM_StartOfMissionProcedure_state_act =
          SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      }
      else {
        _288_SM_StartOfMissionProcedure_state_act =
          SSM_st_Procedure_On_SM_StartOfMissionProcedure;
      }
      _302_SM_StartOfMissionProcedure_state_act =
        _288_SM_StartOfMissionProcedure_state_act;
      break;
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      br_1_guard_SM_StartOfMissionProcedure_EB_Requested = Train_Standstill;
      if (br_1_guard_SM_StartOfMissionProcedure_EB_Requested) {
        SM_StartOfMissionProcedure_state_act =
          SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      }
      else {
        SM_StartOfMissionProcedure_state_act =
          SSM_st_EB_Requested_SM_StartOfMissionProcedure;
      }
      _302_SM_StartOfMissionProcedure_state_act =
        SM_StartOfMissionProcedure_state_act;
      break;
    
  }
  /* init_SM_StartOfMissionProcedure */ if (outC->init) {
    SM_StartOfMissionProcedure_reset_prv = kcg_false;
  }
  else {
    SM_StartOfMissionProcedure_reset_prv =
      outC->SM_StartOfMissionProcedure_reset_act;
  }
  /* sel_SM_StartOfMissionProcedure */ switch (SM_StartOfMissionProcedure_state_sel) {
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      _292_SM_StartOfMissionProcedure_reset_act =
        br_1_guard_SM_StartOfMissionProcedure_Procedure_Off;
      outC->SM_StartOfMissionProcedure_reset_act =
        _292_SM_StartOfMissionProcedure_reset_act;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On) {
        _289_SM_StartOfMissionProcedure_reset_act = kcg_true;
      }
      else {
        _289_SM_StartOfMissionProcedure_reset_act =
          br_2_guard_SM_StartOfMissionProcedure_Procedure_On;
      }
      outC->SM_StartOfMissionProcedure_reset_act =
        _289_SM_StartOfMissionProcedure_reset_act;
      break;
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      SM_StartOfMissionProcedure_reset_act =
        br_1_guard_SM_StartOfMissionProcedure_EB_Requested;
      outC->SM_StartOfMissionProcedure_reset_act =
        SM_StartOfMissionProcedure_reset_act;
      break;
    
  }
  /* act_SM_StartOfMissionProcedure */ switch (_302_SM_StartOfMissionProcedure_state_act) {
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      if (outC->SM_StartOfMissionProcedure_reset_act) {
        outC->init2 = kcg_true;
      }
      break;
    
  }
  /* init_SM_StartOfMissionProcedure */ if (outC->init) {
    SM_StartOfMissionProcedure_reset_sel = kcg_false;
  }
  else {
    SM_StartOfMissionProcedure_reset_sel =
      outC->SM_StartOfMissionProcedure_reset_nxt;
  }
  /* sel_SM_StartOfMissionProcedure */ switch (SM_StartOfMissionProcedure_state_sel) {
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      if (br_1_guard_SM_StartOfMissionProcedure_Procedure_Off) {
        _293_SM_StartOfMissionProcedure_fired_strong =
          SSM_TR_Procedure_Off_1_SM_StartOfMissionProcedure;
      }
      else {
        _293_SM_StartOfMissionProcedure_fired_strong =
          SSM_TR_no_trans_SM_StartOfMissionProcedure;
      }
      _301_SM_StartOfMissionProcedure_fired_strong =
        _293_SM_StartOfMissionProcedure_fired_strong;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On) {
        _290_SM_StartOfMissionProcedure_fired_strong =
          SSM_TR_Procedure_On_1_SM_StartOfMissionProcedure;
      }
      else if (br_2_guard_SM_StartOfMissionProcedure_Procedure_On) {
        _290_SM_StartOfMissionProcedure_fired_strong =
          SSM_TR_Procedure_On_2_SM_StartOfMissionProcedure;
      }
      else {
        _290_SM_StartOfMissionProcedure_fired_strong =
          SSM_TR_no_trans_SM_StartOfMissionProcedure;
      }
      _301_SM_StartOfMissionProcedure_fired_strong =
        _290_SM_StartOfMissionProcedure_fired_strong;
      break;
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      if (br_1_guard_SM_StartOfMissionProcedure_EB_Requested) {
        SM_StartOfMissionProcedure_fired_strong =
          SSM_TR_EB_Requested_1_SM_StartOfMissionProcedure;
      }
      else {
        SM_StartOfMissionProcedure_fired_strong =
          SSM_TR_no_trans_SM_StartOfMissionProcedure;
      }
      _301_SM_StartOfMissionProcedure_fired_strong =
        SM_StartOfMissionProcedure_fired_strong;
      break;
    
  }
  /* act_SM_StartOfMissionProcedure */ switch (_302_SM_StartOfMissionProcedure_state_act) {
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      _26_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _26_Ack_LS_Req_To_Driver;
      _27_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _27_Ack_OS_Req_To_Driver;
      _28_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _28_Ack_SH_Req_To_Driver;
      _29_Ack_SN_Req_To_Driver = kcg_false;
      outC->Ack_SN_Req_To_Driver = _29_Ack_SN_Req_To_Driver;
      _30_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _30_Ack_SR_Req_To_Driver;
      _31_Ack_UN_Req_To_Driver = kcg_false;
      outC->Ack_UN_Req_To_Driver = _31_Ack_UN_Req_To_Driver;
      _32_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _32_Clean_BG_List_SH_Area;
      _33_Condition_5 = kcg_false;
      outC->Condition_5 = _33_Condition_5;
      _34_Condition_6 = kcg_false;
      outC->Condition_6 = _34_Condition_6;
      _35_Condition_8 = kcg_false;
      outC->Condition_8 = _35_Condition_8;
      _36_Condition_10 = kcg_false;
      outC->Condition_10 = _36_Condition_10;
      _37_Condition_15 = kcg_false;
      outC->Condition_15 = _37_Condition_15;
      _38_Condition_46 = kcg_false;
      outC->Condition_46 = _38_Condition_46;
      _39_Condition_50 = kcg_false;
      outC->Condition_50 = _39_Condition_50;
      _40_Condition_58 = kcg_false;
      outC->Condition_58 = _40_Condition_58;
      _41_Condition_60 = kcg_false;
      outC->Condition_60 = _41_Condition_60;
      _42_Condition_70 = kcg_false;
      outC->Condition_70 = _42_Condition_70;
      _43_EB_Requested = kcg_false;
      outC->EB_Requested = _43_EB_Requested;
      _44_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _44_End_Of_Mission_Procedure_Req;
      _45_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _45_MA_Req_To_RBC;
      _46_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _46_Request_For_SH_To_RBC;
      _47_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _47_SH_Refused_By_RBC_To_DMI;
      _48_SM_StartOfMissionProcedure_state_nxt =
        SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      outC->SM_StartOfMissionProcedure_state_nxt =
        _48_SM_StartOfMissionProcedure_state_nxt;
      _49_SM_StartOfMissionProcedure_reset_nxt = kcg_false;
      outC->SM_StartOfMissionProcedure_reset_nxt =
        _49_SM_StartOfMissionProcedure_reset_nxt;
      _50_SM_StartOfMissionProcedure_fired =
        _301_SM_StartOfMissionProcedure_fired_strong;
      _300_SM_StartOfMissionProcedure_fired =
        _50_SM_StartOfMissionProcedure_fired;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      /* init_SM_SoM_On */ if (outC->init2) {
        SM_SoM_On_state_sel_SM_StartOfMissionProcedure_Procedure_On =
          SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
      }
      else {
        SM_SoM_On_state_sel_SM_StartOfMissionProcedure_Procedure_On =
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
      }
      _294_SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On =
        SM_SoM_On_state_sel_SM_StartOfMissionProcedure_Procedure_On;
      /* cb_SM_SoM_On */ switch (_294_SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command =
            Driver_Req_NL & Train_Permitted_NL;
          br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command =
            Driver_Req_SH;
          br_3_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command =
            Valid_Train_Data_Stored;
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command) {
            _285_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else if (br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command) {
            _285_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else if (br_3_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command) {
            _285_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else {
            _285_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            _285_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _282_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            _282_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _279_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            _279_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command =
            (Current_Level == M_LEVEL_Level_1) | (Current_Level ==
              M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
          _295_br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command =
            Current_Level == M_LEVEL_Level_0;
          _296_br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command =
            Current_Level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
          br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command =
            Driver_Req_Start &
            (_295_br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command |
              _296_br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command);
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
            _276_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else if (br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
            if (_295_br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
              _276_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
                SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
            }
            else {
              _276_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
                SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
            }
          }
          else {
            _276_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            _276_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_0 =
            Driver_Ack_UN;
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_0) {
            _273_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else {
            _273_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            _273_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_NTC =
            Driver_Ack_SN;
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_NTC) {
            _270_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else {
            _270_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            _270_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _267_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            _267_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _264_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            _264_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        
      }
      SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On =
        _299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _L11_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            Current_Level;
          _L12_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            Driver_Ack_LS;
          _L13_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            Driver_Ack_OS;
          _L16_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            Driver_Ack_SH;
          _L17_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            Driver_Ack_SR;
          _L14_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            Driver_Req_Start;
          _L18_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            MA_SSP_Gradiant_Available;
          kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
            &_L19_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            Mode_Profile_On_Board);
          _L20_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            RBC_Authorizes_SR;
          break;
        
      }
      /* init_SM_SoM_On */ if (outC->init2) {
        SM_SoM_On_reset_prv_SM_StartOfMissionProcedure_Procedure_On = kcg_false;
      }
      else {
        SM_SoM_On_reset_prv_SM_StartOfMissionProcedure_Procedure_On =
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
      }
      /* cb_SM_SoM_On */ switch (_294_SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command) {
            _286_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              kcg_true;
          }
          else if (br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command) {
            _286_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              kcg_true;
          }
          else {
            _286_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              br_3_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command;
          }
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            _286_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _283_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            _283_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _280_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            _280_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
            _277_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              kcg_true;
          }
          else {
            _277_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
          }
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            _277_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _274_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_0;
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            _274_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _271_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_NTC;
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            _271_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _268_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            _268_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _265_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            _265_SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
          break;
        
      }
      /* act_SM_SoM_On */ switch (_299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On) {
            /* 1 */ Procedure_Start_L1_L2_L3_reset_Procedures(&outC->Context_1);
          }
          break;
        
      }
      if (outC->SM_StartOfMissionProcedure_reset_act) {
        /* 1 */ Procedure_Start_L1_L2_L3_reset_Procedures(&outC->Context_1);
      }
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _240_Ack_LS_Req_To_Driver = kcg_false;
          _1_Ack_LS_Req_To_Driver = _240_Ack_LS_Req_To_Driver;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _216_Ack_LS_Req_To_Driver = kcg_false;
          _1_Ack_LS_Req_To_Driver = _216_Ack_LS_Req_To_Driver;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _192_Ack_LS_Req_To_Driver = kcg_false;
          _1_Ack_LS_Req_To_Driver = _192_Ack_LS_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _168_Ack_LS_Req_To_Driver = kcg_false;
          _1_Ack_LS_Req_To_Driver = _168_Ack_LS_Req_To_Driver;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _144_Ack_LS_Req_To_Driver = kcg_false;
          _1_Ack_LS_Req_To_Driver = _144_Ack_LS_Req_To_Driver;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _120_Ack_LS_Req_To_Driver = kcg_false;
          _1_Ack_LS_Req_To_Driver = _120_Ack_LS_Req_To_Driver;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _96_Ack_LS_Req_To_Driver = kcg_false;
          _1_Ack_LS_Req_To_Driver = _96_Ack_LS_Req_To_Driver;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _72_Ack_LS_Req_To_Driver = kcg_false;
          _1_Ack_LS_Req_To_Driver = _72_Ack_LS_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          /* 1 */
          Procedure_Start_L1_L2_L3_Procedures(
            _L11_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            _L12_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            _L13_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            _L16_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            _L17_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            _L14_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            _L18_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            &_L19_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            _L20_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection,
            &outC->Context_1);
          _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Ack_LS_Req_To_Driver;
          _L2_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Ack_OS_Req_To_Driver;
          _L3_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Ack_SH_Req_To_Driver;
          _L4_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Ack_SR_Req_To_Driver;
          _L5_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_8;
          _L6_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_10_31;
          _L7_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_15;
          _L8_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_50;
          _L9_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_70;
          _L10_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.MA_Req_To_RBC;
          _51_Ack_LS_Req_To_Driver =
            _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _1_Ack_LS_Req_To_Driver = _51_Ack_LS_Req_To_Driver;
          break;
        
      }
      outC->Ack_LS_Req_To_Driver = _1_Ack_LS_Req_To_Driver;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _241_Ack_OS_Req_To_Driver = kcg_false;
          _2_Ack_OS_Req_To_Driver = _241_Ack_OS_Req_To_Driver;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _217_Ack_OS_Req_To_Driver = kcg_false;
          _2_Ack_OS_Req_To_Driver = _217_Ack_OS_Req_To_Driver;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _193_Ack_OS_Req_To_Driver = kcg_false;
          _2_Ack_OS_Req_To_Driver = _193_Ack_OS_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _169_Ack_OS_Req_To_Driver = kcg_false;
          _2_Ack_OS_Req_To_Driver = _169_Ack_OS_Req_To_Driver;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _145_Ack_OS_Req_To_Driver = kcg_false;
          _2_Ack_OS_Req_To_Driver = _145_Ack_OS_Req_To_Driver;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _121_Ack_OS_Req_To_Driver = kcg_false;
          _2_Ack_OS_Req_To_Driver = _121_Ack_OS_Req_To_Driver;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _97_Ack_OS_Req_To_Driver = kcg_false;
          _2_Ack_OS_Req_To_Driver = _97_Ack_OS_Req_To_Driver;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _73_Ack_OS_Req_To_Driver = kcg_false;
          _2_Ack_OS_Req_To_Driver = _73_Ack_OS_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _52_Ack_OS_Req_To_Driver =
            _L2_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _2_Ack_OS_Req_To_Driver = _52_Ack_OS_Req_To_Driver;
          break;
        
      }
      outC->Ack_OS_Req_To_Driver = _2_Ack_OS_Req_To_Driver;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _242_Ack_SH_Req_To_Driver = kcg_false;
          _3_Ack_SH_Req_To_Driver = _242_Ack_SH_Req_To_Driver;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _218_Ack_SH_Req_To_Driver = kcg_false;
          _3_Ack_SH_Req_To_Driver = _218_Ack_SH_Req_To_Driver;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _194_Ack_SH_Req_To_Driver = kcg_false;
          _3_Ack_SH_Req_To_Driver = _194_Ack_SH_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _170_Ack_SH_Req_To_Driver = kcg_false;
          _3_Ack_SH_Req_To_Driver = _170_Ack_SH_Req_To_Driver;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _146_Ack_SH_Req_To_Driver = kcg_false;
          _3_Ack_SH_Req_To_Driver = _146_Ack_SH_Req_To_Driver;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _122_Ack_SH_Req_To_Driver = kcg_false;
          _3_Ack_SH_Req_To_Driver = _122_Ack_SH_Req_To_Driver;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _98_Ack_SH_Req_To_Driver = kcg_false;
          _3_Ack_SH_Req_To_Driver = _98_Ack_SH_Req_To_Driver;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _74_Ack_SH_Req_To_Driver = kcg_false;
          _3_Ack_SH_Req_To_Driver = _74_Ack_SH_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _53_Ack_SH_Req_To_Driver =
            _L3_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _3_Ack_SH_Req_To_Driver = _53_Ack_SH_Req_To_Driver;
          break;
        
      }
      outC->Ack_SH_Req_To_Driver = _3_Ack_SH_Req_To_Driver;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _243_Ack_SN_Req_To_Driver = kcg_false;
          _4_Ack_SN_Req_To_Driver = _243_Ack_SN_Req_To_Driver;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _219_Ack_SN_Req_To_Driver = kcg_false;
          _4_Ack_SN_Req_To_Driver = _219_Ack_SN_Req_To_Driver;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _195_Ack_SN_Req_To_Driver = kcg_false;
          _4_Ack_SN_Req_To_Driver = _195_Ack_SN_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _171_Ack_SN_Req_To_Driver = kcg_false;
          _4_Ack_SN_Req_To_Driver = _171_Ack_SN_Req_To_Driver;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _147_Ack_SN_Req_To_Driver = kcg_false;
          _4_Ack_SN_Req_To_Driver = _147_Ack_SN_Req_To_Driver;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_NTC =
            kcg_true;
          _123_Ack_SN_Req_To_Driver =
            _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_NTC;
          _4_Ack_SN_Req_To_Driver = _123_Ack_SN_Req_To_Driver;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _99_Ack_SN_Req_To_Driver = kcg_false;
          _4_Ack_SN_Req_To_Driver = _99_Ack_SN_Req_To_Driver;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _75_Ack_SN_Req_To_Driver = kcg_false;
          _4_Ack_SN_Req_To_Driver = _75_Ack_SN_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _54_Ack_SN_Req_To_Driver = kcg_false;
          _4_Ack_SN_Req_To_Driver = _54_Ack_SN_Req_To_Driver;
          break;
        
      }
      outC->Ack_SN_Req_To_Driver = _4_Ack_SN_Req_To_Driver;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _244_Ack_SR_Req_To_Driver = kcg_false;
          _5_Ack_SR_Req_To_Driver = _244_Ack_SR_Req_To_Driver;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _220_Ack_SR_Req_To_Driver = kcg_false;
          _5_Ack_SR_Req_To_Driver = _220_Ack_SR_Req_To_Driver;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _196_Ack_SR_Req_To_Driver = kcg_false;
          _5_Ack_SR_Req_To_Driver = _196_Ack_SR_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _172_Ack_SR_Req_To_Driver = kcg_false;
          _5_Ack_SR_Req_To_Driver = _172_Ack_SR_Req_To_Driver;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _148_Ack_SR_Req_To_Driver = kcg_false;
          _5_Ack_SR_Req_To_Driver = _148_Ack_SR_Req_To_Driver;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _124_Ack_SR_Req_To_Driver = kcg_false;
          _5_Ack_SR_Req_To_Driver = _124_Ack_SR_Req_To_Driver;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _100_Ack_SR_Req_To_Driver = kcg_false;
          _5_Ack_SR_Req_To_Driver = _100_Ack_SR_Req_To_Driver;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _76_Ack_SR_Req_To_Driver = kcg_false;
          _5_Ack_SR_Req_To_Driver = _76_Ack_SR_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _55_Ack_SR_Req_To_Driver =
            _L4_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _5_Ack_SR_Req_To_Driver = _55_Ack_SR_Req_To_Driver;
          break;
        
      }
      outC->Ack_SR_Req_To_Driver = _5_Ack_SR_Req_To_Driver;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _245_Ack_UN_Req_To_Driver = kcg_false;
          _6_Ack_UN_Req_To_Driver = _245_Ack_UN_Req_To_Driver;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _221_Ack_UN_Req_To_Driver = kcg_false;
          _6_Ack_UN_Req_To_Driver = _221_Ack_UN_Req_To_Driver;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _197_Ack_UN_Req_To_Driver = kcg_false;
          _6_Ack_UN_Req_To_Driver = _197_Ack_UN_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _173_Ack_UN_Req_To_Driver = kcg_false;
          _6_Ack_UN_Req_To_Driver = _173_Ack_UN_Req_To_Driver;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_0 =
            kcg_true;
          _149_Ack_UN_Req_To_Driver =
            _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_0;
          _6_Ack_UN_Req_To_Driver = _149_Ack_UN_Req_To_Driver;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _125_Ack_UN_Req_To_Driver = kcg_false;
          _6_Ack_UN_Req_To_Driver = _125_Ack_UN_Req_To_Driver;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _101_Ack_UN_Req_To_Driver = kcg_false;
          _6_Ack_UN_Req_To_Driver = _101_Ack_UN_Req_To_Driver;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _77_Ack_UN_Req_To_Driver = kcg_false;
          _6_Ack_UN_Req_To_Driver = _77_Ack_UN_Req_To_Driver;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _56_Ack_UN_Req_To_Driver = kcg_false;
          _6_Ack_UN_Req_To_Driver = _56_Ack_UN_Req_To_Driver;
          break;
        
      }
      outC->Ack_UN_Req_To_Driver = _6_Ack_UN_Req_To_Driver;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _L11_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            Current_Level;
          _L12_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            Driver_Req_SH;
          _L21_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            kcg_false;
          _L14_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            Shunting_Granted_By_RBC;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _174_Clean_BG_List_SH_Area = kcg_false;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _150_Clean_BG_List_SH_Area = kcg_false;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _126_Clean_BG_List_SH_Area = kcg_false;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _102_Clean_BG_List_SH_Area = kcg_false;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _78_Clean_BG_List_SH_Area = kcg_false;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _57_Clean_BG_List_SH_Area = kcg_false;
          break;
        
      }
      /* act_SM_SoM_On */ switch (_299_SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (outC->SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On) {
            /* 1 */
            SH_Initiated_By_Driver_On_reset_Procedures(&outC->_1_Context_1);
          }
          break;
        
      }
      if (outC->SM_StartOfMissionProcedure_reset_act) {
        /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->_1_Context_1);
      }
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _246_Clean_BG_List_SH_Area = kcg_false;
          _7_Clean_BG_List_SH_Area = _246_Clean_BG_List_SH_Area;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _222_Clean_BG_List_SH_Area = kcg_false;
          _7_Clean_BG_List_SH_Area = _222_Clean_BG_List_SH_Area;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          /* 1 */
          SH_Initiated_By_Driver_On_Procedures(
            _L11_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver,
            _L12_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver,
            _L21_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver,
            _L14_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver,
            &outC->_1_Context_1);
          _L15_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            outC->_1_Context_1.Clean_BG_List_SH_Area;
          _L16_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            outC->_1_Context_1.Condition5;
          _L17_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            outC->_1_Context_1.Condition6;
          _L18_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            outC->_1_Context_1.End_Of_Mission_Procedure_Req;
          _L19_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            outC->_1_Context_1.SH_Refused_By_RBC_To_DMI;
          _L20_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver =
            outC->_1_Context_1.Request_For_SH_To_RBC;
          _198_Clean_BG_List_SH_Area =
            _L15_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
          _7_Clean_BG_List_SH_Area = _198_Clean_BG_List_SH_Area;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _7_Clean_BG_List_SH_Area = _174_Clean_BG_List_SH_Area;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _7_Clean_BG_List_SH_Area = _150_Clean_BG_List_SH_Area;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _7_Clean_BG_List_SH_Area = _126_Clean_BG_List_SH_Area;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _7_Clean_BG_List_SH_Area = _102_Clean_BG_List_SH_Area;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _7_Clean_BG_List_SH_Area = _78_Clean_BG_List_SH_Area;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _7_Clean_BG_List_SH_Area = _57_Clean_BG_List_SH_Area;
          break;
        
      }
      outC->Clean_BG_List_SH_Area = _7_Clean_BG_List_SH_Area;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _247_Condition_5 = kcg_false;
          _8_Condition_5 = _247_Condition_5;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _223_Condition_5 = kcg_false;
          _8_Condition_5 = _223_Condition_5;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _199_Condition_5 =
            _L16_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
          _8_Condition_5 = _199_Condition_5;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _175_Condition_5 = kcg_false;
          _8_Condition_5 = _175_Condition_5;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _151_Condition_5 = kcg_false;
          _8_Condition_5 = _151_Condition_5;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _127_Condition_5 = kcg_false;
          _8_Condition_5 = _127_Condition_5;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _103_Condition_5 = kcg_false;
          _8_Condition_5 = _103_Condition_5;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _79_Condition_5 = kcg_false;
          _8_Condition_5 = _79_Condition_5;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _58_Condition_5 = kcg_false;
          _8_Condition_5 = _58_Condition_5;
          break;
        
      }
      outC->Condition_5 = _8_Condition_5;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _248_Condition_6 = kcg_false;
          _9_Condition_6 = _248_Condition_6;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _224_Condition_6 = kcg_false;
          _9_Condition_6 = _224_Condition_6;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _200_Condition_6 =
            _L17_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
          _9_Condition_6 = _200_Condition_6;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _176_Condition_6 = kcg_false;
          _9_Condition_6 = _176_Condition_6;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _152_Condition_6 = kcg_false;
          _9_Condition_6 = _152_Condition_6;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _128_Condition_6 = kcg_false;
          _9_Condition_6 = _128_Condition_6;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _104_Condition_6 = kcg_false;
          _9_Condition_6 = _104_Condition_6;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _80_Condition_6 = kcg_false;
          _9_Condition_6 = _80_Condition_6;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _59_Condition_6 = kcg_false;
          _9_Condition_6 = _59_Condition_6;
          break;
        
      }
      outC->Condition_6 = _9_Condition_6;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _249_Condition_8 = kcg_false;
          _10_Condition_8 = _249_Condition_8;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _225_Condition_8 = kcg_false;
          _10_Condition_8 = _225_Condition_8;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _201_Condition_8 = kcg_false;
          _10_Condition_8 = _201_Condition_8;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _177_Condition_8 = kcg_false;
          _10_Condition_8 = _177_Condition_8;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _153_Condition_8 = kcg_false;
          _10_Condition_8 = _153_Condition_8;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _129_Condition_8 = kcg_false;
          _10_Condition_8 = _129_Condition_8;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _105_Condition_8 = kcg_false;
          _10_Condition_8 = _105_Condition_8;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _81_Condition_8 = kcg_false;
          _10_Condition_8 = _81_Condition_8;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _60_Condition_8 =
            _L5_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _10_Condition_8 = _60_Condition_8;
          break;
        
      }
      outC->Condition_8 = _10_Condition_8;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _250_Condition_10 = kcg_false;
          _11_Condition_10 = _250_Condition_10;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _226_Condition_10 = kcg_false;
          _11_Condition_10 = _226_Condition_10;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _202_Condition_10 = kcg_false;
          _11_Condition_10 = _202_Condition_10;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _178_Condition_10 = kcg_false;
          _11_Condition_10 = _178_Condition_10;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _154_Condition_10 = kcg_false;
          _11_Condition_10 = _154_Condition_10;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _130_Condition_10 = kcg_false;
          _11_Condition_10 = _130_Condition_10;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _106_Condition_10 = kcg_false;
          _11_Condition_10 = _106_Condition_10;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _82_Condition_10 = kcg_false;
          _11_Condition_10 = _82_Condition_10;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _61_Condition_10 =
            _L6_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _11_Condition_10 = _61_Condition_10;
          break;
        
      }
      outC->Condition_10 = _11_Condition_10;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _251_Condition_15 = kcg_false;
          _12_Condition_15 = _251_Condition_15;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _227_Condition_15 = kcg_false;
          _12_Condition_15 = _227_Condition_15;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _203_Condition_15 = kcg_false;
          _12_Condition_15 = _203_Condition_15;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _179_Condition_15 = kcg_false;
          _12_Condition_15 = _179_Condition_15;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _155_Condition_15 = kcg_false;
          _12_Condition_15 = _155_Condition_15;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _131_Condition_15 = kcg_false;
          _12_Condition_15 = _131_Condition_15;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _107_Condition_15 = kcg_false;
          _12_Condition_15 = _107_Condition_15;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _83_Condition_15 = kcg_false;
          _12_Condition_15 = _83_Condition_15;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _62_Condition_15 =
            _L7_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _12_Condition_15 = _62_Condition_15;
          break;
        
      }
      outC->Condition_15 = _12_Condition_15;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _252_Condition_46 = kcg_false;
          _13_Condition_46 = _252_Condition_46;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _L2_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_NL_Mode =
            kcg_true;
          _228_Condition_46 =
            _L2_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_NL_Mode;
          _13_Condition_46 = _228_Condition_46;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _204_Condition_46 = kcg_false;
          _13_Condition_46 = _204_Condition_46;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _180_Condition_46 = kcg_false;
          _13_Condition_46 = _180_Condition_46;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _156_Condition_46 = kcg_false;
          _13_Condition_46 = _156_Condition_46;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _132_Condition_46 = kcg_false;
          _13_Condition_46 = _132_Condition_46;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _108_Condition_46 = kcg_false;
          _13_Condition_46 = _108_Condition_46;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _84_Condition_46 = kcg_false;
          _13_Condition_46 = _84_Condition_46;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _63_Condition_46 = kcg_false;
          _13_Condition_46 = _63_Condition_46;
          break;
        
      }
      outC->Condition_46 = _13_Condition_46;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _253_Condition_50 = kcg_false;
          _14_Condition_50 = _253_Condition_50;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _229_Condition_50 = kcg_false;
          _14_Condition_50 = _229_Condition_50;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _205_Condition_50 = kcg_false;
          _14_Condition_50 = _205_Condition_50;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _181_Condition_50 = kcg_false;
          _14_Condition_50 = _181_Condition_50;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _157_Condition_50 = kcg_false;
          _14_Condition_50 = _157_Condition_50;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _133_Condition_50 = kcg_false;
          _14_Condition_50 = _133_Condition_50;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _109_Condition_50 = kcg_false;
          _14_Condition_50 = _109_Condition_50;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _85_Condition_50 = kcg_false;
          _14_Condition_50 = _85_Condition_50;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _64_Condition_50 =
            _L8_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _14_Condition_50 = _64_Condition_50;
          break;
        
      }
      outC->Condition_50 = _14_Condition_50;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _254_Condition_58 = kcg_false;
          _15_Condition_58 = _254_Condition_58;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _230_Condition_58 = kcg_false;
          _15_Condition_58 = _230_Condition_58;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _206_Condition_58 = kcg_false;
          _15_Condition_58 = _206_Condition_58;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _182_Condition_58 = kcg_false;
          _15_Condition_58 = _182_Condition_58;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _158_Condition_58 = kcg_false;
          _15_Condition_58 = _158_Condition_58;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _134_Condition_58 = kcg_false;
          _15_Condition_58 = _134_Condition_58;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_SN_Mode =
            kcg_true;
          _110_Condition_58 =
            _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_SN_Mode;
          _15_Condition_58 = _110_Condition_58;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _86_Condition_58 = kcg_false;
          _15_Condition_58 = _86_Condition_58;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _65_Condition_58 = kcg_false;
          _15_Condition_58 = _65_Condition_58;
          break;
        
      }
      outC->Condition_58 = _15_Condition_58;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _255_Condition_60 = kcg_false;
          _16_Condition_60 = _255_Condition_60;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _231_Condition_60 = kcg_false;
          _16_Condition_60 = _231_Condition_60;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _207_Condition_60 = kcg_false;
          _16_Condition_60 = _207_Condition_60;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _183_Condition_60 = kcg_false;
          _16_Condition_60 = _183_Condition_60;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _159_Condition_60 = kcg_false;
          _16_Condition_60 = _159_Condition_60;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _135_Condition_60 = kcg_false;
          _16_Condition_60 = _135_Condition_60;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _111_Condition_60 = kcg_false;
          _16_Condition_60 = _111_Condition_60;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_UN_Mode =
            kcg_true;
          _87_Condition_60 =
            _L1_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_UN_Mode;
          _16_Condition_60 = _87_Condition_60;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _66_Condition_60 = kcg_false;
          _16_Condition_60 = _66_Condition_60;
          break;
        
      }
      outC->Condition_60 = _16_Condition_60;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _256_Condition_70 = kcg_false;
          _17_Condition_70 = _256_Condition_70;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _232_Condition_70 = kcg_false;
          _17_Condition_70 = _232_Condition_70;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _208_Condition_70 = kcg_false;
          _17_Condition_70 = _208_Condition_70;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _184_Condition_70 = kcg_false;
          _17_Condition_70 = _184_Condition_70;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _160_Condition_70 = kcg_false;
          _17_Condition_70 = _160_Condition_70;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _136_Condition_70 = kcg_false;
          _17_Condition_70 = _136_Condition_70;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _112_Condition_70 = kcg_false;
          _17_Condition_70 = _112_Condition_70;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _88_Condition_70 = kcg_false;
          _17_Condition_70 = _88_Condition_70;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _67_Condition_70 =
            _L9_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _17_Condition_70 = _67_Condition_70;
          break;
        
      }
      outC->Condition_70 = _17_Condition_70;
      _18_EB_Requested = kcg_false;
      outC->EB_Requested = _18_EB_Requested;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _257_End_Of_Mission_Procedure_Req = kcg_false;
          _19_End_Of_Mission_Procedure_Req = _257_End_Of_Mission_Procedure_Req;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _233_End_Of_Mission_Procedure_Req = kcg_false;
          _19_End_Of_Mission_Procedure_Req = _233_End_Of_Mission_Procedure_Req;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _209_End_Of_Mission_Procedure_Req =
            _L18_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
          _19_End_Of_Mission_Procedure_Req = _209_End_Of_Mission_Procedure_Req;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _185_End_Of_Mission_Procedure_Req = kcg_false;
          _19_End_Of_Mission_Procedure_Req = _185_End_Of_Mission_Procedure_Req;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _161_End_Of_Mission_Procedure_Req = kcg_false;
          _19_End_Of_Mission_Procedure_Req = _161_End_Of_Mission_Procedure_Req;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _137_End_Of_Mission_Procedure_Req = kcg_false;
          _19_End_Of_Mission_Procedure_Req = _137_End_Of_Mission_Procedure_Req;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _113_End_Of_Mission_Procedure_Req = kcg_false;
          _19_End_Of_Mission_Procedure_Req = _113_End_Of_Mission_Procedure_Req;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _89_End_Of_Mission_Procedure_Req = kcg_false;
          _19_End_Of_Mission_Procedure_Req = _89_End_Of_Mission_Procedure_Req;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _68_End_Of_Mission_Procedure_Req = kcg_false;
          _19_End_Of_Mission_Procedure_Req = _68_End_Of_Mission_Procedure_Req;
          break;
        
      }
      outC->End_Of_Mission_Procedure_Req = _19_End_Of_Mission_Procedure_Req;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _258_MA_Req_To_RBC = kcg_false;
          _20_MA_Req_To_RBC = _258_MA_Req_To_RBC;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _234_MA_Req_To_RBC = kcg_false;
          _20_MA_Req_To_RBC = _234_MA_Req_To_RBC;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _210_MA_Req_To_RBC = kcg_false;
          _20_MA_Req_To_RBC = _210_MA_Req_To_RBC;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _186_MA_Req_To_RBC = kcg_false;
          _20_MA_Req_To_RBC = _186_MA_Req_To_RBC;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _162_MA_Req_To_RBC = kcg_false;
          _20_MA_Req_To_RBC = _162_MA_Req_To_RBC;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _138_MA_Req_To_RBC = kcg_false;
          _20_MA_Req_To_RBC = _138_MA_Req_To_RBC;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _114_MA_Req_To_RBC = kcg_false;
          _20_MA_Req_To_RBC = _114_MA_Req_To_RBC;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _90_MA_Req_To_RBC = kcg_false;
          _20_MA_Req_To_RBC = _90_MA_Req_To_RBC;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _69_MA_Req_To_RBC =
            _L10_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          _20_MA_Req_To_RBC = _69_MA_Req_To_RBC;
          break;
        
      }
      outC->MA_Req_To_RBC = _20_MA_Req_To_RBC;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _259_Request_For_SH_To_RBC = kcg_false;
          _21_Request_For_SH_To_RBC = _259_Request_For_SH_To_RBC;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _235_Request_For_SH_To_RBC = kcg_false;
          _21_Request_For_SH_To_RBC = _235_Request_For_SH_To_RBC;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _211_Request_For_SH_To_RBC =
            _L20_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
          _21_Request_For_SH_To_RBC = _211_Request_For_SH_To_RBC;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _187_Request_For_SH_To_RBC = kcg_false;
          _21_Request_For_SH_To_RBC = _187_Request_For_SH_To_RBC;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _163_Request_For_SH_To_RBC = kcg_false;
          _21_Request_For_SH_To_RBC = _163_Request_For_SH_To_RBC;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _139_Request_For_SH_To_RBC = kcg_false;
          _21_Request_For_SH_To_RBC = _139_Request_For_SH_To_RBC;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _115_Request_For_SH_To_RBC = kcg_false;
          _21_Request_For_SH_To_RBC = _115_Request_For_SH_To_RBC;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _91_Request_For_SH_To_RBC = kcg_false;
          _21_Request_For_SH_To_RBC = _91_Request_For_SH_To_RBC;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _70_Request_For_SH_To_RBC = kcg_false;
          _21_Request_For_SH_To_RBC = _70_Request_For_SH_To_RBC;
          break;
        
      }
      outC->Request_For_SH_To_RBC = _21_Request_For_SH_To_RBC;
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _260_SH_Refused_By_RBC_To_DMI = kcg_false;
          _22_SH_Refused_By_RBC_To_DMI = _260_SH_Refused_By_RBC_To_DMI;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _236_SH_Refused_By_RBC_To_DMI = kcg_false;
          _22_SH_Refused_By_RBC_To_DMI = _236_SH_Refused_By_RBC_To_DMI;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _212_SH_Refused_By_RBC_To_DMI =
            _L19_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Procedure_SH_Initiated_By_Driver;
          _22_SH_Refused_By_RBC_To_DMI = _212_SH_Refused_By_RBC_To_DMI;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _188_SH_Refused_By_RBC_To_DMI = kcg_false;
          _22_SH_Refused_By_RBC_To_DMI = _188_SH_Refused_By_RBC_To_DMI;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _164_SH_Refused_By_RBC_To_DMI = kcg_false;
          _22_SH_Refused_By_RBC_To_DMI = _164_SH_Refused_By_RBC_To_DMI;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _140_SH_Refused_By_RBC_To_DMI = kcg_false;
          _22_SH_Refused_By_RBC_To_DMI = _140_SH_Refused_By_RBC_To_DMI;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _116_SH_Refused_By_RBC_To_DMI = kcg_false;
          _22_SH_Refused_By_RBC_To_DMI = _116_SH_Refused_By_RBC_To_DMI;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _92_SH_Refused_By_RBC_To_DMI = kcg_false;
          _22_SH_Refused_By_RBC_To_DMI = _92_SH_Refused_By_RBC_To_DMI;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _71_SH_Refused_By_RBC_To_DMI = kcg_false;
          _22_SH_Refused_By_RBC_To_DMI = _71_SH_Refused_By_RBC_To_DMI;
          break;
        
      }
      outC->SH_Refused_By_RBC_To_DMI = _22_SH_Refused_By_RBC_To_DMI;
      _23_SM_StartOfMissionProcedure_state_nxt =
        SSM_st_Procedure_On_SM_StartOfMissionProcedure;
      outC->SM_StartOfMissionProcedure_state_nxt =
        _23_SM_StartOfMissionProcedure_state_nxt;
      _24_SM_StartOfMissionProcedure_reset_nxt = kcg_false;
      outC->SM_StartOfMissionProcedure_reset_nxt =
        _24_SM_StartOfMissionProcedure_reset_nxt;
      _25_SM_StartOfMissionProcedure_fired =
        _301_SM_StartOfMissionProcedure_fired_strong;
      _300_SM_StartOfMissionProcedure_fired =
        _25_SM_StartOfMissionProcedure_fired;
      /* init_SM_SoM_On */ if (outC->init2) {
        SM_SoM_On_reset_sel_SM_StartOfMissionProcedure_Procedure_On = kcg_false;
      }
      else {
        SM_SoM_On_reset_sel_SM_StartOfMissionProcedure_Procedure_On =
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
      }
      /* cb_SM_SoM_On */ switch (_294_SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command) {
            _287_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_Waiting_Driver_Command_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          else if (br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command) {
            _287_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_Waiting_Driver_Command_2_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          else if (br_3_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command) {
            _287_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_Waiting_Driver_Command_3_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          else {
            _287_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            _287_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _284_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            _284_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _281_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            _281_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
            _278_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_Waiting_Driver_Strating_Command_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          else if (br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
            if (_295_br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
              _278_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
                SSM_TR_Waiting_Driver_Strating_Command_2_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
            }
            else {
              _278_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
                SSM_TR_Waiting_Driver_Strating_Command_2_2_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
            }
          }
          else {
            _278_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            _278_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_0) {
            _275_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_Level_0_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          else {
            _275_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            _275_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Level_NTC) {
            _272_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_Level_NTC_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          else {
            _272_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
              SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          }
          _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            _272_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _269_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            _269_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _266_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            _266_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
          _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On =
            SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          break;
        
      }
      /* cb_SM_SoM_On */ switch (SM_SoM_On_clock_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _261_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _261_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _262_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _262_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _263_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _263_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _237_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _237_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _238_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _238_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _239_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _239_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _213_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _213_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _214_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _214_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _215_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _215_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _189_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _189_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _190_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _190_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _191_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _191_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _165_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _165_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _166_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _166_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _167_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _167_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _141_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _141_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _142_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _142_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _143_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _143_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _117_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _117_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _118_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _118_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _119_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _119_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          _93_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _93_SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _94_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            _94_SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
          _95_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _95_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
          SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          outC->SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SM_SoM_On_reset_nxt_SM_StartOfMissionProcedure_Procedure_On;
          SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            _298_SM_SoM_On_fired_strong_SM_StartOfMissionProcedure_Procedure_On;
          _297_SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On =
            SM_SoM_On_fired_SM_StartOfMissionProcedure_Procedure_On;
          break;
        
      }
      break;
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = Ack_LS_Req_To_Driver;
      Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = Ack_OS_Req_To_Driver;
      Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = Ack_SH_Req_To_Driver;
      Ack_SN_Req_To_Driver = kcg_false;
      outC->Ack_SN_Req_To_Driver = Ack_SN_Req_To_Driver;
      Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = Ack_SR_Req_To_Driver;
      Ack_UN_Req_To_Driver = kcg_false;
      outC->Ack_UN_Req_To_Driver = Ack_UN_Req_To_Driver;
      Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = Clean_BG_List_SH_Area;
      Condition_5 = kcg_false;
      outC->Condition_5 = Condition_5;
      Condition_6 = kcg_false;
      outC->Condition_6 = Condition_6;
      Condition_8 = kcg_false;
      outC->Condition_8 = Condition_8;
      Condition_10 = kcg_false;
      outC->Condition_10 = Condition_10;
      Condition_15 = kcg_false;
      outC->Condition_15 = Condition_15;
      Condition_46 = kcg_false;
      outC->Condition_46 = Condition_46;
      Condition_50 = kcg_false;
      outC->Condition_50 = Condition_50;
      Condition_58 = kcg_false;
      outC->Condition_58 = Condition_58;
      Condition_60 = kcg_false;
      outC->Condition_60 = Condition_60;
      Condition_70 = kcg_false;
      outC->Condition_70 = Condition_70;
      _L1_SM_StartOfMissionProcedure_EB_Requested = kcg_true;
      EB_Requested = _L1_SM_StartOfMissionProcedure_EB_Requested;
      outC->EB_Requested = EB_Requested;
      End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = End_Of_Mission_Procedure_Req;
      MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = MA_Req_To_RBC;
      Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = Request_For_SH_To_RBC;
      SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = SH_Refused_By_RBC_To_DMI;
      SM_StartOfMissionProcedure_state_nxt =
        SSM_st_EB_Requested_SM_StartOfMissionProcedure;
      outC->SM_StartOfMissionProcedure_state_nxt =
        SM_StartOfMissionProcedure_state_nxt;
      SM_StartOfMissionProcedure_reset_nxt = kcg_false;
      outC->SM_StartOfMissionProcedure_reset_nxt =
        SM_StartOfMissionProcedure_reset_nxt;
      SM_StartOfMissionProcedure_fired =
        _301_SM_StartOfMissionProcedure_fired_strong;
      _300_SM_StartOfMissionProcedure_fired = SM_StartOfMissionProcedure_fired;
      break;
    
  }
  outC->init = kcg_false;
  /* act_SM_StartOfMissionProcedure */ switch (_302_SM_StartOfMissionProcedure_state_act) {
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      outC->init2 = kcg_false;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_StartOfMission_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

