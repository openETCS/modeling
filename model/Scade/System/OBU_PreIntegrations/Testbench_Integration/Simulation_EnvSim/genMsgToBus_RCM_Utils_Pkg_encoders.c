/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genMsgToBus_RCM_Utils_Pkg_encoders.h"

void genMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  /* 1 */ Send_M154_reset_TM_radio_messages(&outC->Context_1);
  /* 2 */ Send_M159_reset_TM_radio_messages(&outC->Context_2);
  /* 1 */ Send_M156_reset_TM_radio_messages(&outC->_1_Context_1);
  /* 1 */ Send_M155_reset_TM_radio_messages(&outC->_2_Context_1);
}

/* RCM_Utils_Pkg::encoders::genMsgToBus */
void genMsgToBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgToTrackTriggers */msgToTrackTriggers_T_RCM_MsgTypes_Pkg *msgToTrackTriggers,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train */T_TRAIN t_train,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBus_in,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::nid_engine */NID_ENGINE nid_engine,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::onboardPhoneNumbers_b */P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::m_version */M_VERSION m_version,
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  static struct__156470 tmp;
  static struct__156470 tmp1;
  static struct__156470 tmp2;
  static struct__156470 tmp3;
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train_global_l */
  static T_internal_Type_Obu_BasicTypes_Pkg t_train_global_l;
  
  t_train_global_l = (kcg_int)
      ((kcg_real) (t_train_global + t_train) / (kcg_real) 2);
  if ((*msgToTrackTriggers).m155_initiationOfACommunicationSession) {
    tmp3.valid = kcg_true;
    tmp3.nid_message = co155_Initiation_of_a_communication_session_Id_Pkg;
    tmp3.l_message = 0;
    tmp3.t_train = t_train;
    tmp3.nid_engine = nid_engine;
    /* 1 */
    Send_M155_TM_radio_messages(
      t_train_global_l,
      msgBus_in,
      &tmp3,
      m_version,
      &outC->_2_Context_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_out,
      &outC->_2_Context_1.MessageBus_out);
  }
  else if ((*msgToTrackTriggers).m156_terminationOfACommunicationSession) {
    tmp2.valid = kcg_true;
    tmp2.nid_message = co156_Termination_of_a_communication_session_Id_Pkg;
    tmp2.l_message = 0;
    tmp2.t_train = t_train;
    tmp2.nid_engine = nid_engine;
    /* 1 */
    Send_M156_TM_radio_messages(
      t_train_global_l,
      msgBus_in,
      &tmp2,
      m_version,
      &outC->_1_Context_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_out,
      &outC->_1_Context_1.MessageBus_out);
  }
  else if ((*msgToTrackTriggers).m159_sessionEstablished) {
    tmp1.valid = kcg_true;
    tmp1.nid_message = co159_Session_established_Id_Pkg;
    tmp1.l_message = 0;
    tmp1.t_train = t_train;
    tmp1.nid_engine = nid_engine;
    /* 2 */
    Send_M159_TM_radio_messages(
      t_train_global_l,
      msgBus_in,
      &tmp1,
      onboardPhoneNumbers_b,
      m_version,
      &outC->Context_2);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_out,
      &outC->Context_2.MessageBus_out);
  }
  else if ((*msgToTrackTriggers).m154_noCompatibleVersionSupported) {
    tmp.valid = kcg_true;
    tmp.nid_message = co154_No_Compatible_Version_Support_Id_Pkg;
    tmp.l_message = 0;
    tmp.t_train = t_train;
    tmp.nid_engine = nid_engine;
    /* 1 */
    Send_M154_TM_radio_messages(
      t_train_global_l,
      msgBus_in,
      &tmp,
      m_version,
      &outC->Context_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_out,
      &outC->Context_1.MessageBus_out);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->msgBus_out,
      msgBus_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** genMsgToBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

