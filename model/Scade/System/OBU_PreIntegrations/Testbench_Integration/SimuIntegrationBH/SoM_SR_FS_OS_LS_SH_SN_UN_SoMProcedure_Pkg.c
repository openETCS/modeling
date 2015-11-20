/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void SoM_SR_FS_OS_LS_SH_SN_UN_init_SoMProcedure_Pkg(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = _64_SSM_st_State1_SM1;
  outC->start_ack_to_TIU = kcg_true;
  outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management = kcg_true;
  outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC)
{
  outC->init = kcg_true;
}

/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN */
void SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management */ kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::Status_Mode_Change_from_Level_and_Mode_Management */ T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC)
{
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 _12_SM1_fired;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool _11_SM1_reset_nxt;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 _10_SM1_state_nxt;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::start_ack_to_TIU */
  static kcg_bool _9_start_ack_to_TIU;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 _8_SM1_fired;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool _7_SM1_reset_nxt;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 _6_SM1_state_nxt;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::start_ack_to_TIU */
  static kcg_bool _5_start_ack_to_TIU;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 _4_SM1_fired;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool _3_SM1_reset_nxt;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 _2_SM1_state_nxt;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::start_ack_to_TIU */
  static kcg_bool _1_start_ack_to_TIU;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 SM1_fired;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 SM1_state_nxt;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::start_ack_to_TIU */
  static kcg_bool start_ack_to_TIU;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1::FS_Mode::_L2 */
  static kcg_bool _L2_SM1_FS_Mode;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 _21_SM1_fired_strong;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool _20_SM1_reset_act;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 _19_SM1_state_act;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1::State1 */
  static kcg_bool br_1_guard_SM1_State1;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1::State1 */
  static kcg_bool br_1_clock_SM1_State1;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 _18_SM1_fired_strong;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool _17_SM1_reset_act;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 _16_SM1_state_act;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1::Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH */
  static kcg_bool br_1_guard_SM1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1::Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH */
  static kcg_bool br_1_clock_SM1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 _15_SM1_fired_strong;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool _14_SM1_reset_act;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 _13_SM1_state_act;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1::Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management */
  static kcg_bool br_1_guard_SM1_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 SM1_fired_strong;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool SM1_reset_act;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 SM1_state_act;
  static kcg_bool noname;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::requestModeChange_SB_FS_to_Mode_and_Level_Management */
  static kcg_bool requestModeChange_SB_FS_to_Mode_and_Level_Management;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::requestMA_SoM_L2_3_FS_SR_OS_LS_SH */
  static kcg_bool requestMA_SoM_L2_3_FS_SR_OS_LS_SH;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 SM1_state_sel;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _65_SSM_ST_SM1 _24_SM1_state_act;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool SM1_reset_sel;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static kcg_bool SM1_reset_prv;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 _23_SM1_fired_strong;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
  static _68_SSM_TR_SM1 _22_SM1_fired;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::acknowledge_MA_L2_FS_from_MA_L2_Management */
  static kcg_bool acknowledge_MA_L2_FS_from_MA_L2_Management;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::M_Mode_FS */
  static kcg_bool M_Mode_FS;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::_L1 */
  static kcg_bool _L1;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::_L5 */
  static kcg_bool _L5;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::_L8 */
  static kcg_bool _L8;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::_L4 */
  static kcg_bool _L4;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::_L9 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L9;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::_L10 */
  static M_MODE _L10;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::_L11 */
  static kcg_bool _L11;
  /* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::_L12 */
  static M_MODE _L12;
  
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = _64_SSM_st_State1_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  _L4 = Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management;
  acknowledge_MA_L2_FS_from_MA_L2_Management = _L4;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _64_SSM_st_State1_SM1 :
      requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_false;
      br_1_guard_SM1_State1 = kcg_true;
      br_1_clock_SM1_State1 = br_1_guard_SM1_State1;
      /* cb_anon_sm */ if (br_1_clock_SM1_State1) {
        requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_true;
      }
      else {
        requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_false;
      }
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      br_1_guard_SM1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH =
        acknowledge_MA_L2_FS_from_MA_L2_Management;
      br_1_clock_SM1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH =
        br_1_guard_SM1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH;
      /* cb_anon_sm */ if (br_1_clock_SM1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH) {
        requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_true;
      }
      else {
        requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_false;
      }
      requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_false;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_false;
      requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_false;
      break;
    case SSM_st_FS_Mode_SM1 :
      requestModeChange_SB_FS_to_Mode_and_Level_Management = kcg_false;
      requestMA_SoM_L2_3_FS_SR_OS_LS_SH = kcg_false;
      break;
    
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_FS_Mode_SM1 :
      SM1_state_act = SSM_st_FS_Mode_SM1;
      break;
    
  }
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &_L9,
    Status_Mode_Change_from_Level_and_Mode_Management);
  _L10 = _L9.Mode;
  _L12 = M_MODE_Full_Supervision;
  _L11 = _L10 == _L12;
  M_Mode_FS = _L11;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case _64_SSM_st_State1_SM1 :
      if (br_1_guard_SM1_State1) {
        _19_SM1_state_act = SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      }
      else {
        _19_SM1_state_act = _64_SSM_st_State1_SM1;
      }
      _24_SM1_state_act = _19_SM1_state_act;
      _20_SM1_reset_act = br_1_guard_SM1_State1;
      outC->SM1_reset_act = _20_SM1_reset_act;
      if (br_1_guard_SM1_State1) {
        _21_SM1_fired_strong = _66_SSM_TR_State1_1_SM1;
      }
      else {
        _21_SM1_fired_strong = _67_SSM_TR_no_trans_SM1;
      }
      _23_SM1_fired_strong = _21_SM1_fired_strong;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      if (br_1_guard_SM1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH) {
        _16_SM1_state_act =
          SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      }
      else {
        _16_SM1_state_act = SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      }
      _24_SM1_state_act = _16_SM1_state_act;
      _17_SM1_reset_act =
        br_1_guard_SM1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH;
      outC->SM1_reset_act = _17_SM1_reset_act;
      if (br_1_guard_SM1_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH) {
        _18_SM1_fired_strong =
          SSM_TR_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_1_SM1;
      }
      else {
        _18_SM1_fired_strong = _67_SSM_TR_no_trans_SM1;
      }
      _23_SM1_fired_strong = _18_SM1_fired_strong;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      br_1_guard_SM1_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management =
        M_Mode_FS;
      if (br_1_guard_SM1_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management) {
        _13_SM1_state_act = SSM_st_FS_Mode_SM1;
      }
      else {
        _13_SM1_state_act =
          SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      }
      _24_SM1_state_act = _13_SM1_state_act;
      _14_SM1_reset_act =
        br_1_guard_SM1_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management;
      outC->SM1_reset_act = _14_SM1_reset_act;
      if (br_1_guard_SM1_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management) {
        _15_SM1_fired_strong =
          SSM_TR_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_1_SM1;
      }
      else {
        _15_SM1_fired_strong = _67_SSM_TR_no_trans_SM1;
      }
      _23_SM1_fired_strong = _15_SM1_fired_strong;
      break;
    case SSM_st_FS_Mode_SM1 :
      _24_SM1_state_act = SM1_state_act;
      SM1_reset_act = kcg_false;
      outC->SM1_reset_act = SM1_reset_act;
      SM1_fired_strong = _67_SSM_TR_no_trans_SM1;
      _23_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_24_SM1_state_act) {
    case _64_SSM_st_State1_SM1 :
      _9_start_ack_to_TIU = kcg_false;
      outC->start_ack_to_TIU = _9_start_ack_to_TIU;
      _10_SM1_state_nxt = _64_SSM_st_State1_SM1;
      outC->SM1_state_nxt = _10_SM1_state_nxt;
      _11_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _11_SM1_reset_nxt;
      _12_SM1_fired = _23_SM1_fired_strong;
      _22_SM1_fired = _12_SM1_fired;
      break;
    case SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1 :
      _5_start_ack_to_TIU = kcg_false;
      outC->start_ack_to_TIU = _5_start_ack_to_TIU;
      _6_SM1_state_nxt = SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
      outC->SM1_state_nxt = _6_SM1_state_nxt;
      _7_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _7_SM1_reset_nxt;
      _8_SM1_fired = _23_SM1_fired_strong;
      _22_SM1_fired = _8_SM1_fired;
      break;
    case SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1 :
      _1_start_ack_to_TIU = kcg_false;
      outC->start_ack_to_TIU = _1_start_ack_to_TIU;
      _2_SM1_state_nxt =
        SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1;
      outC->SM1_state_nxt = _2_SM1_state_nxt;
      _3_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _3_SM1_reset_nxt;
      _4_SM1_fired = _23_SM1_fired_strong;
      _22_SM1_fired = _4_SM1_fired;
      break;
    case SSM_st_FS_Mode_SM1 :
      _L2_SM1_FS_Mode = kcg_true;
      start_ack_to_TIU = _L2_SM1_FS_Mode;
      outC->start_ack_to_TIU = start_ack_to_TIU;
      SM1_state_nxt = SSM_st_FS_Mode_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _23_SM1_fired_strong;
      _22_SM1_fired = SM1_fired;
      break;
    
  }
  _L1 = requestMA_SoM_L2_3_FS_SR_OS_LS_SH;
  outC->request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management = _L1;
  _L5 = requestModeChange_SB_FS_to_Mode_and_Level_Management;
  noname = _L5;
  _L8 = kcg_false;
  outC->request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management = _L8;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

