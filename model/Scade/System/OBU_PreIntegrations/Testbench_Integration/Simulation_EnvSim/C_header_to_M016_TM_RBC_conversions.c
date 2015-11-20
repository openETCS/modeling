/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M016_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M016 */
void C_header_to_M016_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M016::header_in */M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  /* TM_RBC_conversions::C_header_to_M016::message_out */M_016_T_TM_radio_messages *message_out)
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
  (*message_out).nid_em = /* 1 */
    CAST_Int_to_NID_EM_TM_conversions((*header_in).field3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M016_TM_RBC_conversions.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

