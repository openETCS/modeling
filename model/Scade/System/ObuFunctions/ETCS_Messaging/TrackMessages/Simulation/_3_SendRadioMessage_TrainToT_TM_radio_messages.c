/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_3_SendRadioMessage_TrainToT_TM_radio_messages.h"

void _3_SendRadioMessage_TrainToT_reset_TM_radio_messages(
  outC__3_SendRadioMessage_TrainToT_TM_radio_messages *outC)
{
  kcg_int i;
  
  for (i = 0; i < 20; i++) {
    /* 1 */
    _2_SendRadioMessage_TrainToT_reset_TM_radio_messages(
      &outC->_1_Context_1[i]);
  }
  /* 1 */ SendRadioMessage_TrainToT_reset_TM_radio_messages(&outC->Context_1);
}

/* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer */
void _3_SendRadioMessage_TrainToT_TM_radio_messages(
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::New_Message */M_TrainTrack_Radio_TM_radio_messages *New_Message,
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Buffer::Wait */kcg_bool Wait,
  outC__3_SendRadioMessage_TrainToT_TM_radio_messages *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  M_TrainTrack_Radio_TM_radio_messages tmp;
  kcg_int i;
  
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L1, New_Message);
  for (i3 = 0; i3 < 20; i3++) {
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L11[i3], &outC->_L1);
  }
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(
    &outC->_L10,
    (M_TrainTrack_Radio_TM_radio_messages *)
      &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  outC->_L3 = Wait;
  /* 1 */
  SendRadioMessage_TrainToT_TM_radio_messages(outC->_L3, &outC->Context_1);
  outC->_L5 = outC->Context_1.ReadPointer;
  outC->_L6 = outC->Context_1.WritePointer;
  for (i2 = 0; i2 < 20; i2++) {
    outC->_L9[i2] = outC->_L6;
  }
  for (i1 = 0; i1 < 20; i1++) {
    outC->_L8[i1] = outC->_L5;
  }
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L4, &outC->_L10);
  for (i = 0; i < 20; i++) {
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&tmp, &outC->_L4);
    /* 1 */
    _2_SendRadioMessage_TrainToT_TM_radio_messages(
      i,
      &tmp,
      &outC->_L11[i],
      outC->_L8[i],
      outC->_L9[i],
      &outC->_1_Context_1[i]);
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(
      &outC->_L4,
      &outC->_1_Context_1[i].MessageBus_out);
  }
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(
    &outC->MessageBus_out,
    &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _3_SendRadioMessage_TrainToT_TM_radio_messages.c
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

