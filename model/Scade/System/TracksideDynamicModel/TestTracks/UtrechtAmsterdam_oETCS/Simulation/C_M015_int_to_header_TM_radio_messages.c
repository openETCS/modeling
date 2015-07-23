/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_M015_int_to_header_TM_radio_messages.h"

void C_M015_int_to_header_reset_TM_radio_messages(
  outC_C_M015_int_to_header_TM_radio_messages *outC)
{
}

/* TM_radio_messages::C_M015_int_to_header */
void C_M015_int_to_header_TM_radio_messages(
  /* TM_radio_messages::C_M015_int_to_header::Message_Data_in */M_015_int_T_TM_radio_messages *Message_Data_in,
  outC_C_M015_int_to_header_TM_radio_messages *outC)
{
  kcg_copy_M_015_int_T_TM_radio_messages(&outC->_L1, Message_Data_in);
  outC->_L26 = outC->_L1.d_emergencystop;
  outC->_L27 = outC->_L1.q_dir;
  outC->_L28 = outC->_L1.d_ref;
  outC->_L29 = outC->_L1.q_scale;
  outC->_L24 = outC->_L1.nid_em;
  outC->_L8 = outC->_L1.nid_lrbg;
  outC->_L7 = outC->_L1.m_ack;
  outC->_L6 = outC->_L1.t_train;
  outC->_L5 = outC->_L1.l_message;
  outC->_L4 = outC->_L1.nid_message;
  outC->_L19 = 0;
  outC->_L3 = outC->_L1.valid;
  outC->_L2.valid = outC->_L3;
  outC->_L2.nid_message = outC->_L4;
  outC->_L2.l_message = outC->_L5;
  outC->_L2.t_train = outC->_L6;
  outC->_L2.field1 = outC->_L7;
  outC->_L2.field2 = outC->_L8;
  outC->_L2.field3 = outC->_L24;
  outC->_L2.field4 = outC->_L29;
  outC->_L2.field5 = outC->_L28;
  outC->_L2.field6 = outC->_L27;
  outC->_L2.field7 = outC->_L26;
  outC->_L2.field8 = outC->_L19;
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_Header_Out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_M015_int_to_header_TM_radio_messages.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

