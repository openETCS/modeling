/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SoM_NTC_SN_SoMProcedure_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void SoM_NTC_SN_init_SoMProcedure_Pkg(outC_SoM_NTC_SN_SoMProcedure_Pkg *outC)
{
  outC->init = kcg_true;
  outC->Level_NTC_and_Mode_SN_reset_nxt = kcg_true;
  outC->Level_NTC_and_Mode_SN_reset_act = kcg_true;
  outC->Level_NTC_and_Mode_SN_state_nxt = SSM_st_State1_Level_NTC_and_Mode_SN;
  outC->start_ack_to_TIU = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void SoM_NTC_SN_reset_SoMProcedure_Pkg(outC_SoM_NTC_SN_SoMProcedure_Pkg *outC)
{
  outC->init = kcg_true;
}

/* SoMProcedure_Pkg::SoM_NTC_SN */
void SoM_NTC_SN_SoMProcedure_Pkg(
  /* SoMProcedure_Pkg::SoM_NTC_SN::Status_Mode_Change_from_Level_and_Mode_Management */ T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC)
{
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_TR_Level_NTC_and_Mode_SN _8_Level_NTC_and_Mode_SN_fired;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static kcg_bool _7_Level_NTC_and_Mode_SN_reset_nxt;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN _6_Level_NTC_and_Mode_SN_state_nxt;
  /* SoMProcedure_Pkg::SoM_NTC_SN::start_ack_to_TIU */
  static kcg_bool _5_start_ack_to_TIU;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_TR_Level_NTC_and_Mode_SN _4_Level_NTC_and_Mode_SN_fired;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static kcg_bool _3_Level_NTC_and_Mode_SN_reset_nxt;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN _2_Level_NTC_and_Mode_SN_state_nxt;
  /* SoMProcedure_Pkg::SoM_NTC_SN::start_ack_to_TIU */
  static kcg_bool _1_start_ack_to_TIU;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_TR_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_fired;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static kcg_bool Level_NTC_and_Mode_SN_reset_nxt;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_state_nxt;
  /* SoMProcedure_Pkg::SoM_NTC_SN::start_ack_to_TIU */
  static kcg_bool start_ack_to_TIU;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN::Level_NTC_andMode_SN::_L1 */
  static kcg_bool _L1_Level_NTC_and_Mode_SN_Level_NTC_andMode_SN;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_TR_Level_NTC_and_Mode_SN _14_Level_NTC_and_Mode_SN_fired_strong;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static kcg_bool _13_Level_NTC_and_Mode_SN_reset_act;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN _12_Level_NTC_and_Mode_SN_state_act;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN::State1 */
  static kcg_bool br_1_guard_Level_NTC_and_Mode_SN_State1;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN::State1 */
  static kcg_bool br_1_clock_Level_NTC_and_Mode_SN_State1;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_TR_Level_NTC_and_Mode_SN _11_Level_NTC_and_Mode_SN_fired_strong;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static kcg_bool _10_Level_NTC_and_Mode_SN_reset_act;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN _9_Level_NTC_and_Mode_SN_state_act;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN::Waiting_for_Ack_of_proposed_Mode_SN_from_Driver */
  static kcg_bool br_1_guard_Level_NTC_and_Mode_SN_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_TR_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_fired_strong;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static kcg_bool Level_NTC_and_Mode_SN_reset_act;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_state_act;
  static kcg_bool noname;
  /* SoMProcedure_Pkg::SoM_NTC_SN::requestProposeModeSN_to_Level_and_Mode_Management */
  static kcg_bool requestProposeModeSN_to_Level_and_Mode_Management;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN Level_NTC_and_Mode_SN_state_sel;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_ST_Level_NTC_and_Mode_SN _17_Level_NTC_and_Mode_SN_state_act;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static kcg_bool Level_NTC_and_Mode_SN_reset_sel;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static kcg_bool Level_NTC_and_Mode_SN_reset_prv;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_TR_Level_NTC_and_Mode_SN _16_Level_NTC_and_Mode_SN_fired_strong;
  /* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
  static SSM_TR_Level_NTC_and_Mode_SN _15_Level_NTC_and_Mode_SN_fired;
  /* SoMProcedure_Pkg::SoM_NTC_SN::N_MODE_SN */
  static kcg_bool N_MODE_SN;
  /* SoMProcedure_Pkg::SoM_NTC_SN::_L1 */
  static kcg_bool _L1;
  /* SoMProcedure_Pkg::SoM_NTC_SN::_L3 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L3;
  /* SoMProcedure_Pkg::SoM_NTC_SN::_L4 */
  static M_MODE _L4;
  /* SoMProcedure_Pkg::SoM_NTC_SN::_L5 */
  static kcg_bool _L5;
  /* SoMProcedure_Pkg::SoM_NTC_SN::_L6 */
  static M_MODE _L6;
  
  /* init_Level_NTC_and_Mode_SN */ if (outC->init) {
    Level_NTC_and_Mode_SN_state_sel = SSM_st_State1_Level_NTC_and_Mode_SN;
  }
  else {
    Level_NTC_and_Mode_SN_state_sel = outC->Level_NTC_and_Mode_SN_state_nxt;
  }
  /* sel_Level_NTC_and_Mode_SN */ switch (Level_NTC_and_Mode_SN_state_sel) {
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      br_1_guard_Level_NTC_and_Mode_SN_State1 = kcg_true;
      br_1_clock_Level_NTC_and_Mode_SN_State1 =
        br_1_guard_Level_NTC_and_Mode_SN_State1;
      /* cb_anon_sm */ if (br_1_clock_Level_NTC_and_Mode_SN_State1) {
        requestProposeModeSN_to_Level_and_Mode_Management = kcg_true;
      }
      else {
        requestProposeModeSN_to_Level_and_Mode_Management = kcg_false;
      }
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      requestProposeModeSN_to_Level_and_Mode_Management = kcg_false;
      break;
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      requestProposeModeSN_to_Level_and_Mode_Management = kcg_false;
      break;
    
  }
  /* init_Level_NTC_and_Mode_SN */ if (outC->init) {
    Level_NTC_and_Mode_SN_reset_sel = kcg_false;
  }
  else {
    Level_NTC_and_Mode_SN_reset_sel = outC->Level_NTC_and_Mode_SN_reset_nxt;
  }
  /* init_Level_NTC_and_Mode_SN */ if (outC->init) {
    Level_NTC_and_Mode_SN_reset_prv = kcg_false;
  }
  else {
    Level_NTC_and_Mode_SN_reset_prv = outC->Level_NTC_and_Mode_SN_reset_act;
  }
  /* sel_Level_NTC_and_Mode_SN */ switch (Level_NTC_and_Mode_SN_state_sel) {
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      Level_NTC_and_Mode_SN_state_act =
        SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      break;
    
  }
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &_L3,
    Status_Mode_Change_from_Level_and_Mode_Management);
  _L4 = _L3.Mode;
  _L6 = M_MODE_National_System;
  _L5 = _L4 == _L6;
  N_MODE_SN = _L5;
  /* sel_Level_NTC_and_Mode_SN */ switch (Level_NTC_and_Mode_SN_state_sel) {
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      if (br_1_guard_Level_NTC_and_Mode_SN_State1) {
        _12_Level_NTC_and_Mode_SN_state_act =
          SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      }
      else {
        _12_Level_NTC_and_Mode_SN_state_act =
          SSM_st_State1_Level_NTC_and_Mode_SN;
      }
      _17_Level_NTC_and_Mode_SN_state_act = _12_Level_NTC_and_Mode_SN_state_act;
      _13_Level_NTC_and_Mode_SN_reset_act =
        br_1_guard_Level_NTC_and_Mode_SN_State1;
      outC->Level_NTC_and_Mode_SN_reset_act =
        _13_Level_NTC_and_Mode_SN_reset_act;
      if (br_1_guard_Level_NTC_and_Mode_SN_State1) {
        _14_Level_NTC_and_Mode_SN_fired_strong =
          SSM_TR_State1_1_Level_NTC_and_Mode_SN;
      }
      else {
        _14_Level_NTC_and_Mode_SN_fired_strong =
          SSM_TR_no_trans_Level_NTC_and_Mode_SN;
      }
      _16_Level_NTC_and_Mode_SN_fired_strong =
        _14_Level_NTC_and_Mode_SN_fired_strong;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      br_1_guard_Level_NTC_and_Mode_SN_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver =
        N_MODE_SN;
      if (br_1_guard_Level_NTC_and_Mode_SN_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver) {
        _9_Level_NTC_and_Mode_SN_state_act =
          SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      }
      else {
        _9_Level_NTC_and_Mode_SN_state_act =
          SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      }
      _17_Level_NTC_and_Mode_SN_state_act = _9_Level_NTC_and_Mode_SN_state_act;
      _10_Level_NTC_and_Mode_SN_reset_act =
        br_1_guard_Level_NTC_and_Mode_SN_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver;
      outC->Level_NTC_and_Mode_SN_reset_act =
        _10_Level_NTC_and_Mode_SN_reset_act;
      if (br_1_guard_Level_NTC_and_Mode_SN_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver) {
        _11_Level_NTC_and_Mode_SN_fired_strong =
          SSM_TR_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_1_Level_NTC_and_Mode_SN;
      }
      else {
        _11_Level_NTC_and_Mode_SN_fired_strong =
          SSM_TR_no_trans_Level_NTC_and_Mode_SN;
      }
      _16_Level_NTC_and_Mode_SN_fired_strong =
        _11_Level_NTC_and_Mode_SN_fired_strong;
      break;
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      _17_Level_NTC_and_Mode_SN_state_act = Level_NTC_and_Mode_SN_state_act;
      Level_NTC_and_Mode_SN_reset_act = kcg_false;
      outC->Level_NTC_and_Mode_SN_reset_act = Level_NTC_and_Mode_SN_reset_act;
      Level_NTC_and_Mode_SN_fired_strong =
        SSM_TR_no_trans_Level_NTC_and_Mode_SN;
      _16_Level_NTC_and_Mode_SN_fired_strong =
        Level_NTC_and_Mode_SN_fired_strong;
      break;
    
  }
  /* act_Level_NTC_and_Mode_SN */ switch (_17_Level_NTC_and_Mode_SN_state_act) {
    case SSM_st_State1_Level_NTC_and_Mode_SN :
      _5_start_ack_to_TIU = kcg_false;
      outC->start_ack_to_TIU = _5_start_ack_to_TIU;
      _6_Level_NTC_and_Mode_SN_state_nxt = SSM_st_State1_Level_NTC_and_Mode_SN;
      outC->Level_NTC_and_Mode_SN_state_nxt =
        _6_Level_NTC_and_Mode_SN_state_nxt;
      _7_Level_NTC_and_Mode_SN_reset_nxt = kcg_false;
      outC->Level_NTC_and_Mode_SN_reset_nxt =
        _7_Level_NTC_and_Mode_SN_reset_nxt;
      _8_Level_NTC_and_Mode_SN_fired = _16_Level_NTC_and_Mode_SN_fired_strong;
      _15_Level_NTC_and_Mode_SN_fired = _8_Level_NTC_and_Mode_SN_fired;
      break;
    case SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN :
      _1_start_ack_to_TIU = kcg_false;
      outC->start_ack_to_TIU = _1_start_ack_to_TIU;
      _2_Level_NTC_and_Mode_SN_state_nxt =
        SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN;
      outC->Level_NTC_and_Mode_SN_state_nxt =
        _2_Level_NTC_and_Mode_SN_state_nxt;
      _3_Level_NTC_and_Mode_SN_reset_nxt = kcg_false;
      outC->Level_NTC_and_Mode_SN_reset_nxt =
        _3_Level_NTC_and_Mode_SN_reset_nxt;
      _4_Level_NTC_and_Mode_SN_fired = _16_Level_NTC_and_Mode_SN_fired_strong;
      _15_Level_NTC_and_Mode_SN_fired = _4_Level_NTC_and_Mode_SN_fired;
      break;
    case SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN :
      _L1_Level_NTC_and_Mode_SN_Level_NTC_andMode_SN = kcg_true;
      start_ack_to_TIU = _L1_Level_NTC_and_Mode_SN_Level_NTC_andMode_SN;
      outC->start_ack_to_TIU = start_ack_to_TIU;
      Level_NTC_and_Mode_SN_state_nxt =
        SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
      outC->Level_NTC_and_Mode_SN_state_nxt = Level_NTC_and_Mode_SN_state_nxt;
      Level_NTC_and_Mode_SN_reset_nxt = kcg_false;
      outC->Level_NTC_and_Mode_SN_reset_nxt = Level_NTC_and_Mode_SN_reset_nxt;
      Level_NTC_and_Mode_SN_fired = _16_Level_NTC_and_Mode_SN_fired_strong;
      _15_Level_NTC_and_Mode_SN_fired = Level_NTC_and_Mode_SN_fired;
      break;
    
  }
  _L1 = requestProposeModeSN_to_Level_and_Mode_Management;
  noname = _L1;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SoM_NTC_SN_SoMProcedure_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

