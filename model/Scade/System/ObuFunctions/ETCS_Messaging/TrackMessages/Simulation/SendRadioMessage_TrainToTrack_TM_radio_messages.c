/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioMessage_TrainToTrack_TM_radio_messages.h"

void SendRadioMessage_TrainToTrack_reset_TM_radio_messages(
  outC_SendRadioMessage_TrainToTrack_TM_radio_messages *outC)
{
  /* 1 */
  _3_SendRadioMessage_TrainToT_reset_TM_radio_messages(&outC->Context_1);
}

/* TM_radio_messages::SendRadioMessage_TrainToTrack */
void SendRadioMessage_TrainToTrack_TM_radio_messages(
  inC_SendRadioMessage_TrainToTrack_TM_radio_messages *inC,
  outC_SendRadioMessage_TrainToTrack_TM_radio_messages *outC)
{
  M_TrainTrack_Radio_TM_radio_messages tmp;
  
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L1, &inC->New_Message);
  outC->_L23 = outC->_L1.valid;
  outC->tmp = outC->_L23;
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L2, &inC->MessageBus);
  outC->_L20 = outC->_L2.valid;
  if (outC->tmp) {
    /* 1 */
    _3_SendRadioMessage_TrainToT_TM_radio_messages(
      &outC->_L1,
      outC->_L20,
      &outC->Context_1);
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(
      &tmp,
      &outC->Context_1.MessageBus_out);
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L3, &tmp);
  }
  else {
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(
      &outC->_L3,
      (M_TrainTrack_Radio_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  outC->_L21 = outC->_L3.valid;
  if (outC->_L21) {
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L22, &outC->_L3);
  }
  else {
    kcg_copy_M_TrainTrack_Radio_TM_radio_messages(&outC->_L22, &outC->_L2);
  }
  kcg_copy_M_TrainTrack_Radio_TM_radio_messages(
    &outC->MessageBus_out,
    &outC->_L22);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioMessage_TrainToTrack_TM_radio_messages.c
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */

