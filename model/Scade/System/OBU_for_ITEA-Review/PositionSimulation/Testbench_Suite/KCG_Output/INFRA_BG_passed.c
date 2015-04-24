/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "INFRA_BG_passed.h"

void INFRA_BG_passed_init(outC_INFRA_BG_passed *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
  outC->SM2_state_nxt_SM1_State1 = SSM_st_B1_SM1_State1_SM2;
  outC->SM3_state_nxt_SM1_State1 = SSM_st_B2_SM1_State1_SM3;
  outC->LRBG = 0;
  outC->BG_passed = kcg_true;
}


void INFRA_BG_passed_reset(outC_INFRA_BG_passed *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}

/* INFRA_BG_passed */
void INFRA_BG_passed(
  /* INFRA_BG_passed::other_BG_passed */ kcg_bool other_BG_passed,
  /* INFRA_BG_passed::LRBG_in */ kcg_int LRBG_in,
  /* INFRA_BG_passed::BG */ TM_BaliseGroupData *BG,
  /* INFRA_BG_passed::B1passed */ kcg_bool B1passed,
  /* INFRA_BG_passed::B2passed */ kcg_bool B2passed,
  outC_INFRA_BG_passed *outC)
{
  _3_SSM_TR_SM1 tmp;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_ST_SM3_SM1_State1 SM3_state_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_ST_SM3_SM1_State1 SM3_state_sel_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_ST_SM2_SM1_State1 SM2_state_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_ST_SM2_SM1_State1 SM2_state_sel_SM1_State1;
  /* INFRA_BG_passed::SM1::State1 */ kcg_bool State1_weakb_clock_SM1;
  /* INFRA_BG_passed::SM1::State1 */ kcg_bool br_1_guard_SM1_State1;
  /* INFRA_BG_passed::SM1 */ _1_SSM_ST_SM1 SM1_state_sel;
  /* INFRA_BG_passed::SM1 */ _1_SSM_ST_SM1 SM1_state_act;
  /* INFRA_BG_passed::SM1 */ kcg_bool SM1_reset_act;
  /* INFRA_BG_passed::_L19 */ kcg_bool _L19;
  
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_State1_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_BG_passed_SM1 :
      SM1_state_act = SSM_st_State1_SM1;
      SM1_reset_act = kcg_true;
      break;
    case SSM_st_State1_SM1 :
      SM1_state_act = SSM_st_State1_SM1;
      SM1_reset_act = kcg_false;
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_BG_passed_SM1 :
      _L19 = kcg_false;
      outC->SM1_state_nxt = SSM_st_BG_passed_SM1;
      break;
    case SSM_st_State1_SM1 :
      switch (SM1_state_sel) {
        case SSM_st_State1_SM1 :
          tmp = _2_SSM_TR_no_trans_SM1;
          break;
        case SSM_st_BG_passed_SM1 :
          tmp = SSM_TR_BG_passed_1_SM1;
          break;
        
      }
      State1_weakb_clock_SM1 = tmp != _2_SSM_TR_no_trans_SM1;
      if (SM1_reset_act) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        SM3_state_sel_SM1_State1 = SSM_st_B2_SM1_State1_SM3;
        SM2_state_sel_SM1_State1 = SSM_st_B1_SM1_State1_SM2;
      }
      else {
        SM3_state_sel_SM1_State1 = outC->SM3_state_nxt_SM1_State1;
        SM2_state_sel_SM1_State1 = outC->SM2_state_nxt_SM1_State1;
      }
      switch (SM3_state_sel_SM1_State1) {
        case SSM_st_B2_SM1_State1_SM3 :
          if (B2passed) {
            SM3_state_act_SM1_State1 = SSM_st_B2_passed_SM1_State1_SM3;
          }
          else {
            SM3_state_act_SM1_State1 = SSM_st_B2_SM1_State1_SM3;
          }
          break;
        case SSM_st_B2_passed_SM1_State1_SM3 :
          SM3_state_act_SM1_State1 = SSM_st_B2_passed_SM1_State1_SM3;
          break;
        
      }
      switch (SM3_state_act_SM1_State1) {
        case SSM_st_B2_SM1_State1_SM3 :
          outC->SM3_state_nxt_SM1_State1 = SSM_st_B2_SM1_State1_SM3;
          break;
        case SSM_st_B2_passed_SM1_State1_SM3 :
          outC->SM3_state_nxt_SM1_State1 = SSM_st_B2_passed_SM1_State1_SM3;
          break;
        
      }
      switch (SM2_state_sel_SM1_State1) {
        case SSM_st_B1_SM1_State1_SM2 :
          if (B1passed) {
            SM2_state_act_SM1_State1 = SSM_st_B1_passed_SM1_State1_SM2;
          }
          else {
            SM2_state_act_SM1_State1 = SSM_st_B1_SM1_State1_SM2;
          }
          break;
        case SSM_st_B1_passed_SM1_State1_SM2 :
          SM2_state_act_SM1_State1 = SSM_st_B1_passed_SM1_State1_SM2;
          break;
        
      }
      switch (SM2_state_act_SM1_State1) {
        case SSM_st_B1_SM1_State1_SM2 :
          outC->SM2_state_nxt_SM1_State1 = SSM_st_B1_SM1_State1_SM2;
          break;
        case SSM_st_B1_passed_SM1_State1_SM2 :
          outC->SM2_state_nxt_SM1_State1 = SSM_st_B1_passed_SM1_State1_SM2;
          break;
        
      }
      if (State1_weakb_clock_SM1) {
        _L19 = kcg_false;
        outC->SM1_state_nxt = SSM_st_State1_SM1;
      }
      else {
        br_1_guard_SM1_State1 = (outC->SM3_state_nxt_SM1_State1 ==
            SSM_st_B2_passed_SM1_State1_SM3) &
          (outC->SM2_state_nxt_SM1_State1 == SSM_st_B1_passed_SM1_State1_SM2);
        if (br_1_guard_SM1_State1) {
          _L19 = kcg_true;
          outC->SM1_state_nxt = SSM_st_BG_passed_SM1;
        }
        else {
          _L19 = kcg_false;
          outC->SM1_state_nxt = SSM_st_State1_SM1;
        }
      }
      outC->init1 = kcg_false;
      break;
    
  }
  outC->BG_passed = other_BG_passed | _L19;
  if (_L19) {
    outC->LRBG = (*BG).NID_BG;
  }
  else {
    outC->LRBG = LRBG_in;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_BG_passed.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

