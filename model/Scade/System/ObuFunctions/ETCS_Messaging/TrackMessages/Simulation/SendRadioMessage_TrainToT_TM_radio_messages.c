/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioMessage_TrainToT_TM_radio_messages.h"

void SendRadioMessage_TrainToT_reset_TM_radio_messages(
  outC_SendRadioMessage_TrainToT_TM_radio_messages *outC)
{
  outC->init = kcg_true;
}

/* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer */
void SendRadioMessage_TrainToT_TM_radio_messages(
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::wait */kcg_bool wait,
  outC_SendRadioMessage_TrainToT_TM_radio_messages *outC)
{
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::WritePointer */ kcg_int last_WritePointer;
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Pointer::ReadPointer */ kcg_int last_ReadPointer;
  
  if (outC->init) {
    last_WritePointer = 0;
  }
  else {
    last_WritePointer = outC->WritePointer;
  }
  if (outC->init) {
    last_ReadPointer = 0;
  }
  else {
    last_ReadPointer = outC->ReadPointer;
  }
  outC->_L12 = DIM_FIFO_Train_To_Track_TM_radio_messages;
  outC->_L11 = DIM_FIFO_Train_To_Track_TM_radio_messages;
  outC->_L3 = last_WritePointer;
  outC->_L7 = 1;
  outC->_L6 = outC->_L3 + outC->_L7;
  outC->_L10 = outC->_L6 % outC->_L12;
  outC->_L1 = wait;
  outC->_L2 = last_ReadPointer;
  outC->_L5 = 1;
  outC->_L4 = outC->_L2 + outC->_L5;
  if (outC->_L1) {
    outC->_L8 = outC->_L2;
  }
  else {
    outC->_L8 = outC->_L4;
  }
  outC->_L9 = outC->_L8 % outC->_L11;
  outC->WritePointer = outC->_L10;
  outC->ReadPointer = outC->_L9;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioMessage_TrainToT_TM_radio_messages.c
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

