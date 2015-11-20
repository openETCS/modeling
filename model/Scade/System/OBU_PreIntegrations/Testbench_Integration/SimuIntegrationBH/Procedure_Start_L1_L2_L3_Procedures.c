/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_Start_L1_L2_L3_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_Start_L1_L2_L3_init_Procedures(
  outC_Procedure_Start_L1_L2_L3_Procedures *outC)
{
  outC->init = kcg_true;
  outC->SM_Start_L1_L2_L3_reset_nxt = kcg_true;
  outC->SM_Start_L1_L2_L3_reset_act = kcg_true;
  outC->SM_Start_L1_L2_L3_state_nxt =
    SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
  outC->MA_Req_To_RBC = kcg_true;
  outC->Condition_70 = kcg_true;
  outC->Condition_50 = kcg_true;
  outC->Condition_15 = kcg_true;
  outC->Condition_10_31 = kcg_true;
  outC->Condition_8 = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void Procedure_Start_L1_L2_L3_reset_Procedures(
  outC_Procedure_Start_L1_L2_L3_Procedures *outC)
{
  outC->init = kcg_true;
}

/* Procedures::Procedure_Start_L1_L2_L3 */
void Procedure_Start_L1_L2_L3_Procedures(
  /* Procedures::Procedure_Start_L1_L2_L3::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_SR */ kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Req_Start */ kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_Start_L1_L2_L3::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_Start_L1_L2_L3::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_Start_L1_L2_L3::RBC_Authorizes_SR */ kcg_bool RBC_Authorizes_SR,
  outC_Procedure_Start_L1_L2_L3_Procedures *outC)
{
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _130_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _129_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _128_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _127_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _126_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _125_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _124_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _123_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _122_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _121_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _120_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _119_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _118_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _117_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _116_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _115_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _114_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _113_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _112_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _111_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _110_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _109_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _108_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _107_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _106_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _105_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Level_1::_L2 */
  static kcg_bool _L2_SM_Start_L1_L2_L3_Level_1;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _104_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _103_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _102_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _101_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _100_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _99_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _98_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _97_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _96_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _95_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _94_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _93_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _92_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Level_2_3::_L2 */
  static kcg_bool _L2_SM_Start_L1_L2_L3_Level_2_3;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _91_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _90_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _89_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _88_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _87_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _86_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _85_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _84_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _83_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _82_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _81_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _80_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _79_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::SR_Mode::_L1 */
  static kcg_bool _L1_SM_Start_L1_L2_L3_SR_Mode;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _78_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _77_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _76_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _75_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _74_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _73_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _72_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _71_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _70_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _69_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _68_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _67_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _66_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::FS_Mode::_L1 */
  static kcg_bool _L1_SM_Start_L1_L2_L3_FS_Mode;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _65_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _64_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _63_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _62_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _61_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _60_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _59_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _58_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _57_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _56_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _55_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _54_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _53_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::OS_Mode::_L1 */
  static kcg_bool _L1_SM_Start_L1_L2_L3_OS_Mode;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _52_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _51_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _50_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _49_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _48_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _47_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _46_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _45_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _44_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _43_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _42_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _41_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _40_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::SH_Mode::_L1 */
  static kcg_bool _L1_SM_Start_L1_L2_L3_SH_Mode;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _39_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _38_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _37_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _36_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _35_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _34_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _33_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _32_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _31_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _30_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _29_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _28_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _27_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::LS_Mode::_L1 */
  static kcg_bool _L1_SM_Start_L1_L2_L3_LS_Mode;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _26_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _25_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _24_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _23_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _22_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _21_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _20_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _19_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _18_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _17_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _16_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _15_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _14_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Wait_For_OS::_L2 */
  static kcg_bool _L2_SM_Start_L1_L2_L3_Wait_For_OS;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _13_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _12_SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _11_SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool _10_MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool _9_Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool _8_Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool _7_Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool _6_Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool _5_Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool _4_Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool _3_Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool _2_Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool _1_Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Wait_For_SH::_L2 */
  static kcg_bool _L2_SM_Start_L1_L2_L3_Wait_For_SH;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool SM_Start_L1_L2_L3_reset_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_state_nxt;
  /* Procedures::Procedure_Start_L1_L2_L3::MA_Req_To_RBC */
  static kcg_bool MA_Req_To_RBC;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_70 */
  static kcg_bool Condition_70;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_50 */
  static kcg_bool Condition_50;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_15 */
  static kcg_bool Condition_15;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_10_31 */
  static kcg_bool Condition_10_31;
  /* Procedures::Procedure_Start_L1_L2_L3::Condition_8 */
  static kcg_bool Condition_8;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SR_Req_To_Driver */
  static kcg_bool Ack_SR_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_SH_Req_To_Driver */
  static kcg_bool Ack_SH_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_OS_Req_To_Driver */
  static kcg_bool Ack_OS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::Ack_LS_Req_To_Driver */
  static kcg_bool Ack_LS_Req_To_Driver;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Wait_For_LS::_L2 */
  static kcg_bool _L2_SM_Start_L1_L2_L3_Wait_For_LS;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _160_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _159_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _158_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Waiting_Driver_Starting_Command */
  static kcg_bool br_2_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Waiting_Driver_Starting_Command */
  static kcg_bool _161_br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Waiting_Driver_Starting_Command */
  static kcg_bool br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _157_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _156_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _155_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Level_1 */
  static kcg_bool br_1_guard_SM_Start_L1_L2_L3_Level_1;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _154_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _153_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _152_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Level_2_3 */
  static kcg_bool br_5_guard_SM_Start_L1_L2_L3_Level_2_3;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Level_2_3 */
  static kcg_bool br_4_guard_SM_Start_L1_L2_L3_Level_2_3;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Level_2_3 */
  static kcg_bool br_3_guard_SM_Start_L1_L2_L3_Level_2_3;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Level_2_3 */
  static kcg_bool br_2_guard_SM_Start_L1_L2_L3_Level_2_3;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Level_2_3 */
  static kcg_bool br_1_guard_SM_Start_L1_L2_L3_Level_2_3;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _151_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _150_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _149_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _148_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _147_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _146_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _145_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _144_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _143_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _142_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _141_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _140_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _139_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _138_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _137_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _136_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _135_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _134_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Wait_For_OS */
  static kcg_bool br_1_guard_SM_Start_L1_L2_L3_Wait_For_OS;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _133_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool _132_SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _131_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Wait_For_SH */
  static kcg_bool br_1_guard_SM_Start_L1_L2_L3_Wait_For_SH;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool SM_Start_L1_L2_L3_reset_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Wait_For_LS */
  static kcg_bool br_1_guard_SM_Start_L1_L2_L3_Wait_For_LS;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_state_sel;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 _164_SM_Start_L1_L2_L3_state_act;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool SM_Start_L1_L2_L3_reset_sel;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static kcg_bool SM_Start_L1_L2_L3_reset_prv;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _163_SM_Start_L1_L2_L3_fired_strong;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_TR_SM_Start_L1_L2_L3 _162_SM_Start_L1_L2_L3_fired;
  /* Procedures::Procedure_Start_L1_L2_L3::Loc_Mode_Profile */
  static T_MA_Level_And_Mode_Types_Pkg Loc_Mode_Profile;
  /* Procedures::Procedure_Start_L1_L2_L3::_L26 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L26;
  /* Procedures::Procedure_Start_L1_L2_L3::_L19 */
  static T_MA_Level_And_Mode_Types_Pkg _L19;
  
  /* init_SM_Start_L1_L2_L3 */ if (outC->init) {
    SM_Start_L1_L2_L3_state_sel =
      SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
  }
  else {
    SM_Start_L1_L2_L3_state_sel = outC->SM_Start_L1_L2_L3_state_nxt;
  }
  /* init_SM_Start_L1_L2_L3 */ if (outC->init) {
    SM_Start_L1_L2_L3_reset_sel = kcg_false;
  }
  else {
    SM_Start_L1_L2_L3_reset_sel = outC->SM_Start_L1_L2_L3_reset_nxt;
  }
  /* init_SM_Start_L1_L2_L3 */ if (outC->init) {
    SM_Start_L1_L2_L3_reset_prv = kcg_false;
  }
  else {
    SM_Start_L1_L2_L3_reset_prv = outC->SM_Start_L1_L2_L3_reset_act;
  }
  /* sel_SM_Start_L1_L2_L3 */ switch (SM_Start_L1_L2_L3_state_sel) {
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      br_1_guard_SM_Start_L1_L2_L3_Level_2_3 = RBC_Authorizes_SR;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      _149_SM_Start_L1_L2_L3_state_act = SSM_st_SR_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      _146_SM_Start_L1_L2_L3_state_act = SSM_st_FS_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      _143_SM_Start_L1_L2_L3_state_act = SSM_st_OS_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      _140_SM_Start_L1_L2_L3_state_act = SSM_st_SH_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      _137_SM_Start_L1_L2_L3_state_act = SSM_st_LS_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      br_1_guard_SM_Start_L1_L2_L3_Wait_For_OS = Driver_Ack_OS;
      if (br_1_guard_SM_Start_L1_L2_L3_Wait_For_OS) {
        _134_SM_Start_L1_L2_L3_state_act = SSM_st_OS_Mode_SM_Start_L1_L2_L3;
      }
      else {
        _134_SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_OS_SM_Start_L1_L2_L3;
      }
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      br_1_guard_SM_Start_L1_L2_L3_Wait_For_SH = Driver_Ack_SH;
      if (br_1_guard_SM_Start_L1_L2_L3_Wait_For_SH) {
        _131_SM_Start_L1_L2_L3_state_act = SSM_st_SH_Mode_SM_Start_L1_L2_L3;
      }
      else {
        _131_SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_SH_SM_Start_L1_L2_L3;
      }
      break;
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      br_1_guard_SM_Start_L1_L2_L3_Wait_For_LS = Driver_Ack_LS;
      if (br_1_guard_SM_Start_L1_L2_L3_Wait_For_LS) {
        SM_Start_L1_L2_L3_state_act = SSM_st_LS_Mode_SM_Start_L1_L2_L3;
      }
      else {
        SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_LS_SM_Start_L1_L2_L3;
      }
      break;
    
  }
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L26,
    Mode_Profile_On_Board);
  _L19 = _L26.Mode;
  Loc_Mode_Profile = _L19;
  /* sel_SM_Start_L1_L2_L3 */ switch (SM_Start_L1_L2_L3_state_sel) {
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      _161_br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command =
        Current_Level == M_LEVEL_Level_1;
      br_2_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command =
        (Current_Level == M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
      br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command =
        Driver_Req_Start &
        (_161_br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command |
          br_2_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command);
      if (br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command) {
        if (_161_br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command) {
          _158_SM_Start_L1_L2_L3_state_act = SSM_st_Level_1_SM_Start_L1_L2_L3;
        }
        else {
          _158_SM_Start_L1_L2_L3_state_act = SSM_st_Level_2_3_SM_Start_L1_L2_L3;
        }
      }
      else {
        _158_SM_Start_L1_L2_L3_state_act =
          SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
      }
      _164_SM_Start_L1_L2_L3_state_act = _158_SM_Start_L1_L2_L3_state_act;
      _159_SM_Start_L1_L2_L3_reset_act =
        br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command;
      outC->SM_Start_L1_L2_L3_reset_act = _159_SM_Start_L1_L2_L3_reset_act;
      if (br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command) {
        if (_161_br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command) {
          _160_SM_Start_L1_L2_L3_fired_strong =
            SSM_TR_Waiting_Driver_Starting_Command_1_1_SM_Start_L1_L2_L3;
        }
        else {
          _160_SM_Start_L1_L2_L3_fired_strong =
            SSM_TR_Waiting_Driver_Starting_Command_1_2_SM_Start_L1_L2_L3;
        }
      }
      else {
        _160_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      _163_SM_Start_L1_L2_L3_fired_strong = _160_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      br_1_guard_SM_Start_L1_L2_L3_Level_1 = Driver_Ack_SR;
      if (br_1_guard_SM_Start_L1_L2_L3_Level_1) {
        _155_SM_Start_L1_L2_L3_state_act = SSM_st_SR_Mode_SM_Start_L1_L2_L3;
      }
      else {
        _155_SM_Start_L1_L2_L3_state_act = SSM_st_Level_1_SM_Start_L1_L2_L3;
      }
      _164_SM_Start_L1_L2_L3_state_act = _155_SM_Start_L1_L2_L3_state_act;
      _156_SM_Start_L1_L2_L3_reset_act = br_1_guard_SM_Start_L1_L2_L3_Level_1;
      outC->SM_Start_L1_L2_L3_reset_act = _156_SM_Start_L1_L2_L3_reset_act;
      if (br_1_guard_SM_Start_L1_L2_L3_Level_1) {
        _157_SM_Start_L1_L2_L3_fired_strong =
          SSM_TR_Level_1_1_SM_Start_L1_L2_L3;
      }
      else {
        _157_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      _163_SM_Start_L1_L2_L3_fired_strong = _157_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      br_2_guard_SM_Start_L1_L2_L3_Level_2_3 = MA_SSP_Gradiant_Available &
        (Loc_Mode_Profile == No_Profile_Level_And_Mode_Types_Pkg);
      br_3_guard_SM_Start_L1_L2_L3_Level_2_3 = Loc_Mode_Profile ==
        Profile_OS_Level_And_Mode_Types_Pkg;
      br_4_guard_SM_Start_L1_L2_L3_Level_2_3 = Loc_Mode_Profile ==
        Profile_SH_Level_And_Mode_Types_Pkg;
      br_5_guard_SM_Start_L1_L2_L3_Level_2_3 = Loc_Mode_Profile ==
        Profile_LS_Level_And_Mode_Types_Pkg;
      if (br_1_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _152_SM_Start_L1_L2_L3_state_act = SSM_st_Level_1_SM_Start_L1_L2_L3;
      }
      else if (br_2_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _152_SM_Start_L1_L2_L3_state_act = SSM_st_FS_Mode_SM_Start_L1_L2_L3;
      }
      else if (br_3_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _152_SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_OS_SM_Start_L1_L2_L3;
      }
      else if (br_4_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _152_SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_SH_SM_Start_L1_L2_L3;
      }
      else if (br_5_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _152_SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_LS_SM_Start_L1_L2_L3;
      }
      else {
        _152_SM_Start_L1_L2_L3_state_act = SSM_st_Level_2_3_SM_Start_L1_L2_L3;
      }
      _164_SM_Start_L1_L2_L3_state_act = _152_SM_Start_L1_L2_L3_state_act;
      if (br_1_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _153_SM_Start_L1_L2_L3_reset_act = kcg_true;
      }
      else if (br_2_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _153_SM_Start_L1_L2_L3_reset_act = kcg_true;
      }
      else if (br_3_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _153_SM_Start_L1_L2_L3_reset_act = kcg_true;
      }
      else if (br_4_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _153_SM_Start_L1_L2_L3_reset_act = kcg_true;
      }
      else {
        _153_SM_Start_L1_L2_L3_reset_act =
          br_5_guard_SM_Start_L1_L2_L3_Level_2_3;
      }
      outC->SM_Start_L1_L2_L3_reset_act = _153_SM_Start_L1_L2_L3_reset_act;
      if (br_1_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _154_SM_Start_L1_L2_L3_fired_strong =
          SSM_TR_Level_2_3_1_SM_Start_L1_L2_L3;
      }
      else if (br_2_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _154_SM_Start_L1_L2_L3_fired_strong =
          SSM_TR_Level_2_3_2_SM_Start_L1_L2_L3;
      }
      else if (br_3_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _154_SM_Start_L1_L2_L3_fired_strong =
          SSM_TR_Level_2_3_3_SM_Start_L1_L2_L3;
      }
      else if (br_4_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _154_SM_Start_L1_L2_L3_fired_strong =
          SSM_TR_Level_2_3_4_SM_Start_L1_L2_L3;
      }
      else if (br_5_guard_SM_Start_L1_L2_L3_Level_2_3) {
        _154_SM_Start_L1_L2_L3_fired_strong =
          SSM_TR_Level_2_3_5_SM_Start_L1_L2_L3;
      }
      else {
        _154_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      _163_SM_Start_L1_L2_L3_fired_strong = _154_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      _164_SM_Start_L1_L2_L3_state_act = _149_SM_Start_L1_L2_L3_state_act;
      _150_SM_Start_L1_L2_L3_reset_act = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_act = _150_SM_Start_L1_L2_L3_reset_act;
      _151_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      _163_SM_Start_L1_L2_L3_fired_strong = _151_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      _164_SM_Start_L1_L2_L3_state_act = _146_SM_Start_L1_L2_L3_state_act;
      _147_SM_Start_L1_L2_L3_reset_act = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_act = _147_SM_Start_L1_L2_L3_reset_act;
      _148_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      _163_SM_Start_L1_L2_L3_fired_strong = _148_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      _164_SM_Start_L1_L2_L3_state_act = _143_SM_Start_L1_L2_L3_state_act;
      _144_SM_Start_L1_L2_L3_reset_act = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_act = _144_SM_Start_L1_L2_L3_reset_act;
      _145_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      _163_SM_Start_L1_L2_L3_fired_strong = _145_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      _164_SM_Start_L1_L2_L3_state_act = _140_SM_Start_L1_L2_L3_state_act;
      _141_SM_Start_L1_L2_L3_reset_act = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_act = _141_SM_Start_L1_L2_L3_reset_act;
      _142_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      _163_SM_Start_L1_L2_L3_fired_strong = _142_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      _164_SM_Start_L1_L2_L3_state_act = _137_SM_Start_L1_L2_L3_state_act;
      _138_SM_Start_L1_L2_L3_reset_act = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_act = _138_SM_Start_L1_L2_L3_reset_act;
      _139_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      _163_SM_Start_L1_L2_L3_fired_strong = _139_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      _164_SM_Start_L1_L2_L3_state_act = _134_SM_Start_L1_L2_L3_state_act;
      _135_SM_Start_L1_L2_L3_reset_act =
        br_1_guard_SM_Start_L1_L2_L3_Wait_For_OS;
      outC->SM_Start_L1_L2_L3_reset_act = _135_SM_Start_L1_L2_L3_reset_act;
      if (br_1_guard_SM_Start_L1_L2_L3_Wait_For_OS) {
        _136_SM_Start_L1_L2_L3_fired_strong =
          SSM_TR_Wait_For_OS_1_SM_Start_L1_L2_L3;
      }
      else {
        _136_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      _163_SM_Start_L1_L2_L3_fired_strong = _136_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      _164_SM_Start_L1_L2_L3_state_act = _131_SM_Start_L1_L2_L3_state_act;
      _132_SM_Start_L1_L2_L3_reset_act =
        br_1_guard_SM_Start_L1_L2_L3_Wait_For_SH;
      outC->SM_Start_L1_L2_L3_reset_act = _132_SM_Start_L1_L2_L3_reset_act;
      if (br_1_guard_SM_Start_L1_L2_L3_Wait_For_SH) {
        _133_SM_Start_L1_L2_L3_fired_strong =
          SSM_TR_Wait_For_SH_1_SM_Start_L1_L2_L3;
      }
      else {
        _133_SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      _163_SM_Start_L1_L2_L3_fired_strong = _133_SM_Start_L1_L2_L3_fired_strong;
      break;
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      _164_SM_Start_L1_L2_L3_state_act = SM_Start_L1_L2_L3_state_act;
      SM_Start_L1_L2_L3_reset_act = br_1_guard_SM_Start_L1_L2_L3_Wait_For_LS;
      outC->SM_Start_L1_L2_L3_reset_act = SM_Start_L1_L2_L3_reset_act;
      if (br_1_guard_SM_Start_L1_L2_L3_Wait_For_LS) {
        SM_Start_L1_L2_L3_fired_strong = SSM_TR_Wait_For_LS_1_SM_Start_L1_L2_L3;
      }
      else {
        SM_Start_L1_L2_L3_fired_strong = SSM_TR_no_trans_SM_Start_L1_L2_L3;
      }
      _163_SM_Start_L1_L2_L3_fired_strong = SM_Start_L1_L2_L3_fired_strong;
      break;
    
  }
  /* act_SM_Start_L1_L2_L3 */ switch (_164_SM_Start_L1_L2_L3_state_act) {
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      _118_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _118_Ack_LS_Req_To_Driver;
      _119_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _119_Ack_OS_Req_To_Driver;
      _120_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _120_Ack_SH_Req_To_Driver;
      _121_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _121_Ack_SR_Req_To_Driver;
      _122_Condition_8 = kcg_false;
      outC->Condition_8 = _122_Condition_8;
      _123_Condition_10_31 = kcg_false;
      outC->Condition_10_31 = _123_Condition_10_31;
      _124_Condition_15 = kcg_false;
      outC->Condition_15 = _124_Condition_15;
      _125_Condition_50 = kcg_false;
      outC->Condition_50 = _125_Condition_50;
      _126_Condition_70 = kcg_false;
      outC->Condition_70 = _126_Condition_70;
      _127_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _127_MA_Req_To_RBC;
      _128_SM_Start_L1_L2_L3_state_nxt =
        SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _128_SM_Start_L1_L2_L3_state_nxt;
      _129_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _129_SM_Start_L1_L2_L3_reset_nxt;
      _130_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _130_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      _105_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _105_Ack_LS_Req_To_Driver;
      _106_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _106_Ack_OS_Req_To_Driver;
      _107_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _107_Ack_SH_Req_To_Driver;
      _L2_SM_Start_L1_L2_L3_Level_1 = kcg_true;
      _108_Ack_SR_Req_To_Driver = _L2_SM_Start_L1_L2_L3_Level_1;
      outC->Ack_SR_Req_To_Driver = _108_Ack_SR_Req_To_Driver;
      _109_Condition_8 = kcg_false;
      outC->Condition_8 = _109_Condition_8;
      _110_Condition_10_31 = kcg_false;
      outC->Condition_10_31 = _110_Condition_10_31;
      _111_Condition_15 = kcg_false;
      outC->Condition_15 = _111_Condition_15;
      _112_Condition_50 = kcg_false;
      outC->Condition_50 = _112_Condition_50;
      _113_Condition_70 = kcg_false;
      outC->Condition_70 = _113_Condition_70;
      _114_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _114_MA_Req_To_RBC;
      _115_SM_Start_L1_L2_L3_state_nxt = SSM_st_Level_1_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _115_SM_Start_L1_L2_L3_state_nxt;
      _116_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _116_SM_Start_L1_L2_L3_reset_nxt;
      _117_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _117_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      _92_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _92_Ack_LS_Req_To_Driver;
      _93_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _93_Ack_OS_Req_To_Driver;
      _94_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _94_Ack_SH_Req_To_Driver;
      _95_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _95_Ack_SR_Req_To_Driver;
      _96_Condition_8 = kcg_false;
      outC->Condition_8 = _96_Condition_8;
      _97_Condition_10_31 = kcg_false;
      outC->Condition_10_31 = _97_Condition_10_31;
      _98_Condition_15 = kcg_false;
      outC->Condition_15 = _98_Condition_15;
      _99_Condition_50 = kcg_false;
      outC->Condition_50 = _99_Condition_50;
      _100_Condition_70 = kcg_false;
      outC->Condition_70 = _100_Condition_70;
      _L2_SM_Start_L1_L2_L3_Level_2_3 = kcg_true;
      _101_MA_Req_To_RBC = _L2_SM_Start_L1_L2_L3_Level_2_3;
      outC->MA_Req_To_RBC = _101_MA_Req_To_RBC;
      _102_SM_Start_L1_L2_L3_state_nxt = SSM_st_Level_2_3_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _102_SM_Start_L1_L2_L3_state_nxt;
      _103_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _103_SM_Start_L1_L2_L3_reset_nxt;
      _104_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _104_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      _79_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _79_Ack_LS_Req_To_Driver;
      _80_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _80_Ack_OS_Req_To_Driver;
      _81_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _81_Ack_SH_Req_To_Driver;
      _82_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _82_Ack_SR_Req_To_Driver;
      _L1_SM_Start_L1_L2_L3_SR_Mode = kcg_true;
      _83_Condition_8 = _L1_SM_Start_L1_L2_L3_SR_Mode;
      outC->Condition_8 = _83_Condition_8;
      _84_Condition_10_31 = kcg_false;
      outC->Condition_10_31 = _84_Condition_10_31;
      _85_Condition_15 = kcg_false;
      outC->Condition_15 = _85_Condition_15;
      _86_Condition_50 = kcg_false;
      outC->Condition_50 = _86_Condition_50;
      _87_Condition_70 = kcg_false;
      outC->Condition_70 = _87_Condition_70;
      _88_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _88_MA_Req_To_RBC;
      _89_SM_Start_L1_L2_L3_state_nxt = SSM_st_SR_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _89_SM_Start_L1_L2_L3_state_nxt;
      _90_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _90_SM_Start_L1_L2_L3_reset_nxt;
      _91_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _91_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      _66_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _66_Ack_LS_Req_To_Driver;
      _67_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _67_Ack_OS_Req_To_Driver;
      _68_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _68_Ack_SH_Req_To_Driver;
      _69_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _69_Ack_SR_Req_To_Driver;
      _70_Condition_8 = kcg_false;
      outC->Condition_8 = _70_Condition_8;
      _L1_SM_Start_L1_L2_L3_FS_Mode = kcg_true;
      _71_Condition_10_31 = _L1_SM_Start_L1_L2_L3_FS_Mode;
      outC->Condition_10_31 = _71_Condition_10_31;
      _72_Condition_15 = kcg_false;
      outC->Condition_15 = _72_Condition_15;
      _73_Condition_50 = kcg_false;
      outC->Condition_50 = _73_Condition_50;
      _74_Condition_70 = kcg_false;
      outC->Condition_70 = _74_Condition_70;
      _75_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _75_MA_Req_To_RBC;
      _76_SM_Start_L1_L2_L3_state_nxt = SSM_st_FS_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _76_SM_Start_L1_L2_L3_state_nxt;
      _77_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _77_SM_Start_L1_L2_L3_reset_nxt;
      _78_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _78_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      _53_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _53_Ack_LS_Req_To_Driver;
      _54_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _54_Ack_OS_Req_To_Driver;
      _55_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _55_Ack_SH_Req_To_Driver;
      _56_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _56_Ack_SR_Req_To_Driver;
      _57_Condition_8 = kcg_false;
      outC->Condition_8 = _57_Condition_8;
      _58_Condition_10_31 = kcg_false;
      outC->Condition_10_31 = _58_Condition_10_31;
      _L1_SM_Start_L1_L2_L3_OS_Mode = kcg_true;
      _59_Condition_15 = _L1_SM_Start_L1_L2_L3_OS_Mode;
      outC->Condition_15 = _59_Condition_15;
      _60_Condition_50 = kcg_false;
      outC->Condition_50 = _60_Condition_50;
      _61_Condition_70 = kcg_false;
      outC->Condition_70 = _61_Condition_70;
      _62_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _62_MA_Req_To_RBC;
      _63_SM_Start_L1_L2_L3_state_nxt = SSM_st_OS_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _63_SM_Start_L1_L2_L3_state_nxt;
      _64_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _64_SM_Start_L1_L2_L3_reset_nxt;
      _65_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _65_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      _40_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _40_Ack_LS_Req_To_Driver;
      _41_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _41_Ack_OS_Req_To_Driver;
      _42_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _42_Ack_SH_Req_To_Driver;
      _43_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _43_Ack_SR_Req_To_Driver;
      _44_Condition_8 = kcg_false;
      outC->Condition_8 = _44_Condition_8;
      _45_Condition_10_31 = kcg_false;
      outC->Condition_10_31 = _45_Condition_10_31;
      _46_Condition_15 = kcg_false;
      outC->Condition_15 = _46_Condition_15;
      _L1_SM_Start_L1_L2_L3_SH_Mode = kcg_true;
      _47_Condition_50 = _L1_SM_Start_L1_L2_L3_SH_Mode;
      outC->Condition_50 = _47_Condition_50;
      _48_Condition_70 = kcg_false;
      outC->Condition_70 = _48_Condition_70;
      _49_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _49_MA_Req_To_RBC;
      _50_SM_Start_L1_L2_L3_state_nxt = SSM_st_SH_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _50_SM_Start_L1_L2_L3_state_nxt;
      _51_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _51_SM_Start_L1_L2_L3_reset_nxt;
      _52_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _52_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      _27_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _27_Ack_LS_Req_To_Driver;
      _28_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _28_Ack_OS_Req_To_Driver;
      _29_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _29_Ack_SH_Req_To_Driver;
      _30_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _30_Ack_SR_Req_To_Driver;
      _31_Condition_8 = kcg_false;
      outC->Condition_8 = _31_Condition_8;
      _32_Condition_10_31 = kcg_false;
      outC->Condition_10_31 = _32_Condition_10_31;
      _33_Condition_15 = kcg_false;
      outC->Condition_15 = _33_Condition_15;
      _34_Condition_50 = kcg_false;
      outC->Condition_50 = _34_Condition_50;
      _L1_SM_Start_L1_L2_L3_LS_Mode = kcg_true;
      _35_Condition_70 = _L1_SM_Start_L1_L2_L3_LS_Mode;
      outC->Condition_70 = _35_Condition_70;
      _36_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _36_MA_Req_To_RBC;
      _37_SM_Start_L1_L2_L3_state_nxt = SSM_st_LS_Mode_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _37_SM_Start_L1_L2_L3_state_nxt;
      _38_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _38_SM_Start_L1_L2_L3_reset_nxt;
      _39_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _39_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      _14_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _14_Ack_LS_Req_To_Driver;
      _L2_SM_Start_L1_L2_L3_Wait_For_OS = kcg_true;
      _15_Ack_OS_Req_To_Driver = _L2_SM_Start_L1_L2_L3_Wait_For_OS;
      outC->Ack_OS_Req_To_Driver = _15_Ack_OS_Req_To_Driver;
      _16_Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = _16_Ack_SH_Req_To_Driver;
      _17_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _17_Ack_SR_Req_To_Driver;
      _18_Condition_8 = kcg_false;
      outC->Condition_8 = _18_Condition_8;
      _19_Condition_10_31 = kcg_false;
      outC->Condition_10_31 = _19_Condition_10_31;
      _20_Condition_15 = kcg_false;
      outC->Condition_15 = _20_Condition_15;
      _21_Condition_50 = kcg_false;
      outC->Condition_50 = _21_Condition_50;
      _22_Condition_70 = kcg_false;
      outC->Condition_70 = _22_Condition_70;
      _23_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _23_MA_Req_To_RBC;
      _24_SM_Start_L1_L2_L3_state_nxt = SSM_st_Wait_For_OS_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _24_SM_Start_L1_L2_L3_state_nxt;
      _25_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _25_SM_Start_L1_L2_L3_reset_nxt;
      _26_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _26_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      _1_Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = _1_Ack_LS_Req_To_Driver;
      _2_Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = _2_Ack_OS_Req_To_Driver;
      _L2_SM_Start_L1_L2_L3_Wait_For_SH = kcg_true;
      _3_Ack_SH_Req_To_Driver = _L2_SM_Start_L1_L2_L3_Wait_For_SH;
      outC->Ack_SH_Req_To_Driver = _3_Ack_SH_Req_To_Driver;
      _4_Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = _4_Ack_SR_Req_To_Driver;
      _5_Condition_8 = kcg_false;
      outC->Condition_8 = _5_Condition_8;
      _6_Condition_10_31 = kcg_false;
      outC->Condition_10_31 = _6_Condition_10_31;
      _7_Condition_15 = kcg_false;
      outC->Condition_15 = _7_Condition_15;
      _8_Condition_50 = kcg_false;
      outC->Condition_50 = _8_Condition_50;
      _9_Condition_70 = kcg_false;
      outC->Condition_70 = _9_Condition_70;
      _10_MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = _10_MA_Req_To_RBC;
      _11_SM_Start_L1_L2_L3_state_nxt = SSM_st_Wait_For_SH_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = _11_SM_Start_L1_L2_L3_state_nxt;
      _12_SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = _12_SM_Start_L1_L2_L3_reset_nxt;
      _13_SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = _13_SM_Start_L1_L2_L3_fired;
      break;
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      _L2_SM_Start_L1_L2_L3_Wait_For_LS = kcg_true;
      Ack_LS_Req_To_Driver = _L2_SM_Start_L1_L2_L3_Wait_For_LS;
      outC->Ack_LS_Req_To_Driver = Ack_LS_Req_To_Driver;
      Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = Ack_OS_Req_To_Driver;
      Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = Ack_SH_Req_To_Driver;
      Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = Ack_SR_Req_To_Driver;
      Condition_8 = kcg_false;
      outC->Condition_8 = Condition_8;
      Condition_10_31 = kcg_false;
      outC->Condition_10_31 = Condition_10_31;
      Condition_15 = kcg_false;
      outC->Condition_15 = Condition_15;
      Condition_50 = kcg_false;
      outC->Condition_50 = Condition_50;
      Condition_70 = kcg_false;
      outC->Condition_70 = Condition_70;
      MA_Req_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = MA_Req_To_RBC;
      SM_Start_L1_L2_L3_state_nxt = SSM_st_Wait_For_LS_SM_Start_L1_L2_L3;
      outC->SM_Start_L1_L2_L3_state_nxt = SM_Start_L1_L2_L3_state_nxt;
      SM_Start_L1_L2_L3_reset_nxt = kcg_false;
      outC->SM_Start_L1_L2_L3_reset_nxt = SM_Start_L1_L2_L3_reset_nxt;
      SM_Start_L1_L2_L3_fired = _163_SM_Start_L1_L2_L3_fired_strong;
      _162_SM_Start_L1_L2_L3_fired = SM_Start_L1_L2_L3_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_Start_L1_L2_L3_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

