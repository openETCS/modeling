/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.h"

void SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC)
{
  outC->init = kcg_true;
}

/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN */
void SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::Status_Mode_Change_from_Level_and_Mode_Management */T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC)
{
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _45_SSM_ST_SM1 SM1_state_sel;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _45_SSM_ST_SM1 SM1_state_act;
  
  outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management = kcg_false;
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = _44_SSM_st_State1_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_FS_Mode_SM1 :
      SM1_state_act = SSM_st_FS_Mode_SM1;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_false;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      if ((*Status_Mode_Change_from_Level_and_Mode_Management).Mode ==
        M_MODE_Full_Supervision) {
        SM1_state_act = SSM_st_FS_Mode_SM1;
      }
      else {
        SM1_state_act =
          SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      }
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_false;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      if (Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management) {
        SM1_state_act =
          SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      }
      else {
        SM1_state_act = SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      }
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_false;
      break;
    case _44_SSM_st_State1_SM1 :
      SM1_state_act = SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_true;
      break;
    
  }
  switch (SM1_state_act) {
    case _44_SSM_st_State1_SM1 :
      outC->start_ack_to_TIU = kcg_false;
      outC->SM1_state_nxt = _44_SSM_st_State1_SM1;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      outC->start_ack_to_TIU = kcg_false;
      outC->SM1_state_nxt = SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      outC->start_ack_to_TIU = kcg_false;
      outC->SM1_state_nxt =
        SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      break;
    case SSM_st_FS_Mode_SM1 :
      outC->start_ack_to_TIU = kcg_true;
      outC->SM1_state_nxt = SSM_st_FS_Mode_SM1;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

