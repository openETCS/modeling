/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InformationFilter_InformationFilter_Pkg.h"

void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ TransitionBuffer_reset_InformationFilter_Pkg(&outC->Context_1);
}

/* InformationFilter_Pkg::InformationFilter */
void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inMode */M_MODE inMode,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inFilterEvents */filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */kcg_bool inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */kcg_bool inTrainDataValid,
  /* InformationFilter_Pkg::InformationFilter::inMorcStatus */morcStatus_T_RCM_Session_Types_Pkg *inMorcStatus,
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  static kcg_int tmp2;
  static M_LEVEL tmp1;
  static kcg_bool tmp;
  static ReceivedMessage_T_Common_Types_Pkg tmp3;
  /* InformationFilter_Pkg::InformationFilter::currBuffersize */
  static kcg_int last_currBuffersize;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _37_SSM_ST_SM1 SM1_state_sel;
  /* InformationFilter_Pkg::InformationFilter::SM1 */
  static _37_SSM_ST_SM1 SM1_state_act;
  /* InformationFilter_Pkg::InformationFilter::_L99 */
  static ReceivedMessage_T_Common_Types_Pkg _L99;
  
  if (outC->init) {
    last_currBuffersize = 0;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L99,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    SM1_state_sel = SSM_st_State1_SM1;
    tmp = kcg_false;
  }
  else {
    last_currBuffersize = outC->currBuffersize;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, &outC->bufferMsg);
    SM1_state_sel = outC->SM1_state_nxt;
    tmp = outC->storeInBuffer;
  }
  switch (SM1_state_sel) {
    case SSM_st_State1_SM1 :
      SM1_state_act = _36_SSM_st_State2_SM1;
      break;
    case _36_SSM_st_State2_SM1 :
      if (outC->init) {
        tmp2 = 0;
        tmp1 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
      }
      else {
        tmp2 = outC->rem_inSupervisingDevice;
        tmp1 = outC->rem_inLevel;
      }
      if (((inSupervisingDevice != tmp2) | (inLevel != tmp1)) &
        (last_currBuffersize > 0)) {
        SM1_state_act = SSM_st_State3_SM1;
      }
      else {
        SM1_state_act = _36_SSM_st_State2_SM1;
      }
      break;
    case SSM_st_State3_SM1 :
      if (last_currBuffersize == 0) {
        SM1_state_act = _36_SSM_st_State2_SM1;
      }
      else {
        SM1_state_act = SSM_st_State3_SM1;
      }
      break;
    
  }
  if (_L99.valid & tmp) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&tmp3, &_L99);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &tmp3,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  switch (SM1_state_act) {
    case SSM_st_State3_SM1 :
      outC->bufferHasPriority = kcg_true;
      outC->SM1_state_nxt = SSM_st_State3_SM1;
      break;
    case _36_SSM_st_State2_SM1 :
      outC->bufferHasPriority = kcg_false;
      outC->SM1_state_nxt = _36_SSM_st_State2_SM1;
      break;
    case SSM_st_State1_SM1 :
      if (outC->init) {
        outC->bufferHasPriority = kcg_false;
      }
      outC->SM1_state_nxt = SSM_st_State1_SM1;
      break;
    
  }
  /* 1 */
  TransitionBuffer_InformationFilter_Pkg(
    &tmp3,
    outC->bufferHasPriority,
    (kcg_bool)
      ((*inMorcStatus).session.phase == sp_terminated_RCM_Session_Types_Pkg),
    &outC->Context_1);
  outC->currBuffersize = outC->Context_1.outStacksize;
  if ((*inMessage).valid & outC->bufferHasPriority) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L108, inMessage);
  }
  else if (outC->init) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L108,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  outC->init = kcg_false;
  if (outC->bufferHasPriority) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, &outC->Context_1.Out);
  }
  else if (!kcg_comp_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L108,
      (struct__156299 *) &cDefaultRM_Common_Types_Pkg)) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, &outC->_L108);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L99, inMessage);
  }
  if (_L99.valid) {
    /* FilterSequence */
    FilterSequence_InformationFilter_Pkg(
      &_L99,
      inLevel,
      inFilterEvents,
      inSupervisingDevice,
      inMode,
      &outC->outMessage,
      &outC->bufferMsg,
      &outC->storeInBuffer);
  }
  else {
    outC->storeInBuffer = kcg_false;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->bufferMsg,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &_L99);
  }
  outC->rem_inLevel = inLevel;
  outC->rem_inSupervisingDevice = inSupervisingDevice;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InformationFilter_InformationFilter_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

