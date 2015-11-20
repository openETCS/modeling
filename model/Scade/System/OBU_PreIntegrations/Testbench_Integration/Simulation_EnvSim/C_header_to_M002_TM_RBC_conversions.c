/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M002_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M002 */
void C_header_to_M002_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M002::header_in */M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  /* TM_RBC_conversions::C_header_to_M002::message_out */M_002_T_TM_radio_messages *message_out)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  
  (*message_out).valid = (*header_in).valid;
  IfBlock1_clock_1 = (*header_in).field3 == INT_Q_SCALE_10cm_TM_conversions;
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
  if (IfBlock1_clock_1) {
    (*message_out).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*header_in).field3 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*message_out).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*header_in).field3 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*message_out).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*message_out).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  (*message_out).d_sr = /* 1 */
    CAST_Int_to_D_SR_TM_conversions((*header_in).field4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_header_to_M002_TM_RBC_conversions.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

