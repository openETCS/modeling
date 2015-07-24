/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M003_TM_radio_messages.h"

/* TM_radio_messages::C_header_to_M003 */
void C_header_to_M003_TM_radio_messages(
  /* TM_radio_messages::C_header_to_M003::header_in */M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  /* TM_radio_messages::C_header_to_M003::message_out */M_003_T_TM_radio_messages *message_out)
{
  (*message_out).valid = (*header_in).valid;
  (*message_out).nid_message = /* 1 */
    CAST_Int_to_NID_MESSAGE_TM_conversions((*header_in).nid_message);
  (*message_out).l_message = /* 1 */
    CAST_Int_to_L_MESSAGE_TM_conversions((*header_in).l_message);
  (*message_out).t_train = /* 1 */
    CAST_Int_to_T_TRAIN_TM_conversions((*header_in).t_train);
  (*message_out).m_ack = /* 1 */
    CAST_Int_to_M_ACK_TM_conversions((*header_in).field1);
  (*message_out).nid_lrbg = /* 1 */
    CAST_Int_to_NID_LRBG_TM_conversions((*header_in).field2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M003_TM_radio_messages.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

