/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_2_SendRadioMessage_TrainToT_TM_radio_messages.h"

void _2_SendRadioMessage_TrainToT_reset_TM_radio_messages(
  outC__2_SendRadioMessage_TrainToT_TM_radio_messages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  _1_SendRadioMessage_TrainToT_reset_TM_radio_messages(&outC->Context_1);
}

/* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO */
void _2_SendRadioMessage_TrainToT_TM_radio_messages(
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::i */kcg_int i,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::Acc */M_TrainTrack_Radio_TM_radio_messages *Acc,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::New_Message */M_TrainTrack_Radio_TM_radio_messages *New_Message,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::ReadPointer */kcg_int ReadPointer,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_FIFO::WritePointer */kcg_int WritePointer,
  outC__2_SendRadioMessage_TrainToT_TM_radio_messages *outC)
{
  M_TrainTrack_Radio_TM_radio_messages tmp;
  M_TrainTrack_Radio_TM_radio_messages tmp1;
  
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L15, Acc);
  outC->_L6 = ReadPointer;
  outC->_L12 = i;
  outC->_L13 = outC->_L6 == outC->_L12;
  outC->_L7 = WritePointer;
  outC->_L4 = i;
  outC->_L9 = outC->_L7 == outC->_L4;
  outC->tmp = outC->_L9;
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L5, New_Message);
  if (outC->tmp) {
    /* 1 */
    _1_SendRadioMessage_TrainToT_TM_radio_messages(
      &outC->_L5,
      &outC->Context_1);
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(
      &tmp1,
      &outC->Context_1.Message_out);
  }
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(
    &outC->_L11,
    (M_TrainTrack_Radio_TM_radio_messages *)
      &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  if (outC->tmp) {
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L10, &tmp1);
  }
  else {
    if (outC->init) {
      kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&tmp, &outC->_L11);
    }
    else {
      kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&tmp, &outC->_L10);
    }
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L10, &tmp);
  }
  if (outC->_L13) {
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L14, &outC->_L10);
  }
  else {
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L14, &outC->_L15);
  }
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(
    &outC->MessageBus_out,
    &outC->_L14);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _2_SendRadioMessage_TrainToT_TM_radio_messages.c
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

