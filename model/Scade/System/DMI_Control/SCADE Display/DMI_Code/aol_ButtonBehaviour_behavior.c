/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config P:/modeling/model/Scade/System/DMI_Control/SCADE Display/DMI_Code/config.txt
** Generation date: 2017-05-30T13:27:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "aol_ButtonBehaviour_behavior.h"

#ifndef KCG_USER_DEFINED_INIT
void aol_ButtonBehaviour_behavior_init(outC_aol_ButtonBehaviour_behavior *outC)
{
  outC->init = kcg_true;
  outC->SM1_state_nxt_ButtonBehaviour = BHVR_SSM_st_Released_SM1;
  outC->SM1_reset_act_ButtonBehaviour = kcg_true;
  outC->SM1_reset_nxt_ButtonBehaviour = kcg_true;
  outC->isPressed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void aol_ButtonBehaviour_behavior_reset(outC_aol_ButtonBehaviour_behavior *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* aol_ButtonBehaviour_behavior */
void aol_ButtonBehaviour_behavior(
  inC_aol_ButtonBehaviour_behavior *inC,
  outC_aol_ButtonBehaviour_behavior *outC)
{
  /* ButtonBehaviour::isPressed */ kcg_bool _11_isPressed_ButtonBehaviour;
  /* ButtonBehaviour::released */ kcg_bool released_ButtonBehaviour;
  /* ButtonBehaviour::pressed */ kcg_bool pressed_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_TR_SM1 SM1_fired_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_TR_SM1 SM1_fired_strong_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ kcg_bool SM1_reset_prv_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ kcg_bool SM1_reset_sel_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_ST_SM1 SM1_state_act_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_ST_SM1 SM1_state_sel_ButtonBehaviour;
  /* ButtonBehaviour::SM1::Pressed */ kcg_bool br_1_guard_ButtonBehaviour_SM1_Pressed;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_ST_SM1 _1_SM1_state_act_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ kcg_bool SM1_reset_act_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_TR_SM1 _2_SM1_fired_strong_ButtonBehaviour;
  /* ButtonBehaviour::SM1::Released */ kcg_bool br_1_guard_ButtonBehaviour_SM1_Released;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_ST_SM1 _3_SM1_state_act_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ kcg_bool _4_SM1_reset_act_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_TR_SM1 _5_SM1_fired_strong_ButtonBehaviour;
  /* ButtonBehaviour::SM1::Pressed::_L1 */ kcg_bool _L1_ButtonBehaviour_SM1_Pressed;
  /* ButtonBehaviour::isPressed */ kcg_bool isPressed_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_ST_SM1 SM1_state_nxt_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ kcg_bool SM1_reset_nxt_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_TR_SM1 _6_SM1_fired_ButtonBehaviour;
  /* ButtonBehaviour::SM1::Released::_L1 */ kcg_bool _L1_ButtonBehaviour_SM1_Released;
  /* ButtonBehaviour::isPressed */ kcg_bool _7_isPressed_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_ST_SM1 _8_SM1_state_nxt_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ kcg_bool _9_SM1_reset_nxt_ButtonBehaviour;
  /* ButtonBehaviour::SM1 */ BHVR_SSM_TR_SM1 _10_SM1_fired_ButtonBehaviour;
  
  /* ButtonBehaviour_init_SM1 */ if (outC->init) {
    SM1_state_sel_ButtonBehaviour = BHVR_SSM_st_Released_SM1;
  }
  else {
    SM1_state_sel_ButtonBehaviour = outC->SM1_state_nxt_ButtonBehaviour;
  }
  released_ButtonBehaviour = inC->released;
  /* ButtonBehaviour_sel_SM1 */ switch (SM1_state_sel_ButtonBehaviour) {
    case BHVR_SSM_st_Pressed_SM1 :
      br_1_guard_ButtonBehaviour_SM1_Pressed = released_ButtonBehaviour;
      if (br_1_guard_ButtonBehaviour_SM1_Pressed) {
        _1_SM1_state_act_ButtonBehaviour = BHVR_SSM_st_Released_SM1;
      }
      else {
        _1_SM1_state_act_ButtonBehaviour = BHVR_SSM_st_Pressed_SM1;
      }
      break;
    
  }
  pressed_ButtonBehaviour = inC->pressed;
  /* ButtonBehaviour_sel_SM1 */ switch (SM1_state_sel_ButtonBehaviour) {
    case BHVR_SSM_st_Released_SM1 :
      br_1_guard_ButtonBehaviour_SM1_Released = pressed_ButtonBehaviour;
      if (br_1_guard_ButtonBehaviour_SM1_Released) {
        _3_SM1_state_act_ButtonBehaviour = BHVR_SSM_st_Pressed_SM1;
      }
      else {
        _3_SM1_state_act_ButtonBehaviour = BHVR_SSM_st_Released_SM1;
      }
      SM1_state_act_ButtonBehaviour = _3_SM1_state_act_ButtonBehaviour;
      break;
    case BHVR_SSM_st_Pressed_SM1 :
      SM1_state_act_ButtonBehaviour = _1_SM1_state_act_ButtonBehaviour;
      break;
    
  }
  /* ButtonBehaviour_act_SM1 */ switch (SM1_state_act_ButtonBehaviour) {
    case BHVR_SSM_st_Released_SM1 :
      _L1_ButtonBehaviour_SM1_Released = kcg_false;
      _7_isPressed_ButtonBehaviour = _L1_ButtonBehaviour_SM1_Released;
      _11_isPressed_ButtonBehaviour = _7_isPressed_ButtonBehaviour;
      break;
    case BHVR_SSM_st_Pressed_SM1 :
      _L1_ButtonBehaviour_SM1_Pressed = kcg_true;
      isPressed_ButtonBehaviour = _L1_ButtonBehaviour_SM1_Pressed;
      _11_isPressed_ButtonBehaviour = isPressed_ButtonBehaviour;
      break;
    
  }
  outC->isPressed = _11_isPressed_ButtonBehaviour;
  /* ButtonBehaviour_init_SM1 */ if (outC->init) {
    SM1_reset_sel_ButtonBehaviour = kcg_false;
  }
  else {
    SM1_reset_sel_ButtonBehaviour = outC->SM1_reset_nxt_ButtonBehaviour;
  }
  /* ButtonBehaviour_init_SM1 */ if (outC->init) {
    SM1_reset_prv_ButtonBehaviour = kcg_false;
  }
  else {
    SM1_reset_prv_ButtonBehaviour = outC->SM1_reset_act_ButtonBehaviour;
  }
  /* ButtonBehaviour_sel_SM1 */ switch (SM1_state_sel_ButtonBehaviour) {
    case BHVR_SSM_st_Released_SM1 :
      _4_SM1_reset_act_ButtonBehaviour =
        br_1_guard_ButtonBehaviour_SM1_Released;
      outC->SM1_reset_act_ButtonBehaviour = _4_SM1_reset_act_ButtonBehaviour;
      if (br_1_guard_ButtonBehaviour_SM1_Released) {
        _5_SM1_fired_strong_ButtonBehaviour = BHVR_SSM_TR_Released_1_SM1;
      }
      else {
        _5_SM1_fired_strong_ButtonBehaviour = BHVR_SSM_TR_no_trans_SM1;
      }
      SM1_fired_strong_ButtonBehaviour = _5_SM1_fired_strong_ButtonBehaviour;
      break;
    case BHVR_SSM_st_Pressed_SM1 :
      SM1_reset_act_ButtonBehaviour = br_1_guard_ButtonBehaviour_SM1_Pressed;
      outC->SM1_reset_act_ButtonBehaviour = SM1_reset_act_ButtonBehaviour;
      if (br_1_guard_ButtonBehaviour_SM1_Pressed) {
        _2_SM1_fired_strong_ButtonBehaviour = BHVR_SSM_TR_Pressed_1_SM1;
      }
      else {
        _2_SM1_fired_strong_ButtonBehaviour = BHVR_SSM_TR_no_trans_SM1;
      }
      SM1_fired_strong_ButtonBehaviour = _2_SM1_fired_strong_ButtonBehaviour;
      break;
    
  }
  /* ButtonBehaviour_act_SM1 */ switch (SM1_state_act_ButtonBehaviour) {
    case BHVR_SSM_st_Released_SM1 :
      _8_SM1_state_nxt_ButtonBehaviour = BHVR_SSM_st_Released_SM1;
      outC->SM1_state_nxt_ButtonBehaviour = _8_SM1_state_nxt_ButtonBehaviour;
      _9_SM1_reset_nxt_ButtonBehaviour = kcg_false;
      outC->SM1_reset_nxt_ButtonBehaviour = _9_SM1_reset_nxt_ButtonBehaviour;
      _10_SM1_fired_ButtonBehaviour = SM1_fired_strong_ButtonBehaviour;
      SM1_fired_ButtonBehaviour = _10_SM1_fired_ButtonBehaviour;
      break;
    case BHVR_SSM_st_Pressed_SM1 :
      SM1_state_nxt_ButtonBehaviour = BHVR_SSM_st_Pressed_SM1;
      outC->SM1_state_nxt_ButtonBehaviour = SM1_state_nxt_ButtonBehaviour;
      SM1_reset_nxt_ButtonBehaviour = kcg_false;
      outC->SM1_reset_nxt_ButtonBehaviour = SM1_reset_nxt_ButtonBehaviour;
      _6_SM1_fired_ButtonBehaviour = SM1_fired_strong_ButtonBehaviour;
      SM1_fired_ButtonBehaviour = _6_SM1_fired_ButtonBehaviour;
      break;
    
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** aol_ButtonBehaviour_behavior.c
** Generation date: 2017-05-30T13:27:39
*************************************************************$ */

