/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_Start_L1_L2_L3_Procedures.h"

void Procedure_Start_L1_L2_L3_reset_Procedures(
  outC_Procedure_Start_L1_L2_L3_Procedures *outC)
{
  outC->init = kcg_true;
}

/* Procedures::Procedure_Start_L1_L2_L3 */
void Procedure_Start_L1_L2_L3_Procedures(
  /* Procedures::Procedure_Start_L1_L2_L3::Current_Level */M_LEVEL Current_Level,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_LS */kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_OS */kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_SH */kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Ack_SR */kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_Start_L1_L2_L3::Driver_Req_Start */kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_Start_L1_L2_L3::MA_SSP_Gradiant_Available */kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_Start_L1_L2_L3::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_Start_L1_L2_L3::RBC_Authorizes_SR */kcg_bool RBC_Authorizes_SR,
  outC_Procedure_Start_L1_L2_L3_Procedures *outC)
{
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3::Waiting_Driver_Starting_Command */
  static kcg_bool br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_state_sel;
  /* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
  static SSM_ST_SM_Start_L1_L2_L3 SM_Start_L1_L2_L3_state_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    SM_Start_L1_L2_L3_state_sel =
      SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
  }
  else {
    SM_Start_L1_L2_L3_state_sel = outC->SM_Start_L1_L2_L3_state_nxt;
  }
  switch (SM_Start_L1_L2_L3_state_sel) {
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command =
        Current_Level == M_LEVEL_Level_1;
      if (Driver_Req_Start &
        (br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command |
          ((Current_Level == M_LEVEL_Level_2) | (Current_Level ==
              M_LEVEL_Level_3)))) {
        if (br_1_guard_SM_Start_L1_L2_L3_Waiting_Driver_Starting_Command) {
          SM_Start_L1_L2_L3_state_act = SSM_st_Level_1_SM_Start_L1_L2_L3;
        }
        else {
          SM_Start_L1_L2_L3_state_act = SSM_st_Level_2_3_SM_Start_L1_L2_L3;
        }
      }
      else {
        SM_Start_L1_L2_L3_state_act =
          SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
      }
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      if (Driver_Ack_SR) {
        SM_Start_L1_L2_L3_state_act = SSM_st_SR_Mode_SM_Start_L1_L2_L3;
      }
      else {
        SM_Start_L1_L2_L3_state_act = SSM_st_Level_1_SM_Start_L1_L2_L3;
      }
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      if (RBC_Authorizes_SR) {
        SM_Start_L1_L2_L3_state_act = SSM_st_Level_1_SM_Start_L1_L2_L3;
      }
      else if (MA_SSP_Gradiant_Available & ((*Mode_Profile_On_Board).Mode ==
          No_Profile_Level_And_Mode_Types_Pkg)) {
        SM_Start_L1_L2_L3_state_act = SSM_st_FS_Mode_SM_Start_L1_L2_L3;
      }
      else if ((*Mode_Profile_On_Board).Mode ==
        Profile_OS_Level_And_Mode_Types_Pkg) {
        SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_OS_SM_Start_L1_L2_L3;
      }
      else if ((*Mode_Profile_On_Board).Mode ==
        Profile_SH_Level_And_Mode_Types_Pkg) {
        SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_SH_SM_Start_L1_L2_L3;
      }
      else if ((*Mode_Profile_On_Board).Mode ==
        Profile_LS_Level_And_Mode_Types_Pkg) {
        SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_LS_SM_Start_L1_L2_L3;
      }
      else {
        SM_Start_L1_L2_L3_state_act = SSM_st_Level_2_3_SM_Start_L1_L2_L3;
      }
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      SM_Start_L1_L2_L3_state_act = SSM_st_SR_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      SM_Start_L1_L2_L3_state_act = SSM_st_FS_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      SM_Start_L1_L2_L3_state_act = SSM_st_OS_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      SM_Start_L1_L2_L3_state_act = SSM_st_SH_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      SM_Start_L1_L2_L3_state_act = SSM_st_LS_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      if (Driver_Ack_OS) {
        SM_Start_L1_L2_L3_state_act = SSM_st_OS_Mode_SM_Start_L1_L2_L3;
      }
      else {
        SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_OS_SM_Start_L1_L2_L3;
      }
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      if (Driver_Ack_SH) {
        SM_Start_L1_L2_L3_state_act = SSM_st_SH_Mode_SM_Start_L1_L2_L3;
      }
      else {
        SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_SH_SM_Start_L1_L2_L3;
      }
      break;
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      if (Driver_Ack_LS) {
        SM_Start_L1_L2_L3_state_act = SSM_st_LS_Mode_SM_Start_L1_L2_L3;
      }
      else {
        SM_Start_L1_L2_L3_state_act = SSM_st_Wait_For_LS_SM_Start_L1_L2_L3;
      }
      break;
    
  }
  switch (SM_Start_L1_L2_L3_state_act) {
    case SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt =
        SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Level_1_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_true;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_Level_1_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Level_2_3_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_true;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_Level_2_3_SM_Start_L1_L2_L3;
      break;
    case SSM_st_SR_Mode_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_true;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_SR_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_FS_Mode_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_true;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_FS_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_OS_Mode_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_true;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_OS_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_SH_Mode_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_true;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_SH_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_LS_Mode_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_true;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_LS_Mode_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Wait_For_OS_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_true;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_Wait_For_OS_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Wait_For_SH_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_true;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_Wait_For_SH_SM_Start_L1_L2_L3;
      break;
    case SSM_st_Wait_For_LS_SM_Start_L1_L2_L3 :
      outC->Ack_LS_Req_To_Driver = kcg_true;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_10_31 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->SM_Start_L1_L2_L3_state_nxt = SSM_st_Wait_For_LS_SM_Start_L1_L2_L3;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_Start_L1_L2_L3_Procedures.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

