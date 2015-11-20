/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_With_Mode_Profile_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_With_Mode_Profile_init_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->Loc_Confirmation = kcg_true;
  outC->Loc_Timer = 0;
  outC->SM_Mode_Profile_By_Trackside_reset_nxt = kcg_true;
  outC->SM_Mode_Profile_By_Trackside_reset_act = kcg_true;
  outC->SM_Mode_Profile_By_Trackside_state_nxt =
    SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
  outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
    SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
  outC->SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
    kcg_true;
  outC->SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
    kcg_true;
  outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
    SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
  outC->SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location =
    kcg_true;
  outC->SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
    kcg_true;
  outC->Ack_Req_To_Driver = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Condition_73_74 = kcg_true;
  outC->Condition_40_51_72 = kcg_true;
  outC->Condition_34_61_71 = kcg_true;
  outC->Condition_15_50_70 = kcg_true;
  /* 8 */ Counter_init_pwlinear_int(&outC->Context_8);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_With_Mode_Profile_reset_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  /* 8 */ Counter_reset_pwlinear_int(&outC->Context_8);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_With_Mode_Profile */
void Procedure_With_Mode_Profile_Procedures(
  /* Procedures::Procedure_With_Mode_Profile::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Driver_Ack_Mode_Profile */ kcg_bool Driver_Ack_Mode_Profile,
  /* Procedures::Procedure_With_Mode_Profile::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_With_Mode_Profile::Procedure_Possible */ kcg_bool Procedure_Possible,
  /* Procedures::Procedure_With_Mode_Profile::Profile_Mode */ T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Selected_Mode */ T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Procedures::Procedure_With_Mode_Profile::Supervision_Modes */ kcg_bool Supervision_Modes,
  /* Procedures::Procedure_With_Mode_Profile::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_With_Mode_Profile::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_With_Mode_Profile_Procedures *outC)
{
  /* Procedures::Procedure_With_Mode_Profile */
  static kcg_bool tmp1;
  /* Procedures::Procedure_With_Mode_Profile */
  static kcg_bool tmp;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_TR_SM_Mode_Profile_By_Trackside _21_SM_Mode_Profile_By_Trackside_fired;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static kcg_bool _20_SM_Mode_Profile_By_Trackside_reset_nxt;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Trackside _19_SM_Mode_Profile_By_Trackside_state_nxt;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */
  static kcg_bool _18_Loc_Confirmation;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */
  static kcg_int _17_Loc_Timer;
  /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */
  static kcg_bool _16_Service_Brake_Command;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _15_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _14_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool _13_Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _12_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_TR_SM_Mode_Profile_By_Trackside _11_SM_Mode_Profile_By_Trackside_fired;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static kcg_bool _10_SM_Mode_Profile_By_Trackside_reset_nxt;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Trackside _9_SM_Mode_Profile_By_Trackside_state_nxt;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */
  static kcg_bool _8_Loc_Confirmation;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */
  static kcg_int _7_Loc_Timer;
  /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */
  static kcg_bool _6_Service_Brake_Command;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _5_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _4_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool _3_Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _2_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _124_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _125_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool SM_Futher_Location_reset_prv_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool SM_Futher_Location_reset_sel_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _126_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location SM_Futher_Location_state_sel_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _120_SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location::Waiting_Ack */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Waiting_Ack;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _104_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool _105_SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _106_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location::Start_Supervision */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Start_Supervision;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _107_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool _108_SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _109_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location::Req_Futher_Location */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Req_Futher_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _110_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool _111_SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _112_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location::Switch_Mode_Confirmed::_L1 */
  static kcg_bool _L1_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Switch_Mode_Confirmed;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _91_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _92_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _93_SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool _94_SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _95_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _96_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _97_SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool _98_SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _99_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _100_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _101_SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static kcg_bool _102_SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
  static SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location _103_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_TR_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_fired;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static kcg_bool SM_Mode_Profile_By_Trackside_reset_nxt;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_state_nxt;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */
  static kcg_bool Loc_Confirmation;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */
  static kcg_int Loc_Timer;
  /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */
  static kcg_bool Service_Brake_Command;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _121_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool SM_Current_Location_reset_prv_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool SM_Current_Location_reset_sel_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _123_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location SM_Current_Location_state_sel_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _119_SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Ack_Not_Received */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _79_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool _80_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _81_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Waiting_Ack */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Waiting_Ack;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _82_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool _83_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _84_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack */
  static kcg_bool br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _85_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool _86_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _87_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Req_Current_Location */
  static kcg_bool br_2_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Req_Current_Location */
  static kcg_bool br_1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Req_Current_Location */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Req_Current_Location */
  static kcg_bool br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _88_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool _89_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _90_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Ack_Not_Received::_L1 */
  static kcg_bool _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Ack_Not_Received::_L2 */
  static kcg_bool _L2_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _22_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool _23_Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _24_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _25_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */
  static kcg_bool _26_Service_Brake_Command;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */
  static kcg_int _27_Loc_Timer;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */
  static kcg_bool _28_Loc_Confirmation;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Mode_Confirmed::_L1 */
  static kcg_bool _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Mode_Confirmed;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _29_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool _30_Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _31_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _32_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */
  static kcg_bool _33_Service_Brake_Command;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */
  static kcg_int _34_Loc_Timer;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */
  static kcg_bool _35_Loc_Confirmation;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _36_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool _37_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _38_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _39_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool _40_Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _41_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _42_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */
  static kcg_bool _43_Service_Brake_Command;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */
  static kcg_int _44_Loc_Timer;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */
  static kcg_bool _45_Loc_Confirmation;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _46_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool _47_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _48_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _74_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _73_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool _72_Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::IfBlock1::then::_L1 */
  static kcg_bool _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack_I;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _71_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _70_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool _69_Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::IfBlock1::else */
  static kcg_bool else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::IfBlock1::else::else::_L1 */
  static kcg_bool _L1132_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ac;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _75_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _76_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::IfBlock1::else::then::_L1 */
  static kcg_bool _L1131_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ac;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _77_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _78_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::IfBlock1 */
  static kcg_bool IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Wa;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::_L1 */
  static kcg_int _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::_L2 */
  static kcg_int _L2_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::_L4 */
  static kcg_bool _L4_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location::Switch_Autorized_Waiting_Ack::_L6 */
  static kcg_bool _L6_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _49_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool _50_Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _51_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _52_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */
  static kcg_bool _53_Service_Brake_Command;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */
  static kcg_int _54_Loc_Timer;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */
  static kcg_bool _55_Loc_Confirmation;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _56_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool _57_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _58_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::Condition_15_50_70 */
  static kcg_bool _59_Condition_15_50_70;
  /* Procedures::Procedure_With_Mode_Profile::Condition_34_61_71 */
  static kcg_bool _60_Condition_34_61_71;
  /* Procedures::Procedure_With_Mode_Profile::Condition_40_51_72 */
  static kcg_bool _61_Condition_40_51_72;
  /* Procedures::Procedure_With_Mode_Profile::Condition_73_74 */
  static kcg_bool _62_Condition_73_74;
  /* Procedures::Procedure_With_Mode_Profile::Service_Brake_Command */
  static kcg_bool _63_Service_Brake_Command;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */
  static kcg_int _64_Loc_Timer;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */
  static kcg_bool _65_Loc_Confirmation;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _66_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static kcg_bool _67_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
  static SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location _68_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_TR_SM_Mode_Profile_By_Trackside _118_SM_Mode_Profile_By_Trackside_fired_strong;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static kcg_bool _117_SM_Mode_Profile_By_Trackside_reset_act;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Trackside _116_SM_Mode_Profile_By_Trackside_state_act;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Procedure_Off */
  static kcg_bool br_2_guard_SM_Mode_Profile_By_Trackside_Procedure_Off;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Procedure_Off */
  static kcg_bool _127_br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Procedure_Off */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_TR_SM_Mode_Profile_By_Trackside _115_SM_Mode_Profile_By_Trackside_fired_strong;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static kcg_bool _114_SM_Mode_Profile_By_Trackside_reset_act;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Trackside _113_SM_Mode_Profile_By_Trackside_state_act;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location */
  static kcg_bool br_2_guard_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_TR_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_fired_strong;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static kcg_bool SM_Mode_Profile_By_Trackside_reset_act;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_state_act;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location */
  static kcg_bool br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location;
  static kcg_bool noname;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Confirmation */
  static kcg_bool last_Loc_Confirmation;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Timer */
  static kcg_int last_Loc_Timer;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Ack_Req_To_Driver */
  static kcg_bool Loc_Ack_Req_To_Driver;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Trackside SM_Mode_Profile_By_Trackside_state_sel;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_ST_SM_Mode_Profile_By_Trackside _130_SM_Mode_Profile_By_Trackside_state_act;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static kcg_bool SM_Mode_Profile_By_Trackside_reset_sel;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static kcg_bool SM_Mode_Profile_By_Trackside_reset_prv;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_TR_SM_Mode_Profile_By_Trackside _129_SM_Mode_Profile_By_Trackside_fired_strong;
  /* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
  static SSM_TR_SM_Mode_Profile_By_Trackside _128_SM_Mode_Profile_By_Trackside_fired;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Supervision_Condition_Covered */
  static kcg_bool Loc_Supervision_Condition_Covered;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Mode_Profile_Condition */
  static kcg_bool Loc_Mode_Profile_Condition;
  /* Procedures::Procedure_With_Mode_Profile::Loc_Mode_Available */
  static kcg_bool Loc_Mode_Available;
  /* Procedures::Procedure_With_Mode_Profile::_L81 */
  static kcg_bool _L81;
  /* Procedures::Procedure_With_Mode_Profile::_L70 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L70;
  /* Procedures::Procedure_With_Mode_Profile::_L64 */
  static Speed_T_Obu_BasicTypes_Pkg _L64;
  /* Procedures::Procedure_With_Mode_Profile::_L96 */
  static T_MA_Level_And_Mode_Types_Pkg _L96;
  /* Procedures::Procedure_With_Mode_Profile::_L99 */
  static kcg_bool _L99;
  /* Procedures::Procedure_With_Mode_Profile::_L98 */
  static kcg_bool _L98;
  /* Procedures::Procedure_With_Mode_Profile::_L97 */
  static kcg_bool _L97;
  /* Procedures::Procedure_With_Mode_Profile::_L101 */
  static T_Mode_Level_And_Mode_Types_Pkg _L101;
  /* Procedures::Procedure_With_Mode_Profile::_L102 */
  static trainPosition_T_TrainPosition_Types_Pck _L102;
  /* Procedures::Procedure_With_Mode_Profile::_L103 */
  static kcg_bool _L103;
  
  /* init_SM_Mode_Profile_By_Trackside */ if (outC->init2) {
    SM_Mode_Profile_By_Trackside_state_sel =
      SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
  }
  else {
    SM_Mode_Profile_By_Trackside_state_sel =
      outC->SM_Mode_Profile_By_Trackside_state_nxt;
  }
  /* last_init_ck_Loc_Confirmation */ if (outC->init2) {
    last_Loc_Confirmation = kcg_true;
  }
  else {
    last_Loc_Confirmation = outC->Loc_Confirmation;
  }
  /* sel_SM_Mode_Profile_By_Trackside */ switch (SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location =
        !Procedure_Possible;
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location =
        !Procedure_Possible & last_Loc_Confirmation;
      if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location) {
        SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      }
      else {
        SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      break;
    
  }
  _L101 = Selected_Mode;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L70,
    Mode_Profile_On_Board);
  _L96 = Profile_Mode;
  _L64 = Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L102, Train_Position);
  /* 1 */
  Mode_Profile_Calculations_Librairies(
    _L101,
    &_L70,
    _L96,
    _L64,
    &_L102,
    &_L97,
    &_L98,
    &_L99,
    &_L103);
  Loc_Mode_Profile_Condition = _L97;
  /* sel_SM_Mode_Profile_By_Trackside */ switch (SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      br_2_guard_SM_Mode_Profile_By_Trackside_Futher_location =
        Loc_Mode_Profile_Condition;
      if (br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location) {
        _113_SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      }
      else if (br_2_guard_SM_Mode_Profile_By_Trackside_Futher_location) {
        _113_SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
      }
      else {
        _113_SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Futher_location_SM_Mode_Profile_By_Trackside;
      }
      break;
    
  }
  Loc_Mode_Available = _L99;
  /* sel_SM_Mode_Profile_By_Trackside */ switch (SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      _127_br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off =
        Loc_Mode_Available & !Loc_Mode_Profile_Condition;
      br_2_guard_SM_Mode_Profile_By_Trackside_Procedure_Off =
        Loc_Mode_Available & Loc_Mode_Profile_Condition;
      br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off =
        Procedure_Possible &
        (_127_br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off |
          br_2_guard_SM_Mode_Profile_By_Trackside_Procedure_Off);
      if (br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off) {
        if (_127_br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off) {
          _116_SM_Mode_Profile_By_Trackside_state_act =
            SSM_st_Futher_location_SM_Mode_Profile_By_Trackside;
        }
        else {
          _116_SM_Mode_Profile_By_Trackside_state_act =
            SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
        }
      }
      else {
        _116_SM_Mode_Profile_By_Trackside_state_act =
          SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      }
      _130_SM_Mode_Profile_By_Trackside_state_act =
        _116_SM_Mode_Profile_By_Trackside_state_act;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      _130_SM_Mode_Profile_By_Trackside_state_act =
        _113_SM_Mode_Profile_By_Trackside_state_act;
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      _130_SM_Mode_Profile_By_Trackside_state_act =
        SM_Mode_Profile_By_Trackside_state_act;
      break;
    
  }
  /* init_SM_Mode_Profile_By_Trackside */ if (outC->init2) {
    SM_Mode_Profile_By_Trackside_reset_prv = kcg_false;
  }
  else {
    SM_Mode_Profile_By_Trackside_reset_prv =
      outC->SM_Mode_Profile_By_Trackside_reset_act;
  }
  /* sel_SM_Mode_Profile_By_Trackside */ switch (SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      _117_SM_Mode_Profile_By_Trackside_reset_act =
        br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off;
      outC->SM_Mode_Profile_By_Trackside_reset_act =
        _117_SM_Mode_Profile_By_Trackside_reset_act;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      if (br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location) {
        _114_SM_Mode_Profile_By_Trackside_reset_act = kcg_true;
      }
      else {
        _114_SM_Mode_Profile_By_Trackside_reset_act =
          br_2_guard_SM_Mode_Profile_By_Trackside_Futher_location;
      }
      outC->SM_Mode_Profile_By_Trackside_reset_act =
        _114_SM_Mode_Profile_By_Trackside_reset_act;
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      SM_Mode_Profile_By_Trackside_reset_act =
        br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location;
      outC->SM_Mode_Profile_By_Trackside_reset_act =
        SM_Mode_Profile_By_Trackside_reset_act;
      break;
    
  }
  /* act_SM_Mode_Profile_By_Trackside */ switch (_130_SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      if (outC->SM_Mode_Profile_By_Trackside_reset_act) {
        outC->init = kcg_true;
      }
      /* init_SM_Futher_Location */ if (outC->init) {
        SM_Futher_Location_state_sel_SM_Mode_Profile_By_Trackside_Futher_location =
          SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
      }
      else {
        SM_Futher_Location_state_sel_SM_Mode_Profile_By_Trackside_Futher_location =
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
      }
      _120_SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location =
        SM_Futher_Location_state_sel_SM_Mode_Profile_By_Trackside_Futher_location;
      /* cb_SM_Futher_Location */ switch (_120_SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location) {
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Waiting_Ack =
            Driver_Ack_Mode_Profile;
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Waiting_Ack) {
            _104_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          else {
            _104_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          break;
        
      }
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      if (outC->SM_Mode_Profile_By_Trackside_reset_act) {
        outC->init1 = kcg_true;
      }
      break;
    
  }
  Loc_Supervision_Condition_Covered = _L98;
  /* act_SM_Mode_Profile_By_Trackside */ switch (_130_SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      /* cb_SM_Futher_Location */ switch (_120_SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location) {
        case SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Req_Futher_Location =
            Supervision_Modes;
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Req_Futher_Location) {
            _110_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          else {
            _110_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          _126_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
            _110_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        case SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Start_Supervision =
            Loc_Supervision_Condition_Covered;
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Start_Supervision) {
            _107_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          else {
            _107_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          }
          _126_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
            _107_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _126_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
            _104_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _126_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location =
            SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        
      }
      SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location =
        _126_SM_Futher_Location_state_act_SM_Mode_Profile_By_Trackside_Futher_location;
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      /* init_SM_Current_Location */ if (outC->init1) {
        SM_Current_Location_state_sel_SM_Mode_Profile_By_Trackside_Current_Location =
          SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
      }
      else {
        SM_Current_Location_state_sel_SM_Mode_Profile_By_Trackside_Current_Location =
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
      }
      _119_SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location =
        SM_Current_Location_state_sel_SM_Mode_Profile_By_Trackside_Current_Location;
      /* cb_SM_Current_Location */ switch (_119_SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location =
            (Current_Mode == UN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SR_Level_And_Mode_Types_Pkg) | Supervision_Modes;
          br_1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location =
            br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
          br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location =
            (Current_Mode == SB_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              PT_Level_And_Mode_Types_Pkg);
          /* cb_anon_sm */ if (br_1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
          }
          else {
            br_2_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location =
              br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
          }
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin =
            Driver_Ack_Mode_Profile;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Waiting_Ack =
            Driver_Ack_Mode_Profile;
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Waiting_Ack) {
            _82_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          else {
            _82_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _79_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received =
            Driver_Ack_Mode_Profile;
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received) {
            SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          else {
            SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          break;
        
      }
      break;
    
  }
  /* last_init_ck_Loc_Timer */ if (outC->init2) {
    last_Loc_Timer = 0;
  }
  else {
    last_Loc_Timer = outC->Loc_Timer;
  }
  /* act_SM_Mode_Profile_By_Trackside */ switch (_130_SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      Loc_Ack_Req_To_Driver = kcg_false;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      /* cb_SM_Futher_Location */ switch (SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location) {
        case SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          Loc_Ack_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          Loc_Ack_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          Loc_Ack_Req_To_Driver = kcg_true;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          Loc_Ack_Req_To_Driver = kcg_false;
          break;
        
      }
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      /* cb_SM_Current_Location */ switch (_119_SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
            _88_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio;
          }
          else if (br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
            _88_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          else {
            _88_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          _123_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
            _88_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin =
            last_Loc_Timer > C_Driver_Ack_Delay_Level_And_Mode_Types_Pkg;
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin) {
            _85_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          else if (br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin) {
            _85_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          }
          else {
            _85_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio;
          }
          _123_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
            _85_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _123_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
            _82_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _123_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
            _79_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _123_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location =
            SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        
      }
      SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location =
        _123_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location;
      /* cb_SM_Current_Location */ switch (_119_SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          /* cb_anon_sm */ if (br_1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
            tmp1 = kcg_true;
          }
          else /* cb_anon_sm */ if (br_2_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
            tmp1 = kcg_true;
          }
          else {
            tmp1 = kcg_false;
          }
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          tmp1 = kcg_false;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp1 = kcg_false;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp1 = kcg_false;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp1 = kcg_false;
          break;
        
      }
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp = kcg_false;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          tmp = kcg_false;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp = kcg_true;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp = kcg_false;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          tmp = kcg_false;
          break;
        
      }
      Loc_Ack_Req_To_Driver = tmp1 | tmp;
      break;
    
  }
  _L81 = Loc_Ack_Req_To_Driver;
  outC->Ack_Req_To_Driver = _L81;
  /* init_SM_Mode_Profile_By_Trackside */ if (outC->init2) {
    SM_Mode_Profile_By_Trackside_reset_sel = kcg_false;
  }
  else {
    SM_Mode_Profile_By_Trackside_reset_sel =
      outC->SM_Mode_Profile_By_Trackside_reset_nxt;
  }
  /* sel_SM_Mode_Profile_By_Trackside */ switch (SM_Mode_Profile_By_Trackside_state_sel) {
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      if (br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off) {
        if (_127_br_1_guard_SM_Mode_Profile_By_Trackside_Procedure_Off) {
          _118_SM_Mode_Profile_By_Trackside_fired_strong =
            SSM_TR_Procedure_Off_1_1_SM_Mode_Profile_By_Trackside;
        }
        else {
          _118_SM_Mode_Profile_By_Trackside_fired_strong =
            SSM_TR_Procedure_Off_1_2_SM_Mode_Profile_By_Trackside;
        }
      }
      else {
        _118_SM_Mode_Profile_By_Trackside_fired_strong =
          SSM_TR_no_trans_SM_Mode_Profile_By_Trackside;
      }
      _129_SM_Mode_Profile_By_Trackside_fired_strong =
        _118_SM_Mode_Profile_By_Trackside_fired_strong;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      if (br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location) {
        _115_SM_Mode_Profile_By_Trackside_fired_strong =
          SSM_TR_Futher_location_1_SM_Mode_Profile_By_Trackside;
      }
      else if (br_2_guard_SM_Mode_Profile_By_Trackside_Futher_location) {
        _115_SM_Mode_Profile_By_Trackside_fired_strong =
          SSM_TR_Futher_location_2_SM_Mode_Profile_By_Trackside;
      }
      else {
        _115_SM_Mode_Profile_By_Trackside_fired_strong =
          SSM_TR_no_trans_SM_Mode_Profile_By_Trackside;
      }
      _129_SM_Mode_Profile_By_Trackside_fired_strong =
        _115_SM_Mode_Profile_By_Trackside_fired_strong;
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location) {
        SM_Mode_Profile_By_Trackside_fired_strong =
          SSM_TR_Current_Location_1_SM_Mode_Profile_By_Trackside;
      }
      else {
        SM_Mode_Profile_By_Trackside_fired_strong =
          SSM_TR_no_trans_SM_Mode_Profile_By_Trackside;
      }
      _129_SM_Mode_Profile_By_Trackside_fired_strong =
        SM_Mode_Profile_By_Trackside_fired_strong;
      break;
    
  }
  /* act_SM_Mode_Profile_By_Trackside */ switch (_130_SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside :
      _12_Condition_15_50_70 = kcg_false;
      outC->Condition_15_50_70 = _12_Condition_15_50_70;
      _13_Condition_34_61_71 = kcg_false;
      outC->Condition_34_61_71 = _13_Condition_34_61_71;
      _14_Condition_40_51_72 = kcg_false;
      outC->Condition_40_51_72 = _14_Condition_40_51_72;
      _15_Condition_73_74 = kcg_false;
      outC->Condition_73_74 = _15_Condition_73_74;
      _16_Service_Brake_Command = kcg_false;
      outC->Service_Brake_Command = _16_Service_Brake_Command;
      _17_Loc_Timer = 0;
      outC->Loc_Timer = _17_Loc_Timer;
      _18_Loc_Confirmation = kcg_true;
      outC->Loc_Confirmation = _18_Loc_Confirmation;
      _19_SM_Mode_Profile_By_Trackside_state_nxt =
        SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside;
      outC->SM_Mode_Profile_By_Trackside_state_nxt =
        _19_SM_Mode_Profile_By_Trackside_state_nxt;
      _20_SM_Mode_Profile_By_Trackside_reset_nxt = kcg_false;
      outC->SM_Mode_Profile_By_Trackside_reset_nxt =
        _20_SM_Mode_Profile_By_Trackside_reset_nxt;
      _21_SM_Mode_Profile_By_Trackside_fired =
        _129_SM_Mode_Profile_By_Trackside_fired_strong;
      _128_SM_Mode_Profile_By_Trackside_fired =
        _21_SM_Mode_Profile_By_Trackside_fired;
      break;
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      /* cb_SM_Futher_Location */ switch (SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location) {
        case SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _100_Condition_15_50_70 = kcg_false;
          _2_Condition_15_50_70 = _100_Condition_15_50_70;
          break;
        case SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _96_Condition_15_50_70 = kcg_false;
          _2_Condition_15_50_70 = _96_Condition_15_50_70;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _92_Condition_15_50_70 = kcg_false;
          _2_Condition_15_50_70 = _92_Condition_15_50_70;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _L1_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Switch_Mode_Confirmed =
            kcg_true;
          _91_Condition_15_50_70 =
            _L1_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Switch_Mode_Confirmed;
          _2_Condition_15_50_70 = _91_Condition_15_50_70;
          break;
        
      }
      outC->Condition_15_50_70 = _2_Condition_15_50_70;
      _3_Condition_34_61_71 = kcg_false;
      outC->Condition_34_61_71 = _3_Condition_34_61_71;
      _4_Condition_40_51_72 = kcg_false;
      outC->Condition_40_51_72 = _4_Condition_40_51_72;
      _5_Condition_73_74 = kcg_false;
      outC->Condition_73_74 = _5_Condition_73_74;
      _6_Service_Brake_Command = kcg_false;
      outC->Service_Brake_Command = _6_Service_Brake_Command;
      _7_Loc_Timer = 0;
      outC->Loc_Timer = _7_Loc_Timer;
      _8_Loc_Confirmation = kcg_true;
      outC->Loc_Confirmation = _8_Loc_Confirmation;
      _9_SM_Mode_Profile_By_Trackside_state_nxt =
        SSM_st_Futher_location_SM_Mode_Profile_By_Trackside;
      outC->SM_Mode_Profile_By_Trackside_state_nxt =
        _9_SM_Mode_Profile_By_Trackside_state_nxt;
      _10_SM_Mode_Profile_By_Trackside_reset_nxt = kcg_false;
      outC->SM_Mode_Profile_By_Trackside_reset_nxt =
        _10_SM_Mode_Profile_By_Trackside_reset_nxt;
      _11_SM_Mode_Profile_By_Trackside_fired =
        _129_SM_Mode_Profile_By_Trackside_fired_strong;
      _128_SM_Mode_Profile_By_Trackside_fired =
        _11_SM_Mode_Profile_By_Trackside_fired;
      /* init_SM_Futher_Location */ if (outC->init) {
        SM_Futher_Location_reset_sel_SM_Mode_Profile_By_Trackside_Futher_location =
          kcg_false;
      }
      else {
        SM_Futher_Location_reset_sel_SM_Mode_Profile_By_Trackside_Futher_location =
          outC->SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
      }
      /* init_SM_Futher_Location */ if (outC->init) {
        SM_Futher_Location_reset_prv_SM_Mode_Profile_By_Trackside_Futher_location =
          kcg_false;
      }
      else {
        SM_Futher_Location_reset_prv_SM_Mode_Profile_By_Trackside_Futher_location =
          outC->SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location;
      }
      /* cb_SM_Futher_Location */ switch (_120_SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location) {
        case SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _111_SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location =
            br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Req_Futher_Location;
          outC->SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location =
            _111_SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location;
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Req_Futher_Location) {
            _112_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_TR_Req_Futher_Location_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
          }
          else {
            _112_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_TR_no_trans_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
          }
          _125_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
            _112_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        case SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _108_SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location =
            br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Start_Supervision;
          outC->SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location =
            _108_SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location;
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Start_Supervision) {
            _109_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_TR_Start_Supervision_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
          }
          else {
            _109_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_TR_no_trans_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
          }
          _125_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
            _109_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _105_SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location =
            br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Waiting_Ack;
          outC->SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location =
            _105_SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location;
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location_Waiting_Ack) {
            _106_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_TR_Waiting_Ack_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
          }
          else {
            _106_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
              SSM_TR_no_trans_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
          }
          _125_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
            _106_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location =
            kcg_false;
          outC->SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location =
            SM_Futher_Location_reset_act_SM_Mode_Profile_By_Trackside_Futher_location;
          SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_TR_no_trans_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
          _125_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location =
            SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        
      }
      /* cb_SM_Futher_Location */ switch (SM_Futher_Location_clock_SM_Mode_Profile_By_Trackside_Futher_location) {
        case SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _101_SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            _101_SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
          _102_SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            kcg_false;
          outC->SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            _102_SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
          _103_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location =
            _125_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
          _124_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location =
            _103_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        case SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _97_SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            _97_SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
          _98_SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            kcg_false;
          outC->SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            _98_SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
          _99_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location =
            _125_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
          _124_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location =
            _99_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          _93_SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            _93_SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
          _94_SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            kcg_false;
          outC->SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            _94_SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
          _95_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location =
            _125_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
          _124_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location =
            _95_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location :
          SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location;
          outC->SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SM_Futher_Location_state_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
          SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            kcg_false;
          outC->SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location =
            SM_Futher_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Futher_location;
          SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location =
            _125_SM_Futher_Location_fired_strong_SM_Mode_Profile_By_Trackside_Futher_location;
          _124_SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location =
            SM_Futher_Location_fired_SM_Mode_Profile_By_Trackside_Futher_location;
          break;
        
      }
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _59_Condition_15_50_70 = kcg_false;
          Condition_15_50_70 = _59_Condition_15_50_70;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          _49_Condition_15_50_70 = kcg_false;
          Condition_15_50_70 = _49_Condition_15_50_70;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _39_Condition_15_50_70 = kcg_false;
          Condition_15_50_70 = _39_Condition_15_50_70;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Mode_Confirmed =
            kcg_true;
          _29_Condition_15_50_70 =
            _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Mode_Confirmed;
          Condition_15_50_70 = _29_Condition_15_50_70;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _22_Condition_15_50_70 = kcg_false;
          Condition_15_50_70 = _22_Condition_15_50_70;
          break;
        
      }
      outC->Condition_15_50_70 = Condition_15_50_70;
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _60_Condition_34_61_71 = kcg_false;
          Condition_34_61_71 = _60_Condition_34_61_71;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Wa =
            (Current_Mode == UN_Level_And_Mode_Types_Pkg) | (Current_Mode ==
              SN_Level_And_Mode_Types_Pkg);
          /* ck_IfBlock1 */ if (IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Wa) {
            _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack_I =
              kcg_true;
            _72_Condition_34_61_71 =
              _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack_I;
            _50_Condition_34_61_71 = _72_Condition_34_61_71;
          }
          else {
            _69_Condition_34_61_71 = kcg_false;
            _50_Condition_34_61_71 = _69_Condition_34_61_71;
          }
          Condition_34_61_71 = _50_Condition_34_61_71;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _40_Condition_34_61_71 = kcg_false;
          Condition_34_61_71 = _40_Condition_34_61_71;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _30_Condition_34_61_71 = kcg_false;
          Condition_34_61_71 = _30_Condition_34_61_71;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _23_Condition_34_61_71 = kcg_false;
          Condition_34_61_71 = _23_Condition_34_61_71;
          break;
        
      }
      outC->Condition_34_61_71 = Condition_34_61_71;
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _61_Condition_40_51_72 = kcg_false;
          Condition_40_51_72 = _61_Condition_40_51_72;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          /* ck_IfBlock1 */ if (IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Wa) {
            _73_Condition_40_51_72 = kcg_false;
            _51_Condition_40_51_72 = _73_Condition_40_51_72;
          }
          else {
            else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin =
              (Current_Mode == FS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
                SR_Level_And_Mode_Types_Pkg);
            /* ck_anon_activ */ if (else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin) {
              _L1131_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ac =
                kcg_true;
              _77_Condition_40_51_72 =
                _L1131_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ac;
              _70_Condition_40_51_72 = _77_Condition_40_51_72;
            }
            else {
              _75_Condition_40_51_72 = kcg_false;
              _70_Condition_40_51_72 = _75_Condition_40_51_72;
            }
            _51_Condition_40_51_72 = _70_Condition_40_51_72;
          }
          Condition_40_51_72 = _51_Condition_40_51_72;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _41_Condition_40_51_72 = kcg_false;
          Condition_40_51_72 = _41_Condition_40_51_72;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _31_Condition_40_51_72 = kcg_false;
          Condition_40_51_72 = _31_Condition_40_51_72;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _24_Condition_40_51_72 = kcg_false;
          Condition_40_51_72 = _24_Condition_40_51_72;
          break;
        
      }
      outC->Condition_40_51_72 = Condition_40_51_72;
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _62_Condition_73_74 = kcg_false;
          Condition_73_74 = _62_Condition_73_74;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          /* ck_IfBlock1 */ if (IfBlock1_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Wa) {
            _74_Condition_73_74 = kcg_false;
            _52_Condition_73_74 = _74_Condition_73_74;
          }
          else {
            /* ck_anon_activ */ if (else_clock_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin) {
              _78_Condition_73_74 = kcg_false;
              _71_Condition_73_74 = _78_Condition_73_74;
            }
            else {
              _L1132_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ac =
                kcg_true;
              _76_Condition_73_74 =
                _L1132_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ac;
              _71_Condition_73_74 = _76_Condition_73_74;
            }
            _52_Condition_73_74 = _71_Condition_73_74;
          }
          Condition_73_74 = _52_Condition_73_74;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _42_Condition_73_74 = kcg_false;
          Condition_73_74 = _42_Condition_73_74;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _32_Condition_73_74 = kcg_false;
          Condition_73_74 = _32_Condition_73_74;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _25_Condition_73_74 = kcg_false;
          Condition_73_74 = _25_Condition_73_74;
          break;
        
      }
      outC->Condition_73_74 = Condition_73_74;
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _63_Service_Brake_Command = kcg_false;
          Service_Brake_Command = _63_Service_Brake_Command;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          _53_Service_Brake_Command = kcg_false;
          Service_Brake_Command = _53_Service_Brake_Command;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _43_Service_Brake_Command = kcg_false;
          Service_Brake_Command = _43_Service_Brake_Command;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _33_Service_Brake_Command = kcg_false;
          Service_Brake_Command = _33_Service_Brake_Command;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received =
            kcg_true;
          _26_Service_Brake_Command =
            _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received;
          Service_Brake_Command = _26_Service_Brake_Command;
          break;
        
      }
      outC->Service_Brake_Command = Service_Brake_Command;
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          _L2_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack =
            C_Cycle_Duration_Level_And_Mode_Types_Pkg;
          _L4_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack =
            Loc_Ack_Req_To_Driver;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _44_Loc_Timer = 0;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _34_Loc_Timer = 0;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _27_Loc_Timer = 0;
          break;
        
      }
      /* init_SM_Current_Location */ if (outC->init1) {
        SM_Current_Location_reset_prv_SM_Mode_Profile_By_Trackside_Current_Location =
          kcg_false;
      }
      else {
        SM_Current_Location_reset_prv_SM_Mode_Profile_By_Trackside_Current_Location =
          outC->SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
      }
      /* cb_SM_Current_Location */ switch (_119_SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
            _89_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
              kcg_true;
          }
          else {
            _89_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
              br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location;
          }
          outC->SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            _89_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin) {
            _86_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
              kcg_true;
          }
          else {
            _86_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
              br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin;
          }
          outC->SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            _86_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _83_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Waiting_Ack;
          outC->SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            _83_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _80_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            kcg_false;
          outC->SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            _80_SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received;
          outC->SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location =
            SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        
      }
      /* act_SM_Current_Location */ switch (_123_SM_Current_Location_state_act_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          if (outC->SM_Current_Location_reset_act_SM_Mode_Profile_By_Trackside_Current_Location) {
            /* 8 */ Counter_reset_pwlinear_int(&outC->Context_8);
          }
          break;
        
      }
      if (outC->SM_Mode_Profile_By_Trackside_reset_act) {
        /* 8 */ Counter_reset_pwlinear_int(&outC->Context_8);
      }
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _64_Loc_Timer = 0;
          Loc_Timer = _64_Loc_Timer;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          /* 8 */
          Counter_pwlinear_int(
            _L2_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack,
            _L4_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack,
            &outC->Context_8);
          _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack =
            outC->Context_8.Count;
          _54_Loc_Timer =
            _L1_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
          Loc_Timer = _54_Loc_Timer;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          Loc_Timer = _44_Loc_Timer;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          Loc_Timer = _34_Loc_Timer;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          Loc_Timer = _27_Loc_Timer;
          break;
        
      }
      outC->Loc_Timer = Loc_Timer;
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _65_Loc_Confirmation = kcg_true;
          Loc_Confirmation = _65_Loc_Confirmation;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          _L6_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack =
            kcg_false;
          _55_Loc_Confirmation =
            _L6_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waiting_Ack;
          Loc_Confirmation = _55_Loc_Confirmation;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _45_Loc_Confirmation = kcg_true;
          Loc_Confirmation = _45_Loc_Confirmation;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _35_Loc_Confirmation = kcg_true;
          Loc_Confirmation = _35_Loc_Confirmation;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _L2_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received =
            kcg_false;
          _28_Loc_Confirmation =
            _L2_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received;
          Loc_Confirmation = _28_Loc_Confirmation;
          break;
        
      }
      outC->Loc_Confirmation = Loc_Confirmation;
      SM_Mode_Profile_By_Trackside_state_nxt =
        SSM_st_Current_Location_SM_Mode_Profile_By_Trackside;
      outC->SM_Mode_Profile_By_Trackside_state_nxt =
        SM_Mode_Profile_By_Trackside_state_nxt;
      SM_Mode_Profile_By_Trackside_reset_nxt = kcg_false;
      outC->SM_Mode_Profile_By_Trackside_reset_nxt =
        SM_Mode_Profile_By_Trackside_reset_nxt;
      SM_Mode_Profile_By_Trackside_fired =
        _129_SM_Mode_Profile_By_Trackside_fired_strong;
      _128_SM_Mode_Profile_By_Trackside_fired =
        SM_Mode_Profile_By_Trackside_fired;
      /* init_SM_Current_Location */ if (outC->init1) {
        SM_Current_Location_reset_sel_SM_Mode_Profile_By_Trackside_Current_Location =
          kcg_false;
      }
      else {
        SM_Current_Location_reset_sel_SM_Mode_Profile_By_Trackside_Current_Location =
          outC->SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
      }
      /* cb_SM_Current_Location */ switch (_119_SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
            _90_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_Req_Current_Location_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
          }
          else if (br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Req_Current_Location) {
            _90_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_Req_Current_Location_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
          }
          else {
            _90_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_no_trans_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
          }
          _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
            _90_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin) {
            _87_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_Switch_Autorized_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Locat;
          }
          else if (br_2_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Switch_Autorized_Waitin) {
            _87_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_Switch_Autorized_Waiting_Ack_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Locat;
          }
          else {
            _87_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_no_trans_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
          }
          _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
            _87_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Waiting_Ack) {
            _84_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
          }
          else {
            _84_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_no_trans_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
          }
          _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
            _84_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _81_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_TR_no_trans_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
          _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
            _81_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          if (br_1_guard_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location_Ack_Not_Received) {
            SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_Ack_Not_Received_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
          }
          else {
            SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
              SSM_TR_no_trans_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
          }
          _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location =
            SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        
      }
      /* cb_SM_Current_Location */ switch (SM_Current_Location_clock_SM_Mode_Profile_By_Trackside_Current_Location) {
        case SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _66_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            _66_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          _67_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            kcg_false;
          outC->SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            _67_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          _68_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          _121_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            _68_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio :
          _56_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            _56_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          _57_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            kcg_false;
          outC->SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            _57_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          _58_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          _121_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            _58_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _46_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            _46_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          _47_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            kcg_false;
          outC->SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            _47_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          _48_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          _121_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            _48_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          _36_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            _36_SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          _37_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            kcg_false;
          outC->SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            _37_SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          _38_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          _121_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            _38_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        case SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location :
          SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location;
          outC->SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SM_Current_Location_state_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            kcg_false;
          outC->SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location =
            SM_Current_Location_reset_nxt_SM_Mode_Profile_By_Trackside_Current_Location;
          SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            _122_SM_Current_Location_fired_strong_SM_Mode_Profile_By_Trackside_Current_Location;
          _121_SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location =
            SM_Current_Location_fired_SM_Mode_Profile_By_Trackside_Current_Location;
          break;
        
      }
      break;
    
  }
  noname = _L103;
  /* act_SM_Mode_Profile_By_Trackside */ switch (_130_SM_Mode_Profile_By_Trackside_state_act) {
    case SSM_st_Futher_location_SM_Mode_Profile_By_Trackside :
      outC->init = kcg_false;
      break;
    case SSM_st_Current_Location_SM_Mode_Profile_By_Trackside :
      outC->init1 = kcg_false;
      break;
    
  }
  outC->init2 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_With_Mode_Profile_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

