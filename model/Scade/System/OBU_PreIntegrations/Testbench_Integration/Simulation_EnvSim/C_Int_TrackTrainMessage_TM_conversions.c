/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_Int_TrackTrainMessage_TM_conversions.h"

/* TM_conversions::C_Int_TrackTrainMessage */
void C_Int_TrackTrainMessage_TM_conversions(
  /* TM_conversions::C_Int_TrackTrainMessage::Message_In */Radio_TrackTrain_Header_T_TM *Message_In,
  /* TM_conversions::C_Int_TrackTrainMessage::Message_Out */Radio_TrackTrain_Header_T_TM_transitional *Message_Out)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  
  (*Message_Out).radioDevice = (*Message_In).radioDevice;
  (*Message_Out).receivedSystemTime = (*Message_In).receivedSystemTime;
  else_clock_1_IfBlock1 = (*Message_In).q_scale ==
    INT_Q_SCALE_10cm_TM_conversions;
  IfBlock1_clock_1 = (*Message_In).q_dir == INT_Q_DIR_nomiinal_TM_conversions;
  (*Message_Out).nid_message = /* 1 */
    CAST_Int_to_NID_MESSAGE_TM_conversions((*Message_In).nid_message);
  (*Message_Out).t_train = /* 1 */
    CAST_Int_to_T_TRAIN_TM_conversions((*Message_In).t_train);
  (*Message_Out).m_ack = /* 1 */
    CAST_Int_to_M_ACK_TM_conversions((*Message_In).m_ack);
  (*Message_Out).nid_lrbg = /* 1 */
    CAST_Int_to_NID_LRBG_TM_conversions((*Message_In).nid_lrbg);
  (*Message_Out).t_train_reference = /* 2 */
    CAST_Int_to_T_TRAIN_TM_conversions((*Message_In).t_train_reference);
  (*Message_Out).nid_em = /* 1 */
    CAST_Int_to_NID_EM_TM_conversions((*Message_In).nid_em);
  if (else_clock_1_IfBlock1) {
    (*Message_Out).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _2_else_clock_1_IfBlock1 = (*Message_In).q_scale ==
      INT_Q_SCALE_1m_TM_conversions;
    if (_2_else_clock_1_IfBlock1) {
      (*Message_Out).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      _1_else_clock_1_IfBlock1 = (*Message_In).q_scale ==
        INT_Q_SCALE_10m_TM_conversions;
      if (_1_else_clock_1_IfBlock1) {
        (*Message_Out).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*Message_Out).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  (*Message_Out).d_sr = /* 1 */
    CAST_Int_to_D_SR_TM_conversions((*Message_In).d_sr);
  (*Message_Out).t_sh_rqst = /* 3 */
    CAST_Int_to_T_TRAIN_TM_conversions((*Message_In).t_sh_rqst);
  (*Message_Out).d_ref = /* 1 */
    CAST_Int_to_D_REF_TM_conversions((*Message_In).d_ref);
  if (IfBlock1_clock_1) {
    (*Message_Out).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*Message_In).q_dir ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*Message_Out).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*Message_In).q_dir ==
        INT_Q_DIR_both_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*Message_Out).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*Message_Out).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*Message_Out).d_emergencystop = /* 1 */
    CAST_Int_to_D_EMERGENCYSTOP_TM_conversions((*Message_In).d_emergencystop);
  (*Message_Out).m_version = /* 1 */
    CAST_Int_to_M_VERSION_TM_conversions((*Message_In).m_version);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_Int_TrackTrainMessage_TM_conversions.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

