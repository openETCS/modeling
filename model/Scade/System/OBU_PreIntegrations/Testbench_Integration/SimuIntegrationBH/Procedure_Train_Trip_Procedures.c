/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_Train_Trip_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_Train_Trip_init_Procedures(
  outC_Procedure_Train_Trip_Procedures *outC)
{
  outC->init = kcg_true;
  outC->SM_Train_Trip_reset_nxt = kcg_true;
  outC->SM_Train_Trip_reset_act = kcg_true;
  outC->SM_Train_Trip_state_nxt = SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Condition_70 = kcg_true;
  outC->Condition_68 = kcg_true;
  outC->Condition_63 = kcg_true;
  outC->Condition_62 = kcg_true;
  outC->Condition_50 = kcg_true;
  outC->Condition_15 = kcg_true;
  outC->Condition_31 = kcg_true;
  outC->Condition_8 = kcg_true;
  outC->Condition_7 = kcg_true;
  outC->Condition_6 = kcg_true;
  outC->Condition_5 = kcg_true;
  outC->Condition_Trip = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Ack_TR_Req_To_Driver = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_init_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_Train_Trip_reset_Procedures(
  outC_Procedure_Train_Trip_Procedures *outC)
{
  outC->init = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_Train_Trip */
void Procedure_Train_Trip_Procedures(
  /* Procedures::Procedure_Train_Trip::Condition_To_Trip */ kcg_bool Condition_To_Trip,
  /* Procedures::Procedure_Train_Trip::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_Train_Trip::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_SR */ kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_Train_Trip::Driver_Ack_TR */ kcg_bool Driver_Ack_TR,
  /* Procedures::Procedure_Train_Trip::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_Train_Trip::Driver_Req_Start */ kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_Train_Trip::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_Train_Trip::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_Train_Trip::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::Procedure_Train_Trip::RCB_Ack_And_EB_Revocked */ kcg_bool RCB_Ack_And_EB_Revocked,
  /* Procedures::Procedure_Train_Trip::RBC_Authorizes_SR */ kcg_bool RBC_Authorizes_SR,
  /* Procedures::Procedure_Train_Trip::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_Train_Trip::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_Train_Trip::Valid_Train_Data_Stored */ kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_Train_Trip_Procedures *outC)
{
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _225_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _224_SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _223_SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _222_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool _221_Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool _220_MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool _219_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool _218_Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool _217_Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool _216_Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool _215_Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool _214_Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool _213_Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool _212_Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool _211_Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool _210_Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool _209_Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool _208_Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool _207_Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool _206_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool _205_Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool _204_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool _203_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool _202_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool _201_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _200_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _199_SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _198_SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _197_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool _196_Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool _195_MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool _194_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool _193_Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool _192_Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool _191_Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool _190_Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool _189_Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool _188_Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool _187_Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool _186_Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool _185_Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool _184_Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool _183_Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool _182_Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool _181_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool _180_Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool _179_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool _178_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool _177_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool _176_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode::_L1 */
  static kcg_bool _L1_SM_Train_Trip_Trip_Mode;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _175_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _174_SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _173_SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _172_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool _171_Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool _170_MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool _169_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool _168_Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool _167_Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool _166_Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool _165_Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool _164_Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool _163_Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool _162_Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool _161_Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool _160_Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool _159_Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool _158_Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool _157_Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool _156_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool _155_Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool _154_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool _153_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool _152_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool _151_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack::_L4 */
  static kcg_bool _L4_SM_Train_Trip_Trip_Mode_Waiting_Ack;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack::_L3 */
  static kcg_bool _L3_SM_Train_Trip_Trip_Mode_Waiting_Ack;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _150_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _149_SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _148_SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _147_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool _146_Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool _145_MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool _144_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool _143_Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool _142_Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool _141_Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool _140_Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool _139_Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool _138_Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool _137_Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool _136_Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool _135_Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool _134_Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool _133_Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool _132_Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool _131_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool _130_Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool _129_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool _128_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool _127_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool _126_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Post_Trip_Mode::_L1 */
  static kcg_bool _L1_SM_Train_Trip_Post_Trip_Mode;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _125_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _124_SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _123_SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _122_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool _121_Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool _120_MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool _119_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool _118_Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool _117_Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool _116_Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool _115_Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool _114_Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool _113_Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool _112_Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool _111_Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool _110_Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool _109_Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool _108_Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool _107_Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool _106_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool _105_Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool _104_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool _103_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool _102_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool _101_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::SH_Mode::_L1 */
  static kcg_bool _L1_SM_Train_Trip_SH_Mode;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _100_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _99_SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _98_SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _97_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool _96_Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool _95_MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool _94_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool _93_Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool _92_Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool _91_Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool _90_Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool _89_Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool _88_Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool _87_Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool _86_Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool _85_Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool _84_Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool _83_Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool _82_Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool _81_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool _80_Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool _79_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool _78_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool _77_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool _76_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::UN_Mode::_L1 */
  static kcg_bool _L1_SM_Train_Trip_UN_Mode;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _75_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _74_SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _73_SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _72_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool _71_Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool _70_MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool _69_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool _68_Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool _67_Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool _66_Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool _65_Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool _64_Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool _63_Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool _62_Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool _61_Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool _60_Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool _59_Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool _58_Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool _57_Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool _56_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool _55_Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool _54_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool _53_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool _52_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool _51_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::SN_Mode::_L1 */
  static kcg_bool _L1_SM_Train_Trip_SN_Mode;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _50_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _49_SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _48_SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _47_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool _46_Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool _45_MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool _44_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool _43_Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool _42_Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool _41_Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool _40_Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool _39_Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool _38_Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool _37_Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool _36_Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool _35_Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool _34_Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool _33_Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool _32_Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool _31_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool _30_Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool _29_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool _28_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool _27_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool _26_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L20 */
  static kcg_bool _L20_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L19 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L19_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L18 */
  static kcg_bool _L18_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L17 */
  static kcg_bool _L17_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L16 */
  static kcg_bool _L16_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L14 */
  static kcg_bool _L14_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L13 */
  static kcg_bool _L13_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L12 */
  static kcg_bool _L12_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L11 */
  static M_LEVEL _L11_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L1 */
  static kcg_bool _L1_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L2 */
  static kcg_bool _L2_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L3 */
  static kcg_bool _L3_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L4 */
  static kcg_bool _L4_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L5 */
  static kcg_bool _L5_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L6 */
  static kcg_bool _L6_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L7 */
  static kcg_bool _L7_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L8 */
  static kcg_bool _L8_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L9 */
  static kcg_bool _L9_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection::_L10 */
  static kcg_bool _L10_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _25_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _24_SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _23_SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool _22_SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool _21_Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool _20_MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool _19_End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool _18_Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool _17_Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool _16_Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool _15_Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool _14_Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool _13_Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool _12_Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool _11_Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool _10_Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool _9_Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool _8_Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool _7_Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool _6_Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool _5_Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool _4_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool _3_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool _2_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool _1_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool SM_Train_Trip_reset_nxt;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip SM_Train_Trip_state_nxt;
  /* Procedures::Procedure_Train_Trip::SH_Refused_By_RBC_To_DMI */
  static kcg_bool SH_Refused_By_RBC_To_DMI;
  /* Procedures::Procedure_Train_Trip::Request_For_SH_To_RBC */
  static kcg_bool Request_For_SH_To_RBC;
  /* Procedures::Procedure_Train_Trip::MA_Req_To_RBC */
  static kcg_bool MA_Req_To_RBC;
  /* Procedures::Procedure_Train_Trip::End_Of_Mission_Procedure_Req */
  static kcg_bool End_Of_Mission_Procedure_Req;
  /* Procedures::Procedure_Train_Trip::Condition_70 */
  static kcg_bool Condition_70;
  /* Procedures::Procedure_Train_Trip::Condition_68 */
  static kcg_bool Condition_68;
  /* Procedures::Procedure_Train_Trip::Condition_63 */
  static kcg_bool Condition_63;
  /* Procedures::Procedure_Train_Trip::Condition_62 */
  static kcg_bool Condition_62;
  /* Procedures::Procedure_Train_Trip::Condition_50 */
  static kcg_bool Condition_50;
  /* Procedures::Procedure_Train_Trip::Condition_15 */
  static kcg_bool Condition_15;
  /* Procedures::Procedure_Train_Trip::Condition_31 */
  static kcg_bool Condition_31;
  /* Procedures::Procedure_Train_Trip::Condition_8 */
  static kcg_bool Condition_8;
  /* Procedures::Procedure_Train_Trip::Condition_7 */
  static kcg_bool Condition_7;
  /* Procedures::Procedure_Train_Trip::Condition_6 */
  static kcg_bool Condition_6;
  /* Procedures::Procedure_Train_Trip::Condition_5 */
  static kcg_bool Condition_5;
  /* Procedures::Procedure_Train_Trip::Condition_Trip */
  static kcg_bool Condition_Trip;
  /* Procedures::Procedure_Train_Trip::Clean_BG_List_SH_Area */
  static kcg_bool Clean_BG_List_SH_Area;
  /* Procedures::Procedure_Train_Trip::Ack_TR_Req_To_Driver */
  static kcg_bool Ack_TR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SR_Req_To_Driver */
  static kcg_bool Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_SH_Req_To_Driver */
  static kcg_bool Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_OS_Req_To_Driver */
  static kcg_bool Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::Ack_LS_Req_To_Driver */
  static kcg_bool Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L11 */
  static M_LEVEL _L11_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L12 */
  static kcg_bool _L12_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L13 */
  static kcg_bool _L13_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L14 */
  static kcg_bool _L14_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L20 */
  static kcg_bool _L20_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L19 */
  static kcg_bool _L19_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L18 */
  static kcg_bool _L18_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L17 */
  static kcg_bool _L17_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L16 */
  static kcg_bool _L16_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Procedure_SH_Initiated_By_Driver::_L15 */
  static kcg_bool _L15_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _252_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _251_SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _250_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Train_Trip_procedure_off */
  static kcg_bool br_1_guard_SM_Train_Trip_Train_Trip_procedure_off;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _249_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _248_SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _247_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode */
  static kcg_bool br_1_guard_SM_Train_Trip_Trip_Mode;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _246_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _245_SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _244_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool _255_br_2_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool _254_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool br_3_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool br_2_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool _253_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Trip_Mode_Waiting_Ack */
  static kcg_bool br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _243_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _242_SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _241_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Post_Trip_Mode */
  static kcg_bool br_3_guard_SM_Train_Trip_Post_Trip_Mode;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Post_Trip_Mode */
  static kcg_bool br_2_guard_SM_Train_Trip_Post_Trip_Mode;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Post_Trip_Mode */
  static kcg_bool br_1_guard_SM_Train_Trip_Post_Trip_Mode;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _240_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _239_SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _238_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _237_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _236_SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _235_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _234_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _233_SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _232_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _231_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _230_SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _229_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Waiting_Driver_Selection */
  static kcg_bool br_1_guard_SM_Train_Trip_Waiting_Driver_Selection;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _228_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool _227_SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _226_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip::Wait_RBC_Ack */
  static kcg_bool br_1_guard_SM_Train_Trip_Wait_RBC_Ack;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool SM_Train_Trip_reset_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip SM_Train_Trip_state_sel;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_ST_SM_Train_Trip _258_SM_Train_Trip_state_act;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool SM_Train_Trip_reset_sel;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static kcg_bool SM_Train_Trip_reset_prv;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _257_SM_Train_Trip_fired_strong;
  /* Procedures::Procedure_Train_Trip::SM_Train_Trip */
  static SSM_TR_SM_Train_Trip _256_SM_Train_Trip_fired;
  /* Procedures::Procedure_Train_Trip::Loc_Procedure_Possible */
  static kcg_bool Loc_Procedure_Possible;
  /* Procedures::Procedure_Train_Trip::_L17 */
  static kcg_bool _L17;
  /* Procedures::Procedure_Train_Trip::_L16 */
  static kcg_bool _L16;
  /* Procedures::Procedure_Train_Trip::_L15 */
  static kcg_bool _L15;
  /* Procedures::Procedure_Train_Trip::_L13 */
  static kcg_bool _L13;
  /* Procedures::Procedure_Train_Trip::_L11 */
  static T_Mode_Level_And_Mode_Types_Pkg _L11;
  /* Procedures::Procedure_Train_Trip::_L10 */
  static kcg_bool _L10;
  /* Procedures::Procedure_Train_Trip::_L7 */
  static kcg_bool _L7;
  /* Procedures::Procedure_Train_Trip::_L5 */
  static kcg_bool _L5;
  /* Procedures::Procedure_Train_Trip::_L4 */
  static kcg_bool _L4;
  /* Procedures::Procedure_Train_Trip::_L3 */
  static kcg_bool _L3;
  /* Procedures::Procedure_Train_Trip::_L2 */
  static kcg_bool _L2;
  
  _L2 = kcg_true;
  _L3 = kcg_true;
  _L4 = kcg_true;
  _L11 = Current_Mode;
  _L15 = kcg_true;
  _L16 = kcg_true;
  _L17 = kcg_true;
  _L7 = kcg_true;
  _L10 = kcg_true;
  _L13 = kcg_false;
  switch (_L11) {
    case FS_Level_And_Mode_Types_Pkg :
      _L5 = _L2;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      _L5 = _L4;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      _L5 = _L15;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      _L5 = _L16;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      _L5 = _L3;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      _L5 = _L17;
      break;
    case SH_Level_And_Mode_Types_Pkg :
      _L5 = _L7;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      _L5 = _L10;
      break;
    
    default :
      _L5 = _L13;
  }
  Loc_Procedure_Possible = _L5;
  /* init_SM_Train_Trip */ if (outC->init) {
    SM_Train_Trip_state_sel = SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
  }
  else {
    SM_Train_Trip_state_sel = outC->SM_Train_Trip_state_nxt;
  }
  /* init_SM_Train_Trip */ if (outC->init) {
    SM_Train_Trip_reset_sel = kcg_false;
  }
  else {
    SM_Train_Trip_reset_sel = outC->SM_Train_Trip_reset_nxt;
  }
  /* init_SM_Train_Trip */ if (outC->init) {
    SM_Train_Trip_reset_prv = kcg_false;
  }
  else {
    SM_Train_Trip_reset_prv = outC->SM_Train_Trip_reset_act;
  }
  /* sel_SM_Train_Trip */ switch (SM_Train_Trip_state_sel) {
    case SSM_st_Train_Trip_procedure_off_SM_Train_Trip :
      br_1_guard_SM_Train_Trip_Train_Trip_procedure_off =
        Loc_Procedure_Possible & Condition_To_Trip;
      if (br_1_guard_SM_Train_Trip_Train_Trip_procedure_off) {
        _250_SM_Train_Trip_state_act = SSM_st_Trip_Mode_SM_Train_Trip;
      }
      else {
        _250_SM_Train_Trip_state_act =
          SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
      }
      _258_SM_Train_Trip_state_act = _250_SM_Train_Trip_state_act;
      _251_SM_Train_Trip_reset_act =
        br_1_guard_SM_Train_Trip_Train_Trip_procedure_off;
      outC->SM_Train_Trip_reset_act = _251_SM_Train_Trip_reset_act;
      if (br_1_guard_SM_Train_Trip_Train_Trip_procedure_off) {
        _252_SM_Train_Trip_fired_strong =
          SSM_TR_Train_Trip_procedure_off_1_SM_Train_Trip;
      }
      else {
        _252_SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      }
      _257_SM_Train_Trip_fired_strong = _252_SM_Train_Trip_fired_strong;
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      br_1_guard_SM_Train_Trip_Trip_Mode = Train_Standstill;
      if (br_1_guard_SM_Train_Trip_Trip_Mode) {
        _247_SM_Train_Trip_state_act =
          SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip;
      }
      else {
        _247_SM_Train_Trip_state_act = SSM_st_Trip_Mode_SM_Train_Trip;
      }
      _258_SM_Train_Trip_state_act = _247_SM_Train_Trip_state_act;
      _248_SM_Train_Trip_reset_act = br_1_guard_SM_Train_Trip_Trip_Mode;
      outC->SM_Train_Trip_reset_act = _248_SM_Train_Trip_reset_act;
      if (br_1_guard_SM_Train_Trip_Trip_Mode) {
        _249_SM_Train_Trip_fired_strong = SSM_TR_Trip_Mode_1_SM_Train_Trip;
      }
      else {
        _249_SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      }
      _257_SM_Train_Trip_fired_strong = _249_SM_Train_Trip_fired_strong;
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip :
      _253_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack = (Current_Level ==
          M_LEVEL_Level_1) | (Current_Level == M_LEVEL_Level_2) |
        (Current_Level == M_LEVEL_Level_3);
      br_2_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack =
        !Valid_Train_Data_Stored & ((Current_Level == M_LEVEL_Level_0) |
          (Current_Level == M_LEVEL_Level_NTC_specified_by_NID_NTC));
      _254_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack = Current_Level ==
        M_LEVEL_Level_0;
      _255_br_2_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack = Current_Level ==
        M_LEVEL_Level_NTC_specified_by_NID_NTC;
      br_3_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack = Valid_Train_Data_Stored &
        (_254_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack |
          _255_br_2_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack);
      br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack = Driver_Ack_TR &
        (_253_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack |
          (br_2_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack |
            br_3_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack));
      if (br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack) {
        if (_253_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack) {
          _244_SM_Train_Trip_state_act = SSM_st_Post_Trip_Mode_SM_Train_Trip;
        }
        else if (br_2_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack) {
          _244_SM_Train_Trip_state_act = SSM_st_SH_Mode_SM_Train_Trip;
        }
        else if (_254_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack) {
          _244_SM_Train_Trip_state_act = SSM_st_UN_Mode_SM_Train_Trip;
        }
        else {
          _244_SM_Train_Trip_state_act = SSM_st_SN_Mode_SM_Train_Trip;
        }
      }
      else {
        _244_SM_Train_Trip_state_act =
          SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip;
      }
      _258_SM_Train_Trip_state_act = _244_SM_Train_Trip_state_act;
      _245_SM_Train_Trip_reset_act =
        br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack;
      outC->SM_Train_Trip_reset_act = _245_SM_Train_Trip_reset_act;
      if (br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack) {
        if (_253_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack) {
          _246_SM_Train_Trip_fired_strong =
            SSM_TR_Trip_Mode_Waiting_Ack_1_1_SM_Train_Trip;
        }
        else if (br_2_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack) {
          _246_SM_Train_Trip_fired_strong =
            SSM_TR_Trip_Mode_Waiting_Ack_1_2_SM_Train_Trip;
        }
        else if (_254_br_1_guard_SM_Train_Trip_Trip_Mode_Waiting_Ack) {
          _246_SM_Train_Trip_fired_strong =
            SSM_TR_Trip_Mode_Waiting_Ack_1_3_1_SM_Train_Trip;
        }
        else {
          _246_SM_Train_Trip_fired_strong =
            SSM_TR_Trip_Mode_Waiting_Ack_1_3_2_SM_Train_Trip;
        }
      }
      else {
        _246_SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      }
      _257_SM_Train_Trip_fired_strong = _246_SM_Train_Trip_fired_strong;
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_Trip :
      br_1_guard_SM_Train_Trip_Post_Trip_Mode = Current_Level ==
        M_LEVEL_Level_1;
      br_2_guard_SM_Train_Trip_Post_Trip_Mode = (Current_Level ==
          M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
      br_3_guard_SM_Train_Trip_Post_Trip_Mode = Driver_Req_SH;
      if (br_1_guard_SM_Train_Trip_Post_Trip_Mode) {
        _241_SM_Train_Trip_state_act =
          SSM_st_Waiting_Driver_Selection_SM_Train_Trip;
      }
      else if (br_2_guard_SM_Train_Trip_Post_Trip_Mode) {
        _241_SM_Train_Trip_state_act = SSM_st_Wait_RBC_Ack_SM_Train_Trip;
      }
      else if (br_3_guard_SM_Train_Trip_Post_Trip_Mode) {
        _241_SM_Train_Trip_state_act =
          SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      }
      else {
        _241_SM_Train_Trip_state_act = SSM_st_Post_Trip_Mode_SM_Train_Trip;
      }
      _258_SM_Train_Trip_state_act = _241_SM_Train_Trip_state_act;
      if (br_1_guard_SM_Train_Trip_Post_Trip_Mode) {
        _242_SM_Train_Trip_reset_act = kcg_true;
      }
      else if (br_2_guard_SM_Train_Trip_Post_Trip_Mode) {
        _242_SM_Train_Trip_reset_act = kcg_true;
      }
      else {
        _242_SM_Train_Trip_reset_act = br_3_guard_SM_Train_Trip_Post_Trip_Mode;
      }
      outC->SM_Train_Trip_reset_act = _242_SM_Train_Trip_reset_act;
      if (br_1_guard_SM_Train_Trip_Post_Trip_Mode) {
        _243_SM_Train_Trip_fired_strong = SSM_TR_Post_Trip_Mode_1_SM_Train_Trip;
      }
      else if (br_2_guard_SM_Train_Trip_Post_Trip_Mode) {
        _243_SM_Train_Trip_fired_strong = SSM_TR_Post_Trip_Mode_2_SM_Train_Trip;
      }
      else if (br_3_guard_SM_Train_Trip_Post_Trip_Mode) {
        _243_SM_Train_Trip_fired_strong = SSM_TR_Post_Trip_Mode_3_SM_Train_Trip;
      }
      else {
        _243_SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      }
      _257_SM_Train_Trip_fired_strong = _243_SM_Train_Trip_fired_strong;
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      _238_SM_Train_Trip_state_act = SSM_st_SH_Mode_SM_Train_Trip;
      _258_SM_Train_Trip_state_act = _238_SM_Train_Trip_state_act;
      _239_SM_Train_Trip_reset_act = kcg_false;
      outC->SM_Train_Trip_reset_act = _239_SM_Train_Trip_reset_act;
      _240_SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      _257_SM_Train_Trip_fired_strong = _240_SM_Train_Trip_fired_strong;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      _235_SM_Train_Trip_state_act = SSM_st_UN_Mode_SM_Train_Trip;
      _258_SM_Train_Trip_state_act = _235_SM_Train_Trip_state_act;
      _236_SM_Train_Trip_reset_act = kcg_false;
      outC->SM_Train_Trip_reset_act = _236_SM_Train_Trip_reset_act;
      _237_SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      _257_SM_Train_Trip_fired_strong = _237_SM_Train_Trip_fired_strong;
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      _232_SM_Train_Trip_state_act = SSM_st_SN_Mode_SM_Train_Trip;
      _258_SM_Train_Trip_state_act = _232_SM_Train_Trip_state_act;
      _233_SM_Train_Trip_reset_act = kcg_false;
      outC->SM_Train_Trip_reset_act = _233_SM_Train_Trip_reset_act;
      _234_SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      _257_SM_Train_Trip_fired_strong = _234_SM_Train_Trip_fired_strong;
      break;
    case SSM_st_Waiting_Driver_Selection_SM_Train_Trip :
      br_1_guard_SM_Train_Trip_Waiting_Driver_Selection = Driver_Req_SH;
      if (br_1_guard_SM_Train_Trip_Waiting_Driver_Selection) {
        _229_SM_Train_Trip_state_act =
          SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      }
      else {
        _229_SM_Train_Trip_state_act =
          SSM_st_Waiting_Driver_Selection_SM_Train_Trip;
      }
      _258_SM_Train_Trip_state_act = _229_SM_Train_Trip_state_act;
      _230_SM_Train_Trip_reset_act =
        br_1_guard_SM_Train_Trip_Waiting_Driver_Selection;
      outC->SM_Train_Trip_reset_act = _230_SM_Train_Trip_reset_act;
      if (br_1_guard_SM_Train_Trip_Waiting_Driver_Selection) {
        _231_SM_Train_Trip_fired_strong =
          SSM_TR_Waiting_Driver_Selection_1_SM_Train_Trip;
      }
      else {
        _231_SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      }
      _257_SM_Train_Trip_fired_strong = _231_SM_Train_Trip_fired_strong;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Trip :
      br_1_guard_SM_Train_Trip_Wait_RBC_Ack = RCB_Ack_And_EB_Revocked;
      if (br_1_guard_SM_Train_Trip_Wait_RBC_Ack) {
        _226_SM_Train_Trip_state_act =
          SSM_st_Waiting_Driver_Selection_SM_Train_Trip;
      }
      else {
        _226_SM_Train_Trip_state_act = SSM_st_Wait_RBC_Ack_SM_Train_Trip;
      }
      _258_SM_Train_Trip_state_act = _226_SM_Train_Trip_state_act;
      _227_SM_Train_Trip_reset_act = br_1_guard_SM_Train_Trip_Wait_RBC_Ack;
      outC->SM_Train_Trip_reset_act = _227_SM_Train_Trip_reset_act;
      if (br_1_guard_SM_Train_Trip_Wait_RBC_Ack) {
        _228_SM_Train_Trip_fired_strong = SSM_TR_Wait_RBC_Ack_1_SM_Train_Trip;
      }
      else {
        _228_SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      }
      _257_SM_Train_Trip_fired_strong = _228_SM_Train_Trip_fired_strong;
      break;
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      SM_Train_Trip_state_act =
        SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      _258_SM_Train_Trip_state_act = SM_Train_Trip_state_act;
      SM_Train_Trip_reset_act = kcg_false;
      outC->SM_Train_Trip_reset_act = SM_Train_Trip_reset_act;
      SM_Train_Trip_fired_strong = SSM_TR_no_trans_SM_Train_Trip;
      _257_SM_Train_Trip_fired_strong = SM_Train_Trip_fired_strong;
      break;
    
  }
  /* act_SM_Train_Trip */ switch (_258_SM_Train_Trip_state_act) {
    case SSM_st_Train_Trip_procedure_off_SM_Train_Trip :
      _201_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _201_Ack_LS_Req_To_Driver;
      _202_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _202_Ack_OS_Req_To_Driver;
      _203_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _203_Ack_SH_Req_To_Driver;
      _204_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _204_Ack_SR_Req_To_Driver;
      _205_Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_TR_Req_To_Driver = _205_Ack_TR_Req_To_Driver;
      _206_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _206_Clean_BG_List_SH_Area;
      _207_Condition_Trip = kcg_false;
      outC->Condition_Trip = _207_Condition_Trip;
      _208_Condition_5 = kcg_false;
      outC->Condition_5 = _208_Condition_5;
      _209_Condition_6 = kcg_false;
      outC->Condition_6 = _209_Condition_6;
      _210_Condition_7 = kcg_false;
      outC->Condition_7 = _210_Condition_7;
      _211_Condition_8 = kcg_false;
      outC->Condition_8 = _211_Condition_8;
      _212_Condition_31 = kcg_false;
      outC->Condition_31 = _212_Condition_31;
      _213_Condition_15 = kcg_false;
      outC->Condition_15 = _213_Condition_15;
      _214_Condition_50 = kcg_false;
      outC->Condition_50 = _214_Condition_50;
      _215_Condition_62 = kcg_false;
      outC->Condition_62 = _215_Condition_62;
      _216_Condition_63 = kcg_false;
      outC->Condition_63 = _216_Condition_63;
      _217_Condition_68 = kcg_false;
      outC->Condition_68 = _217_Condition_68;
      _218_Condition_70 = kcg_false;
      outC->Condition_70 = _218_Condition_70;
      _219_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _219_End_Of_Mission_Procedure_Req;
      _220_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _220_MA_Req_To_RBC;
      _221_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _221_Request_For_SH_To_RBC;
      _222_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _222_SH_Refused_By_RBC_To_DMI;
      _223_SM_Train_Trip_state_nxt =
        SSM_st_Train_Trip_procedure_off_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = _223_SM_Train_Trip_state_nxt;
      _224_SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = _224_SM_Train_Trip_reset_nxt;
      _225_SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = _225_SM_Train_Trip_fired;
      break;
    case SSM_st_Trip_Mode_SM_Train_Trip :
      _176_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _176_Ack_LS_Req_To_Driver;
      _177_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _177_Ack_OS_Req_To_Driver;
      _178_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _178_Ack_SH_Req_To_Driver;
      _179_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _179_Ack_SR_Req_To_Driver;
      _180_Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_TR_Req_To_Driver = _180_Ack_TR_Req_To_Driver;
      _181_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _181_Clean_BG_List_SH_Area;
      _L1_SM_Train_Trip_Trip_Mode = kcg_true;
      _182_Condition_Trip = _L1_SM_Train_Trip_Trip_Mode;
      outC->Condition_Trip = _182_Condition_Trip;
      _183_Condition_5 = kcg_false;
      outC->Condition_5 = _183_Condition_5;
      _184_Condition_6 = kcg_false;
      outC->Condition_6 = _184_Condition_6;
      _185_Condition_7 = kcg_false;
      outC->Condition_7 = _185_Condition_7;
      _186_Condition_8 = kcg_false;
      outC->Condition_8 = _186_Condition_8;
      _187_Condition_31 = kcg_false;
      outC->Condition_31 = _187_Condition_31;
      _188_Condition_15 = kcg_false;
      outC->Condition_15 = _188_Condition_15;
      _189_Condition_50 = kcg_false;
      outC->Condition_50 = _189_Condition_50;
      _190_Condition_62 = kcg_false;
      outC->Condition_62 = _190_Condition_62;
      _191_Condition_63 = kcg_false;
      outC->Condition_63 = _191_Condition_63;
      _192_Condition_68 = kcg_false;
      outC->Condition_68 = _192_Condition_68;
      _193_Condition_70 = kcg_false;
      outC->Condition_70 = _193_Condition_70;
      _194_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _194_End_Of_Mission_Procedure_Req;
      _195_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _195_MA_Req_To_RBC;
      _196_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _196_Request_For_SH_To_RBC;
      _197_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _197_SH_Refused_By_RBC_To_DMI;
      _198_SM_Train_Trip_state_nxt = SSM_st_Trip_Mode_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = _198_SM_Train_Trip_state_nxt;
      _199_SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = _199_SM_Train_Trip_reset_nxt;
      _200_SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = _200_SM_Train_Trip_fired;
      break;
    case SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip :
      _151_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _151_Ack_LS_Req_To_Driver;
      _152_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _152_Ack_OS_Req_To_Driver;
      _153_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _153_Ack_SH_Req_To_Driver;
      _154_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _154_Ack_SR_Req_To_Driver;
      _L4_SM_Train_Trip_Trip_Mode_Waiting_Ack = kcg_true;
      _155_Ack_TR_Req_To_Driver = _L4_SM_Train_Trip_Trip_Mode_Waiting_Ack;
      outC->Ack_TR_Req_To_Driver = _155_Ack_TR_Req_To_Driver;
      _156_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _156_Clean_BG_List_SH_Area;
      _L3_SM_Train_Trip_Trip_Mode_Waiting_Ack = kcg_true;
      _157_Condition_Trip = _L3_SM_Train_Trip_Trip_Mode_Waiting_Ack;
      outC->Condition_Trip = _157_Condition_Trip;
      _158_Condition_5 = kcg_false;
      outC->Condition_5 = _158_Condition_5;
      _159_Condition_6 = kcg_false;
      outC->Condition_6 = _159_Condition_6;
      _160_Condition_7 = kcg_false;
      outC->Condition_7 = _160_Condition_7;
      _161_Condition_8 = kcg_false;
      outC->Condition_8 = _161_Condition_8;
      _162_Condition_31 = kcg_false;
      outC->Condition_31 = _162_Condition_31;
      _163_Condition_15 = kcg_false;
      outC->Condition_15 = _163_Condition_15;
      _164_Condition_50 = kcg_false;
      outC->Condition_50 = _164_Condition_50;
      _165_Condition_62 = kcg_false;
      outC->Condition_62 = _165_Condition_62;
      _166_Condition_63 = kcg_false;
      outC->Condition_63 = _166_Condition_63;
      _167_Condition_68 = kcg_false;
      outC->Condition_68 = _167_Condition_68;
      _168_Condition_70 = kcg_false;
      outC->Condition_70 = _168_Condition_70;
      _169_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _169_End_Of_Mission_Procedure_Req;
      _170_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _170_MA_Req_To_RBC;
      _171_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _171_Request_For_SH_To_RBC;
      _172_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _172_SH_Refused_By_RBC_To_DMI;
      _173_SM_Train_Trip_state_nxt = SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = _173_SM_Train_Trip_state_nxt;
      _174_SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = _174_SM_Train_Trip_reset_nxt;
      _175_SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = _175_SM_Train_Trip_fired;
      break;
    case SSM_st_Post_Trip_Mode_SM_Train_Trip :
      _126_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _126_Ack_LS_Req_To_Driver;
      _127_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _127_Ack_OS_Req_To_Driver;
      _128_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _128_Ack_SH_Req_To_Driver;
      _129_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _129_Ack_SR_Req_To_Driver;
      _130_Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_TR_Req_To_Driver = _130_Ack_TR_Req_To_Driver;
      _131_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _131_Clean_BG_List_SH_Area;
      _132_Condition_Trip = kcg_false;
      outC->Condition_Trip = _132_Condition_Trip;
      _133_Condition_5 = kcg_false;
      outC->Condition_5 = _133_Condition_5;
      _134_Condition_6 = kcg_false;
      outC->Condition_6 = _134_Condition_6;
      _L1_SM_Train_Trip_Post_Trip_Mode = kcg_true;
      _135_Condition_7 = _L1_SM_Train_Trip_Post_Trip_Mode;
      outC->Condition_7 = _135_Condition_7;
      _136_Condition_8 = kcg_false;
      outC->Condition_8 = _136_Condition_8;
      _137_Condition_31 = kcg_false;
      outC->Condition_31 = _137_Condition_31;
      _138_Condition_15 = kcg_false;
      outC->Condition_15 = _138_Condition_15;
      _139_Condition_50 = kcg_false;
      outC->Condition_50 = _139_Condition_50;
      _140_Condition_62 = kcg_false;
      outC->Condition_62 = _140_Condition_62;
      _141_Condition_63 = kcg_false;
      outC->Condition_63 = _141_Condition_63;
      _142_Condition_68 = kcg_false;
      outC->Condition_68 = _142_Condition_68;
      _143_Condition_70 = kcg_false;
      outC->Condition_70 = _143_Condition_70;
      _144_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _144_End_Of_Mission_Procedure_Req;
      _145_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _145_MA_Req_To_RBC;
      _146_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _146_Request_For_SH_To_RBC;
      _147_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _147_SH_Refused_By_RBC_To_DMI;
      _148_SM_Train_Trip_state_nxt = SSM_st_Post_Trip_Mode_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = _148_SM_Train_Trip_state_nxt;
      _149_SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = _149_SM_Train_Trip_reset_nxt;
      _150_SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = _150_SM_Train_Trip_fired;
      break;
    case SSM_st_SH_Mode_SM_Train_Trip :
      _101_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _101_Ack_LS_Req_To_Driver;
      _102_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _102_Ack_OS_Req_To_Driver;
      _103_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _103_Ack_SH_Req_To_Driver;
      _104_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _104_Ack_SR_Req_To_Driver;
      _105_Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_TR_Req_To_Driver = _105_Ack_TR_Req_To_Driver;
      _106_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _106_Clean_BG_List_SH_Area;
      _107_Condition_Trip = kcg_false;
      outC->Condition_Trip = _107_Condition_Trip;
      _108_Condition_5 = kcg_false;
      outC->Condition_5 = _108_Condition_5;
      _109_Condition_6 = kcg_false;
      outC->Condition_6 = _109_Condition_6;
      _110_Condition_7 = kcg_false;
      outC->Condition_7 = _110_Condition_7;
      _111_Condition_8 = kcg_false;
      outC->Condition_8 = _111_Condition_8;
      _112_Condition_31 = kcg_false;
      outC->Condition_31 = _112_Condition_31;
      _113_Condition_15 = kcg_false;
      outC->Condition_15 = _113_Condition_15;
      _114_Condition_50 = kcg_false;
      outC->Condition_50 = _114_Condition_50;
      _115_Condition_62 = kcg_false;
      outC->Condition_62 = _115_Condition_62;
      _116_Condition_63 = kcg_false;
      outC->Condition_63 = _116_Condition_63;
      _L1_SM_Train_Trip_SH_Mode = kcg_true;
      _117_Condition_68 = _L1_SM_Train_Trip_SH_Mode;
      outC->Condition_68 = _117_Condition_68;
      _118_Condition_70 = kcg_false;
      outC->Condition_70 = _118_Condition_70;
      _119_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _119_End_Of_Mission_Procedure_Req;
      _120_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _120_MA_Req_To_RBC;
      _121_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _121_Request_For_SH_To_RBC;
      _122_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _122_SH_Refused_By_RBC_To_DMI;
      _123_SM_Train_Trip_state_nxt = SSM_st_SH_Mode_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = _123_SM_Train_Trip_state_nxt;
      _124_SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = _124_SM_Train_Trip_reset_nxt;
      _125_SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = _125_SM_Train_Trip_fired;
      break;
    case SSM_st_UN_Mode_SM_Train_Trip :
      _76_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _76_Ack_LS_Req_To_Driver;
      _77_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _77_Ack_OS_Req_To_Driver;
      _78_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _78_Ack_SH_Req_To_Driver;
      _79_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _79_Ack_SR_Req_To_Driver;
      _80_Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_TR_Req_To_Driver = _80_Ack_TR_Req_To_Driver;
      _81_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _81_Clean_BG_List_SH_Area;
      _82_Condition_Trip = kcg_false;
      outC->Condition_Trip = _82_Condition_Trip;
      _83_Condition_5 = kcg_false;
      outC->Condition_5 = _83_Condition_5;
      _84_Condition_6 = kcg_false;
      outC->Condition_6 = _84_Condition_6;
      _85_Condition_7 = kcg_false;
      outC->Condition_7 = _85_Condition_7;
      _86_Condition_8 = kcg_false;
      outC->Condition_8 = _86_Condition_8;
      _87_Condition_31 = kcg_false;
      outC->Condition_31 = _87_Condition_31;
      _88_Condition_15 = kcg_false;
      outC->Condition_15 = _88_Condition_15;
      _89_Condition_50 = kcg_false;
      outC->Condition_50 = _89_Condition_50;
      _L1_SM_Train_Trip_UN_Mode = kcg_true;
      _90_Condition_62 = _L1_SM_Train_Trip_UN_Mode;
      outC->Condition_62 = _90_Condition_62;
      _91_Condition_63 = kcg_false;
      outC->Condition_63 = _91_Condition_63;
      _92_Condition_68 = kcg_false;
      outC->Condition_68 = _92_Condition_68;
      _93_Condition_70 = kcg_false;
      outC->Condition_70 = _93_Condition_70;
      _94_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _94_End_Of_Mission_Procedure_Req;
      _95_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _95_MA_Req_To_RBC;
      _96_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _96_Request_For_SH_To_RBC;
      _97_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _97_SH_Refused_By_RBC_To_DMI;
      _98_SM_Train_Trip_state_nxt = SSM_st_UN_Mode_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = _98_SM_Train_Trip_state_nxt;
      _99_SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = _99_SM_Train_Trip_reset_nxt;
      _100_SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = _100_SM_Train_Trip_fired;
      break;
    case SSM_st_SN_Mode_SM_Train_Trip :
      _51_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _51_Ack_LS_Req_To_Driver;
      _52_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _52_Ack_OS_Req_To_Driver;
      _53_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _53_Ack_SH_Req_To_Driver;
      _54_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _54_Ack_SR_Req_To_Driver;
      _55_Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_TR_Req_To_Driver = _55_Ack_TR_Req_To_Driver;
      _56_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _56_Clean_BG_List_SH_Area;
      _57_Condition_Trip = kcg_false;
      outC->Condition_Trip = _57_Condition_Trip;
      _58_Condition_5 = kcg_false;
      outC->Condition_5 = _58_Condition_5;
      _59_Condition_6 = kcg_false;
      outC->Condition_6 = _59_Condition_6;
      _60_Condition_7 = kcg_false;
      outC->Condition_7 = _60_Condition_7;
      _61_Condition_8 = kcg_false;
      outC->Condition_8 = _61_Condition_8;
      _62_Condition_31 = kcg_false;
      outC->Condition_31 = _62_Condition_31;
      _63_Condition_15 = kcg_false;
      outC->Condition_15 = _63_Condition_15;
      _64_Condition_50 = kcg_false;
      outC->Condition_50 = _64_Condition_50;
      _65_Condition_62 = kcg_false;
      outC->Condition_62 = _65_Condition_62;
      _L1_SM_Train_Trip_SN_Mode = kcg_true;
      _66_Condition_63 = _L1_SM_Train_Trip_SN_Mode;
      outC->Condition_63 = _66_Condition_63;
      _67_Condition_68 = kcg_false;
      outC->Condition_68 = _67_Condition_68;
      _68_Condition_70 = kcg_false;
      outC->Condition_70 = _68_Condition_70;
      _69_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _69_End_Of_Mission_Procedure_Req;
      _70_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _70_MA_Req_To_RBC;
      _71_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _71_Request_For_SH_To_RBC;
      _72_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _72_SH_Refused_By_RBC_To_DMI;
      _73_SM_Train_Trip_state_nxt = SSM_st_SN_Mode_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = _73_SM_Train_Trip_state_nxt;
      _74_SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = _74_SM_Train_Trip_reset_nxt;
      _75_SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = _75_SM_Train_Trip_fired;
      break;
    case SSM_st_Waiting_Driver_Selection_SM_Train_Trip :
      _L11_SM_Train_Trip_Waiting_Driver_Selection = Current_Level;
      _L12_SM_Train_Trip_Waiting_Driver_Selection = Driver_Ack_LS;
      _L13_SM_Train_Trip_Waiting_Driver_Selection = Driver_Ack_OS;
      _L16_SM_Train_Trip_Waiting_Driver_Selection = Driver_Ack_SH;
      _L17_SM_Train_Trip_Waiting_Driver_Selection = Driver_Ack_SR;
      _L14_SM_Train_Trip_Waiting_Driver_Selection = Driver_Req_Start;
      _L18_SM_Train_Trip_Waiting_Driver_Selection = MA_SSP_Gradiant_Available;
      kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
        &_L19_SM_Train_Trip_Waiting_Driver_Selection,
        Mode_Profile_On_Board);
      _L20_SM_Train_Trip_Waiting_Driver_Selection = RBC_Authorizes_SR;
      if (outC->SM_Train_Trip_reset_act) {
        /* 1 */ Procedure_Start_L1_L2_L3_reset_Procedures(&outC->Context_1);
      }
      /* 1 */
      Procedure_Start_L1_L2_L3_Procedures(
        _L11_SM_Train_Trip_Waiting_Driver_Selection,
        _L12_SM_Train_Trip_Waiting_Driver_Selection,
        _L13_SM_Train_Trip_Waiting_Driver_Selection,
        _L16_SM_Train_Trip_Waiting_Driver_Selection,
        _L17_SM_Train_Trip_Waiting_Driver_Selection,
        _L14_SM_Train_Trip_Waiting_Driver_Selection,
        _L18_SM_Train_Trip_Waiting_Driver_Selection,
        &_L19_SM_Train_Trip_Waiting_Driver_Selection,
        _L20_SM_Train_Trip_Waiting_Driver_Selection,
        &outC->Context_1);
      _L1_SM_Train_Trip_Waiting_Driver_Selection =
        outC->Context_1.Ack_LS_Req_To_Driver;
      _L2_SM_Train_Trip_Waiting_Driver_Selection =
        outC->Context_1.Ack_OS_Req_To_Driver;
      _L3_SM_Train_Trip_Waiting_Driver_Selection =
        outC->Context_1.Ack_SH_Req_To_Driver;
      _L4_SM_Train_Trip_Waiting_Driver_Selection =
        outC->Context_1.Ack_SR_Req_To_Driver;
      _L5_SM_Train_Trip_Waiting_Driver_Selection = outC->Context_1.Condition_8;
      _L6_SM_Train_Trip_Waiting_Driver_Selection =
        outC->Context_1.Condition_10_31;
      _L7_SM_Train_Trip_Waiting_Driver_Selection = outC->Context_1.Condition_15;
      _L8_SM_Train_Trip_Waiting_Driver_Selection = outC->Context_1.Condition_50;
      _L9_SM_Train_Trip_Waiting_Driver_Selection = outC->Context_1.Condition_70;
      _L10_SM_Train_Trip_Waiting_Driver_Selection =
        outC->Context_1.MA_Req_To_RBC;
      _26_Ack_LS_Req_To_Driver = _L1_SM_Train_Trip_Waiting_Driver_Selection;
      outC->Ack_LS_Req_To_Driver = _26_Ack_LS_Req_To_Driver;
      _27_Ack_OS_Req_To_Driver = _L2_SM_Train_Trip_Waiting_Driver_Selection;
      outC->Ack_OS_Req_To_Driver = _27_Ack_OS_Req_To_Driver;
      _28_Ack_SH_Req_To_Driver = _L3_SM_Train_Trip_Waiting_Driver_Selection;
      outC->Ack_SH_Req_To_Driver = _28_Ack_SH_Req_To_Driver;
      _29_Ack_SR_Req_To_Driver = _L4_SM_Train_Trip_Waiting_Driver_Selection;
      outC->Ack_SR_Req_To_Driver = _29_Ack_SR_Req_To_Driver;
      _30_Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_TR_Req_To_Driver = _30_Ack_TR_Req_To_Driver;
      _31_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _31_Clean_BG_List_SH_Area;
      _32_Condition_Trip = kcg_false;
      outC->Condition_Trip = _32_Condition_Trip;
      _33_Condition_5 = kcg_false;
      outC->Condition_5 = _33_Condition_5;
      _34_Condition_6 = kcg_false;
      outC->Condition_6 = _34_Condition_6;
      _35_Condition_7 = kcg_false;
      outC->Condition_7 = _35_Condition_7;
      _36_Condition_8 = _L5_SM_Train_Trip_Waiting_Driver_Selection;
      outC->Condition_8 = _36_Condition_8;
      _37_Condition_31 = _L6_SM_Train_Trip_Waiting_Driver_Selection;
      outC->Condition_31 = _37_Condition_31;
      _38_Condition_15 = _L7_SM_Train_Trip_Waiting_Driver_Selection;
      outC->Condition_15 = _38_Condition_15;
      _39_Condition_50 = _L8_SM_Train_Trip_Waiting_Driver_Selection;
      outC->Condition_50 = _39_Condition_50;
      _40_Condition_62 = kcg_false;
      outC->Condition_62 = _40_Condition_62;
      _41_Condition_63 = kcg_false;
      outC->Condition_63 = _41_Condition_63;
      _42_Condition_68 = kcg_false;
      outC->Condition_68 = _42_Condition_68;
      _43_Condition_70 = _L9_SM_Train_Trip_Waiting_Driver_Selection;
      outC->Condition_70 = _43_Condition_70;
      _44_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _44_End_Of_Mission_Procedure_Req;
      _45_MA_Req_To_RBC = _L10_SM_Train_Trip_Waiting_Driver_Selection;
      outC->MA_Req_To_RBC = _45_MA_Req_To_RBC;
      _46_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _46_Request_For_SH_To_RBC;
      _47_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _47_SH_Refused_By_RBC_To_DMI;
      _48_SM_Train_Trip_state_nxt =
        SSM_st_Waiting_Driver_Selection_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = _48_SM_Train_Trip_state_nxt;
      _49_SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = _49_SM_Train_Trip_reset_nxt;
      _50_SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = _50_SM_Train_Trip_fired;
      break;
    case SSM_st_Wait_RBC_Ack_SM_Train_Trip :
      _1_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _1_Ack_LS_Req_To_Driver;
      _2_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _2_Ack_OS_Req_To_Driver;
      _3_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _3_Ack_SH_Req_To_Driver;
      _4_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _4_Ack_SR_Req_To_Driver;
      _5_Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_TR_Req_To_Driver = _5_Ack_TR_Req_To_Driver;
      _6_Clean_BG_List_SH_Area = kcg_false;
      outC->Clean_BG_List_SH_Area = _6_Clean_BG_List_SH_Area;
      _7_Condition_Trip = kcg_false;
      outC->Condition_Trip = _7_Condition_Trip;
      _8_Condition_5 = kcg_false;
      outC->Condition_5 = _8_Condition_5;
      _9_Condition_6 = kcg_false;
      outC->Condition_6 = _9_Condition_6;
      _10_Condition_7 = kcg_false;
      outC->Condition_7 = _10_Condition_7;
      _11_Condition_8 = kcg_false;
      outC->Condition_8 = _11_Condition_8;
      _12_Condition_31 = kcg_false;
      outC->Condition_31 = _12_Condition_31;
      _13_Condition_15 = kcg_false;
      outC->Condition_15 = _13_Condition_15;
      _14_Condition_50 = kcg_false;
      outC->Condition_50 = _14_Condition_50;
      _15_Condition_62 = kcg_false;
      outC->Condition_62 = _15_Condition_62;
      _16_Condition_63 = kcg_false;
      outC->Condition_63 = _16_Condition_63;
      _17_Condition_68 = kcg_false;
      outC->Condition_68 = _17_Condition_68;
      _18_Condition_70 = kcg_false;
      outC->Condition_70 = _18_Condition_70;
      _19_End_Of_Mission_Procedure_Req = kcg_false;
      outC->End_Of_Mission_Procedure_Req = _19_End_Of_Mission_Procedure_Req;
      _20_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _20_MA_Req_To_RBC;
      _21_Request_For_SH_To_RBC = kcg_false;
      outC->Request_For_SH_To_RBC = _21_Request_For_SH_To_RBC;
      _22_SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->SH_Refused_By_RBC_To_DMI = _22_SH_Refused_By_RBC_To_DMI;
      _23_SM_Train_Trip_state_nxt = SSM_st_Wait_RBC_Ack_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = _23_SM_Train_Trip_state_nxt;
      _24_SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = _24_SM_Train_Trip_reset_nxt;
      _25_SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = _25_SM_Train_Trip_fired;
      break;
    case SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip :
      Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = Ack_LS_Req_To_Driver;
      Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = Ack_OS_Req_To_Driver;
      Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = Ack_SH_Req_To_Driver;
      Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = Ack_SR_Req_To_Driver;
      Ack_TR_Req_To_Driver = kcg_false;
      outC->Ack_TR_Req_To_Driver = Ack_TR_Req_To_Driver;
      _L11_SM_Train_Trip_Procedure_SH_Initiated_By_Driver = Current_Level;
      _L12_SM_Train_Trip_Procedure_SH_Initiated_By_Driver = Driver_Req_SH;
      _L13_SM_Train_Trip_Procedure_SH_Initiated_By_Driver = On_Going_Mission;
      _L14_SM_Train_Trip_Procedure_SH_Initiated_By_Driver =
        Shunting_Granted_By_RBC;
      if (outC->SM_Train_Trip_reset_act) {
        /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->_1_Context_1);
      }
      /* 1 */
      SH_Initiated_By_Driver_On_Procedures(
        _L11_SM_Train_Trip_Procedure_SH_Initiated_By_Driver,
        _L12_SM_Train_Trip_Procedure_SH_Initiated_By_Driver,
        _L13_SM_Train_Trip_Procedure_SH_Initiated_By_Driver,
        _L14_SM_Train_Trip_Procedure_SH_Initiated_By_Driver,
        &outC->_1_Context_1);
      _L15_SM_Train_Trip_Procedure_SH_Initiated_By_Driver =
        outC->_1_Context_1.Clean_BG_List_SH_Area;
      _L16_SM_Train_Trip_Procedure_SH_Initiated_By_Driver =
        outC->_1_Context_1.Condition5;
      _L17_SM_Train_Trip_Procedure_SH_Initiated_By_Driver =
        outC->_1_Context_1.Condition6;
      _L18_SM_Train_Trip_Procedure_SH_Initiated_By_Driver =
        outC->_1_Context_1.End_Of_Mission_Procedure_Req;
      _L19_SM_Train_Trip_Procedure_SH_Initiated_By_Driver =
        outC->_1_Context_1.SH_Refused_By_RBC_To_DMI;
      _L20_SM_Train_Trip_Procedure_SH_Initiated_By_Driver =
        outC->_1_Context_1.Request_For_SH_To_RBC;
      Clean_BG_List_SH_Area =
        _L15_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
      outC->Clean_BG_List_SH_Area = Clean_BG_List_SH_Area;
      Condition_Trip = kcg_false;
      outC->Condition_Trip = Condition_Trip;
      Condition_5 = _L16_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
      outC->Condition_5 = Condition_5;
      Condition_6 = _L17_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
      outC->Condition_6 = Condition_6;
      Condition_7 = kcg_false;
      outC->Condition_7 = Condition_7;
      Condition_8 = kcg_false;
      outC->Condition_8 = Condition_8;
      Condition_31 = kcg_false;
      outC->Condition_31 = Condition_31;
      Condition_15 = kcg_false;
      outC->Condition_15 = Condition_15;
      Condition_50 = kcg_false;
      outC->Condition_50 = Condition_50;
      Condition_62 = kcg_false;
      outC->Condition_62 = Condition_62;
      Condition_63 = kcg_false;
      outC->Condition_63 = Condition_63;
      Condition_68 = kcg_false;
      outC->Condition_68 = Condition_68;
      Condition_70 = kcg_false;
      outC->Condition_70 = Condition_70;
      End_Of_Mission_Procedure_Req =
        _L18_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
      outC->End_Of_Mission_Procedure_Req = End_Of_Mission_Procedure_Req;
      MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = MA_Req_To_RBC;
      Request_For_SH_To_RBC =
        _L20_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
      outC->Request_For_SH_To_RBC = Request_For_SH_To_RBC;
      SH_Refused_By_RBC_To_DMI =
        _L19_SM_Train_Trip_Procedure_SH_Initiated_By_Driver;
      outC->SH_Refused_By_RBC_To_DMI = SH_Refused_By_RBC_To_DMI;
      SM_Train_Trip_state_nxt =
        SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
      outC->SM_Train_Trip_state_nxt = SM_Train_Trip_state_nxt;
      SM_Train_Trip_reset_nxt = kcg_false;
      outC->SM_Train_Trip_reset_nxt = SM_Train_Trip_reset_nxt;
      SM_Train_Trip_fired = _257_SM_Train_Trip_fired_strong;
      _256_SM_Train_Trip_fired = SM_Train_Trip_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_Train_Trip_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

