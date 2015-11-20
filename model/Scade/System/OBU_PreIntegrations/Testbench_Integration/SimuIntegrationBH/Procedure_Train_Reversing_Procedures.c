/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_Train_Reversing_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_Train_Reversing_init_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC)
{
  outC->init = kcg_true;
  outC->SM_Train_Reversing_reset_nxt = kcg_true;
  outC->SM_Train_Reversing_reset_act = kcg_true;
  outC->SM_Train_Reversing_state_nxt =
    SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
  outC->Ack_RV_Req_To_Driver = kcg_true;
  outC->Condition_59 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_Train_Reversing_reset_Procedures(
  outC_Procedure_Train_Reversing_Procedures *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_Train_Reversing */
void Procedure_Train_Reversing_Procedures(
  /* Procedures::Procedure_Train_Reversing::Driver_Ack_RV */ kcg_bool Driver_Ack_RV,
  /* Procedures::Procedure_Train_Reversing::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_Train_Reversing::Train_Position */ trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_Train_Reversing::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_Train_Reversing::Reversing_Data */ T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  outC_Procedure_Train_Reversing_Procedures *outC)
{
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing _15_SM_Train_Reversing_fired;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool _14_SM_Train_Reversing_reset_nxt;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing _13_SM_Train_Reversing_state_nxt;
  /* Procedures::Procedure_Train_Reversing::Ack_RV_Req_To_Driver */
  static kcg_bool _12_Ack_RV_Req_To_Driver;
  /* Procedures::Procedure_Train_Reversing::Condition_59 */
  static kcg_bool _11_Condition_59;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing _10_SM_Train_Reversing_fired;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool _9_SM_Train_Reversing_reset_nxt;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing _8_SM_Train_Reversing_state_nxt;
  /* Procedures::Procedure_Train_Reversing::Ack_RV_Req_To_Driver */
  static kcg_bool _7_Ack_RV_Req_To_Driver;
  /* Procedures::Procedure_Train_Reversing::Condition_59 */
  static kcg_bool _6_Condition_59;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing::Reversing_Condition::_L2 */
  static kcg_bool _L2_SM_Train_Reversing_Reversing_Condition;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing _5_SM_Train_Reversing_fired;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool _4_SM_Train_Reversing_reset_nxt;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing _3_SM_Train_Reversing_state_nxt;
  /* Procedures::Procedure_Train_Reversing::Ack_RV_Req_To_Driver */
  static kcg_bool _2_Ack_RV_Req_To_Driver;
  /* Procedures::Procedure_Train_Reversing::Condition_59 */
  static kcg_bool _1_Condition_59;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing::RV_Mode::_L1 */
  static kcg_bool _L1_SM_Train_Reversing_RV_Mode;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing SM_Train_Reversing_fired;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool SM_Train_Reversing_reset_nxt;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing SM_Train_Reversing_state_nxt;
  /* Procedures::Procedure_Train_Reversing::Ack_RV_Req_To_Driver */
  static kcg_bool Ack_RV_Req_To_Driver;
  /* Procedures::Procedure_Train_Reversing::Condition_59 */
  static kcg_bool Condition_59;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing _24_SM_Train_Reversing_fired_strong;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool _23_SM_Train_Reversing_reset_act;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing _22_SM_Train_Reversing_state_act;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing::Reversing_Procedure_Off */
  static kcg_bool br_1_guard_SM_Train_Reversing_Reversing_Procedure_Off;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing _21_SM_Train_Reversing_fired_strong;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool _20_SM_Train_Reversing_reset_act;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing _19_SM_Train_Reversing_state_act;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing::Reversing_Condition */
  static kcg_bool br_3_guard_SM_Train_Reversing_Reversing_Condition;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing::Reversing_Condition */
  static kcg_bool br_2_guard_SM_Train_Reversing_Reversing_Condition;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing::Reversing_Condition */
  static kcg_bool br_1_guard_SM_Train_Reversing_Reversing_Condition;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing _18_SM_Train_Reversing_fired_strong;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool _17_SM_Train_Reversing_reset_act;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing _16_SM_Train_Reversing_state_act;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing SM_Train_Reversing_fired_strong;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool SM_Train_Reversing_reset_act;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing SM_Train_Reversing_state_act;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing::Reversing_Data_Available */
  static kcg_bool br_2_guard_SM_Train_Reversing_Reversing_Data_Available;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing::Reversing_Data_Available */
  static kcg_bool br_1_guard_SM_Train_Reversing_Reversing_Data_Available;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing SM_Train_Reversing_state_sel;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_ST_SM_Train_Reversing _27_SM_Train_Reversing_state_act;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool SM_Train_Reversing_reset_sel;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static kcg_bool SM_Train_Reversing_reset_prv;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing _26_SM_Train_Reversing_fired_strong;
  /* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
  static SSM_TR_SM_Train_Reversing _25_SM_Train_Reversing_fired;
  /* Procedures::Procedure_Train_Reversing::Loc_Max_Safe_Front_In_RV_Area */
  static kcg_bool Loc_Max_Safe_Front_In_RV_Area;
  /* Procedures::Procedure_Train_Reversing::Loc_RV_Data_Available */
  static kcg_bool Loc_RV_Data_Available;
  /* Procedures::Procedure_Train_Reversing::Loc_Cond_Procedure_On */
  static kcg_bool Loc_Cond_Procedure_On;
  /* Procedures::Procedure_Train_Reversing::_L16 */
  static kcg_bool _L16;
  /* Procedures::Procedure_Train_Reversing::_L17 */
  static trainPosition_T_TrainPosition_Types_Pck _L17;
  /* Procedures::Procedure_Train_Reversing::_L18 */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg _L18;
  /* Procedures::Procedure_Train_Reversing::_L19 */
  static kcg_bool _L19;
  /* Procedures::Procedure_Train_Reversing::_L20 */
  static kcg_bool _L20;
  
  /* init_SM_Train_Reversing */ if (outC->init) {
    SM_Train_Reversing_state_sel =
      SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
  }
  else {
    SM_Train_Reversing_state_sel = outC->SM_Train_Reversing_state_nxt;
  }
  /* init_SM_Train_Reversing */ if (outC->init) {
    SM_Train_Reversing_reset_sel = kcg_false;
  }
  else {
    SM_Train_Reversing_reset_sel = outC->SM_Train_Reversing_reset_nxt;
  }
  /* init_SM_Train_Reversing */ if (outC->init) {
    SM_Train_Reversing_reset_prv = kcg_false;
  }
  else {
    SM_Train_Reversing_reset_prv = outC->SM_Train_Reversing_reset_act;
  }
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(&_L18, Reversing_Data);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L17, Train_Position);
  /* 1 */ Reversing_Calculations_Librairies(&_L18, &_L17, &_L16, &_L19);
  Loc_Max_Safe_Front_In_RV_Area = _L16;
  /* sel_SM_Train_Reversing */ switch (SM_Train_Reversing_state_sel) {
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      br_1_guard_SM_Train_Reversing_Reversing_Data_Available =
        Train_Standstill & Loc_Max_Safe_Front_In_RV_Area;
      break;
    
  }
  Loc_RV_Data_Available = _L19;
  _L20 = ((Current_Mode == FS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
        LS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
        OS_Level_And_Mode_Types_Pkg)) & Loc_RV_Data_Available;
  Loc_Cond_Procedure_On = _L20;
  /* sel_SM_Train_Reversing */ switch (SM_Train_Reversing_state_sel) {
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      br_1_guard_SM_Train_Reversing_Reversing_Procedure_Off =
        Loc_Cond_Procedure_On;
      if (br_1_guard_SM_Train_Reversing_Reversing_Procedure_Off) {
        _22_SM_Train_Reversing_state_act =
          SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      }
      else {
        _22_SM_Train_Reversing_state_act =
          SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      _27_SM_Train_Reversing_state_act = _22_SM_Train_Reversing_state_act;
      _23_SM_Train_Reversing_reset_act =
        br_1_guard_SM_Train_Reversing_Reversing_Procedure_Off;
      outC->SM_Train_Reversing_reset_act = _23_SM_Train_Reversing_reset_act;
      if (br_1_guard_SM_Train_Reversing_Reversing_Procedure_Off) {
        _24_SM_Train_Reversing_fired_strong =
          SSM_TR_Reversing_Procedure_Off_1_SM_Train_Reversing;
      }
      else {
        _24_SM_Train_Reversing_fired_strong =
          SSM_TR_no_trans_SM_Train_Reversing;
      }
      _26_SM_Train_Reversing_fired_strong = _24_SM_Train_Reversing_fired_strong;
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      br_1_guard_SM_Train_Reversing_Reversing_Condition = Driver_Ack_RV;
      br_2_guard_SM_Train_Reversing_Reversing_Condition =
        !Loc_Cond_Procedure_On;
      br_3_guard_SM_Train_Reversing_Reversing_Condition = !(Train_Standstill &
          Loc_Max_Safe_Front_In_RV_Area);
      if (br_1_guard_SM_Train_Reversing_Reversing_Condition) {
        _19_SM_Train_Reversing_state_act = SSM_st_RV_Mode_SM_Train_Reversing;
      }
      else if (br_2_guard_SM_Train_Reversing_Reversing_Condition) {
        _19_SM_Train_Reversing_state_act =
          SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      else if (br_3_guard_SM_Train_Reversing_Reversing_Condition) {
        _19_SM_Train_Reversing_state_act =
          SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      }
      else {
        _19_SM_Train_Reversing_state_act =
          SSM_st_Reversing_Condition_SM_Train_Reversing;
      }
      _27_SM_Train_Reversing_state_act = _19_SM_Train_Reversing_state_act;
      if (br_1_guard_SM_Train_Reversing_Reversing_Condition) {
        _20_SM_Train_Reversing_reset_act = kcg_true;
      }
      else if (br_2_guard_SM_Train_Reversing_Reversing_Condition) {
        _20_SM_Train_Reversing_reset_act = kcg_true;
      }
      else {
        _20_SM_Train_Reversing_reset_act =
          br_3_guard_SM_Train_Reversing_Reversing_Condition;
      }
      outC->SM_Train_Reversing_reset_act = _20_SM_Train_Reversing_reset_act;
      if (br_1_guard_SM_Train_Reversing_Reversing_Condition) {
        _21_SM_Train_Reversing_fired_strong =
          SSM_TR_Reversing_Condition_1_SM_Train_Reversing;
      }
      else if (br_2_guard_SM_Train_Reversing_Reversing_Condition) {
        _21_SM_Train_Reversing_fired_strong =
          SSM_TR_Reversing_Condition_2_SM_Train_Reversing;
      }
      else if (br_3_guard_SM_Train_Reversing_Reversing_Condition) {
        _21_SM_Train_Reversing_fired_strong =
          SSM_TR_Reversing_Condition_3_SM_Train_Reversing;
      }
      else {
        _21_SM_Train_Reversing_fired_strong =
          SSM_TR_no_trans_SM_Train_Reversing;
      }
      _26_SM_Train_Reversing_fired_strong = _21_SM_Train_Reversing_fired_strong;
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      _16_SM_Train_Reversing_state_act = SSM_st_RV_Mode_SM_Train_Reversing;
      _27_SM_Train_Reversing_state_act = _16_SM_Train_Reversing_state_act;
      _17_SM_Train_Reversing_reset_act = kcg_false;
      outC->SM_Train_Reversing_reset_act = _17_SM_Train_Reversing_reset_act;
      _18_SM_Train_Reversing_fired_strong = SSM_TR_no_trans_SM_Train_Reversing;
      _26_SM_Train_Reversing_fired_strong = _18_SM_Train_Reversing_fired_strong;
      break;
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      br_2_guard_SM_Train_Reversing_Reversing_Data_Available =
        !Loc_Cond_Procedure_On;
      if (br_1_guard_SM_Train_Reversing_Reversing_Data_Available) {
        SM_Train_Reversing_state_act =
          SSM_st_Reversing_Condition_SM_Train_Reversing;
      }
      else if (br_2_guard_SM_Train_Reversing_Reversing_Data_Available) {
        SM_Train_Reversing_state_act =
          SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      }
      else {
        SM_Train_Reversing_state_act =
          SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      }
      _27_SM_Train_Reversing_state_act = SM_Train_Reversing_state_act;
      if (br_1_guard_SM_Train_Reversing_Reversing_Data_Available) {
        SM_Train_Reversing_reset_act = kcg_true;
      }
      else {
        SM_Train_Reversing_reset_act =
          br_2_guard_SM_Train_Reversing_Reversing_Data_Available;
      }
      outC->SM_Train_Reversing_reset_act = SM_Train_Reversing_reset_act;
      if (br_1_guard_SM_Train_Reversing_Reversing_Data_Available) {
        SM_Train_Reversing_fired_strong =
          SSM_TR_Reversing_Data_Available_1_SM_Train_Reversing;
      }
      else if (br_2_guard_SM_Train_Reversing_Reversing_Data_Available) {
        SM_Train_Reversing_fired_strong =
          SSM_TR_Reversing_Data_Available_2_SM_Train_Reversing;
      }
      else {
        SM_Train_Reversing_fired_strong = SSM_TR_no_trans_SM_Train_Reversing;
      }
      _26_SM_Train_Reversing_fired_strong = SM_Train_Reversing_fired_strong;
      break;
    
  }
  /* act_SM_Train_Reversing */ switch (_27_SM_Train_Reversing_state_act) {
    case SSM_st_Reversing_Procedure_Off_SM_Train_Reversing :
      _11_Condition_59 = kcg_false;
      outC->Condition_59 = _11_Condition_59;
      _12_Ack_RV_Req_To_Driver = kcg_false;
      outC->Ack_RV_Req_To_Driver = _12_Ack_RV_Req_To_Driver;
      _13_SM_Train_Reversing_state_nxt =
        SSM_st_Reversing_Procedure_Off_SM_Train_Reversing;
      outC->SM_Train_Reversing_state_nxt = _13_SM_Train_Reversing_state_nxt;
      _14_SM_Train_Reversing_reset_nxt = kcg_false;
      outC->SM_Train_Reversing_reset_nxt = _14_SM_Train_Reversing_reset_nxt;
      _15_SM_Train_Reversing_fired = _26_SM_Train_Reversing_fired_strong;
      _25_SM_Train_Reversing_fired = _15_SM_Train_Reversing_fired;
      break;
    case SSM_st_Reversing_Condition_SM_Train_Reversing :
      _6_Condition_59 = kcg_false;
      outC->Condition_59 = _6_Condition_59;
      _L2_SM_Train_Reversing_Reversing_Condition = kcg_true;
      _7_Ack_RV_Req_To_Driver = _L2_SM_Train_Reversing_Reversing_Condition;
      outC->Ack_RV_Req_To_Driver = _7_Ack_RV_Req_To_Driver;
      _8_SM_Train_Reversing_state_nxt =
        SSM_st_Reversing_Condition_SM_Train_Reversing;
      outC->SM_Train_Reversing_state_nxt = _8_SM_Train_Reversing_state_nxt;
      _9_SM_Train_Reversing_reset_nxt = kcg_false;
      outC->SM_Train_Reversing_reset_nxt = _9_SM_Train_Reversing_reset_nxt;
      _10_SM_Train_Reversing_fired = _26_SM_Train_Reversing_fired_strong;
      _25_SM_Train_Reversing_fired = _10_SM_Train_Reversing_fired;
      break;
    case SSM_st_RV_Mode_SM_Train_Reversing :
      _L1_SM_Train_Reversing_RV_Mode = kcg_true;
      _1_Condition_59 = _L1_SM_Train_Reversing_RV_Mode;
      outC->Condition_59 = _1_Condition_59;
      _2_Ack_RV_Req_To_Driver = kcg_false;
      outC->Ack_RV_Req_To_Driver = _2_Ack_RV_Req_To_Driver;
      _3_SM_Train_Reversing_state_nxt = SSM_st_RV_Mode_SM_Train_Reversing;
      outC->SM_Train_Reversing_state_nxt = _3_SM_Train_Reversing_state_nxt;
      _4_SM_Train_Reversing_reset_nxt = kcg_false;
      outC->SM_Train_Reversing_reset_nxt = _4_SM_Train_Reversing_reset_nxt;
      _5_SM_Train_Reversing_fired = _26_SM_Train_Reversing_fired_strong;
      _25_SM_Train_Reversing_fired = _5_SM_Train_Reversing_fired;
      break;
    case SSM_st_Reversing_Data_Available_SM_Train_Reversing :
      Condition_59 = kcg_false;
      outC->Condition_59 = Condition_59;
      Ack_RV_Req_To_Driver = kcg_false;
      outC->Ack_RV_Req_To_Driver = Ack_RV_Req_To_Driver;
      SM_Train_Reversing_state_nxt =
        SSM_st_Reversing_Data_Available_SM_Train_Reversing;
      outC->SM_Train_Reversing_state_nxt = SM_Train_Reversing_state_nxt;
      SM_Train_Reversing_reset_nxt = kcg_false;
      outC->SM_Train_Reversing_reset_nxt = SM_Train_Reversing_reset_nxt;
      SM_Train_Reversing_fired = _26_SM_Train_Reversing_fired_strong;
      _25_SM_Train_Reversing_fired = SM_Train_Reversing_fired;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_Train_Reversing_Procedures.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

