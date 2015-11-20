/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages.h"

void TxtMsgSimulator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator */
void TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::MousePressed */kcg_bool MousePressed,
  outC_TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */ _1_SSM_ST_SM1 SM1_state_act;
  
  if (outC->init) {
    outC->init = kcg_false;
    SM1_state_act = SSM_st_State0_SM1;
  }
  else {
    SM1_state_act = outC->SM1_state_nxt;
  }
  switch (SM1_state_act) {
    case SSM_st_insert1_SM1 :
      outC->SM1_state_nxt = SSM_st_State2_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important1_DMI_Control_Pkg);
      break;
    case SSM_st_State2_SM1 :
      if (MousePressed) {
        outC->SM1_state_nxt = SSM_st_insert2_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State2_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      break;
    case SSM_st_insert2_SM1 :
      outC->SM1_state_nxt = SSM_st_State4_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important1_DMI_Control_Pkg);
      break;
    case SSM_st_State4_SM1 :
      if (MousePressed) {
        outC->SM1_state_nxt = SSM_st_insert3_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State4_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      break;
    case SSM_st_insert3_SM1 :
      outC->SM1_state_nxt = SSM_st_State6_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important3_DMI_Control_Pkg);
      break;
    case SSM_st_State6_SM1 :
      if (MousePressed) {
        outC->SM1_state_nxt = SSM_st_insert4_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State6_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      break;
    case SSM_st_insert4_SM1 :
      outC->SM1_state_nxt = SSM_st_State8_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_auxi1_DMI_Control_Pkg);
      break;
    case SSM_st_State8_SM1 :
      if (MousePressed) {
        outC->SM1_state_nxt = SSM_st_insertAck1_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State8_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      break;
    case SSM_st_State0_SM1 :
      if (MousePressed) {
        outC->SM1_state_nxt = SSM_st_insert1_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State0_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      break;
    case SSM_st_insertAck2_SM1 :
      outC->SM1_state_nxt = SSM_st_State5_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_ack2_DMI_Control_Pkg);
      break;
    case SSM_st_insertAck1_SM1 :
      outC->SM1_state_nxt = SSM_st_State3_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_ack1_DMI_Control_Pkg);
      break;
    case SSM_st_State5_SM1 :
      if (MousePressed) {
        outC->SM1_state_nxt = SSM_st_insert5_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State5_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      break;
    case SSM_st_State3_SM1 :
      if (MousePressed) {
        outC->SM1_state_nxt = SSM_st_insertAck2_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State3_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      break;
    case SSM_st_insert5_SM1 :
      outC->SM1_state_nxt = SSM_st_State7_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_auxi3_DMI_Control_Pkg);
      break;
    case SSM_st_State7_SM1 :
      if (MousePressed) {
        outC->SM1_state_nxt = SSM_st_insert6_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State7_SM1;
      }
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      break;
    case SSM_st_insert6_SM1 :
      outC->SM1_state_nxt = SSM_st_State9_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_important1_DMI_Control_Pkg);
      break;
    case SSM_st_State9_SM1 :
      outC->SM1_state_nxt = SSM_st_State9_SM1;
      kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &outC->txt,
        (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cMsg_leer_DMI_Control_Pkg);
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TxtMsgSimulator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

