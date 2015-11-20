/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages.h"

void FlashingOperator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator */
void FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::OnOff */kcg_bool OnOff,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SystemTime */kcg_int SystemTime,
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::Interval */kcg_int Interval,
  outC_FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L3 */ kcg_bool _L3_SM1_start;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1::start::_L20 */ kcg_int _L20_SM1_start;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ _4_SSM_ST_SM1 SM1_state_sel;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ _4_SSM_ST_SM1 SM1_state_act;
  /* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */ kcg_bool SM1_reset_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_sel = SSM_st_stop_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_stop_SM1 :
      if (OnOff) {
        SM1_state_act = SSM_st_start_SM1;
      }
      else {
        SM1_state_act = SSM_st_stop_SM1;
      }
      SM1_reset_act = OnOff;
      break;
    case SSM_st_start_SM1 :
      SM1_reset_act = !OnOff;
      if (SM1_reset_act) {
        SM1_state_act = SSM_st_stop_SM1;
      }
      else {
        SM1_state_act = SSM_st_start_SM1;
      }
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_start_SM1 :
      outC->active = kcg_true;
      if (SM1_reset_act) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        _L3_SM1_start = kcg_false;
        _L20_SM1_start = 0;
      }
      else {
        _L20_SM1_start = outC->Counter_SM1_start;
        _L3_SM1_start = outC->_L10_SM1_start;
      }
      if (20 == _L20_SM1_start) {
        outC->Counter_SM1_start = 0;
      }
      else {
        outC->Counter_SM1_start = _L20_SM1_start + 1;
      }
      if (outC->Counter_SM1_start == 0) {
        outC->_L10_SM1_start = !_L3_SM1_start;
      }
      else {
        outC->_L10_SM1_start = _L3_SM1_start;
      }
      outC->SM1_state_nxt = SSM_st_start_SM1;
      outC->flashigOut = outC->_L10_SM1_start;
      outC->init1 = kcg_false;
      break;
    case SSM_st_stop_SM1 :
      outC->flashigOut = kcg_false;
      outC->active = kcg_false;
      outC->SM1_state_nxt = SSM_st_stop_SM1;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlashingOperator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

