/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config E:/DMI_TestEnvironment_14_05_15/model/Scade/System/DMI_Control/SCADE Display/Widgets/GenericButtonBehaviour/GenericButtonBehaviour/Simulation\kcg_s2c_config.txt
** Generation date: 2015-05-14T17:18:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ButtonBehaviour.h"

void ButtonBehaviour_reset(outC_ButtonBehaviour *outC)
{
  outC->init = kcg_true;
}

/* ButtonBehaviour */
void ButtonBehaviour(inC_ButtonBehaviour *inC, outC_ButtonBehaviour *outC)
{
  /* ButtonBehaviour::SM1 */ SSM_TR_SM1 _4_SM1_fired;
  /* ButtonBehaviour::SM1 */ kcg_bool _3_SM1_reset_nxt;
  /* ButtonBehaviour::SM1 */ SSM_ST_SM1 _2_SM1_state_nxt;
  /* ButtonBehaviour::isPressed */ kcg_bool _1_isPressed;
  /* ButtonBehaviour::SM1 */ SSM_TR_SM1 SM1_fired;
  /* ButtonBehaviour::SM1 */ kcg_bool SM1_reset_nxt;
  /* ButtonBehaviour::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* ButtonBehaviour::isPressed */ kcg_bool isPressed;
  /* ButtonBehaviour::SM1 */ SSM_TR_SM1 _7_SM1_fired_strong;
  /* ButtonBehaviour::SM1 */ kcg_bool _6_SM1_reset_act;
  /* ButtonBehaviour::SM1 */ SSM_ST_SM1 _5_SM1_state_act;
  /* ButtonBehaviour::SM1::Released */ kcg_bool br_1_guard_SM1_Released;
  /* ButtonBehaviour::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* ButtonBehaviour::SM1 */ kcg_bool SM1_reset_act;
  /* ButtonBehaviour::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* ButtonBehaviour::SM1::Pressed */ kcg_bool br_1_guard_SM1_Pressed;
  /* ButtonBehaviour::SM1 */ kcg_bool SM1_reset_sel;
  /* ButtonBehaviour::SM1 */ kcg_bool SM1_reset_prv;
  
  if (outC->init) {
    outC->SM1_state_sel = SSM_st_Released_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Released_SM1 :
      br_1_guard_SM1_Released = inC->pressed;
      if (br_1_guard_SM1_Released) {
        _5_SM1_state_act = SSM_st_Pressed_SM1;
      }
      else {
        _5_SM1_state_act = SSM_st_Released_SM1;
      }
      outC->SM1_state_act = _5_SM1_state_act;
      if (br_1_guard_SM1_Released) {
        _7_SM1_fired_strong = SSM_TR_Released_1_SM1;
      }
      else {
        _7_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _7_SM1_fired_strong;
      break;
    case SSM_st_Pressed_SM1 :
      br_1_guard_SM1_Pressed = inC->released;
      if (br_1_guard_SM1_Pressed) {
        SM1_state_act = SSM_st_Released_SM1;
      }
      else {
        SM1_state_act = SSM_st_Pressed_SM1;
      }
      outC->SM1_state_act = SM1_state_act;
      if (br_1_guard_SM1_Pressed) {
        SM1_fired_strong = SSM_TR_Pressed_1_SM1;
      }
      else {
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Released_SM1 :
      _4_SM1_fired = outC->SM1_fired_strong;
      _3_SM1_reset_nxt = kcg_false;
      _2_SM1_state_nxt = SSM_st_Released_SM1;
      outC->_L1_SM1_Released = kcg_false;
      _1_isPressed = outC->_L1_SM1_Released;
      outC->SM1_fired = _4_SM1_fired;
      break;
    case SSM_st_Pressed_SM1 :
      SM1_fired = outC->SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_Pressed_SM1;
      outC->_L1_SM1_Pressed = kcg_true;
      isPressed = outC->_L1_SM1_Pressed;
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
    case SSM_st_Released_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt;
      outC->SM1_state_nxt = _2_SM1_state_nxt;
      outC->isPressed = _1_isPressed;
      break;
    case SSM_st_Pressed_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      outC->isPressed = isPressed;
      break;
    
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Released_SM1 :
      _6_SM1_reset_act = br_1_guard_SM1_Released;
      break;
    case SSM_st_Pressed_SM1 :
      SM1_reset_act = br_1_guard_SM1_Pressed;
      break;
    
  }
  if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Released_SM1 :
      outC->SM1_reset_act = _6_SM1_reset_act;
      break;
    case SSM_st_Pressed_SM1 :
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ButtonBehaviour.c
** Generation date: 2015-05-14T17:18:06
*************************************************************$ */

