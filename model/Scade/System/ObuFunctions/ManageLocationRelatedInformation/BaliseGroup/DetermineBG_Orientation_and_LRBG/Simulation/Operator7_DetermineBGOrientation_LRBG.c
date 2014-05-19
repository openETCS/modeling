/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-13T14:52:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Operator7_DetermineBGOrientation_LRBG.h"

void Operator7_reset_DetermineBGOrientation_LRBG(
  outC_Operator7_DetermineBGOrientation_LRBG *outC)
{
  outC->init = kcg_true;
}

/* DetermineBGOrientation_LRBG::Operator7 */
void Operator7_DetermineBGOrientation_LRBG(
  inC_Operator7_DetermineBGOrientation_LRBG *inC,
  outC_Operator7_DetermineBGOrientation_LRBG *outC)
{
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SSM_TR_SM1 _4_SM1_fired;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ kcg_bool _3_SM1_reset_nxt;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SSM_ST_SM1 _2_SM1_state_nxt;
  /* DetermineBGOrientation_LRBG::Operator7::Output1 */ kcg_int _1_Output1;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SSM_TR_SM1 SM1_fired;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ kcg_bool SM1_reset_nxt;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* DetermineBGOrientation_LRBG::Operator7::Output1 */ kcg_int Output1;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SSM_TR_SM1 _7_SM1_fired_strong;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ kcg_bool _6_SM1_reset_act;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SSM_ST_SM1 _5_SM1_state_act;
  /* DetermineBGOrientation_LRBG::Operator7::SM1::Off */ kcg_bool br_1_guard_SM1_Off;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ kcg_bool SM1_reset_act;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* DetermineBGOrientation_LRBG::Operator7::SM1::On */ kcg_bool br_1_guard_SM1_On;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ kcg_bool SM1_reset_sel;
  /* DetermineBGOrientation_LRBG::Operator7::SM1 */ kcg_bool SM1_reset_prv;
  
  if (outC->init) {
    outC->SM1_state_sel = SSM_st_Off_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Off_SM1 :
      br_1_guard_SM1_Off = inC->in == kcg_true;
      if (br_1_guard_SM1_Off) {
        _5_SM1_state_act = SSM_st_On_SM1;
      }
      else {
        _5_SM1_state_act = SSM_st_Off_SM1;
      }
      outC->SM1_state_act = _5_SM1_state_act;
      break;
    case SSM_st_On_SM1 :
      br_1_guard_SM1_On = inC->in == kcg_false;
      if (br_1_guard_SM1_On) {
        SM1_state_act = SSM_st_Off_SM1;
      }
      else {
        SM1_state_act = SSM_st_On_SM1;
      }
      outC->SM1_state_act = SM1_state_act;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Off_SM1 :
      _1_Output1 = 0;
      break;
    
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Off_SM1 :
      if (br_1_guard_SM1_Off) {
        _7_SM1_fired_strong = SSM_TR_Off_1_SM1;
      }
      else {
        _7_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _7_SM1_fired_strong;
      break;
    case SSM_st_On_SM1 :
      if (br_1_guard_SM1_On) {
        SM1_fired_strong = SSM_TR_On_1_SM1;
      }
      else {
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Off_SM1 :
      _4_SM1_fired = outC->SM1_fired_strong;
      _3_SM1_reset_nxt = kcg_false;
      _2_SM1_state_nxt = SSM_st_Off_SM1;
      outC->SM1_fired = _4_SM1_fired;
      break;
    case SSM_st_On_SM1 :
      SM1_fired = outC->SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_On_SM1;
      outC->_L4_SM1_On = 1;
      outC->_L3_SM1_On = inC->Input1;
      outC->_L2_SM1_On = outC->_L3_SM1_On + outC->_L4_SM1_On;
      Output1 = outC->_L2_SM1_On;
      outC->Signal1_SM1_On = kcg_false;
      outC->SM1_fired = SM1_fired;
      break;
    
  }
  if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Off_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt;
      outC->SM1_state_nxt = _2_SM1_state_nxt;
      outC->Output1 = _1_Output1;
      break;
    case SSM_st_On_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      outC->Output1 = Output1;
      break;
    
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Off_SM1 :
      _6_SM1_reset_act = br_1_guard_SM1_Off;
      break;
    case SSM_st_On_SM1 :
      SM1_reset_act = br_1_guard_SM1_On;
      break;
    
  }
  if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Off_SM1 :
      outC->SM1_reset_act = _6_SM1_reset_act;
      break;
    case SSM_st_On_SM1 :
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Operator7_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-13T14:52:26
*************************************************************$ */

