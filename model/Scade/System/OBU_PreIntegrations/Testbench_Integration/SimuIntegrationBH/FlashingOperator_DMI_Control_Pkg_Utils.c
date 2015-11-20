/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlashingOperator_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void FlashingOperator_init_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->SM1_fired = _12_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _12_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = _8_SSM_st_stop_SM1;
  outC->SM1_state_sel = _8_SSM_st_stop_SM1;
  outC->_L9_SM1_start = kcg_true;
  outC->_L6_SM1_start = kcg_true;
  outC->_L7_SM1_start = kcg_true;
  outC->_L4_SM1_start = kcg_true;
  outC->_L3_SM1_start = kcg_true;
  outC->_L2_SM1_start = kcg_true;
  outC->_L12_SM1_start = kcg_true;
  outC->_L13_SM1_start = 0;
  outC->_L15_SM1_start = 0;
  outC->_L20_SM1_start = 0;
  outC->_L19_SM1_start = 0;
  outC->_L18_SM1_start = 0;
  outC->_L21_SM1_start = 0;
  outC->_L22_SM1_start = kcg_true;
  outC->_L23_SM1_start = 0;
  outC->_L24_SM1_start = 0;
  outC->_L25_SM1_start = 0;
  outC->_L26_SM1_start = kcg_true;
  outC->_L27_SM1_start = 0;
  outC->_L1_SM1_stop = kcg_true;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = _8_SSM_st_stop_SM1;
  outC->counter_SM1_start = 0;
  outC->_L10_SM1_start = kcg_true;
  outC->active = kcg_true;
  outC->flashigOut = kcg_true;
  /* 2 */ countDownTimer_init_MoRC_Pck_Utils(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


void FlashingOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  /* 2 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_2);
}

/* DMI_Control_Pkg::Utils::FlashingOperator */
void FlashingOperator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FlashingOperator::OnOff */ kcg_bool OnOff,
  /* DMI_Control_Pkg::Utils::FlashingOperator::SystemTime */ kcg_int SystemTime,
  /* DMI_Control_Pkg::Utils::FlashingOperator::Interval */ kcg_int Interval,
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC)
{
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _13_SSM_TR_SM1 _5_SM1_fired;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static kcg_bool _4_SM1_reset_nxt;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _9_SSM_ST_SM1 _3_SM1_state_nxt;
  /* DMI_Control_Pkg::Utils::FlashingOperator::active */
  static kcg_bool _2_active;
  /* DMI_Control_Pkg::Utils::FlashingOperator::flashigOut */
  static kcg_bool _1_flashigOut;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _13_SSM_TR_SM1 SM1_fired;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _9_SSM_ST_SM1 SM1_state_nxt;
  /* DMI_Control_Pkg::Utils::FlashingOperator::active */
  static kcg_bool active;
  /* DMI_Control_Pkg::Utils::FlashingOperator::flashigOut */
  static kcg_bool flashigOut;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1::start::counter */
  static kcg_int last_counter_SM1_start;
  static kcg_bool _9_noname;
  static kcg_bool noname;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _13_SSM_TR_SM1 _8_SM1_fired_strong;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static kcg_bool _7_SM1_reset_act;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _9_SSM_ST_SM1 _6_SM1_state_act;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1::stop */
  static kcg_bool br_1_guard_SM1_stop;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _13_SSM_TR_SM1 SM1_fired_strong;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static kcg_bool SM1_reset_act;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static _9_SSM_ST_SM1 SM1_state_act;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1::start */
  static kcg_bool br_1_guard_SM1_start;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static kcg_bool SM1_reset_sel;
  /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
  static kcg_bool SM1_reset_prv;
  
  /* init_SM1 */ if (outC->init) {
    outC->SM1_state_sel = _8_SSM_st_stop_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  /* sel_SM1 */ switch (outC->SM1_state_sel) {
    case _8_SSM_st_stop_SM1 :
      br_1_guard_SM1_stop = OnOff;
      if (br_1_guard_SM1_stop) {
        _6_SM1_state_act = _7_SSM_st_start_SM1;
      }
      else {
        _6_SM1_state_act = _8_SSM_st_stop_SM1;
      }
      outC->SM1_state_act = _6_SM1_state_act;
      break;
    case _7_SSM_st_start_SM1 :
      br_1_guard_SM1_start = !OnOff;
      if (br_1_guard_SM1_start) {
        SM1_state_act = _8_SSM_st_stop_SM1;
      }
      else {
        SM1_state_act = _7_SSM_st_start_SM1;
      }
      outC->SM1_state_act = SM1_state_act;
      break;
    
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  /* sel_SM1 */ switch (outC->SM1_state_sel) {
    case _8_SSM_st_stop_SM1 :
      _7_SM1_reset_act = br_1_guard_SM1_stop;
      outC->SM1_reset_act = _7_SM1_reset_act;
      break;
    case _7_SSM_st_start_SM1 :
      SM1_reset_act = br_1_guard_SM1_start;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  /* act_SM1 */ switch (outC->SM1_state_act) {
    case _7_SSM_st_start_SM1 :
      if (outC->SM1_reset_act) {
        outC->init1 = kcg_true;
      }
      break;
    
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* sel_SM1 */ switch (outC->SM1_state_sel) {
    case _8_SSM_st_stop_SM1 :
      if (br_1_guard_SM1_stop) {
        _8_SM1_fired_strong = _11_SSM_TR_stop_1_SM1;
      }
      else {
        _8_SM1_fired_strong = _12_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _8_SM1_fired_strong;
      break;
    case _7_SSM_st_start_SM1 :
      if (br_1_guard_SM1_start) {
        SM1_fired_strong = _10_SSM_TR_start_1_SM1;
      }
      else {
        SM1_fired_strong = _12_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (outC->SM1_state_act) {
    case _8_SSM_st_stop_SM1 :
      _1_flashigOut = kcg_false;
      outC->flashigOut = _1_flashigOut;
      outC->_L1_SM1_stop = kcg_false;
      _2_active = outC->_L1_SM1_stop;
      outC->active = _2_active;
      _3_SM1_state_nxt = _8_SSM_st_stop_SM1;
      outC->SM1_state_nxt = _3_SM1_state_nxt;
      _4_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _4_SM1_reset_nxt;
      _5_SM1_fired = outC->SM1_fired_strong;
      outC->SM1_fired = _5_SM1_fired;
      break;
    case _7_SSM_st_start_SM1 :
      /* fby_1_init_2 */ if (outC->init1) {
        outC->_L3_SM1_start = kcg_false;
      }
      else {
        outC->_L3_SM1_start = outC->_L10_SM1_start;
      }
      /* last_init_ck_counter */ if (outC->init1) {
        last_counter_SM1_start = 0;
      }
      else {
        last_counter_SM1_start = outC->counter_SM1_start;
      }
      outC->_L23_SM1_start = 20;
      outC->_L20_SM1_start = last_counter_SM1_start;
      outC->_L22_SM1_start = outC->_L23_SM1_start == outC->_L20_SM1_start;
      outC->_L24_SM1_start = 0;
      outC->_L18_SM1_start = 1;
      outC->_L19_SM1_start = outC->_L20_SM1_start + outC->_L18_SM1_start;
      /* 3 */ if (outC->_L22_SM1_start) {
        outC->_L21_SM1_start = outC->_L24_SM1_start;
      }
      else {
        outC->_L21_SM1_start = outC->_L19_SM1_start;
      }
      outC->counter_SM1_start = outC->_L21_SM1_start;
      outC->_L25_SM1_start = outC->counter_SM1_start;
      outC->_L27_SM1_start = 0;
      outC->_L26_SM1_start = outC->_L25_SM1_start == outC->_L27_SM1_start;
      outC->_L9_SM1_start = !outC->_L3_SM1_start;
      /* 2 */ if (outC->_L26_SM1_start) {
        outC->_L10_SM1_start = outC->_L9_SM1_start;
      }
      else {
        outC->_L10_SM1_start = outC->_L3_SM1_start;
      }
      flashigOut = outC->_L10_SM1_start;
      outC->flashigOut = flashigOut;
      outC->_L12_SM1_start = kcg_true;
      active = outC->_L12_SM1_start;
      outC->active = active;
      SM1_state_nxt = _7_SSM_st_start_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = outC->SM1_fired_strong;
      outC->SM1_fired = SM1_fired;
      outC->_L2_SM1_start = kcg_true;
      outC->_L4_SM1_start = kcg_false;
      outC->_L13_SM1_start = SystemTime;
      outC->_L15_SM1_start = Interval;
      if (outC->SM1_reset_act) {
        /* 2 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_2);
      }
      /* 2 */
      countDownTimer_MoRC_Pck_Utils(
        outC->_L4_SM1_start,
        outC->_L4_SM1_start,
        outC->_L13_SM1_start,
        outC->_L2_SM1_start,
        outC->_L15_SM1_start,
        &outC->Context_2);
      outC->_L6_SM1_start = outC->Context_2.expired;
      outC->_L7_SM1_start = outC->Context_2.started;
      noname = outC->_L7_SM1_start;
      _9_noname = outC->_L6_SM1_start;
      break;
    
  }
  outC->init = kcg_false;
  /* act_SM1 */ switch (outC->SM1_state_act) {
    case _7_SSM_st_start_SM1 :
      outC->init1 = kcg_false;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FlashingOperator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

