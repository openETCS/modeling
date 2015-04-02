/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-06T10:15:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "INFRA_BG_passed.h"

void INFRA_BG_passed_reset(outC_INFRA_BG_passed *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* INFRA_BG_passed */
void INFRA_BG_passed(inC_INFRA_BG_passed *inC, outC_INFRA_BG_passed *outC)
{
  /* INFRA_BG_passed::SM1 */ SSM_TR_SM1 _3_SM1_fired;
  /* INFRA_BG_passed::SM1 */ kcg_bool _2_SM1_reset_nxt;
  /* INFRA_BG_passed::SM1 */ SSM_ST_SM1 _1_SM1_state_nxt;
  /* INFRA_BG_passed::SM1::State1::SM3 */ kcg_bool SM3_final_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ kcg_bool SM3_reset_prv_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ kcg_bool SM3_reset_sel_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ kcg_bool SM2_final_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ kcg_bool SM2_reset_prv_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ kcg_bool SM2_reset_sel_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_ST_SM2_SM1_State1 SM2_state_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ kcg_bool SM2_reset_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_TR_SM2_SM1_State1 SM2_fired_strong_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2::B1 */ kcg_bool br_1_guard_SM1_State1_SM2_B1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_ST_SM2_SM1_State1 _19_SM2_state_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ kcg_bool _20_SM2_reset_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_TR_SM2_SM1_State1 _21_SM2_fired_strong_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_ST_SM2_SM1_State1 SM2_state_nxt_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ kcg_bool SM2_reset_nxt_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_TR_SM2_SM1_State1 SM2_fired_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_ST_SM2_SM1_State1 _16_SM2_state_nxt_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ kcg_bool _17_SM2_reset_nxt_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM2 */ SSM_TR_SM2_SM1_State1 _18_SM2_fired_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_ST_SM3_SM1_State1 SM3_state_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ kcg_bool SM3_reset_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_TR_SM3_SM1_State1 SM3_fired_strong_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3::B2 */ kcg_bool br_1_guard_SM1_State1_SM3_B2;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_ST_SM3_SM1_State1 _13_SM3_state_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ kcg_bool _14_SM3_reset_act_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_TR_SM3_SM1_State1 _15_SM3_fired_strong_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_ST_SM3_SM1_State1 SM3_state_nxt_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ kcg_bool SM3_reset_nxt_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_TR_SM3_SM1_State1 SM3_fired_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_ST_SM3_SM1_State1 _10_SM3_state_nxt_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ kcg_bool _11_SM3_reset_nxt_SM1_State1;
  /* INFRA_BG_passed::SM1::State1::SM3 */ SSM_TR_SM3_SM1_State1 _12_SM3_fired_SM1_State1;
  /* INFRA_BG_passed::SM1::State1 */ kcg_bool br_1_guard_SM1_State1;
  /* INFRA_BG_passed::SM1 */ SSM_ST_SM1 _4_SM1_state_nxt;
  /* INFRA_BG_passed::SM1 */ kcg_bool _5_SM1_reset_nxt;
  /* INFRA_BG_passed::SM1 */ SSM_TR_SM1 _6_SM1_fired;
  /* INFRA_BG_passed::SM1 */ SSM_ST_SM1 _7_SM1_state_nxt;
  /* INFRA_BG_passed::SM1 */ kcg_bool _8_SM1_reset_nxt;
  /* INFRA_BG_passed::SM1 */ SSM_TR_SM1 _9_SM1_fired;
  /* INFRA_BG_passed::SM1 */ SSM_TR_SM1 SM1_fired;
  /* INFRA_BG_passed::SM1 */ kcg_bool SM1_reset_nxt;
  /* INFRA_BG_passed::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* INFRA_BG_passed::SM1 */ SSM_TR_SM1 _24_SM1_fired_strong;
  /* INFRA_BG_passed::SM1 */ kcg_bool _23_SM1_reset_act;
  /* INFRA_BG_passed::SM1 */ SSM_ST_SM1 _22_SM1_state_act;
  /* INFRA_BG_passed::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* INFRA_BG_passed::SM1 */ kcg_bool SM1_reset_act;
  /* INFRA_BG_passed::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* INFRA_BG_passed::SM1::BG_passed */ kcg_bool br_1_guard_SM1_BG_passed;
  /* INFRA_BG_passed::SM1 */ kcg_bool SM1_reset_sel;
  /* INFRA_BG_passed::SM1 */ kcg_bool SM1_reset_prv;
  
  if (outC->init1) {
    outC->SM1_state_sel = SSM_st_State1_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_State1_SM1 :
      _22_SM1_state_act = SSM_st_State1_SM1;
      outC->SM1_state_act = _22_SM1_state_act;
      break;
    case SSM_st_BG_passed_SM1 :
      br_1_guard_SM1_BG_passed = kcg_true;
      if (br_1_guard_SM1_BG_passed) {
        SM1_state_act = SSM_st_State1_SM1;
      }
      else {
        SM1_state_act = SSM_st_BG_passed_SM1;
      }
      outC->SM1_state_act = SM1_state_act;
      break;
    
  }
  if (outC->init1) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_State1_SM1 :
      _23_SM1_reset_act = kcg_false;
      outC->SM1_reset_act = _23_SM1_reset_act;
      break;
    case SSM_st_BG_passed_SM1 :
      SM1_reset_act = br_1_guard_SM1_BG_passed;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_State1_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      break;
    
  }
  outC->_L23 = inC->other_BG_passed;
  switch (outC->SM1_state_sel) {
    case SSM_st_State1_SM1 :
      _24_SM1_fired_strong = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _24_SM1_fired_strong;
      break;
    case SSM_st_BG_passed_SM1 :
      if (br_1_guard_SM1_BG_passed) {
        SM1_fired_strong = SSM_TR_BG_passed_1_SM1;
      }
      else {
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_State1_SM1 :
      outC->State1_weakb_clock_SM1 = outC->SM1_fired_strong !=
        SSM_TR_no_trans_SM1;
      if (outC->init) {
        outC->SM3_state_sel_SM1_State1 = SSM_st_B2_SM1_State1_SM3;
      }
      else {
        outC->SM3_state_sel_SM1_State1 = outC->SM3_state_nxt_SM1_State1;
      }
      outC->_2_SM3_clock_SM1_State1 = outC->SM3_state_sel_SM1_State1;
      switch (outC->_2_SM3_clock_SM1_State1) {
        case SSM_st_B2_SM1_State1_SM3 :
          br_1_guard_SM1_State1_SM3_B2 = inC->B2passed;
          if (br_1_guard_SM1_State1_SM3_B2) {
            _13_SM3_state_act_SM1_State1 = SSM_st_B2_passed_SM1_State1_SM3;
          }
          else {
            _13_SM3_state_act_SM1_State1 = SSM_st_B2_SM1_State1_SM3;
          }
          outC->SM3_state_act_SM1_State1 = _13_SM3_state_act_SM1_State1;
          break;
        case SSM_st_B2_passed_SM1_State1_SM3 :
          SM3_state_act_SM1_State1 = SSM_st_B2_passed_SM1_State1_SM3;
          outC->SM3_state_act_SM1_State1 = SM3_state_act_SM1_State1;
          break;
        
      }
      outC->SM3_clock_SM1_State1 = outC->SM3_state_act_SM1_State1;
      switch (outC->SM3_clock_SM1_State1) {
        case SSM_st_B2_SM1_State1_SM3 :
          _10_SM3_state_nxt_SM1_State1 = SSM_st_B2_SM1_State1_SM3;
          outC->SM3_state_nxt_SM1_State1 = _10_SM3_state_nxt_SM1_State1;
          break;
        case SSM_st_B2_passed_SM1_State1_SM3 :
          SM3_state_nxt_SM1_State1 = SSM_st_B2_passed_SM1_State1_SM3;
          outC->SM3_state_nxt_SM1_State1 = SM3_state_nxt_SM1_State1;
          break;
        
      }
      SM3_final_SM1_State1 = outC->SM3_state_nxt_SM1_State1 ==
        SSM_st_B2_passed_SM1_State1_SM3;
      if (outC->init) {
        outC->SM2_state_sel_SM1_State1 = SSM_st_B1_SM1_State1_SM2;
      }
      else {
        outC->SM2_state_sel_SM1_State1 = outC->SM2_state_nxt_SM1_State1;
      }
      outC->_3_SM2_clock_SM1_State1 = outC->SM2_state_sel_SM1_State1;
      switch (outC->_3_SM2_clock_SM1_State1) {
        case SSM_st_B1_SM1_State1_SM2 :
          br_1_guard_SM1_State1_SM2_B1 = inC->B1passed;
          if (br_1_guard_SM1_State1_SM2_B1) {
            _19_SM2_state_act_SM1_State1 = SSM_st_B1_passed_SM1_State1_SM2;
          }
          else {
            _19_SM2_state_act_SM1_State1 = SSM_st_B1_SM1_State1_SM2;
          }
          outC->SM2_state_act_SM1_State1 = _19_SM2_state_act_SM1_State1;
          break;
        case SSM_st_B1_passed_SM1_State1_SM2 :
          SM2_state_act_SM1_State1 = SSM_st_B1_passed_SM1_State1_SM2;
          outC->SM2_state_act_SM1_State1 = SM2_state_act_SM1_State1;
          break;
        
      }
      outC->SM2_clock_SM1_State1 = outC->SM2_state_act_SM1_State1;
      switch (outC->SM2_clock_SM1_State1) {
        case SSM_st_B1_SM1_State1_SM2 :
          _16_SM2_state_nxt_SM1_State1 = SSM_st_B1_SM1_State1_SM2;
          outC->SM2_state_nxt_SM1_State1 = _16_SM2_state_nxt_SM1_State1;
          break;
        case SSM_st_B1_passed_SM1_State1_SM2 :
          SM2_state_nxt_SM1_State1 = SSM_st_B1_passed_SM1_State1_SM2;
          outC->SM2_state_nxt_SM1_State1 = SM2_state_nxt_SM1_State1;
          break;
        
      }
      SM2_final_SM1_State1 = outC->SM2_state_nxt_SM1_State1 ==
        SSM_st_B1_passed_SM1_State1_SM2;
      if (outC->State1_weakb_clock_SM1) {
        outC->passed = kcg_false;
      }
      else {
        br_1_guard_SM1_State1 = SM3_final_SM1_State1 & SM2_final_SM1_State1;
        outC->br_1_clock_SM1_State1 = br_1_guard_SM1_State1;
        if (outC->br_1_clock_SM1_State1) {
          outC->passed = kcg_true;
        }
        else {
          outC->passed = kcg_false;
        }
      }
      break;
    case SSM_st_BG_passed_SM1 :
      outC->passed = kcg_false;
      break;
    
  }
  outC->_L19 = outC->passed;
  outC->_L24 = outC->_L23 | outC->_L19;
  kcg_copy_BaliseGroupData(&outC->_L1, &inC->BG);
  outC->_L4 = outC->_L1.NID_BG;
  outC->_L21 = inC->LRBG_in;
  if (outC->_L19) {
    outC->_L22 = outC->_L4;
  }
  else {
    outC->_L22 = outC->_L21;
  }
  outC->BG_passed = outC->_L24;
  switch (outC->SM1_state_act) {
    case SSM_st_State1_SM1 :
      if (outC->State1_weakb_clock_SM1) {
        _9_SM1_fired = outC->SM1_fired_strong;
        _8_SM1_reset_nxt = kcg_false;
        _7_SM1_state_nxt = SSM_st_State1_SM1;
        _3_SM1_fired = _9_SM1_fired;
        _2_SM1_reset_nxt = _8_SM1_reset_nxt;
        _1_SM1_state_nxt = _7_SM1_state_nxt;
      }
      else {
        if (br_1_guard_SM1_State1) {
          _6_SM1_fired = SSM_TR_State1_1_SM1;
        }
        else {
          _6_SM1_fired = SSM_TR_no_trans_SM1;
        }
        _5_SM1_reset_nxt = br_1_guard_SM1_State1;
        if (br_1_guard_SM1_State1) {
          _4_SM1_state_nxt = SSM_st_BG_passed_SM1;
        }
        else {
          _4_SM1_state_nxt = SSM_st_State1_SM1;
        }
        _3_SM1_fired = _6_SM1_fired;
        _2_SM1_reset_nxt = _5_SM1_reset_nxt;
        _1_SM1_state_nxt = _4_SM1_state_nxt;
      }
      switch (outC->_2_SM3_clock_SM1_State1) {
        case SSM_st_B2_SM1_State1_SM3 :
          if (br_1_guard_SM1_State1_SM3_B2) {
            _15_SM3_fired_strong_SM1_State1 = SSM_TR_B2_1_SM3_SM1_State1;
          }
          else {
            _15_SM3_fired_strong_SM1_State1 = SSM_TR_no_trans_SM3_SM1_State1;
          }
          outC->SM3_fired_strong_SM1_State1 = _15_SM3_fired_strong_SM1_State1;
          break;
        case SSM_st_B2_passed_SM1_State1_SM3 :
          SM3_fired_strong_SM1_State1 = SSM_TR_no_trans_SM3_SM1_State1;
          outC->SM3_fired_strong_SM1_State1 = SM3_fired_strong_SM1_State1;
          break;
        
      }
      switch (outC->SM3_clock_SM1_State1) {
        case SSM_st_B2_SM1_State1_SM3 :
          _12_SM3_fired_SM1_State1 = outC->SM3_fired_strong_SM1_State1;
          _11_SM3_reset_nxt_SM1_State1 = kcg_false;
          outC->SM3_fired_SM1_State1 = _12_SM3_fired_SM1_State1;
          break;
        case SSM_st_B2_passed_SM1_State1_SM3 :
          SM3_fired_SM1_State1 = outC->SM3_fired_strong_SM1_State1;
          SM3_reset_nxt_SM1_State1 = kcg_false;
          outC->SM3_fired_SM1_State1 = SM3_fired_SM1_State1;
          break;
        
      }
      if (outC->init) {
        SM3_reset_sel_SM1_State1 = kcg_false;
      }
      else {
        SM3_reset_sel_SM1_State1 = outC->SM3_reset_nxt_SM1_State1;
      }
      switch (outC->SM3_clock_SM1_State1) {
        case SSM_st_B2_SM1_State1_SM3 :
          outC->SM3_reset_nxt_SM1_State1 = _11_SM3_reset_nxt_SM1_State1;
          break;
        case SSM_st_B2_passed_SM1_State1_SM3 :
          outC->SM3_reset_nxt_SM1_State1 = SM3_reset_nxt_SM1_State1;
          break;
        
      }
      switch (outC->_2_SM3_clock_SM1_State1) {
        case SSM_st_B2_SM1_State1_SM3 :
          _14_SM3_reset_act_SM1_State1 = br_1_guard_SM1_State1_SM3_B2;
          break;
        case SSM_st_B2_passed_SM1_State1_SM3 :
          SM3_reset_act_SM1_State1 = kcg_false;
          break;
        
      }
      if (outC->init) {
        SM3_reset_prv_SM1_State1 = kcg_false;
      }
      else {
        SM3_reset_prv_SM1_State1 = outC->SM3_reset_act_SM1_State1;
      }
      switch (outC->_2_SM3_clock_SM1_State1) {
        case SSM_st_B2_SM1_State1_SM3 :
          outC->SM3_reset_act_SM1_State1 = _14_SM3_reset_act_SM1_State1;
          break;
        case SSM_st_B2_passed_SM1_State1_SM3 :
          outC->SM3_reset_act_SM1_State1 = SM3_reset_act_SM1_State1;
          break;
        
      }
      switch (outC->_3_SM2_clock_SM1_State1) {
        case SSM_st_B1_SM1_State1_SM2 :
          if (br_1_guard_SM1_State1_SM2_B1) {
            _21_SM2_fired_strong_SM1_State1 = SSM_TR_B1_1_SM2_SM1_State1;
          }
          else {
            _21_SM2_fired_strong_SM1_State1 = SSM_TR_no_trans_SM2_SM1_State1;
          }
          outC->SM2_fired_strong_SM1_State1 = _21_SM2_fired_strong_SM1_State1;
          break;
        case SSM_st_B1_passed_SM1_State1_SM2 :
          SM2_fired_strong_SM1_State1 = SSM_TR_no_trans_SM2_SM1_State1;
          outC->SM2_fired_strong_SM1_State1 = SM2_fired_strong_SM1_State1;
          break;
        
      }
      switch (outC->SM2_clock_SM1_State1) {
        case SSM_st_B1_SM1_State1_SM2 :
          _18_SM2_fired_SM1_State1 = outC->SM2_fired_strong_SM1_State1;
          _17_SM2_reset_nxt_SM1_State1 = kcg_false;
          outC->SM2_fired_SM1_State1 = _18_SM2_fired_SM1_State1;
          break;
        case SSM_st_B1_passed_SM1_State1_SM2 :
          SM2_fired_SM1_State1 = outC->SM2_fired_strong_SM1_State1;
          SM2_reset_nxt_SM1_State1 = kcg_false;
          outC->SM2_fired_SM1_State1 = SM2_fired_SM1_State1;
          break;
        
      }
      if (outC->init) {
        SM2_reset_sel_SM1_State1 = kcg_false;
      }
      else {
        SM2_reset_sel_SM1_State1 = outC->SM2_reset_nxt_SM1_State1;
      }
      switch (outC->SM2_clock_SM1_State1) {
        case SSM_st_B1_SM1_State1_SM2 :
          outC->SM2_reset_nxt_SM1_State1 = _17_SM2_reset_nxt_SM1_State1;
          break;
        case SSM_st_B1_passed_SM1_State1_SM2 :
          outC->SM2_reset_nxt_SM1_State1 = SM2_reset_nxt_SM1_State1;
          break;
        
      }
      switch (outC->_3_SM2_clock_SM1_State1) {
        case SSM_st_B1_SM1_State1_SM2 :
          _20_SM2_reset_act_SM1_State1 = br_1_guard_SM1_State1_SM2_B1;
          break;
        case SSM_st_B1_passed_SM1_State1_SM2 :
          SM2_reset_act_SM1_State1 = kcg_false;
          break;
        
      }
      if (outC->init) {
        SM2_reset_prv_SM1_State1 = kcg_false;
      }
      else {
        SM2_reset_prv_SM1_State1 = outC->SM2_reset_act_SM1_State1;
      }
      switch (outC->_3_SM2_clock_SM1_State1) {
        case SSM_st_B1_SM1_State1_SM2 :
          outC->SM2_reset_act_SM1_State1 = _20_SM2_reset_act_SM1_State1;
          break;
        case SSM_st_B1_passed_SM1_State1_SM2 :
          outC->SM2_reset_act_SM1_State1 = SM2_reset_act_SM1_State1;
          break;
        
      }
      outC->SM1_fired = _3_SM1_fired;
      break;
    case SSM_st_BG_passed_SM1 :
      SM1_fired = outC->SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_BG_passed_SM1;
      outC->SM1_fired = SM1_fired;
      break;
    
  }
  if (outC->init1) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_State1_SM1 :
      outC->SM1_reset_nxt = _2_SM1_reset_nxt;
      outC->SM1_state_nxt = _1_SM1_state_nxt;
      break;
    case SSM_st_BG_passed_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      break;
    
  }
  outC->LRBG = outC->_L22;
  switch (outC->SM1_state_act) {
    case SSM_st_State1_SM1 :
      outC->init = kcg_false;
      break;
    
  }
  outC->init1 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** INFRA_BG_passed.c
** Generation date: 2015-03-06T10:15:02
*************************************************************$ */

