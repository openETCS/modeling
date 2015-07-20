/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_1_SendRadioMessage_TrainToT_TM_radio_messages.h"

void _1_SendRadioMessage_TrainToT_reset_TM_radio_messages(
  outC__1_SendRadioMessage_TrainToT_TM_radio_messages *outC)
{
}

/* TM_radio_messages::SendRadioMessage_TrainToTrack_Storage */
void _1_SendRadioMessage_TrainToT_TM_radio_messages(
  /* TM_radio_messages::SendRadioMessage_TrainToTrack_Storage::New_Message */M_TrainTrack_Radio_TM_radio_messages *New_Message,
  outC__1_SendRadioMessage_TrainToT_TM_radio_messages *outC)
{
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L1, New_Message);
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->Message_out, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _1_SendRadioMessage_TrainToT_TM_radio_messages.c
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

