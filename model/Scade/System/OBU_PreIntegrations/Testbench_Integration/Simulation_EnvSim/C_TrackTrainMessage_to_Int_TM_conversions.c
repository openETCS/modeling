/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"

/* TM_conversions::C_TrackTrainMessage_to_Int */
void C_TrackTrainMessage_to_Int_TM_conversions(
  /* TM_conversions::C_TrackTrainMessage_to_Int::Message_In */Radio_TrackTrain_Header_T_TM_transitional *Message_In,
  /* TM_conversions::C_TrackTrainMessage_to_Int::Message_Out */Radio_TrackTrain_Header_T_TM *Message_Out)
{
  (*Message_Out).radioDevice = (*Message_In).radioDevice;
  (*Message_Out).receivedSystemTime = (*Message_In).receivedSystemTime;
  (*Message_Out).nid_message = /* 1 */
    CAST_NID_MESSAGE_to_int_TM_conversions((*Message_In).nid_message);
  (*Message_Out).t_train = /* 1 */
    CAST_T_TRAIN_to_int_TM_conversions((*Message_In).t_train);
  (*Message_Out).m_ack = /* 1 */
    CAST_M_ACK_to_int_TM_conversions((*Message_In).m_ack);
  (*Message_Out).nid_lrbg = /* 1 */
    CAST_NID_LRBG_to_int_TM_conversions((*Message_In).nid_lrbg);
  (*Message_Out).t_train_reference = /* 2 */
    CAST_T_TRAIN_to_int_TM_conversions((*Message_In).t_train_reference);
  (*Message_Out).nid_em = /* 1 */
    CAST_NID_EM_to_int_TM_conversions((*Message_In).nid_em);
  (*Message_Out).q_scale = /* 1 */
    CAST_Q_SCALE_to_int_TM_conversions((*Message_In).q_scale);
  (*Message_Out).d_sr = /* 1 */
    CAST_D_SR_to_int_TM_conversions((*Message_In).d_sr);
  (*Message_Out).t_sh_rqst = /* 3 */
    CAST_T_TRAIN_to_int_TM_conversions((*Message_In).t_sh_rqst);
  (*Message_Out).d_ref = /* 1 */
    CAST_D_REF_to_int_TM_conversions((*Message_In).d_ref);
  (*Message_Out).q_dir = /* 1 */
    CAST_Q_DIR_to_int_TM_conversions((*Message_In).q_dir);
  (*Message_Out).d_emergencystop = /* 1 */
    CAST_D_EMERGENCYSTOP_to_int_TM_conversions((*Message_In).d_emergencystop);
  (*Message_Out).m_version = /* 1 */
    CAST_M_VERSION_to_int_TM_conversions((*Message_In).m_version);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_TrackTrainMessage_to_Int_TM_conversions.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

